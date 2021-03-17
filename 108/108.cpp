// 规范
// 迭代器   算法和数据的纽带
// 输入、输出、前向、双向、随机
// 输入： 只读、单向
// 输出： 只写、单向
// 前向： 读写、单向 ++
// 双向： 读写、双向 ++ --
// 随机： 读写、双向、全运算支持  
// 		< <= > >=  两个迭代器在容器中的位置关系
//		+ += - -=  位置随机的移动
// 		- 两个在同一容器的迭代器， 两个容器间的位置差值
// 参数模式
// alg(beg, end, other args) 
// alg(beg, end, dest, other args) // 对目标，任意数量写入安全
// alg(beg, end, beg2, other args)
// alg(beg, end, beg2, end2, other args)
// 命名
// sort(beg, end)
// sort(beg, end, comp)
// _if
// find_if(beg, end, pred)
// reverse(beg, end)
// reverse_copy(beg, end, dest)
// remove_if(v1.begin(), v1.end(), [] (int i) {return i % 2;})
// remove_copy_if(v1.begin(), v1.end(), back_inserter(v2), [] (int i) {return i % 2;})