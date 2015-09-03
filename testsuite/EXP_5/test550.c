#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x38 = INT32_MIN;
int8_t x39 = INT8_MIN;
uint32_t t3 = 61692026U;
volatile int32_t x65 = INT32_MIN;
volatile uint32_t x66 = UINT32_MAX;
uint8_t x68 = 16U;
static int16_t x77 = -1;
int16_t x114 = INT16_MIN;
int8_t x115 = INT8_MAX;
int8_t x116 = INT8_MAX;
uint16_t x153 = 257U;
int32_t x170 = INT32_MAX;
volatile uint32_t t9 = 28U;
static int8_t x173 = INT8_MAX;
static int32_t x174 = INT32_MIN;
uint16_t x176 = 6U;
volatile int8_t x201 = -47;
static int16_t x202 = INT16_MIN;
volatile int16_t x204 = 5361;
static int16_t x205 = -1;
int8_t x293 = -1;
int64_t x294 = INT64_MIN;
uint32_t x296 = 73023301U;
static volatile int64_t x338 = INT64_MIN;
uint32_t x339 = 327U;
volatile int32_t t16 = 196129;
static int16_t x368 = INT16_MIN;
int16_t x441 = INT16_MIN;
uint16_t x486 = 3238U;
int16_t x527 = INT16_MAX;
uint8_t x539 = 2U;
int64_t x540 = -1LL;
volatile int64_t t22 = -1LL;
static int32_t x605 = INT32_MAX;
uint64_t x606 = 486455407LLU;
volatile uint16_t x607 = UINT16_MAX;
int32_t x611 = -1;
int16_t x636 = 3;
static volatile int64_t x651 = -1LL;
int64_t t29 = 203299819212527LL;
int8_t x719 = 54;
uint32_t t30 = 248993663U;
static int8_t x747 = 7;
volatile uint64_t t33 = 131171058900000233LLU;
volatile int32_t x762 = INT32_MAX;
static uint16_t x763 = 796U;
int64_t x780 = 58030189709LL;
volatile int8_t x815 = 14;
static int32_t x830 = INT32_MIN;
volatile uint16_t x841 = 18552U;
int64_t x846 = INT64_MAX;
static int32_t x847 = INT32_MIN;
uint16_t x875 = UINT16_MAX;
uint32_t x876 = 382397U;
uint64_t x886 = UINT64_MAX;
uint8_t x887 = UINT8_MAX;
uint64_t t46 = 488094199338150LLU;
int64_t x1019 = 4LL;
volatile int64_t t51 = 50LL;
static volatile uint8_t x1079 = 20U;
uint16_t x1080 = UINT16_MAX;
int32_t x1165 = INT32_MAX;
int8_t x1180 = -1;
int64_t x1225 = INT64_MAX;
volatile int64_t x1226 = -49928224920162LL;
static uint16_t x1227 = 2U;
static uint8_t x1235 = 1U;
volatile int16_t x1257 = 15;
static uint32_t x1280 = 282960U;
uint32_t t63 = 2U;
static int16_t x1325 = INT16_MIN;
static volatile int16_t x1326 = INT16_MIN;
static int64_t x1342 = 160084393323719LL;
uint32_t x1344 = 7801611U;
int32_t x1351 = 1;
int32_t t66 = 17535439;
static int16_t x1369 = INT16_MIN;
static int16_t x1371 = INT16_MIN;
int64_t t67 = 17809467LL;
int32_t x1384 = INT32_MAX;
int64_t x1394 = INT64_MIN;
uint8_t x1395 = 56U;
int16_t x1402 = -2591;
int16_t x1404 = 127;
static int32_t x1413 = INT32_MAX;
static int32_t x1414 = INT32_MIN;
int8_t x1527 = INT8_MIN;
volatile int32_t t74 = 688;
int16_t x1564 = -1;
int16_t x1596 = INT16_MIN;
uint16_t x1603 = 442U;
int8_t x1620 = 6;
static volatile uint32_t x1657 = 2368166U;
int64_t x1713 = INT64_MIN;
int32_t x1778 = INT32_MAX;
uint32_t x1785 = UINT32_MAX;
uint32_t x1787 = 100928U;
static int32_t x1826 = INT32_MIN;
uint16_t x1828 = 3U;
uint16_t x1866 = UINT16_MAX;
volatile uint32_t t88 = 15624998U;
uint8_t x1892 = 99U;
volatile int64_t t89 = 5LL;
static uint8_t x1905 = 0U;
static uint64_t x1906 = UINT64_MAX;
uint16_t x2004 = 28U;
volatile uint64_t t91 = 8539030889LLU;
int16_t x2032 = 1;
int64_t t93 = 92LL;
uint16_t x2037 = 24684U;
static int64_t x2077 = INT64_MAX;


