#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x27 = UINT32_MAX;
uint8_t x88 = 1U;
int16_t x164 = INT16_MIN;
int32_t t6 = 96130009;
volatile uint64_t x176 = 4LLU;
uint8_t x250 = UINT8_MAX;
int32_t t11 = 6265;
static int64_t x264 = -1LL;
volatile uint32_t t12 = 7797481U;
static uint8_t x277 = 4U;
int8_t x287 = INT8_MAX;
volatile int32_t x290 = 468262;
int64_t t21 = 127LL;
uint32_t x382 = 167U;
volatile uint32_t t22 = 20396706U;
uint64_t x429 = 603983619LLU;
int32_t x482 = 808;
int8_t x483 = 47;
uint8_t x499 = UINT8_MAX;
uint16_t x531 = 3U;
int8_t x549 = 22;
uint8_t x571 = 111U;
int32_t x572 = -1;
uint8_t x604 = 1U;
uint16_t x630 = 13385U;
int32_t t34 = -1715276;
int64_t x668 = -1LL;
static uint8_t x762 = UINT8_MAX;
int16_t x764 = INT16_MIN;
int64_t x791 = INT64_MIN;
static volatile int32_t x823 = INT32_MIN;
volatile int64_t t39 = -60416232552748252LL;
int16_t x845 = INT16_MIN;
uint16_t x851 = UINT16_MAX;
int16_t x852 = 8;
volatile int8_t x917 = 1;
int32_t t45 = -495343126;
int32_t x989 = -4570429;
uint32_t x1058 = 150821U;
uint32_t x1110 = 37256U;
volatile uint32_t t52 = 49U;
int64_t x1165 = INT64_MIN;
volatile int64_t x1198 = INT64_MAX;
static volatile uint8_t x1207 = 22U;
static int16_t x1221 = INT16_MIN;
uint64_t x1222 = 4478135252963687818LLU;
int16_t x1224 = -1;
static int64_t x1239 = -1LL;
int64_t x1240 = -1LL;
static uint32_t t62 = 1325449U;
uint8_t x1334 = 14U;
uint8_t x1335 = UINT8_MAX;
int32_t x1339 = INT32_MIN;
uint16_t x1346 = 2U;
int32_t x1348 = -1;
volatile int32_t x1357 = -4861;
uint64_t x1358 = 244808441249LLU;
uint32_t x1422 = 713966U;
int8_t x1423 = INT8_MIN;
uint16_t x1442 = UINT16_MAX;
int32_t t69 = -1663;
static volatile uint64_t t70 = 481831829705LLU;
int16_t x1449 = INT16_MIN;
static int32_t x1461 = 55;
int16_t x1464 = -8;
int16_t x1474 = 2;
uint8_t x1476 = 30U;
uint64_t x1481 = 140LLU;
int64_t x1535 = INT64_MAX;
int32_t x1540 = -1;
int16_t x1541 = INT16_MAX;
int32_t x1552 = -1;
volatile uint8_t x1593 = 0U;
int32_t t80 = -31;
int32_t x1632 = -1;
static uint8_t x1646 = 3U;
int8_t x1755 = 13;
static int8_t x1781 = INT8_MIN;
uint64_t x1784 = 11LLU;
uint16_t x1825 = UINT16_MAX;
uint32_t x1826 = 7358485U;
uint64_t x1837 = UINT64_MAX;
int16_t x1884 = -1;
uint64_t x1914 = UINT64_MAX;
volatile int16_t x1924 = -4389;
uint16_t x1994 = 103U;
uint32_t x2002 = UINT32_MAX;
int64_t x2017 = 1999484374LL;
uint8_t x2019 = UINT8_MAX;
static int8_t x2020 = -32;
static uint32_t x2026 = 679546170U;
volatile uint64_t x2027 = 42437LLU;
uint64_t x2050 = 248278728931959LLU;
static volatile uint8_t x2051 = 7U;
volatile uint64_t t99 = 59549398185373LLU;


