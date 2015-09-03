#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x34 = 12276925U;
static volatile int8_t x61 = INT8_MAX;
uint64_t t5 = 31987017283891LLU;
int8_t x173 = 0;
uint32_t x174 = UINT32_MAX;
uint16_t x175 = UINT16_MAX;
int32_t x205 = 2;
static uint32_t x236 = 11U;
static int8_t x239 = -1;
static volatile int64_t t10 = 29517360638704628LL;
uint16_t x249 = UINT16_MAX;
int8_t x252 = -4;
uint64_t x262 = UINT64_MAX;
uint8_t x264 = 14U;
int8_t x335 = 0;
volatile int64_t t15 = 19560LL;
int16_t x365 = INT16_MIN;
int16_t x368 = -72;
int8_t x377 = -23;
uint32_t x378 = 5295952U;
static int64_t x422 = INT64_MIN;
int8_t x435 = 1;
volatile uint16_t x436 = UINT16_MAX;
uint8_t x439 = 24U;
volatile int32_t x440 = INT32_MAX;
int32_t x441 = -1;
uint32_t x461 = UINT32_MAX;
uint16_t x462 = 1951U;
uint32_t x464 = 1U;
int64_t x490 = INT64_MIN;
int64_t x492 = 230LL;
volatile int8_t x584 = INT8_MAX;
volatile uint64_t t27 = 12LLU;
int32_t t29 = -76948;
int32_t x701 = 20;
int64_t t30 = 4040LL;
uint32_t x716 = UINT32_MAX;
volatile int16_t x775 = 19;
uint32_t x782 = 54177753U;
static int32_t x783 = -13844;
static uint64_t t35 = 16LLU;
int32_t x818 = -1;
uint64_t x820 = 46LLU;
volatile int64_t x839 = 1LL;
uint8_t x859 = 2U;
static volatile uint64_t x860 = UINT64_MAX;
static volatile uint64_t t38 = 51824010767LLU;
int64_t x884 = -1LL;
int16_t x917 = INT16_MIN;
uint32_t t42 = 33932U;
int32_t x952 = -1;
int16_t x960 = INT16_MIN;
int8_t x1033 = -1;
static uint32_t x1041 = 2367840U;
int16_t x1057 = -4;
static int64_t x1058 = -5242710131580560LL;
static int16_t x1059 = -1;
volatile int64_t t50 = 110314324LL;
int8_t x1090 = INT8_MIN;
volatile uint32_t x1143 = UINT32_MAX;
volatile uint64_t t53 = 5LLU;
uint64_t x1157 = UINT64_MAX;
int16_t x1158 = 2077;
uint16_t x1212 = 1U;
volatile uint64_t t57 = 363767868LLU;
static int8_t x1222 = INT8_MIN;
int8_t x1224 = -1;
int16_t x1242 = INT16_MIN;
static volatile uint64_t t60 = 326LLU;
volatile uint8_t x1289 = 4U;
int16_t x1294 = -1;
volatile uint32_t t63 = 276479532U;
int64_t t65 = 118LL;
int8_t x1582 = 24;
int16_t x1584 = -1;
volatile int16_t x1597 = -4005;
volatile uint32_t t67 = 1244575511U;
static uint64_t x1705 = UINT64_MAX;
volatile uint32_t x1706 = UINT32_MAX;
uint8_t x1719 = 2U;
uint64_t x1726 = 240648614858894529LLU;
static int64_t x1741 = -688156258879216LL;
static int16_t x1753 = -1;
int16_t x1785 = -1;
int8_t x1815 = INT8_MIN;
static volatile int8_t x1816 = INT8_MIN;
volatile int32_t x1834 = -1;
static int32_t t80 = 1918;
static int8_t x1870 = -1;
int64_t x1885 = -1LL;
int64_t x1892 = INT64_MIN;
uint32_t t87 = 6U;
int8_t x1960 = 18;
uint16_t x1973 = UINT16_MAX;
static volatile uint64_t t89 = 59316LLU;
static uint32_t x1994 = 10109390U;
volatile uint32_t t91 = 97820U;
int16_t x2025 = INT16_MAX;
volatile int32_t x2055 = 1;
int8_t x2067 = 1;
int64_t x2068 = -2490LL;
int8_t x2070 = INT8_MIN;
static int32_t x2072 = -63804829;