void f0(void) {
	static int32_t x13 = INT32_MIN;
	int32_t x14 = INT32_MIN;
	uint8_t x15 = 4U;
	int32_t x16 = 302;
	volatile int32_t t0 = -3943;

	t0 = (x13/((x14/x15)/x16));

	if (t0 != 1208) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x25 = -1;
	int32_t x26 = INT32_MIN;
	int32_t x27 = 5898870;
	uint32_t x28 = 96U;
	static uint32_t t1 = 1U;

	t1 = (x25/((x26/x27)/x28));

	if (t1 != 96U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x37 = INT8_MAX;
	int16_t x40 = INT16_MIN;
	static int32_t t2 = 3781926;

	t2 = (x37/((x38/x39)/x40));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x45 = -1;
	uint32_t x46 = 270845U;
	int8_t x47 = 6;
	uint8_t x48 = UINT8_MAX;

	t3 = (x45/((x46/x47)/x48));

	if (t3 != 24265351U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x53 = 6588;
	uint64_t x54 = 102715LLU;
	uint8_t x55 = 1U;
	static uint16_t x56 = UINT16_MAX;
	uint64_t t4 = 69891850LLU;

	t4 = (x53/((x54/x55)/x56));

	if (t4 != 6588LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x67 = INT8_MAX;
	uint32_t t5 = 1U;

	t5 = (x65/((x66/x67)/x68));

	if (t5 != 1016U) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x78 = INT64_MIN;
	static int8_t x79 = 7;
	int16_t x80 = INT16_MAX;
	volatile int64_t t6 = -5LL;

	t6 = (x77/((x78/x79)/x80));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x113 = INT32_MIN;
	static volatile int32_t t7 = 252768550;

	t7 = (x113/((x114/x115)/x116));

	if (t7 != 1073741824) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x154 = -1;
	volatile uint64_t x155 = 494536846LLU;
	static int8_t x156 = INT8_MAX;
	uint64_t t8 = 1005LLU;

	t8 = (x153/((x154/x155)/x156));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x169 = INT32_MIN;
	static int16_t x171 = INT16_MIN;
	uint32_t x172 = 799U;

	t9 = (x169/((x170/x171)/x172));

	if (t9 != 399U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x175 = 8;
	volatile int32_t t10 = -17;

	t10 = (x173/((x174/x175)/x176));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x185 = INT32_MIN;
	static uint64_t x186 = UINT64_MAX;
	uint16_t x187 = UINT16_MAX;
	uint16_t x188 = 75U;
	volatile uint64_t t11 = 2LLU;

	t11 = (x185/((x186/x187)/x188));

	if (t11 != 4915124LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x203 = 4266517850LLU;
	volatile uint64_t t12 = 3957428719937LLU;

	t12 = (x201/((x202/x203)/x204));

	if (t12 != 22872817180715LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x206 = INT32_MIN;
	int16_t x207 = INT16_MAX;
	int16_t x208 = INT16_MIN;
	int32_t t13 = 3775887;

	t13 = (x205/((x206/x207)/x208));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x295 = 12918U;
	static int64_t t14 = 1LL;

	t14 = (x293/((x294/x295)/x296));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x337 = UINT16_MAX;
	static uint8_t x340 = UINT8_MAX;
	static volatile int64_t t15 = 2502899898824LL;

	t15 = (x337/((x338/x339)/x340));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x357 = UINT16_MAX;
	volatile int8_t x358 = INT8_MIN;
	volatile int32_t x359 = -1;
	volatile uint8_t x360 = 29U;

	t16 = (x357/((x358/x359)/x360));

	if (t16 != 16383) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x365 = -1;
	uint16_t x366 = UINT16_MAX;
	uint8_t x367 = 1U;
	static volatile int32_t t17 = -1075980;

	t17 = (x365/((x366/x367)/x368));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x401 = 68U;
	static int16_t x402 = INT16_MIN;
	int64_t x403 = -1LL;
	static int8_t x404 = 58;
	static int64_t t18 = -19246874202788LL;

	t18 = (x401/((x402/x403)/x404));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x442 = INT64_MIN;
	uint16_t x443 = 52U;
	int64_t x444 = -1LL;
	volatile int64_t t19 = 132523275862LL;

	t19 = (x441/((x442/x443)/x444));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x485 = -1;
	int32_t x487 = 444;
	volatile uint16_t x488 = 3U;
	int32_t t20 = 3042;

	t20 = (x485/((x486/x487)/x488));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x525 = 16U;
	volatile uint64_t x526 = UINT64_MAX;
	volatile uint8_t x528 = 1U;
	volatile uint64_t t21 = 172410001074LLU;

	t21 = (x525/((x526/x527)/x528));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x537 = -1120930902783LL;
	int16_t x538 = 31;

	t22 = (x537/((x538/x539)/x540));

	if (t22 != 74728726852LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x573 = UINT32_MAX;
	static int64_t x574 = INT64_MIN;
	static volatile uint32_t x575 = 4627U;
	uint16_t x576 = 58U;
	volatile int64_t t23 = -7518334515481166LL;

	t23 = (x573/((x574/x575)/x576));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x577 = 6U;
	static int64_t x578 = -1LL;
	uint64_t x579 = 24996LLU;
	uint8_t x580 = 11U;
	static uint64_t t24 = 871846644669235979LLU;

	t24 = (x577/((x578/x579)/x580));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x608 = 6U;
	uint64_t t25 = 67236041566LLU;

	t25 = (x605/((x606/x607)/x608));

	if (t25 != 1736041LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x609 = 2U;
	int64_t x610 = 418LL;
	static volatile uint64_t x612 = 55LLU;
	uint64_t t26 = 1057031054570542LLU;

	t26 = (x609/((x610/x611)/x612));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x633 = 5883473190LL;
	int16_t x634 = INT16_MIN;
	static uint16_t x635 = 121U;
	volatile int64_t t27 = 128246282411121LL;

	t27 = (x633/((x634/x635)/x636));

	if (t27 != -65371924LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x645 = -108108963;
	volatile int16_t x646 = INT16_MAX;
	uint8_t x647 = 44U;
	int8_t x648 = -53;
	volatile int32_t t28 = 4302;

	t28 = (x645/((x646/x647)/x648));

	if (t28 != 7722068) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x649 = INT64_MIN;
	volatile uint16_t x650 = 91U;
	static uint32_t x652 = 3U;

	t29 = (x649/((x650/x651)/x652));

	if (t29 != 307445734561825860LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x717 = UINT32_MAX;
	int32_t x718 = INT32_MIN;
	int8_t x720 = INT8_MIN;

	t30 = (x717/((x718/x719)/x720));

	if (t30 != 13824U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x721 = 1756412LLU;
	volatile int32_t x722 = INT32_MIN;
	volatile uint16_t x723 = UINT16_MAX;
	int32_t x724 = 25;
	uint64_t t31 = 3516663069LLU;

	t31 = (x721/((x722/x723)/x724));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x741 = -1LL;
	int16_t x742 = 419;
	static int16_t x743 = -35;
	volatile uint8_t x744 = 1U;
	static int64_t t32 = -8528568227107121LL;

	t32 = (x741/((x742/x743)/x744));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x745 = 0U;
	int32_t x746 = INT32_MIN;
	volatile uint64_t x748 = 8421475009403LLU;

	t33 = (x745/((x746/x747)/x748));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x761 = UINT32_MAX;
	volatile int16_t x764 = INT16_MIN;
	uint32_t t34 = 1297U;

	t34 = (x761/((x762/x763)/x764));

	if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x765 = INT32_MIN;
	uint16_t x766 = UINT16_MAX;
	int8_t x767 = INT8_MAX;
	uint8_t x768 = 1U;
	volatile int32_t t35 = 13;

	t35 = (x765/((x766/x767)/x768));

	if (t35 != -4161790) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint16_t x773 = UINT16_MAX;
	int16_t x774 = INT16_MIN;
	int8_t x775 = INT8_MAX;
	int8_t x776 = 45;
	volatile int32_t t36 = -71713;

	t36 = (x773/((x774/x775)/x776));

	if (t36 != -13107) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x777 = -1LL;
	int64_t x778 = INT64_MIN;
	volatile uint16_t x779 = UINT16_MAX;
	volatile int64_t t37 = -5352LL;

	t37 = (x777/((x778/x779)/x780));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x813 = INT8_MAX;
	int16_t x814 = INT16_MIN;
	int64_t x816 = -1LL;
	int64_t t38 = -1192056305948047LL;

	t38 = (x813/((x814/x815)/x816));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x829 = -1;
	int16_t x831 = 30;
	int16_t x832 = INT16_MIN;
	volatile int32_t t39 = 660721;

	t39 = (x829/((x830/x831)/x832));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x842 = INT8_MAX;
	static int64_t x843 = -1LL;
	int8_t x844 = 1;
	int64_t t40 = 340495359LL;

	t40 = (x841/((x842/x843)/x844));

	if (t40 != -146LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x845 = 11961U;
	uint8_t x848 = 55U;
	int64_t t41 = -1LL;

	t41 = (x845/((x846/x847)/x848));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x849 = 880029LLU;
	static int32_t x850 = -1;
	int16_t x851 = -1;
	volatile int32_t x852 = -1;
	volatile uint64_t t42 = 2LLU;

	t42 = (x849/((x850/x851)/x852));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x873 = INT16_MIN;
	int64_t x874 = INT64_MAX;
	static volatile int64_t t43 = 4570367466451906LL;

	t43 = (x873/((x874/x875)/x876));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x885 = -15;
	volatile uint32_t x888 = 1128376U;
	uint64_t t44 = 0LLU;

	t44 = (x885/((x886/x887)/x888));

	if (t44 != 287735880LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x889 = 35U;
	static volatile int8_t x890 = INT8_MIN;
	static volatile int8_t x891 = -1;
	int8_t x892 = INT8_MIN;
	volatile int32_t t45 = -100;

	t45 = (x889/((x890/x891)/x892));

	if (t45 != -35) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x913 = INT16_MAX;
	int8_t x914 = -10;
	uint64_t x915 = 235606582328061801LLU;
	static int16_t x916 = 1;

	t46 = (x913/((x914/x915)/x916));

	if (t46 != 420LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x937 = 3;
	static int64_t x938 = 939829394547LL;
	uint16_t x939 = 115U;
	int16_t x940 = INT16_MIN;
	static int64_t t47 = -1265696LL;

	t47 = (x937/((x938/x939)/x940));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x985 = INT16_MIN;
	int32_t x986 = -269769571;
	int16_t x987 = -3;
	int8_t x988 = 1;
	int32_t t48 = 80215381;

	t48 = (x985/((x986/x987)/x988));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x989 = 0;
	int64_t x990 = -18204795950LL;
	static int64_t x991 = -2456LL;
	volatile int16_t x992 = -5353;
	volatile int64_t t49 = 502612LL;

	t49 = (x989/((x990/x991)/x992));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1017 = -1LL;
	volatile int16_t x1018 = 87;
	int8_t x1020 = -10;
	static volatile int64_t t50 = 39841LL;

	t50 = (x1017/((x1018/x1019)/x1020));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x1065 = INT64_MIN;
	int16_t x1066 = INT16_MIN;
	uint8_t x1067 = UINT8_MAX;
	int16_t x1068 = -1;

	t51 = (x1065/((x1066/x1067)/x1068));

	if (t51 != -72057594037927936LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x1077 = UINT64_MAX;
	static int64_t x1078 = 451613821596LL;
	volatile uint64_t t52 = 250278LLU;

	t52 = (x1077/((x1078/x1079)/x1080));

	if (t52 != 53537257984001LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x1097 = INT8_MAX;
	int32_t x1098 = INT32_MAX;
	int64_t x1099 = -6081LL;
	volatile int16_t x1100 = -1;
	static volatile int64_t t53 = -17355321934791882LL;

	t53 = (x1097/((x1098/x1099)/x1100));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x1157 = 2288099471823787LLU;
	int32_t x1158 = -83443536;
	int16_t x1159 = INT16_MIN;
	static uint8_t x1160 = 1U;
	uint64_t t54 = 7796504601953771000LLU;

	t54 = (x1157/((x1158/x1159)/x1160));

	if (t54 != 898703641721LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1166 = INT8_MIN;
	uint16_t x1167 = 117U;
	int8_t x1168 = -1;
	int32_t t55 = INT32_MAX;

	t55 = (x1165/((x1166/x1167)/x1168));

	if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x1177 = UINT8_MAX;
	int8_t x1178 = INT8_MAX;
	int16_t x1179 = 81;
	static int32_t t56 = 679;

	t56 = (x1177/((x1178/x1179)/x1180));

	if (t56 != -255) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x1197 = INT32_MIN;
	int32_t x1198 = -4119660;
	static uint8_t x1199 = 1U;
	static volatile int64_t x1200 = -1LL;
	volatile int64_t t57 = -1877836LL;

	t57 = (x1197/((x1198/x1199)/x1200));

	if (t57 != -521LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x1228 = INT32_MIN;
	int64_t t58 = -127119LL;

	t58 = (x1225/((x1226/x1227)/x1228));

	if (t58 != 793476603308222LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x1233 = INT64_MIN;
	int32_t x1234 = -29391610;
	static uint16_t x1236 = 1969U;
	int64_t t59 = 8385527552443LL;

	t59 = (x1233/((x1234/x1235)/x1236));

	if (t59 != 617898575524537LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x1258 = -656;
	volatile uint32_t x1259 = 5920U;
	uint8_t x1260 = 2U;
	static uint32_t t60 = 13U;

	t60 = (x1257/((x1258/x1259)/x1260));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x1265 = -1LL;
	int32_t x1266 = INT32_MAX;
	uint8_t x1267 = 10U;
	int8_t x1268 = -1;
	static volatile int64_t t61 = 3LL;

	t61 = (x1265/((x1266/x1267)/x1268));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x1277 = -437456;
	int64_t x1278 = INT64_MIN;
	static volatile int16_t x1279 = INT16_MAX;
	int64_t t62 = -903019903LL;

	t62 = (x1277/((x1278/x1279)/x1280));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x1285 = -7;
	volatile int16_t x1286 = INT16_MIN;
	static uint8_t x1287 = UINT8_MAX;
	uint32_t x1288 = 1365U;

	t63 = (x1285/((x1286/x1287)/x1288));

	if (t63 != 1365U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x1327 = 9678251U;
	uint8_t x1328 = 30U;
	static uint32_t t64 = 19U;

	t64 = (x1325/((x1326/x1327)/x1328));

	if (t64 != 306781037U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x1341 = INT16_MIN;
	int16_t x1343 = -1;
	static int64_t t65 = 31796LL;

	t65 = (x1341/((x1342/x1343)/x1344));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x1349 = 14;
	static volatile int32_t x1350 = INT32_MIN;
	int32_t x1352 = INT32_MIN;

	t66 = (x1349/((x1350/x1351)/x1352));

	if (t66 != 14) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x1370 = INT64_MIN;
	int32_t x1372 = -1;

	t67 = (x1369/((x1370/x1371)/x1372));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x1381 = 6;
	int64_t x1382 = INT64_MAX;
	uint8_t x1383 = 7U;
	int64_t t68 = 26060LL;

	t68 = (x1381/((x1382/x1383)/x1384));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x1393 = 5704353U;
	uint8_t x1396 = 16U;
	volatile int64_t t69 = 253508244LL;

	t69 = (x1393/((x1394/x1395)/x1396));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x1401 = -1;
	int16_t x1403 = -1;
	int32_t t70 = 5;

	t70 = (x1401/((x1402/x1403)/x1404));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x1415 = 7;
	int8_t x1416 = INT8_MIN;
	volatile int32_t t71 = -5598;

	t71 = (x1413/((x1414/x1415)/x1416));

	if (t71 != 896) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x1469 = 1U;
	uint16_t x1470 = 16984U;
	uint16_t x1471 = 159U;
	volatile int8_t x1472 = 1;
	int32_t t72 = 385;

	t72 = (x1469/((x1470/x1471)/x1472));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x1513 = 6088U;
	int32_t x1514 = 71107;
	static volatile int16_t x1515 = -1;
	int16_t x1516 = 1;
	volatile uint32_t t73 = 11116784U;

	t73 = (x1513/((x1514/x1515)/x1516));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x1525 = INT32_MIN;
	int32_t x1526 = INT32_MAX;
	static int16_t x1528 = INT16_MIN;

	t74 = (x1525/((x1526/x1527)/x1528));

	if (t74 != -4202512) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x1561 = 56580651958LL;
	volatile int16_t x1562 = INT16_MAX;
	int8_t x1563 = -2;
	int64_t t75 = -44441887466440824LL;

	t75 = (x1561/((x1562/x1563)/x1564));

	if (t75 != 3453619LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x1593 = INT16_MIN;
	static int64_t x1594 = 3561481048045559LL;
	int32_t x1595 = -930143;
	static volatile int64_t t76 = 17591094186LL;

	t76 = (x1593/((x1594/x1595)/x1596));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x1601 = 49U;
	volatile int32_t x1602 = INT32_MIN;
	int64_t x1604 = -1321850LL;
	volatile int64_t t77 = -30252LL;

	t77 = (x1601/((x1602/x1603)/x1604));

	if (t77 != 16LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x1617 = -237423492392LL;
	volatile int64_t x1618 = 172LL;
	uint8_t x1619 = 24U;
	int64_t t78 = -7261706145LL;

	t78 = (x1617/((x1618/x1619)/x1620));

	if (t78 != -237423492392LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x1629 = 213U;
	int32_t x1630 = 9223908;
	int16_t x1631 = -1;
	volatile int8_t x1632 = 1;
	volatile int32_t t79 = 258293;

	t79 = (x1629/((x1630/x1631)/x1632));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x1658 = INT32_MIN;
	uint16_t x1659 = 998U;
	int16_t x1660 = INT16_MIN;
	volatile uint32_t t80 = 2489U;

	t80 = (x1657/((x1658/x1659)/x1660));

	if (t80 != 36433U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x1714 = INT8_MIN;
	int8_t x1715 = 2;
	static volatile int8_t x1716 = -1;
	int64_t t81 = -640217916430LL;

	t81 = (x1713/((x1714/x1715)/x1716));

	if (t81 != -144115188075855872LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x1757 = INT16_MIN;
	volatile int64_t x1758 = -114321518390057LL;
	int64_t x1759 = -1LL;
	static int32_t x1760 = INT32_MAX;
	int64_t t82 = 2732733116LL;

	t82 = (x1757/((x1758/x1759)/x1760));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x1777 = -4;
	static volatile uint32_t x1779 = 15561370U;
	static volatile int8_t x1780 = INT8_MAX;
	uint32_t t83 = 1672714405U;

	t83 = (x1777/((x1778/x1779)/x1780));

	if (t83 != 4294967292U) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x1786 = INT64_MAX;
	static volatile int16_t x1788 = 3796;
	int64_t t84 = -460LL;

	t84 = (x1785/((x1786/x1787)/x1788));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x1793 = 4744436U;
	int64_t x1794 = INT64_MIN;
	int32_t x1795 = INT32_MIN;
	static uint64_t x1796 = 768794822LLU;
	uint64_t t85 = 1678LLU;

	t85 = (x1793/((x1794/x1795)/x1796));

	if (t85 != 948887LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x1825 = UINT32_MAX;
	uint64_t x1827 = 180045987959LLU;
	static volatile uint64_t t86 = 65LLU;

	t86 = (x1825/((x1826/x1827)/x1828));

	if (t86 != 125LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x1849 = UINT16_MAX;
	static int16_t x1850 = INT16_MIN;
	volatile int16_t x1851 = 793;
	static uint32_t x1852 = 101766U;
	volatile uint32_t t87 = 834123U;

	t87 = (x1849/((x1850/x1851)/x1852));

	if (t87 != 1U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x1865 = UINT16_MAX;
	static int32_t x1867 = -1;
	static uint32_t x1868 = 510U;

	t88 = (x1865/((x1866/x1867)/x1868));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x1889 = INT16_MIN;
	int64_t x1890 = INT64_MIN;
	static volatile uint16_t x1891 = 2285U;

	t89 = (x1889/((x1890/x1891)/x1892));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x1907 = UINT8_MAX;
	uint8_t x1908 = UINT8_MAX;
	volatile uint64_t t90 = 299108654184780880LLU;

	t90 = (x1905/((x1906/x1907)/x1908));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x2001 = INT8_MIN;
	volatile uint64_t x2002 = UINT64_MAX;
	uint32_t x2003 = 56310U;

	t91 = (x2001/((x2002/x2003)/x2004));

	if (t91 != 1576680LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x2021 = 4U;
	int32_t x2022 = -1;
	static uint8_t x2023 = 1U;
	uint64_t x2024 = UINT64_MAX;
	volatile uint64_t t92 = 18944031772131579LLU;

	t92 = (x2021/((x2022/x2023)/x2024));

	if (t92 != 4LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint16_t x2029 = UINT16_MAX;
	volatile int64_t x2030 = 217490184497321LL;
	uint16_t x2031 = 1U;

	t93 = (x2029/((x2030/x2031)/x2032));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x2033 = 35;
	uint16_t x2034 = 713U;
	volatile int8_t x2035 = INT8_MAX;
	uint8_t x2036 = 1U;
	volatile int32_t t94 = 1;

	t94 = (x2033/((x2034/x2035)/x2036));

	if (t94 != 7) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x2038 = INT32_MIN;
	int32_t x2039 = INT32_MIN;
	static volatile int8_t x2040 = -1;
	int32_t t95 = 5742;

	t95 = (x2037/((x2038/x2039)/x2040));

	if (t95 != -24684) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x2053 = 5095410LLU;
	static int64_t x2054 = 64220433722LL;
	volatile int16_t x2055 = -119;
	volatile int16_t x2056 = -17;
	uint64_t t96 = 21960357LLU;

	t96 = (x2053/((x2054/x2055)/x2056));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x2078 = INT16_MIN;
	int16_t x2079 = INT16_MIN;
	int32_t x2080 = -1;
	volatile int64_t t97 = -27587781481LL;

	t97 = (x2077/((x2078/x2079)/x2080));

	if (t97 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x2085 = 2U;
	int32_t x2086 = INT32_MIN;
	int16_t x2087 = 2185;
	volatile uint32_t x2088 = 39U;
	static uint32_t t98 = 1U;

	t98 = (x2085/((x2086/x2087)/x2088));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x2129 = UINT8_MAX;
	static int8_t x2130 = -6;
	uint64_t x2131 = 309075LLU;
	int32_t x2132 = INT32_MAX;
	uint64_t t99 = 48656124993120773LLU;

	t99 = (x2129/((x2130/x2131)/x2132));

	if (t99 != 0LLU) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

