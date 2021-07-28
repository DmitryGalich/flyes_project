#ifndef FLIES_MODEL
#define FLIES_MODEL

#include <memory>

#include <QAbstractListModel>
#include <QObject>

#include "abstract_qml_handler.h"
#include "fly.h"

class FliesModel : public QAbstractListModel, public AbstractQMLHandler {
  Q_OBJECT

 public:
  enum AnimalRoles { StupidityRole = Qt::UserRole + 1, NameRole };

  FliesModel(const std::string& qml_title,
             QList<Fly>& flies,
             QObject* parent = nullptr);
  virtual ~FliesModel() override;

  void AddFly(const Fly& fly);

  int rowCount(const QModelIndex& parent = QModelIndex()) const override;
  QVariant data(const QModelIndex& index,
                int role = Qt::DisplayRole) const override;

 protected:
  Q_INVOKABLE void setFlyStupidity(const int index, const int stupidity);
  Q_INVOKABLE void setFlyName(const int index, const QString& name);

  QHash<int, QByteArray> roleNames() const override;

  QList<Fly>& flies_;
};

#endif