void f0(void) {
	int32_t x33 = 0;
	static uint16_t x35 = 224U;
	int8_t x36 = -1;
	uint32_t t0 = 2890U;

	t0 = ((x33*x34)>>(x35%x36));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x62 = INT8_MAX;
	uint32_t x63 = 2U;
	static uint64_t x64 = 6LLU;
	volatile int32_t t1 = 12;

	t1 = ((x61*x62)>>(x63%x64));

	if (t1 != 4032) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x65 = 1412865LLU;
	int8_t x66 = -40;
	uint16_t x67 = 22193U;
	uint8_t x68 = 116U;
	static uint64_t t2 = 14633423204936LLU;

	t2 = ((x65*x66)>>(x67%x68));

	if (t2 != 134217727LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x109 = -911;
	int8_t x110 = INT8_MIN;
	static uint32_t x111 = UINT32_MAX;
	volatile int8_t x112 = -22;
	int32_t t3 = 10306305;

	t3 = ((x109*x110)>>(x111%x112));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x145 = -15;
	int32_t x146 = -2459;
	static uint16_t x147 = 1U;
	int16_t x148 = INT16_MIN;
	volatile int32_t t4 = -1;

	t4 = ((x145*x146)>>(x147%x148));

	if (t4 != 18442) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x161 = UINT64_MAX;
	uint32_t x162 = 0U;
	volatile uint64_t x163 = 749954212352992599LLU;
	int8_t x164 = 11;

	t5 = ((x161*x162)>>(x163%x164));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x176 = INT8_MAX;
	uint32_t t6 = 1538U;

	t6 = ((x173*x174)>>(x175%x176));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x206 = 1661U;
	int16_t x207 = INT16_MAX;
	int32_t x208 = -1;
	static volatile int32_t t7 = 1;

	t7 = ((x205*x206)>>(x207%x208));

	if (t7 != 3322) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x229 = 6LL;
	static int8_t x230 = 1;
	static int8_t x231 = 5;
	int64_t x232 = 54010991386685LL;
	static volatile int64_t t8 = 91496655LL;

	t8 = ((x229*x230)>>(x231%x232));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x233 = INT8_MIN;
	volatile int8_t x234 = INT8_MIN;
	int8_t x235 = -1;
	static volatile int32_t t9 = -1010449;

	t9 = ((x233*x234)>>(x235%x236));

	if (t9 != 2048) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x237 = -1;
	int64_t x238 = -820846442607529LL;
	volatile int8_t x240 = -1;

	t10 = ((x237*x238)>>(x239%x240));

	if (t10 != 820846442607529LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x241 = -1;
	static uint64_t x242 = UINT64_MAX;
	uint8_t x243 = 0U;
	int16_t x244 = INT16_MIN;
	uint64_t t11 = 438LLU;

	t11 = ((x241*x242)>>(x243%x244));

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x250 = 1;
	uint64_t x251 = UINT64_MAX;
	int32_t t12 = -884;

	t12 = ((x249*x250)>>(x251%x252));

	if (t12 != 8191) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x261 = INT64_MIN;
	volatile uint16_t x263 = 3U;
	static uint64_t t13 = 3430212218275600585LLU;

	t13 = ((x261*x262)>>(x263%x264));

	if (t13 != 1152921504606846976LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x325 = -2371;
	static uint64_t x326 = 987033LLU;
	static uint8_t x327 = UINT8_MAX;
	int32_t x328 = -1;
	static uint64_t t14 = 12431342LLU;

	t14 = ((x325*x326)>>(x327%x328));

	if (t14 != 18446744071369296373LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x333 = -26983341064397LL;
	int8_t x334 = INT8_MIN;
	uint64_t x336 = 478971048LLU;

	t15 = ((x333*x334)>>(x335%x336));

	if (t15 != 3453867656242816LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x366 = INT16_MIN;
	uint8_t x367 = 13U;
	volatile int32_t t16 = 2;

	t16 = ((x365*x366)>>(x367%x368));

	if (t16 != 131072) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x379 = -3;
	int64_t x380 = -1LL;
	volatile uint32_t t17 = 17U;

	t17 = ((x377*x378)>>(x379%x380));

	if (t17 != 4173160400U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x393 = UINT64_MAX;
	uint8_t x394 = 0U;
	uint8_t x395 = 24U;
	int64_t x396 = -1LL;
	static uint64_t t18 = 1981580267930598879LLU;

	t18 = ((x393*x394)>>(x395%x396));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x417 = UINT64_MAX;
	int32_t x418 = -97496660;
	static uint64_t x419 = 32316801146083518LLU;
	uint16_t x420 = 11U;
	static uint64_t t19 = 2933283036812971564LLU;

	t19 = ((x417*x418)>>(x419%x420));

	if (t19 != 190423LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x421 = UINT64_MAX;
	uint8_t x423 = 0U;
	int16_t x424 = INT16_MAX;
	uint64_t t20 = 7567309785587159602LLU;

	t20 = ((x421*x422)>>(x423%x424));

	if (t20 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x433 = -1;
	int32_t x434 = -50084908;
	int32_t t21 = 35493;

	t21 = ((x433*x434)>>(x435%x436));

	if (t21 != 25042454) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x437 = 1056339LL;
	uint8_t x438 = 11U;
	volatile int64_t t22 = -33301138LL;

	t22 = ((x437*x438)>>(x439%x440));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x442 = -28;
	uint8_t x443 = 3U;
	static volatile int32_t x444 = INT32_MAX;
	static int32_t t23 = 18971408;

	t23 = ((x441*x442)>>(x443%x444));

	if (t23 != 3) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x463 = UINT32_MAX;
	uint32_t t24 = 3987502U;

	t24 = ((x461*x462)>>(x463%x464));

	if (t24 != 4294965345U) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x489 = 0U;
	static uint8_t x491 = UINT8_MAX;
	volatile int64_t t25 = 927942853LL;

	t25 = ((x489*x490)>>(x491%x492));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x569 = 54070155327LL;
	int16_t x570 = 24;
	static uint64_t x571 = 132718939LLU;
	int8_t x572 = 7;
	volatile int64_t t26 = 2083468798886687208LL;

	t26 = ((x569*x570)>>(x571%x572));

	if (t26 != 162210465981LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x581 = UINT64_MAX;
	static int8_t x582 = INT8_MIN;
	uint16_t x583 = UINT16_MAX;

	t27 = ((x581*x582)>>(x583%x584));

	if (t27 != 16LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x649 = -31944379;
	volatile int16_t x650 = -1;
	uint64_t x651 = 12LLU;
	int16_t x652 = 3957;
	volatile int32_t t28 = -15831;

	t28 = ((x649*x650)>>(x651%x652));

	if (t28 != 7798) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x677 = 18U;
	int8_t x678 = 5;
	volatile int32_t x679 = INT32_MAX;
	static uint8_t x680 = 20U;

	t29 = ((x677*x678)>>(x679%x680));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x702 = 101258355253826LL;
	volatile int64_t x703 = -11027203909265LL;
	int64_t x704 = -1LL;

	t30 = ((x701*x702)>>(x703%x704));

	if (t30 != 2025167105076520LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x705 = 4260LL;
	volatile int8_t x706 = INT8_MAX;
	static volatile uint32_t x707 = 3U;
	volatile int16_t x708 = INT16_MAX;
	int64_t t31 = -12LL;

	t31 = ((x705*x706)>>(x707%x708));

	if (t31 != 67627LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x713 = 0U;
	uint32_t x714 = 16872U;
	volatile int32_t x715 = -1;
	uint32_t t32 = 1U;

	t32 = ((x713*x714)>>(x715%x716));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x773 = -1;
	uint64_t x774 = 788279907694999LLU;
	int8_t x776 = 5;
	static uint64_t t33 = 8341506436679007LLU;

	t33 = ((x773*x774)>>(x775%x776));

	if (t33 != 1152872237112616038LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x781 = 4U;
	static volatile int8_t x784 = -1;
	uint32_t t34 = 12U;

	t34 = ((x781*x782)>>(x783%x784));

	if (t34 != 216711012U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x797 = 542947232860169LLU;
	volatile uint64_t x798 = 298LLU;
	int32_t x799 = 58;
	int16_t x800 = INT16_MIN;

	t35 = ((x797*x798)>>(x799%x800));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x817 = 14U;
	int8_t x819 = -6;
	uint32_t t36 = 21137U;

	t36 = ((x817*x818)>>(x819%x820));

	if (t36 != 4294967282U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x837 = INT8_MAX;
	uint8_t x838 = UINT8_MAX;
	volatile uint64_t x840 = UINT64_MAX;
	volatile int32_t t37 = 564398078;

	t37 = ((x837*x838)>>(x839%x840));

	if (t37 != 16192) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x857 = 8LLU;
	int64_t x858 = INT64_MIN;

	t38 = ((x857*x858)>>(x859%x860));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x861 = 123381012565514LL;
	uint8_t x862 = 6U;
	uint64_t x863 = UINT64_MAX;
	int16_t x864 = -1;
	volatile int64_t t39 = -1275358049744836LL;

	t39 = ((x861*x862)>>(x863%x864));

	if (t39 != 740286075393084LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x865 = 0;
	volatile int32_t x866 = 1;
	volatile int64_t x867 = INT64_MIN;
	int64_t x868 = INT64_MIN;
	volatile int32_t t40 = 60;

	t40 = ((x865*x866)>>(x867%x868));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x881 = 0U;
	int64_t x882 = INT64_MIN;
	static uint8_t x883 = 11U;
	int64_t t41 = 245547640334LL;

	t41 = ((x881*x882)>>(x883%x884));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x918 = 193U;
	uint16_t x919 = UINT16_MAX;
	int64_t x920 = -1LL;

	t42 = ((x917*x918)>>(x919%x920));

	if (t42 != 4288643072U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x933 = INT16_MIN;
	static uint64_t x934 = 135481323003124LLU;
	uint64_t x935 = UINT64_MAX;
	uint32_t x936 = UINT32_MAX;
	uint64_t t43 = 11538LLU;

	t43 = ((x933*x934)>>(x935%x936));

	if (t43 != 14007292081543184384LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x949 = UINT32_MAX;
	uint32_t x950 = 1869509U;
	int16_t x951 = -1;
	uint32_t t44 = 32092387U;

	t44 = ((x949*x950)>>(x951%x952));

	if (t44 != 4293097787U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x957 = 43473U;
	uint32_t x958 = 51566U;
	int64_t x959 = INT64_MIN;
	volatile uint32_t t45 = 11793144U;

	t45 = ((x957*x958)>>(x959%x960));

	if (t45 != 2241728718U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1034 = INT8_MIN;
	static int16_t x1035 = INT16_MIN;
	static int8_t x1036 = INT8_MIN;
	volatile int32_t t46 = 10;

	t46 = ((x1033*x1034)>>(x1035%x1036));

	if (t46 != 128) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x1037 = INT8_MAX;
	uint32_t x1038 = UINT32_MAX;
	volatile uint64_t x1039 = UINT64_MAX;
	static int32_t x1040 = -1;
	uint32_t t47 = 60306500U;

	t47 = ((x1037*x1038)>>(x1039%x1040));

	if (t47 != 4294967169U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x1042 = INT32_MIN;
	int32_t x1043 = INT32_MAX;
	static int32_t x1044 = -1;
	uint32_t t48 = 206U;

	t48 = ((x1041*x1042)>>(x1043%x1044));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x1053 = 7566LLU;
	static int8_t x1054 = INT8_MIN;
	static int8_t x1055 = INT8_MAX;
	uint16_t x1056 = 1U;
	uint64_t t49 = 28629139LLU;

	t49 = ((x1053*x1054)>>(x1055%x1056));

	if (t49 != 18446744073708583168LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x1060 = UINT64_MAX;

	t50 = ((x1057*x1058)>>(x1059%x1060));

	if (t50 != 20970840526322240LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x1089 = INT16_MIN;
	int64_t x1091 = INT64_MAX;
	int32_t x1092 = -1;
	int32_t t51 = 165382;

	t51 = ((x1089*x1090)>>(x1091%x1092));

	if (t51 != 4194304) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x1129 = -2;
	int16_t x1130 = INT16_MIN;
	uint8_t x1131 = 0U;
	int8_t x1132 = INT8_MIN;
	volatile int32_t t52 = -2042409;

	t52 = ((x1129*x1130)>>(x1131%x1132));

	if (t52 != 65536) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x1141 = 21727LLU;
	uint32_t x1142 = UINT32_MAX;
	int8_t x1144 = -1;

	t53 = ((x1141*x1142)>>(x1143%x1144));

	if (t53 != 93316754418465LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x1159 = 62U;
	int8_t x1160 = INT8_MIN;
	volatile uint64_t t54 = 22492607864LLU;

	t54 = ((x1157*x1158)>>(x1159%x1160));

	if (t54 != 3LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint8_t x1205 = UINT8_MAX;
	int64_t x1206 = 3633912LL;
	uint8_t x1207 = 23U;
	static volatile int32_t x1208 = INT32_MIN;
	volatile int64_t t55 = 611LL;

	t55 = ((x1205*x1206)>>(x1207%x1208));

	if (t55 != 110LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x1209 = INT32_MIN;
	uint64_t x1210 = 961LLU;
	int64_t x1211 = INT64_MIN;
	static volatile uint64_t t56 = 1725965412486LLU;

	t56 = ((x1209*x1210)>>(x1211%x1212));

	if (t56 != 18446742009977765888LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x1217 = INT32_MAX;
	uint64_t x1218 = 16758122801663906LLU;
	int8_t x1219 = 1;
	int32_t x1220 = INT32_MIN;

	t57 = ((x1217*x1218)>>(x1219%x1220));

	if (t57 != 2382051475429193775LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x1221 = -1;
	uint16_t x1223 = UINT16_MAX;
	int32_t t58 = -8;

	t58 = ((x1221*x1222)>>(x1223%x1224));

	if (t58 != 128) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x1241 = 1449012666371LLU;
	uint32_t x1243 = UINT32_MAX;
	static uint8_t x1244 = UINT8_MAX;
	uint64_t t59 = 97LLU;

	t59 = ((x1241*x1242)>>(x1243%x1244));

	if (t59 != 18399262826657906688LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x1257 = 241U;
	static uint64_t x1258 = 2LLU;
	int64_t x1259 = INT64_MAX;
	static int64_t x1260 = -1LL;

	t60 = ((x1257*x1258)>>(x1259%x1260));

	if (t60 != 482LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x1290 = 167U;
	int32_t x1291 = 281;
	uint16_t x1292 = 11U;
	static volatile int32_t t61 = -517249;

	t61 = ((x1289*x1290)>>(x1291%x1292));

	if (t61 != 10) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x1293 = 26394828631867LLU;
	static int16_t x1295 = -1;
	int8_t x1296 = -1;
	static uint64_t t62 = 10LLU;

	t62 = ((x1293*x1294)>>(x1295%x1296));

	if (t62 != 18446717678880919749LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x1337 = UINT32_MAX;
	static uint8_t x1338 = 0U;
	uint64_t x1339 = UINT64_MAX;
	int32_t x1340 = -1;

	t63 = ((x1337*x1338)>>(x1339%x1340));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x1429 = INT8_MAX;
	volatile uint64_t x1430 = 291401806983984LLU;
	uint16_t x1431 = 2U;
	int32_t x1432 = INT32_MAX;
	volatile uint64_t t64 = 5860111LLU;

	t64 = ((x1429*x1430)>>(x1431%x1432));

	if (t64 != 9252007371741492LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x1525 = 1LL;
	static uint8_t x1526 = 0U;
	uint8_t x1527 = 14U;
	int8_t x1528 = -5;

	t65 = ((x1525*x1526)>>(x1527%x1528));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x1581 = 2U;
	int32_t x1583 = -1;
	volatile int32_t t66 = -1;

	t66 = ((x1581*x1582)>>(x1583%x1584));

	if (t66 != 48) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x1598 = 417177611U;
	uint64_t x1599 = 9397666068LLU;
	volatile uint16_t x1600 = 5U;

	t67 = ((x1597*x1598)>>(x1599%x1600));

	if (t67 != 530114173U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x1633 = 1115;
	uint16_t x1634 = 6312U;
	uint64_t x1635 = UINT64_MAX;
	int8_t x1636 = -7;
	volatile int32_t t68 = 4;

	t68 = ((x1633*x1634)>>(x1635%x1636));

	if (t68 != 109966) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x1681 = UINT32_MAX;
	int16_t x1682 = -1822;
	int32_t x1683 = 25201;
	static volatile int16_t x1684 = -1;
	static uint32_t t69 = 7495361U;

	t69 = ((x1681*x1682)>>(x1683%x1684));

	if (t69 != 1822U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x1707 = UINT32_MAX;
	uint32_t x1708 = UINT32_MAX;
	volatile uint64_t t70 = 6380896LLU;

	t70 = ((x1705*x1706)>>(x1707%x1708));

	if (t70 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x1717 = 2256693U;
	int8_t x1718 = -1;
	uint8_t x1720 = 28U;
	static uint32_t t71 = 675566702U;

	t71 = ((x1717*x1718)>>(x1719%x1720));

	if (t71 != 1073177650U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x1725 = -1;
	static uint8_t x1727 = 1U;
	volatile int32_t x1728 = -1;
	volatile uint64_t t72 = 56215175797LLU;

	t72 = ((x1725*x1726)>>(x1727%x1728));

	if (t72 != 18206095458850657087LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x1742 = -1;
	volatile uint32_t x1743 = 1U;
	static int32_t x1744 = INT32_MIN;
	volatile int64_t t73 = -170374212196928477LL;

	t73 = ((x1741*x1742)>>(x1743%x1744));

	if (t73 != 344078129439608LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x1754 = -41;
	volatile uint16_t x1755 = 13U;
	int16_t x1756 = INT16_MIN;
	int32_t t74 = -88780;

	t74 = ((x1753*x1754)>>(x1755%x1756));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x1757 = 19682U;
	int16_t x1758 = INT16_MAX;
	uint64_t x1759 = UINT64_MAX;
	volatile uint8_t x1760 = UINT8_MAX;
	static int32_t t75 = 226939;

	t75 = ((x1757*x1758)>>(x1759%x1760));

	if (t75 != 644920094) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x1765 = INT8_MIN;
	int16_t x1766 = INT16_MIN;
	int32_t x1767 = 15;
	int16_t x1768 = INT16_MAX;
	int32_t t76 = -98;

	t76 = ((x1765*x1766)>>(x1767%x1768));

	if (t76 != 128) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x1786 = 8126LLU;
	static int8_t x1787 = INT8_MIN;
	static uint16_t x1788 = 1U;
	volatile uint64_t t77 = 1951600945791788602LLU;

	t77 = ((x1785*x1786)>>(x1787%x1788));

	if (t77 != 18446744073709543490LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x1813 = 342U;
	static int16_t x1814 = 3;
	int32_t t78 = -24219586;

	t78 = ((x1813*x1814)>>(x1815%x1816));

	if (t78 != 1026) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x1821 = -31;
	uint8_t x1822 = 0U;
	int64_t x1823 = INT64_MAX;
	int64_t x1824 = INT64_MAX;
	int32_t t79 = 56;

	t79 = ((x1821*x1822)>>(x1823%x1824));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x1833 = INT16_MIN;
	static int16_t x1835 = 0;
	static int32_t x1836 = INT32_MIN;

	t80 = ((x1833*x1834)>>(x1835%x1836));

	if (t80 != 32768) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x1857 = 34;
	volatile int8_t x1858 = 2;
	uint64_t x1859 = UINT64_MAX;
	int64_t x1860 = -1LL;
	int32_t t81 = -125765745;

	t81 = ((x1857*x1858)>>(x1859%x1860));

	if (t81 != 68) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x1869 = -781;
	volatile int16_t x1871 = INT16_MIN;
	volatile int8_t x1872 = INT8_MIN;
	static int32_t t82 = -809;

	t82 = ((x1869*x1870)>>(x1871%x1872));

	if (t82 != 781) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x1873 = 125537679370LLU;
	uint64_t x1874 = UINT64_MAX;
	uint8_t x1875 = 37U;
	int64_t x1876 = 17658198094621LL;
	static uint64_t t83 = 6287755137826470LLU;

	t83 = ((x1873*x1874)>>(x1875%x1876));

	if (t83 != 134217727LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x1877 = UINT32_MAX;
	uint8_t x1878 = 19U;
	volatile int64_t x1879 = INT64_MIN;
	volatile int32_t x1880 = INT32_MIN;
	volatile uint32_t t84 = 18670U;

	t84 = ((x1877*x1878)>>(x1879%x1880));

	if (t84 != 4294967277U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x1886 = -1;
	int32_t x1887 = 0;
	static int8_t x1888 = -45;
	static int64_t t85 = -373356LL;

	t85 = ((x1885*x1886)>>(x1887%x1888));

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x1889 = 2450;
	static uint8_t x1890 = 0U;
	static volatile int16_t x1891 = 14;
	static volatile int32_t t86 = 2100;

	t86 = ((x1889*x1890)>>(x1891%x1892));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x1929 = 1640585194U;
	int16_t x1930 = INT16_MIN;
	int8_t x1931 = 63;
	uint16_t x1932 = 35U;

	t87 = ((x1929*x1930)>>(x1931%x1932));

	if (t87 != 5U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x1957 = 46U;
	static int8_t x1958 = INT8_MIN;
	int32_t x1959 = INT32_MAX;
	static uint32_t t88 = 164962U;

	t88 = ((x1957*x1958)>>(x1959%x1960));

	if (t88 != 2147480704U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x1974 = 32472662LLU;
	volatile int32_t x1975 = -1;
	int16_t x1976 = -1;

	t89 = ((x1973*x1974)>>(x1975%x1976));

	if (t89 != 2128095904170LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x1977 = INT8_MIN;
	int8_t x1978 = -1;
	int64_t x1979 = INT64_MIN;
	int64_t x1980 = -1LL;
	static int32_t t90 = -14358;

	t90 = ((x1977*x1978)>>(x1979%x1980));

	if (t90 != 128) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x1993 = 2056U;
	uint8_t x1995 = UINT8_MAX;
	int16_t x1996 = -56;

	t91 = ((x1993*x1994)>>(x1995%x1996));

	if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x2001 = 1935U;
	int16_t x2002 = -1;
	volatile uint16_t x2003 = 9U;
	static uint32_t x2004 = 88677U;
	volatile uint32_t t92 = 408U;

	t92 = ((x2001*x2002)>>(x2003%x2004));

	if (t92 != 8388604U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x2013 = -1;
	int8_t x2014 = -1;
	static int16_t x2015 = 2;
	int8_t x2016 = 60;
	static int32_t t93 = -10;

	t93 = ((x2013*x2014)>>(x2015%x2016));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x2021 = 32U;
	uint32_t x2022 = 221U;
	int8_t x2023 = -1;
	uint32_t x2024 = UINT32_MAX;
	volatile uint32_t t94 = 649726147U;

	t94 = ((x2021*x2022)>>(x2023%x2024));

	if (t94 != 7072U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x2026 = UINT16_MAX;
	int8_t x2027 = INT8_MAX;
	uint32_t x2028 = 58U;
	int32_t t95 = -142;

	t95 = ((x2025*x2026)>>(x2027%x2028));

	if (t95 != 1048528) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x2053 = 3790926494404LLU;
	uint64_t x2054 = 237929065058LLU;
	volatile int8_t x2056 = INT8_MIN;
	static volatile uint64_t t96 = 80310403016540LLU;

	t96 = ((x2053*x2054)>>(x2055%x2056));

	if (t96 != 9022516558331335556LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x2061 = INT16_MIN;
	uint64_t x2062 = 83656819033495LLU;
	int8_t x2063 = INT8_MIN;
	int8_t x2064 = INT8_MIN;
	uint64_t t97 = 3624035805929887LLU;

	t97 = ((x2061*x2062)>>(x2063%x2064));

	if (t97 != 15705477427619987456LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x2065 = INT8_MAX;
	volatile uint32_t x2066 = UINT32_MAX;
	volatile uint32_t t98 = 23923483U;

	t98 = ((x2065*x2066)>>(x2067%x2068));

	if (t98 != 2147483584U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x2069 = 425LLU;
	uint8_t x2071 = 15U;
	volatile uint64_t t99 = 99LLU;

	t99 = ((x2069*x2070)>>(x2071%x2072));

	if (t99 != 562949953421310LLU) { NG(); } else { ; }
	
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

