#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = INT8_MIN;
static int16_t x6 = -76;
int64_t x7 = INT64_MAX;
volatile uint64_t t3 = 950LLU;
int32_t x55 = INT32_MIN;
int8_t x57 = INT8_MIN;
int16_t x60 = -1;
uint8_t x61 = UINT8_MAX;
static int64_t x101 = INT64_MIN;
volatile uint32_t x112 = 7032150U;
uint32_t x125 = UINT32_MAX;
uint32_t x127 = 9828136U;
volatile int16_t x128 = INT16_MAX;
int8_t x142 = INT8_MIN;
uint8_t x145 = UINT8_MAX;
int16_t x146 = INT16_MIN;
int16_t x147 = INT16_MIN;
static volatile int32_t t18 = 3251545;
static uint64_t t19 = 574266637623824715LLU;
static volatile int8_t x173 = -1;
uint32_t t21 = 8531U;
static int16_t x192 = 1425;
volatile uint32_t t23 = 56135U;
int32_t x203 = INT32_MIN;
int64_t x215 = INT64_MIN;
static uint8_t x229 = 50U;
uint8_t x231 = 7U;
int16_t x232 = -1;
int32_t t28 = 15;
volatile int64_t t30 = -22603097639LL;
volatile int64_t t32 = 61LL;
int32_t x309 = -426;
int8_t x342 = 12;
volatile int8_t x343 = INT8_MIN;
int32_t t37 = 20291444;
int8_t x371 = INT8_MIN;
int8_t x372 = 10;
uint8_t x381 = 1U;
uint16_t x405 = 18142U;
uint64_t x407 = UINT64_MAX;
static uint64_t t40 = 107814380641480LLU;
static volatile int32_t t41 = 1;
uint32_t x427 = UINT32_MAX;
int32_t x461 = INT32_MIN;
int64_t x471 = 3938888322LL;
volatile uint64_t t46 = 1143179294398355712LLU;
int64_t x481 = 45LL;
static int32_t x513 = -240142;
int8_t x534 = INT8_MIN;
uint8_t x536 = 1U;
volatile int64_t t50 = 454269923125549LL;
int32_t x582 = INT32_MAX;
int32_t x583 = -537086;
uint32_t x632 = UINT32_MAX;
uint16_t x637 = 809U;
static int64_t t56 = -34LL;
static volatile int16_t x647 = INT16_MIN;
int32_t t57 = 24605;
volatile uint32_t x649 = UINT32_MAX;
static int64_t t58 = 8721978389962LL;
static int8_t x684 = -1;
uint64_t x702 = 15314274811504360LLU;
uint32_t x703 = UINT32_MAX;
int32_t x704 = 6123;
int32_t x722 = 8666611;
volatile uint64_t t66 = 1956261234235LLU;
uint8_t x782 = 53U;
static int64_t x784 = -1LL;
static int64_t t67 = -3112676445LL;
uint32_t x805 = 93090485U;
int16_t x833 = INT16_MIN;
int32_t t72 = -25180;
int64_t x850 = INT64_MIN;
int8_t x852 = INT8_MAX;
uint32_t x865 = UINT32_MAX;
static volatile int32_t x866 = -2;
int8_t x868 = -2;
uint16_t x871 = 1013U;
uint32_t x872 = 2U;
uint64_t x900 = 125776204276LLU;
volatile int32_t t78 = -486;
int8_t x962 = INT8_MIN;
uint64_t t81 = 16437897LLU;
volatile int8_t x977 = 2;
int8_t x996 = 1;
uint64_t x1007 = UINT64_MAX;
static uint64_t x1008 = UINT64_MAX;
int64_t x1022 = -17794427024LL;
uint64_t t87 = 646LLU;
volatile uint64_t x1065 = 234163074465LLU;
int32_t x1066 = INT32_MIN;
static uint16_t x1069 = 30U;
volatile int64_t x1070 = -35780105673410LL;
uint32_t x1139 = UINT32_MAX;
int64_t x1142 = INT64_MIN;
static int8_t x1181 = 43;
int16_t x1186 = INT16_MIN;
uint64_t t97 = 730LLU;
uint8_t x1201 = 48U;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int64_t x2 = -3014513478484LL;
	static int32_t x4 = -1;
	volatile int64_t t0 = 104624346453237LL;

	t0 = (x1%(x2/(x3/x4)));

	if (t0 != -128LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	uint64_t x8 = 3052512LLU;
	volatile uint64_t t1 = 64131273152498LLU;

	t1 = (x5%(x6/(x7/x8)));

	if (t1 != 142592LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x13 = -9;
	static int32_t x14 = INT32_MIN;
	int8_t x15 = INT8_MIN;
	static int8_t x16 = INT8_MIN;
	int32_t t2 = 28;

	t2 = (x13%(x14/(x15/x16)));

	if (t2 != -9) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x17 = 1;
	int8_t x18 = INT8_MIN;
	volatile int32_t x19 = INT32_MIN;
	static uint64_t x20 = 1100478415455170948LLU;

	t3 = (x17%(x18/(x19/x20)));

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x45 = 15165;
	int16_t x46 = INT16_MIN;
	int16_t x47 = INT16_MIN;
	uint8_t x48 = 7U;
	volatile int32_t t4 = -120832934;

	t4 = (x45%(x46/(x47/x48)));

	if (t4 != 3) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x53 = 542LL;
	volatile int16_t x54 = 745;
	int32_t x56 = INT32_MIN;
	volatile int64_t t5 = -306LL;

	t5 = (x53%(x54/(x55/x56)));

	if (t5 != 542LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x58 = INT8_MIN;
	static int8_t x59 = INT8_MAX;
	volatile int32_t t6 = -51928;

	t6 = (x57%(x58/(x59/x60)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x62 = INT64_MIN;
	int16_t x63 = INT16_MIN;
	int32_t x64 = -820;
	static volatile int64_t t7 = -1181LL;

	t7 = (x61%(x62/(x63/x64)));

	if (t7 != 255LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x73 = 7U;
	int64_t x74 = INT64_MAX;
	volatile int64_t x75 = INT64_MIN;
	uint8_t x76 = 120U;
	int64_t t8 = -1LL;

	t8 = (x73%(x74/(x75/x76)));

	if (t8 != 7LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x102 = 43U;
	uint64_t x103 = UINT64_MAX;
	int8_t x104 = -2;
	volatile uint64_t t9 = 11491869002LLU;

	t9 = (x101%(x102/(x103/x104)));

	if (t9 != 42LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x105 = 39U;
	int64_t x106 = INT64_MIN;
	int64_t x107 = INT64_MAX;
	static uint16_t x108 = UINT16_MAX;
	int64_t t10 = -368819LL;

	t10 = (x105%(x106/(x107/x108)));

	if (t10 != 39LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x109 = UINT8_MAX;
	int16_t x110 = INT16_MIN;
	int32_t x111 = INT32_MAX;
	volatile uint32_t t11 = 1U;

	t11 = (x109%(x110/(x111/x112)));

	if (t11 != 255U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x117 = INT32_MIN;
	uint8_t x118 = 2U;
	volatile int32_t x119 = -1;
	uint32_t x120 = UINT32_MAX;
	uint32_t t12 = 1939587U;

	t12 = (x117%(x118/(x119/x120)));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x126 = -1;
	static volatile uint32_t t13 = 36U;

	t13 = (x125%(x126/(x127/x128)));

	if (t13 != 34U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x133 = INT8_MIN;
	int64_t x134 = INT64_MIN;
	volatile uint64_t x135 = UINT64_MAX;
	int32_t x136 = INT32_MIN;
	uint64_t t14 = 82636LLU;

	t14 = (x133%(x134/(x135/x136)));

	if (t14 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x137 = 0;
	int64_t x138 = -18LL;
	uint8_t x139 = UINT8_MAX;
	static volatile int8_t x140 = 18;
	volatile int64_t t15 = 1833901261035LL;

	t15 = (x137%(x138/(x139/x140)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x141 = 45911LLU;
	static int16_t x143 = INT16_MIN;
	static int16_t x144 = 817;
	volatile uint64_t t16 = 74425265LLU;

	t16 = (x141%(x142/(x143/x144)));

	if (t16 != 2LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x148 = -2;
	int32_t t17 = 1476;

	t17 = (x145%(x146/(x147/x148)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x165 = -1;
	int32_t x166 = -1057474408;
	volatile int16_t x167 = INT16_MIN;
	int16_t x168 = -642;

	t18 = (x165%(x166/(x167/x168)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x169 = INT32_MAX;
	static int64_t x170 = -1LL;
	int32_t x171 = -38;
	uint64_t x172 = 49LLU;

	t19 = (x169%(x170/(x171/x172)));

	if (t19 != 43LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x174 = INT32_MIN;
	static uint64_t x175 = UINT64_MAX;
	int16_t x176 = 240;
	volatile uint64_t t20 = 17401276LLU;

	t20 = (x173%(x174/(x175/x176)));

	if (t20 != 149LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x181 = 226U;
	volatile int16_t x182 = -1;
	uint32_t x183 = UINT32_MAX;
	volatile int32_t x184 = INT32_MIN;

	t21 = (x181%(x182/(x183/x184)));

	if (t21 != 226U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x185 = INT16_MIN;
	int8_t x186 = -1;
	uint32_t x187 = UINT32_MAX;
	static uint8_t x188 = 59U;
	uint32_t t22 = 538774756U;

	t22 = (x185%(x186/(x187/x188)));

	if (t22 != 28U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x189 = INT16_MIN;
	int16_t x190 = -1;
	volatile uint32_t x191 = UINT32_MAX;

	t23 = (x189%(x190/(x191/x192)));

	if (t23 != 203U) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x193 = 196U;
	int32_t x194 = INT32_MIN;
	uint8_t x195 = UINT8_MAX;
	int8_t x196 = -1;
	volatile int32_t t24 = 905;

	t24 = (x193%(x194/(x195/x196)));

	if (t24 != 196) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x201 = UINT16_MAX;
	int64_t x202 = INT64_MIN;
	uint16_t x204 = 61U;
	volatile int64_t t25 = -120903561595305605LL;

	t25 = (x201%(x202/(x203/x204)));

	if (t25 != 65535LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x209 = -1;
	uint32_t x210 = UINT32_MAX;
	int16_t x211 = INT16_MAX;
	volatile int8_t x212 = 32;
	volatile uint32_t t26 = 14U;

	t26 = (x209%(x210/(x211/x212)));

	if (t26 != 3U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x213 = 157LLU;
	volatile int16_t x214 = -10955;
	int64_t x216 = -2216547270811637LL;
	uint64_t t27 = 2823LLU;

	t27 = (x213%(x214/(x215/x216)));

	if (t27 != 157LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x230 = INT32_MIN;

	t28 = (x229%(x230/(x231/x232)));

	if (t28 != 50) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x245 = 6037;
	uint64_t x246 = UINT64_MAX;
	int32_t x247 = INT32_MIN;
	int32_t x248 = INT32_MIN;
	uint64_t t29 = 2674485121LLU;

	t29 = (x245%(x246/(x247/x248)));

	if (t29 != 6037LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x253 = 34;
	int16_t x254 = INT16_MIN;
	volatile int64_t x255 = -461488LL;
	uint8_t x256 = 33U;

	t30 = (x253%(x254/(x255/x256)));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x257 = -9;
	volatile int64_t x258 = 479620869LL;
	int8_t x259 = INT8_MIN;
	uint32_t x260 = 238809915U;
	int64_t t31 = 5589840120637LL;

	t31 = (x257%(x258/(x259/x260)));

	if (t31 != -9LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x277 = INT32_MAX;
	static volatile int64_t x278 = -165755423789550066LL;
	static uint16_t x279 = 31187U;
	volatile int32_t x280 = -217;

	t32 = (x277%(x278/(x279/x280)));

	if (t32 != 2147483647LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x285 = UINT32_MAX;
	uint32_t x286 = 149831123U;
	static volatile int16_t x287 = INT16_MIN;
	volatile int16_t x288 = -1;
	volatile uint32_t t33 = 30U;

	t33 = (x285%(x286/(x287/x288)));

	if (t33 != 3063U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x301 = -1;
	uint64_t x302 = 52247824802LLU;
	int16_t x303 = INT16_MAX;
	static uint16_t x304 = 1951U;
	static volatile uint64_t t34 = 48818398LLU;

	t34 = (x301%(x302/(x303/x304)));

	if (t34 != 2704572315LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x310 = INT64_MAX;
	int16_t x311 = INT16_MIN;
	volatile uint16_t x312 = 526U;
	int64_t t35 = 781219859287391LL;

	t35 = (x309%(x310/(x311/x312)));

	if (t35 != -426LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x333 = INT8_MAX;
	static int64_t x334 = INT64_MIN;
	int64_t x335 = INT64_MAX;
	int8_t x336 = -1;
	int64_t t36 = -80664700882130657LL;

	t36 = (x333%(x334/(x335/x336)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x341 = INT16_MIN;
	int16_t x344 = -11;

	t37 = (x341%(x342/(x343/x344)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x369 = UINT16_MAX;
	volatile int32_t x370 = INT32_MAX;
	volatile int32_t t38 = -23;

	t38 = (x369%(x370/(x371/x372)));

	if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x382 = -1935;
	uint64_t x383 = UINT64_MAX;
	volatile uint64_t x384 = UINT64_MAX;
	static uint64_t t39 = 1689579947968771589LLU;

	t39 = (x381%(x382/(x383/x384)));

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x406 = -1;
	int16_t x408 = INT16_MIN;

	t40 = (x405%(x406/(x407/x408)));

	if (t40 != 18142LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x417 = -1;
	volatile int16_t x418 = -3780;
	uint16_t x419 = UINT16_MAX;
	int8_t x420 = INT8_MAX;

	t41 = (x417%(x418/(x419/x420)));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x425 = INT8_MAX;
	int8_t x426 = -1;
	uint32_t x428 = UINT32_MAX;
	volatile uint32_t t42 = 733739U;

	t42 = (x425%(x426/(x427/x428)));

	if (t42 != 127U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x445 = INT64_MAX;
	uint16_t x446 = UINT16_MAX;
	int8_t x447 = INT8_MIN;
	int64_t x448 = -1LL;
	volatile int64_t t43 = -589976653760274848LL;

	t43 = (x445%(x446/(x447/x448)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x462 = 233573746LLU;
	volatile int16_t x463 = INT16_MAX;
	uint16_t x464 = 471U;
	volatile uint64_t t44 = 150926LLU;

	t44 = (x461%(x462/(x463/x464)));

	if (t44 != 1917414LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x469 = 23873688690279LL;
	static uint32_t x470 = UINT32_MAX;
	int16_t x472 = INT16_MAX;
	static volatile int64_t t45 = 436LL;

	t45 = (x469%(x470/(x471/x472)));

	if (t45 != 31298LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x477 = INT8_MIN;
	static volatile int64_t x478 = -12787270357592796LL;
	volatile int8_t x479 = INT8_MIN;
	uint64_t x480 = 2311398364712821570LLU;

	t46 = (x477%(x478/(x479/x480)));

	if (t46 != 12787270357592668LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x482 = INT8_MAX;
	static volatile int16_t x483 = -7065;
	int8_t x484 = INT8_MIN;
	volatile int64_t t47 = 3833088658159LL;

	t47 = (x481%(x482/(x483/x484)));

	if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x514 = INT64_MIN;
	static int16_t x515 = INT16_MIN;
	uint32_t x516 = 10279334U;
	static volatile int64_t t48 = -6105231099531LL;

	t48 = (x513%(x514/(x515/x516)));

	if (t48 != -240142LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x529 = INT16_MIN;
	static int32_t x530 = INT32_MIN;
	int16_t x531 = -1;
	uint32_t x532 = UINT32_MAX;
	volatile uint32_t t49 = 17501675U;

	t49 = (x529%(x530/(x531/x532)));

	if (t49 != 2147450880U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x533 = 2253225LL;
	uint32_t x535 = 197951383U;

	t50 = (x533%(x534/(x535/x536)));

	if (t50 != 9LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x577 = 1484U;
	int8_t x578 = INT8_MIN;
	uint64_t x579 = UINT64_MAX;
	int8_t x580 = INT8_MAX;
	uint64_t t51 = 3528423443574480LLU;

	t51 = (x577%(x578/(x579/x580)));

	if (t51 != 98LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x581 = INT8_MAX;
	int32_t x584 = 29295;
	volatile int32_t t52 = -13314866;

	t52 = (x581%(x582/(x583/x584)));

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x601 = INT32_MIN;
	int64_t x602 = -1LL;
	volatile int8_t x603 = -1;
	int16_t x604 = -1;
	static int64_t t53 = 145911LL;

	t53 = (x601%(x602/(x603/x604)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x617 = 1U;
	static int32_t x618 = INT32_MIN;
	static int16_t x619 = INT16_MIN;
	uint32_t x620 = 25700U;
	volatile uint32_t t54 = 33U;

	t54 = (x617%(x618/(x619/x620)));

	if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x629 = 16932717423LLU;
	int32_t x630 = 43355568;
	int8_t x631 = -1;
	volatile uint64_t t55 = 3907558788859986LLU;

	t55 = (x629%(x630/(x631/x632)));

	if (t55 != 24045903LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x638 = 965912U;
	int8_t x639 = -1;
	int64_t x640 = -1LL;

	t56 = (x637%(x638/(x639/x640)));

	if (t56 != 809LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x645 = INT16_MAX;
	static int16_t x646 = INT16_MIN;
	int16_t x648 = INT16_MIN;

	t57 = (x645%(x646/(x647/x648)));

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x650 = 41374369U;
	volatile int32_t x651 = 3191;
	static int64_t x652 = -15LL;

	t58 = (x649%(x650/(x651/x652)));

	if (t58 != 37161LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x661 = 3275234U;
	uint64_t x662 = UINT64_MAX;
	uint64_t x663 = UINT64_MAX;
	uint32_t x664 = 1065599711U;
	uint64_t t59 = 40466336440LLU;

	t59 = (x661%(x662/(x663/x664)));

	if (t59 != 3275234LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x681 = 34324LLU;
	int8_t x682 = 23;
	int16_t x683 = -7;
	volatile uint64_t t60 = 3LLU;

	t60 = (x681%(x682/(x683/x684)));

	if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x689 = INT64_MAX;
	int64_t x690 = INT64_MAX;
	int64_t x691 = INT64_MIN;
	int16_t x692 = INT16_MAX;
	volatile int64_t t61 = -288080835240928307LL;

	t61 = (x689%(x690/(x691/x692)));

	if (t61 != 7LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x701 = 8880;
	volatile uint64_t t62 = 8680731420127100588LLU;

	t62 = (x701%(x702/(x703/x704)));

	if (t62 != 8880LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x705 = INT64_MAX;
	volatile uint64_t x706 = UINT64_MAX;
	static volatile int64_t x707 = INT64_MAX;
	static int64_t x708 = 1876554393LL;
	static volatile uint64_t t63 = 1LLU;

	t63 = (x705%(x706/(x707/x708)));

	if (t63 != 2719738861LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x721 = INT64_MAX;
	static uint16_t x723 = UINT16_MAX;
	static int32_t x724 = 355;
	volatile int64_t t64 = -17830958100042821LL;

	t64 = (x721%(x722/(x723/x724)));

	if (t64 != 31196LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x729 = -2;
	static int32_t x730 = -12;
	uint32_t x731 = 1340348230U;
	uint16_t x732 = UINT16_MAX;
	volatile uint32_t t65 = 37461011U;

	t65 = (x729%(x730/(x731/x732)));

	if (t65 != 6390U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x757 = -1;
	static int16_t x758 = INT16_MIN;
	int16_t x759 = -442;
	static uint64_t x760 = 120602545158061LLU;

	t66 = (x757%(x758/(x759/x760)));

	if (t66 != 34859LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x781 = UINT16_MAX;
	static uint8_t x783 = 1U;

	t67 = (x781%(x782/(x783/x784)));

	if (t67 != 27LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x789 = -1;
	volatile uint32_t x790 = 1791354473U;
	int32_t x791 = INT32_MAX;
	int8_t x792 = INT8_MAX;
	volatile uint32_t t68 = 84U;

	t68 = (x789%(x790/(x791/x792)));

	if (t68 != 45U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x793 = INT16_MAX;
	int32_t x794 = -401728674;
	int8_t x795 = INT8_MAX;
	int32_t x796 = -1;
	static volatile int32_t t69 = -8797786;

	t69 = (x793%(x794/(x795/x796)));

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x797 = INT16_MIN;
	static int64_t x798 = -199841LL;
	uint16_t x799 = UINT16_MAX;
	volatile int8_t x800 = INT8_MIN;
	int64_t t70 = -114947317LL;

	t70 = (x797%(x798/(x799/x800)));

	if (t70 != -315LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x806 = INT64_MIN;
	int64_t x807 = -1LL;
	uint64_t x808 = UINT64_MAX;
	static volatile uint64_t t71 = 4042205563110494LLU;

	t71 = (x805%(x806/(x807/x808)));

	if (t71 != 93090485LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x834 = INT8_MIN;
	int16_t x835 = 5;
	volatile int8_t x836 = -1;

	t72 = (x833%(x834/(x835/x836)));

	if (t72 != -18) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x849 = 2588608333745021768LLU;
	int16_t x851 = 12587;
	uint64_t t73 = 4LLU;

	t73 = (x849%(x850/(x851/x852)));

	if (t73 != 2588608333745021768LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x867 = UINT64_MAX;
	volatile uint64_t t74 = 280212032LLU;

	t74 = (x865%(x866/(x867/x868)));

	if (t74 != 4294967295LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x869 = -109;
	int16_t x870 = -1;
	volatile uint32_t t75 = 6476936U;

	t75 = (x869%(x870/(x871/x872)));

	if (t75 != 225U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x873 = -5;
	static uint64_t x874 = 618260318290808973LLU;
	int32_t x875 = -91439;
	int16_t x876 = INT16_MIN;
	static uint64_t t76 = 9743981LLU;

	t76 = (x873%(x874/(x875/x876)));

	if (t76 != 208064684130686937LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x897 = -1;
	static uint32_t x898 = 192922207U;
	int64_t x899 = INT64_MIN;
	static uint64_t t77 = 4861051709013929289LLU;

	t77 = (x897%(x898/(x899/x900)));

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x917 = 11626;
	static int32_t x918 = INT32_MIN;
	uint16_t x919 = 3565U;
	int8_t x920 = -45;

	t78 = (x917%(x918/(x919/x920)));

	if (t78 != 11626) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x945 = 2U;
	int32_t x946 = -4724653;
	static int16_t x947 = INT16_MIN;
	uint64_t x948 = 8158LLU;
	static uint64_t t79 = 9028LLU;

	t79 = (x945%(x946/(x947/x948)));

	if (t79 != 2LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x961 = INT32_MAX;
	volatile uint16_t x963 = 10U;
	volatile int16_t x964 = 1;
	volatile int32_t t80 = -4766;

	t80 = (x961%(x962/(x963/x964)));

	if (t80 != 7) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x965 = INT64_MIN;
	int16_t x966 = INT16_MIN;
	volatile uint64_t x967 = UINT64_MAX;
	int32_t x968 = INT32_MIN;

	t81 = (x965%(x966/(x967/x968)));

	if (t81 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x978 = -616277LL;
	int16_t x979 = INT16_MIN;
	int16_t x980 = INT16_MAX;
	static volatile int64_t t82 = 36243LL;

	t82 = (x977%(x978/(x979/x980)));

	if (t82 != 2LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x989 = INT32_MAX;
	volatile int32_t x990 = 1573;
	int16_t x991 = -1;
	uint64_t x992 = UINT64_MAX;
	uint64_t t83 = 1LLU;

	t83 = (x989%(x990/(x991/x992)));

	if (t83 != 452LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x993 = 41U;
	uint16_t x994 = UINT16_MAX;
	int8_t x995 = 28;
	volatile int32_t t84 = 49;

	t84 = (x993%(x994/(x995/x996)));

	if (t84 != 41) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x1005 = -755660160373386LL;
	int64_t x1006 = -1LL;
	static volatile uint64_t t85 = 246487418LLU;

	t85 = (x1005%(x1006/(x1007/x1008)));

	if (t85 != 18445988413549178230LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x1013 = 2U;
	int32_t x1014 = INT32_MIN;
	int32_t x1015 = INT32_MAX;
	uint16_t x1016 = 102U;
	uint32_t t86 = 1698931U;

	t86 = (x1013%(x1014/(x1015/x1016)));

	if (t86 != 2U) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x1021 = INT16_MIN;
	uint64_t x1023 = UINT64_MAX;
	int64_t x1024 = INT64_MAX;

	t87 = (x1021%(x1022/(x1023/x1024)));

	if (t87 != 17794394256LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x1041 = UINT16_MAX;
	int16_t x1042 = INT16_MAX;
	uint64_t x1043 = 1152LLU;
	static volatile uint8_t x1044 = 18U;
	volatile uint64_t t88 = 102927127564529823LLU;

	t88 = (x1041%(x1042/(x1043/x1044)));

	if (t88 != 127LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x1045 = UINT32_MAX;
	int8_t x1046 = INT8_MIN;
	volatile int8_t x1047 = INT8_MIN;
	volatile int16_t x1048 = -78;
	volatile uint32_t t89 = 52302202U;

	t89 = (x1045%(x1046/(x1047/x1048)));

	if (t89 != 127U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x1067 = UINT64_MAX;
	volatile uint8_t x1068 = UINT8_MAX;
	static volatile uint64_t t90 = 25LLU;

	t90 = (x1065%(x1066/(x1067/x1068)));

	if (t90 != 247LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x1071 = 8062;
	int8_t x1072 = 53;
	int64_t t91 = -9LL;

	t91 = (x1069%(x1070/(x1071/x1072)));

	if (t91 != 30LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x1093 = -1LL;
	int8_t x1094 = INT8_MIN;
	uint64_t x1095 = UINT64_MAX;
	int32_t x1096 = INT32_MIN;
	volatile uint64_t t92 = 7925641LLU;

	t92 = (x1093%(x1094/(x1095/x1096)));

	if (t92 != 127LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x1133 = -1923;
	static volatile int32_t x1134 = -15001;
	uint16_t x1135 = UINT16_MAX;
	uint8_t x1136 = 48U;
	int32_t t93 = 11;

	t93 = (x1133%(x1134/(x1135/x1136)));

	if (t93 != -3) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x1137 = -1;
	volatile int8_t x1138 = INT8_MIN;
	volatile int8_t x1140 = INT8_MIN;
	static volatile uint32_t t94 = 206U;

	t94 = (x1137%(x1138/(x1139/x1140)));

	if (t94 != 127U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x1141 = 127665941;
	int32_t x1143 = INT32_MIN;
	uint64_t x1144 = 129853260133LLU;
	volatile uint64_t t95 = 216LLU;

	t95 = (x1141%(x1142/(x1143/x1144)));

	if (t95 != 127665941LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x1182 = INT32_MIN;
	uint64_t x1183 = 388275088700360LLU;
	volatile uint32_t x1184 = 1U;
	volatile uint64_t t96 = 1LLU;

	t96 = (x1181%(x1182/(x1183/x1184)));

	if (t96 != 43LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x1185 = UINT8_MAX;
	uint64_t x1187 = UINT64_MAX;
	int16_t x1188 = -2431;

	t97 = (x1185%(x1186/(x1187/x1188)));

	if (t97 != 255LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x1202 = INT64_MIN;
	int32_t x1203 = INT32_MAX;
	volatile uint8_t x1204 = 4U;
	int64_t t98 = -26LL;

	t98 = (x1201%(x1202/(x1203/x1204)));

	if (t98 != 48LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x1241 = 2U;
	int8_t x1242 = INT8_MAX;
	static uint16_t x1243 = UINT16_MAX;
	int16_t x1244 = 12978;
	int32_t t99 = -3070273;

	t99 = (x1241%(x1242/(x1243/x1244)));

	if (t99 != 2) { NG(); } else { ; }
	
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