void f0(void) {
	int16_t x25 = -1;
	int64_t x26 = 65266522023LL;
	uint32_t x28 = 42U;
	volatile int64_t t0 = 1301831LL;

	t0 = (x25*(x26>>(x27%x28)));

	if (t0 != -8158315252LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x33 = 11499;
	volatile uint8_t x34 = 11U;
	uint16_t x35 = 6U;
	static int8_t x36 = INT8_MIN;
	static int32_t t1 = 428;

	t1 = (x33*(x34>>(x35%x36)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x73 = 28U;
	static volatile uint8_t x74 = 12U;
	volatile int64_t x75 = INT64_MIN;
	int32_t x76 = INT32_MIN;
	int32_t t2 = -347;

	t2 = (x73*(x74>>(x75%x76)));

	if (t2 != 336) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x77 = 5480991916812930358LLU;
	uint16_t x78 = 38U;
	int16_t x79 = INT16_MIN;
	int64_t x80 = -1LL;
	volatile uint64_t t3 = 10562LLU;

	t3 = (x77*(x78>>(x79%x80)));

	if (t3 != 5363508028086285828LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x85 = INT16_MIN;
	uint64_t x86 = 3LLU;
	uint64_t x87 = 1644606670476819640LLU;
	uint64_t t4 = 149LLU;

	t4 = (x85*(x86>>(x87%x88)));

	if (t4 != 18446744073709453312LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x113 = -1LL;
	uint16_t x114 = UINT16_MAX;
	static int8_t x115 = 1;
	uint16_t x116 = UINT16_MAX;
	int64_t t5 = -1499517595LL;

	t5 = (x113*(x114>>(x115%x116)));

	if (t5 != -32767LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x161 = INT16_MIN;
	volatile uint8_t x162 = UINT8_MAX;
	int32_t x163 = INT32_MIN;

	t6 = (x161*(x162>>(x163%x164)));

	if (t6 != -8355840) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x173 = UINT16_MAX;
	uint8_t x174 = 2U;
	volatile int64_t x175 = -477585LL;
	static volatile int32_t t7 = 5171218;

	t7 = (x173*(x174>>(x175%x176)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x177 = 1807U;
	int64_t x178 = 4660839717015LL;
	volatile int32_t x179 = INT32_MIN;
	int8_t x180 = INT8_MIN;
	volatile int64_t t8 = -93913LL;

	t8 = (x177*(x178>>(x179%x180)));

	if (t8 != 8422137368646105LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x185 = -2381;
	static volatile uint16_t x186 = 12110U;
	static int8_t x187 = 12;
	volatile int64_t x188 = -120LL;
	volatile int32_t t9 = -14;

	t9 = (x185*(x186>>(x187%x188)));

	if (t9 != -4762) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x225 = -1LL;
	volatile uint32_t x226 = UINT32_MAX;
	uint8_t x227 = 5U;
	uint8_t x228 = 14U;
	int64_t t10 = -1197346LL;

	t10 = (x225*(x226>>(x227%x228)));

	if (t10 != -134217727LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x249 = INT16_MIN;
	uint32_t x251 = 115822U;
	uint64_t x252 = 51LLU;

	t11 = (x249*(x250>>(x251%x252)));

	if (t11 != -4161536) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x261 = 3299545U;
	volatile int8_t x262 = 11;
	uint8_t x263 = UINT8_MAX;

	t12 = (x261*(x262>>(x263%x264)));

	if (t12 != 36294995U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x278 = INT32_MAX;
	uint64_t x279 = 38662849717838518LLU;
	volatile uint16_t x280 = 174U;
	static volatile int32_t t13 = 1;

	t13 = (x277*(x278>>(x279%x280)));

	if (t13 != 2044) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x285 = 90LL;
	uint64_t x286 = 566507805889676LLU;
	int16_t x288 = -1;
	uint64_t t14 = 2038646LLU;

	t14 = (x285*(x286>>(x287%x288)));

	if (t14 != 50985702530070840LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x289 = 25304472804LL;
	uint32_t x291 = 7U;
	int8_t x292 = INT8_MAX;
	int64_t t15 = 49LL;

	t15 = (x289*(x290>>(x291%x292)));

	if (t15 != 92563761517032LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x305 = 2078692;
	uint8_t x306 = 1U;
	volatile int32_t x307 = INT32_MIN;
	static volatile int16_t x308 = INT16_MIN;
	volatile int32_t t16 = -1465475;

	t16 = (x305*(x306>>(x307%x308)));

	if (t16 != 2078692) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x317 = INT64_MAX;
	int8_t x318 = 9;
	static uint64_t x319 = 25LLU;
	volatile int64_t x320 = -1LL;
	static volatile int64_t t17 = 1LL;

	t17 = (x317*(x318>>(x319%x320)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x321 = INT32_MIN;
	volatile uint8_t x322 = 1U;
	static int16_t x323 = 7;
	int32_t x324 = INT32_MIN;
	volatile int32_t t18 = 1040;

	t18 = (x321*(x322>>(x323%x324)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x361 = -1;
	static uint64_t x362 = 5902317LLU;
	int64_t x363 = -1LL;
	uint64_t x364 = UINT64_MAX;
	uint64_t t19 = 47905417LLU;

	t19 = (x361*(x362>>(x363%x364)));

	if (t19 != 18446744073703649299LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x365 = 54U;
	int64_t x366 = INT64_MAX;
	uint64_t x367 = UINT64_MAX;
	volatile uint8_t x368 = 93U;
	volatile int64_t t20 = 2LL;

	t20 = (x365*(x366>>(x367%x368)));

	if (t20 != 15199648742375370LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x369 = -1LL;
	int16_t x370 = 55;
	int32_t x371 = 1972;
	int32_t x372 = -18;

	t21 = (x369*(x370>>(x371%x372)));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x381 = INT32_MIN;
	int16_t x383 = -1;
	uint64_t x384 = UINT64_MAX;

	t22 = (x381*(x382>>(x383%x384)));

	if (t22 != 2147483648U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x430 = 0;
	uint32_t x431 = UINT32_MAX;
	volatile uint16_t x432 = UINT16_MAX;
	uint64_t t23 = 4636539LLU;

	t23 = (x429*(x430>>(x431%x432)));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x449 = INT16_MAX;
	uint16_t x450 = 4U;
	int16_t x451 = -1;
	int64_t x452 = -1LL;
	int32_t t24 = 838;

	t24 = (x449*(x450>>(x451%x452)));

	if (t24 != 131068) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x457 = 15;
	volatile int16_t x458 = 13;
	uint8_t x459 = 1U;
	uint64_t x460 = UINT64_MAX;
	int32_t t25 = -158189;

	t25 = (x457*(x458>>(x459%x460)));

	if (t25 != 90) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x481 = 224U;
	uint32_t x484 = 14U;
	int32_t t26 = 2;

	t26 = (x481*(x482>>(x483%x484)));

	if (t26 != 5600) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x485 = 315U;
	int64_t x486 = 5523LL;
	uint64_t x487 = 2LLU;
	int8_t x488 = -1;
	volatile int64_t t27 = 232785LL;

	t27 = (x485*(x486>>(x487%x488)));

	if (t27 != 434700LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x497 = INT16_MIN;
	uint8_t x498 = 1U;
	static int8_t x500 = -51;
	int32_t t28 = 415;

	t28 = (x497*(x498>>(x499%x500)));

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x529 = INT64_MIN;
	uint64_t x530 = UINT64_MAX;
	int64_t x532 = 241104588015LL;
	uint64_t t29 = 58441140717549561LLU;

	t29 = (x529*(x530>>(x531%x532)));

	if (t29 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x550 = UINT32_MAX;
	int16_t x551 = INT16_MIN;
	int8_t x552 = INT8_MIN;
	static uint32_t t30 = 39500199U;

	t30 = (x549*(x550>>(x551%x552)));

	if (t30 != 4294967274U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x569 = UINT8_MAX;
	uint16_t x570 = 5U;
	static volatile int32_t t31 = 18;

	t31 = (x569*(x570>>(x571%x572)));

	if (t31 != 1275) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x601 = 285959;
	int8_t x602 = 0;
	volatile int16_t x603 = -7;
	int32_t t32 = 16;

	t32 = (x601*(x602>>(x603%x604)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x629 = 3;
	uint32_t x631 = UINT32_MAX;
	uint8_t x632 = UINT8_MAX;
	int32_t t33 = -7344363;

	t33 = (x629*(x630>>(x631%x632)));

	if (t33 != 40155) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x641 = -10058;
	uint8_t x642 = 1U;
	static uint16_t x643 = 3U;
	int32_t x644 = INT32_MIN;

	t34 = (x641*(x642>>(x643%x644)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x665 = 14676173U;
	static uint64_t x666 = 2066987136908964913LLU;
	int8_t x667 = INT8_MAX;
	volatile uint64_t t35 = 23927967938310LLU;

	t35 = (x665*(x666>>(x667%x668)));

	if (t35 != 11541764181196225341LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x713 = 3469388812134LL;
	uint64_t x714 = 0LLU;
	int32_t x715 = -449357582;
	static uint64_t x716 = 7LLU;
	volatile uint64_t t36 = 4400364657158900311LLU;

	t36 = (x713*(x714>>(x715%x716)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x761 = -4;
	volatile int32_t x763 = INT32_MIN;
	volatile int32_t t37 = -517;

	t37 = (x761*(x762>>(x763%x764)));

	if (t37 != -1020) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x789 = INT8_MAX;
	int64_t x790 = 2LL;
	static int8_t x792 = -1;
	int64_t t38 = -466652612402739999LL;

	t38 = (x789*(x790>>(x791%x792)));

	if (t38 != 254LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x821 = 11092198568LL;
	int16_t x822 = 6978;
	int32_t x824 = INT32_MIN;

	t39 = (x821*(x822>>(x823%x824)));

	if (t39 != 77401361607504LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x833 = INT8_MAX;
	uint32_t x834 = UINT32_MAX;
	static int64_t x835 = 4891463LL;
	uint8_t x836 = 2U;
	static volatile uint32_t t40 = 173311U;

	t40 = (x833*(x834>>(x835%x836)));

	if (t40 != 2147483521U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x846 = 1LL;
	volatile int8_t x847 = INT8_MIN;
	static uint8_t x848 = 2U;
	volatile int64_t t41 = 8595865911092LL;

	t41 = (x845*(x846>>(x847%x848)));

	if (t41 != -32768LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x849 = 6;
	uint32_t x850 = UINT32_MAX;
	static volatile uint32_t t42 = 1485U;

	t42 = (x849*(x850>>(x851%x852)));

	if (t42 != 201326586U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x918 = UINT16_MAX;
	static volatile uint16_t x919 = 1798U;
	static volatile uint16_t x920 = 148U;
	static int32_t t43 = -11365088;

	t43 = (x917*(x918>>(x919%x920)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x965 = -1LL;
	int64_t x966 = INT64_MAX;
	volatile uint32_t x967 = 3U;
	static volatile int8_t x968 = -4;
	static volatile int64_t t44 = -1LL;

	t44 = (x965*(x966>>(x967%x968)));

	if (t44 != -1152921504606846975LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x981 = 1U;
	volatile int16_t x982 = 110;
	int64_t x983 = INT64_MIN;
	int64_t x984 = -1LL;

	t45 = (x981*(x982>>(x983%x984)));

	if (t45 != 110) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x990 = INT64_MAX;
	static int8_t x991 = 32;
	uint16_t x992 = 223U;
	volatile int64_t t46 = 1010721972333856LL;

	t46 = (x989*(x990>>(x991%x992)));

	if (t46 != -9814921537274563LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x997 = 4395U;
	uint64_t x998 = UINT64_MAX;
	static uint8_t x999 = 25U;
	int32_t x1000 = 4;
	volatile uint64_t t47 = 7339LLU;

	t47 = (x997*(x998>>(x999%x1000)));

	if (t47 != 9223372036854771413LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x1013 = 2U;
	uint32_t x1014 = UINT32_MAX;
	uint32_t x1015 = 1U;
	int8_t x1016 = -1;
	volatile uint32_t t48 = 590014636U;

	t48 = (x1013*(x1014>>(x1015%x1016)));

	if (t48 != 4294967294U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x1041 = 2LL;
	volatile uint8_t x1042 = UINT8_MAX;
	uint64_t x1043 = UINT64_MAX;
	volatile int16_t x1044 = INT16_MAX;
	volatile int64_t t49 = -29207026371842LL;

	t49 = (x1041*(x1042>>(x1043%x1044)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x1057 = INT8_MIN;
	uint16_t x1059 = 21248U;
	static uint8_t x1060 = 6U;
	static uint32_t t50 = 15U;

	t50 = (x1057*(x1058>>(x1059%x1060)));

	if (t50 != 4290141056U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x1085 = UINT16_MAX;
	volatile uint32_t x1086 = 1U;
	int32_t x1087 = 32;
	static int64_t x1088 = -1LL;
	static uint32_t t51 = 3262046U;

	t51 = (x1085*(x1086>>(x1087%x1088)));

	if (t51 != 65535U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x1109 = 8;
	int32_t x1111 = INT32_MIN;
	int32_t x1112 = -1;

	t52 = (x1109*(x1110>>(x1111%x1112)));

	if (t52 != 298048U) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x1113 = INT64_MIN;
	int64_t x1114 = 3LL;
	int16_t x1115 = INT16_MAX;
	int8_t x1116 = 8;
	static int64_t t53 = 698381579364LL;

	t53 = (x1113*(x1114>>(x1115%x1116)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x1117 = 63573424499664314LLU;
	int16_t x1118 = INT16_MAX;
	static volatile int32_t x1119 = 0;
	int64_t x1120 = -1877658273685LL;
	static uint64_t t54 = 214502LLU;

	t54 = (x1117*(x1118>>(x1119%x1120)));

	if (t54 != 17075064325030795846LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x1166 = 3974LLU;
	static int32_t x1167 = -1;
	uint32_t x1168 = 7U;
	volatile uint64_t t55 = 466443LLU;

	t55 = (x1165*(x1166>>(x1167%x1168)));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x1169 = 9968084U;
	uint8_t x1170 = UINT8_MAX;
	static volatile int8_t x1171 = -1;
	volatile int64_t x1172 = -1LL;
	uint32_t t56 = 390172U;

	t56 = (x1169*(x1170>>(x1171%x1172)));

	if (t56 != 2541861420U) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x1197 = -1;
	uint8_t x1199 = 3U;
	uint64_t x1200 = 1959LLU;
	static volatile int64_t t57 = -72971007882993091LL;

	t57 = (x1197*(x1198>>(x1199%x1200)));

	if (t57 != -1152921504606846975LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x1205 = 32U;
	uint32_t x1206 = 20326U;
	volatile uint32_t x1208 = 578975851U;
	uint32_t t58 = 554390899U;

	t58 = (x1205*(x1206>>(x1207%x1208)));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1223 = -558157235;
	static uint64_t t59 = 45493763960536LLU;

	t59 = (x1221*(x1222>>(x1223%x1224)));

	if (t59 != 4313137245360685056LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x1229 = 1998;
	uint64_t x1230 = UINT64_MAX;
	uint64_t x1231 = UINT64_MAX;
	static uint8_t x1232 = UINT8_MAX;
	uint64_t t60 = 13256LLU;

	t60 = (x1229*(x1230>>(x1231%x1232)));

	if (t60 != 18446744073709549618LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x1233 = -112155;
	uint64_t x1234 = 5845611LLU;
	uint32_t x1235 = 3U;
	int16_t x1236 = -1;
	uint64_t t61 = 4718530887942634373LLU;

	t61 = (x1233*(x1234>>(x1235%x1236)));

	if (t61 != 18446743991757780961LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x1237 = -15;
	uint32_t x1238 = UINT32_MAX;

	t62 = (x1237*(x1238>>(x1239%x1240)));

	if (t62 != 15U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x1249 = INT64_MAX;
	uint8_t x1250 = 1U;
	volatile int8_t x1251 = 13;
	static volatile int32_t x1252 = INT32_MIN;
	volatile int64_t t63 = 106662LL;

	t63 = (x1249*(x1250>>(x1251%x1252)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x1333 = 31U;
	int8_t x1336 = INT8_MAX;
	volatile int32_t t64 = -3;

	t64 = (x1333*(x1334>>(x1335%x1336)));

	if (t64 != 217) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x1337 = UINT32_MAX;
	static uint8_t x1338 = 7U;
	int32_t x1340 = -1;
	static uint32_t t65 = 894U;

	t65 = (x1337*(x1338>>(x1339%x1340)));

	if (t65 != 4294967289U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x1345 = 117981U;
	int16_t x1347 = INT16_MIN;
	uint32_t t66 = 31129U;

	t66 = (x1345*(x1346>>(x1347%x1348)));

	if (t66 != 235962U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x1359 = 34U;
	int8_t x1360 = 1;
	uint64_t t67 = 8LLU;

	t67 = (x1357*(x1358>>(x1359%x1360)));

	if (t67 != 18445554059876640227LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x1421 = -1;
	uint8_t x1424 = 1U;
	uint32_t t68 = 18U;

	t68 = (x1421*(x1422>>(x1423%x1424)));

	if (t68 != 4294253330U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x1441 = 1;
	volatile uint32_t x1443 = UINT32_MAX;
	uint32_t x1444 = 2U;

	t69 = (x1441*(x1442>>(x1443%x1444)));

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x1445 = -1LL;
	uint64_t x1446 = 3372091531506442LLU;
	volatile int32_t x1447 = 55851;
	volatile uint8_t x1448 = 38U;

	t70 = (x1445*(x1446>>(x1447%x1448)));

	if (t70 != 18446744073703270607LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x1450 = INT16_MAX;
	int16_t x1451 = -313;
	int32_t x1452 = -1;
	int32_t t71 = 43615;

	t71 = (x1449*(x1450>>(x1451%x1452)));

	if (t71 != -1073709056) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x1462 = 114U;
	static volatile int16_t x1463 = INT16_MIN;
	int32_t t72 = -616;

	t72 = (x1461*(x1462>>(x1463%x1464)));

	if (t72 != 6270) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x1473 = -62748155691LL;
	volatile uint16_t x1475 = UINT16_MAX;
	static int64_t t73 = 545900510790973163LL;

	t73 = (x1473*(x1474>>(x1475%x1476)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x1482 = INT64_MAX;
	int32_t x1483 = -1;
	uint32_t x1484 = 4U;
	uint64_t t74 = 177671894LLU;

	t74 = (x1481*(x1482>>(x1483%x1484)));

	if (t74 != 13835058055282163572LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x1513 = -61959736LL;
	static uint8_t x1514 = 1U;
	int32_t x1515 = INT32_MIN;
	static int64_t x1516 = -1LL;
	int64_t t75 = -2846LL;

	t75 = (x1513*(x1514>>(x1515%x1516)));

	if (t75 != -61959736LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x1533 = 27;
	uint8_t x1534 = 13U;
	static volatile int8_t x1536 = -1;
	static int32_t t76 = 6219;

	t76 = (x1533*(x1534>>(x1535%x1536)));

	if (t76 != 351) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x1537 = INT32_MIN;
	uint32_t x1538 = 322U;
	int8_t x1539 = INT8_MIN;
	static volatile uint32_t t77 = 460U;

	t77 = (x1537*(x1538>>(x1539%x1540)));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x1542 = 1121;
	int32_t x1543 = -145588;
	int8_t x1544 = 1;
	volatile int32_t t78 = 2901080;

	t78 = (x1541*(x1542>>(x1543%x1544)));

	if (t78 != 36731807) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x1549 = 3780554U;
	int16_t x1550 = INT16_MAX;
	volatile uint16_t x1551 = 18U;
	volatile uint32_t t79 = 455383U;

	t79 = (x1549*(x1550>>(x1551%x1552)));

	if (t79 != 3618328630U) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x1594 = INT32_MAX;
	static int32_t x1595 = INT32_MAX;
	int32_t x1596 = INT32_MAX;

	t80 = (x1593*(x1594>>(x1595%x1596)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x1629 = UINT8_MAX;
	static volatile uint32_t x1630 = UINT32_MAX;
	int16_t x1631 = INT16_MIN;
	uint32_t t81 = 131336U;

	t81 = (x1629*(x1630>>(x1631%x1632)));

	if (t81 != 4294967041U) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x1645 = INT16_MIN;
	static int64_t x1647 = INT64_MIN;
	int8_t x1648 = INT8_MIN;
	int32_t t82 = -401;

	t82 = (x1645*(x1646>>(x1647%x1648)));

	if (t82 != -98304) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x1661 = 3U;
	static uint16_t x1662 = 13U;
	int64_t x1663 = INT64_MIN;
	static int64_t x1664 = INT64_MIN;
	int32_t t83 = 111907360;

	t83 = (x1661*(x1662>>(x1663%x1664)));

	if (t83 != 39) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x1733 = INT32_MIN;
	int8_t x1734 = INT8_MAX;
	uint32_t x1735 = 309852U;
	static uint8_t x1736 = UINT8_MAX;
	int32_t t84 = -4;

	t84 = (x1733*(x1734>>(x1735%x1736)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x1753 = -306;
	static uint64_t x1754 = UINT64_MAX;
	volatile uint32_t x1756 = 50U;
	static uint64_t t85 = 32295240294LLU;

	t85 = (x1753*(x1754>>(x1755%x1756)));

	if (t85 != 17757693330721866034LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x1782 = 280969LLU;
	volatile int64_t x1783 = INT64_MIN;
	volatile uint64_t t86 = 4300LLU;

	t86 = (x1781*(x1782>>(x1783%x1784)));

	if (t86 != 18446744073709411200LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x1809 = 11;
	uint8_t x1810 = 9U;
	uint32_t x1811 = 3U;
	int8_t x1812 = INT8_MIN;
	int32_t t87 = -4;

	t87 = (x1809*(x1810>>(x1811%x1812)));

	if (t87 != 11) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x1821 = 1;
	volatile uint8_t x1822 = 115U;
	int32_t x1823 = 0;
	uint64_t x1824 = UINT64_MAX;
	volatile int32_t t88 = -59;

	t88 = (x1821*(x1822>>(x1823%x1824)));

	if (t88 != 115) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x1827 = 5U;
	int64_t x1828 = -6LL;
	volatile uint32_t t89 = 4109957U;

	t89 = (x1825*(x1826>>(x1827%x1828)));

	if (t89 != 2185002432U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x1838 = 3;
	volatile int8_t x1839 = INT8_MIN;
	volatile int64_t x1840 = -1LL;
	volatile uint64_t t90 = 345LLU;

	t90 = (x1837*(x1838>>(x1839%x1840)));

	if (t90 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x1881 = -1LL;
	volatile int32_t x1882 = INT32_MAX;
	volatile int16_t x1883 = INT16_MAX;
	int64_t t91 = -1648124733LL;

	t91 = (x1881*(x1882>>(x1883%x1884)));

	if (t91 != -2147483647LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x1913 = -1LL;
	volatile int8_t x1915 = INT8_MIN;
	int8_t x1916 = INT8_MIN;
	uint64_t t92 = 24066910013288331LLU;

	t92 = (x1913*(x1914>>(x1915%x1916)));

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x1921 = -1;
	int8_t x1922 = INT8_MAX;
	uint16_t x1923 = 3U;
	volatile int32_t t93 = -131553;

	t93 = (x1921*(x1922>>(x1923%x1924)));

	if (t93 != -15) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x1989 = INT8_MAX;
	uint32_t x1990 = 1796U;
	uint32_t x1991 = UINT32_MAX;
	int16_t x1992 = -32;
	uint32_t t94 = 123761U;

	t94 = (x1989*(x1990>>(x1991%x1992)));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x1993 = UINT64_MAX;
	static uint64_t x1995 = 31226360077LLU;
	volatile uint8_t x1996 = 20U;
	volatile uint64_t t95 = 14LLU;

	t95 = (x1993*(x1994>>(x1995%x1996)));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x2001 = INT8_MIN;
	int16_t x2003 = INT16_MIN;
	int8_t x2004 = INT8_MIN;
	uint32_t t96 = 114852485U;

	t96 = (x2001*(x2002>>(x2003%x2004)));

	if (t96 != 128U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x2018 = 1;
	volatile int64_t t97 = -139LL;

	t97 = (x2017*(x2018>>(x2019%x2020)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x2025 = 0;
	static uint16_t x2028 = 5U;
	volatile uint32_t t98 = 3U;

	t98 = (x2025*(x2026>>(x2027%x2028)));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x2049 = 12U;
	uint16_t x2052 = UINT16_MAX;

	t99 = (x2049*(x2050>>(x2051%x2052)));

	if (t99 != 23276130837360LLU) { NG(); } else { ; }
	
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

