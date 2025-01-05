select w2.id from Weather w1 join Weather w2
on dateDiff (w1.recordDate , w2.recordDate) = -1
and w2.temperature > w1.temperature;