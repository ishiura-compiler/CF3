#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x8 = INT64_MIN;
volatile uint64_t x32 = 2191567178293LLU;
uint32_t t1 = 83992680U;
volatile int16_t x109 = INT16_MAX;
static uint8_t x120 = 9U;
static int8_t x206 = -1;
volatile uint32_t t10 = 93U;
int32_t t11 = INT32_MAX;
int16_t x262 = 1;
volatile int16_t x275 = INT16_MAX;
static int8_t x287 = INT8_MIN;
int8_t x291 = -1;
volatile int32_t t16 = 5036;
uint16_t x293 = 9U;
uint16_t x295 = 31U;
volatile int32_t t17 = -1747;
static uint64_t x304 = 116097060119707LLU;
volatile int64_t t19 = 112361194905764817LL;
volatile uint16_t x333 = 37U;
static uint32_t x424 = UINT32_MAX;
int8_t x429 = INT8_MAX;
static volatile uint32_t x487 = 25118U;
volatile uint32_t x494 = UINT32_MAX;
int64_t x496 = 238087853145229LL;
int64_t x516 = INT64_MIN;
int16_t x585 = INT16_MAX;
volatile int64_t x586 = -1LL;
volatile uint32_t t36 = 0U;
static int16_t x750 = INT16_MAX;
int64_t x752 = INT64_MAX;
int32_t x756 = 442632728;
volatile uint64_t t39 = UINT64_MAX;
int8_t x762 = INT8_MIN;
static int32_t x764 = -1;
static uint32_t x797 = 69315U;
volatile uint64_t x798 = 1006620117666LLU;
static volatile uint8_t x818 = 5U;
volatile int16_t x819 = -1;
int32_t x835 = 51;
volatile uint32_t t45 = 15655782U;
int16_t x960 = -1;
int8_t x987 = 0;
volatile int32_t x988 = INT32_MIN;
int32_t t49 = 1;
uint64_t x1010 = UINT64_MAX;
volatile int32_t x1012 = INT32_MIN;
int64_t t50 = 182318LL;
volatile uint64_t t54 = 476549693573162LLU;
int32_t x1058 = 1420;
int32_t t56 = INT32_MAX;
volatile int16_t x1142 = -1;
static int8_t x1160 = INT8_MIN;
int32_t t60 = 30175855;
int8_t x1196 = INT8_MAX;
volatile int16_t x1281 = INT16_MAX;
uint32_t x1283 = 4103U;
uint16_t x1291 = 5U;
int16_t x1300 = INT16_MIN;
volatile int64_t t67 = -615LL;
static uint64_t x1319 = 235295744280LLU;
volatile uint8_t x1335 = 8U;
int16_t x1364 = INT16_MIN;
uint8_t x1379 = 3U;
volatile int64_t t73 = INT64_MAX;
static uint32_t x1406 = 291038U;
int8_t x1407 = INT8_MIN;
static int16_t x1418 = INT16_MIN;
int64_t x1432 = INT64_MAX;
uint8_t x1457 = 5U;
static int8_t x1467 = INT8_MIN;
uint32_t x1484 = 80331128U;
static int16_t x1497 = INT16_MAX;
volatile uint8_t x1507 = 6U;
int8_t x1518 = -13;
static int16_t x1522 = INT16_MIN;
static int32_t x1530 = INT32_MIN;
volatile uint32_t t87 = 358U;
static volatile int64_t x1535 = INT64_MAX;
int32_t x1536 = -685800;
uint32_t t88 = 3120U;
static int8_t x1538 = 4;
static int16_t x1569 = 2;
int8_t x1585 = INT8_MAX;
uint64_t x1588 = 4312183359075543851LLU;
volatile int32_t t92 = 20637894;
int32_t x1589 = INT32_MAX;
uint64_t x1617 = UINT64_MAX;
int32_t x1618 = 239;
uint32_t x1620 = 19069793U;
uint32_t x1653 = UINT32_MAX;
int64_t x1656 = INT64_MIN;
int64_t t99 = INT64_MAX;


void f0(void) {
	uint64_t x5 = UINT64_MAX;
	static int64_t x6 = INT64_MIN;
	static int8_t x7 = 0;
	uint64_t t0 = 167205717LLU;

	t0 = (x5>>((x6+x7)/x8));

	if (t0 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x29 = 336621U;
	static int64_t x30 = 47LL;
	uint64_t x31 = 7LLU;

	t1 = (x29>>((x30+x31)/x32));

	if (t1 != 336621U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x77 = 22935301662LL;
	int8_t x78 = INT8_MIN;
	static uint32_t x79 = 199405174U;
	static volatile int8_t x80 = INT8_MIN;
	int64_t t2 = -267917759321LL;

	t2 = (x77>>((x78+x79)/x80));

	if (t2 != 22935301662LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x85 = UINT8_MAX;
	uint16_t x86 = 0U;
	volatile int16_t x87 = -109;
	uint64_t x88 = 7203391761989498714LLU;
	volatile int32_t t3 = -148;

	t3 = (x85>>((x86+x87)/x88));

	if (t3 != 63) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x110 = INT8_MAX;
	int16_t x111 = 12954;
	volatile int64_t x112 = INT64_MIN;
	volatile int32_t t4 = 0;

	t4 = (x109>>((x110+x111)/x112));

	if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x117 = 40U;
	uint16_t x118 = 5U;
	uint8_t x119 = UINT8_MAX;
	volatile int32_t t5 = -7425;

	t5 = (x117>>((x118+x119)/x120));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x133 = 5U;
	static uint32_t x134 = 583U;
	volatile int32_t x135 = INT32_MAX;
	volatile int64_t x136 = 136175139962LL;
	volatile int32_t t6 = -2906482;

	t6 = (x133>>((x134+x135)/x136));

	if (t6 != 5) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x145 = 125U;
	volatile uint16_t x146 = 7U;
	uint16_t x147 = 9U;
	uint32_t x148 = 14U;
	volatile uint32_t t7 = 698U;

	t7 = (x145>>((x146+x147)/x148));

	if (t7 != 62U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x149 = 3;
	int32_t x150 = INT32_MAX;
	uint64_t x151 = UINT64_MAX;
	int16_t x152 = -1;
	int32_t t8 = 75981152;

	t8 = (x149>>((x150+x151)/x152));

	if (t8 != 3) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x197 = UINT32_MAX;
	volatile int32_t x198 = -56;
	static int16_t x199 = 502;
	uint64_t x200 = 48828365342718526LLU;
	uint32_t t9 = UINT32_MAX;

	t9 = (x197>>((x198+x199)/x200));

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x205 = 5729U;
	static int8_t x207 = INT8_MIN;
	uint32_t x208 = UINT32_MAX;

	t10 = (x205>>((x206+x207)/x208));

	if (t10 != 5729U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x217 = INT32_MAX;
	static int8_t x218 = INT8_MIN;
	int16_t x219 = 0;
	static volatile int16_t x220 = -14857;

	t11 = (x217>>((x218+x219)/x220));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x249 = UINT8_MAX;
	int8_t x250 = INT8_MIN;
	int8_t x251 = 7;
	int64_t x252 = -51366517717LL;
	volatile int32_t t12 = -1;

	t12 = (x249>>((x250+x251)/x252));

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x261 = 9261;
	int8_t x263 = INT8_MAX;
	static int16_t x264 = 1572;
	static int32_t t13 = -71145505;

	t13 = (x261>>((x262+x263)/x264));

	if (t13 != 9261) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x273 = 5756313U;
	int16_t x274 = INT16_MIN;
	uint32_t x276 = UINT32_MAX;
	static uint32_t t14 = 84U;

	t14 = (x273>>((x274+x275)/x276));

	if (t14 != 2878156U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x285 = INT16_MAX;
	uint32_t x286 = 275U;
	static uint32_t x288 = UINT32_MAX;
	volatile int32_t t15 = -4076;

	t15 = (x285>>((x286+x287)/x288));

	if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x289 = 3;
	static uint8_t x290 = 0U;
	int64_t x292 = 4LL;

	t16 = (x289>>((x290+x291)/x292));

	if (t16 != 3) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x294 = 0;
	volatile int8_t x296 = INT8_MAX;

	t17 = (x293>>((x294+x295)/x296));

	if (t17 != 9) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x301 = INT32_MAX;
	static volatile uint64_t x302 = 33674450LLU;
	volatile int16_t x303 = INT16_MIN;
	int32_t t18 = INT32_MAX;

	t18 = (x301>>((x302+x303)/x304));

	if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x317 = 108694701LL;
	static uint16_t x318 = 70U;
	uint64_t x319 = 1365379652052851LLU;
	static int8_t x320 = -1;

	t19 = (x317>>((x318+x319)/x320));

	if (t19 != 108694701LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x334 = -20341135950LL;
	int16_t x335 = -1;
	int32_t x336 = INT32_MIN;
	int32_t t20 = 6021;

	t20 = (x333>>((x334+x335)/x336));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x337 = 6U;
	uint8_t x338 = 8U;
	volatile uint64_t x339 = UINT64_MAX;
	static int8_t x340 = -1;
	volatile uint32_t t21 = 12U;

	t21 = (x337>>((x338+x339)/x340));

	if (t21 != 6U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x389 = UINT8_MAX;
	int16_t x390 = 1;
	uint32_t x391 = UINT32_MAX;
	static volatile uint8_t x392 = UINT8_MAX;
	volatile int32_t t22 = 1008741;

	t22 = (x389>>((x390+x391)/x392));

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x393 = 792492834U;
	int8_t x394 = 3;
	int32_t x395 = INT32_MIN;
	int32_t x396 = INT32_MAX;
	uint32_t t23 = 33U;

	t23 = (x393>>((x394+x395)/x396));

	if (t23 != 792492834U) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x421 = 118073LL;
	static volatile uint32_t x422 = 364229U;
	static int64_t x423 = 24430709LL;
	volatile int64_t t24 = 3380LL;

	t24 = (x421>>((x422+x423)/x424));

	if (t24 != 118073LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x430 = -3226885696LL;
	int16_t x431 = INT16_MAX;
	int32_t x432 = INT32_MIN;
	int32_t t25 = 9;

	t25 = (x429>>((x430+x431)/x432));

	if (t25 != 63) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x461 = INT32_MAX;
	volatile int8_t x462 = 13;
	static int8_t x463 = 0;
	int8_t x464 = INT8_MIN;
	static int32_t t26 = INT32_MAX;

	t26 = (x461>>((x462+x463)/x464));

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x485 = INT64_MAX;
	int8_t x486 = -1;
	volatile int8_t x488 = INT8_MIN;
	volatile int64_t t27 = INT64_MAX;

	t27 = (x485>>((x486+x487)/x488));

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x489 = UINT16_MAX;
	uint64_t x490 = 1514045LLU;
	int8_t x491 = -1;
	static int32_t x492 = INT32_MIN;
	volatile int32_t t28 = -3;

	t28 = (x489>>((x490+x491)/x492));

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x493 = 2;
	int64_t x495 = -1LL;
	int32_t t29 = -131;

	t29 = (x493>>((x494+x495)/x496));

	if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x513 = 3;
	static int16_t x514 = INT16_MAX;
	int32_t x515 = INT32_MIN;
	int32_t t30 = -657865;

	t30 = (x513>>((x514+x515)/x516));

	if (t30 != 3) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x587 = 115544081602782LLU;
	int8_t x588 = -14;
	static int32_t t31 = -2;

	t31 = (x585>>((x586+x587)/x588));

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x597 = INT64_MAX;
	static uint16_t x598 = 104U;
	uint64_t x599 = 1701LLU;
	static uint8_t x600 = 71U;
	int64_t t32 = -107046902819363282LL;

	t32 = (x597>>((x598+x599)/x600));

	if (t32 != 274877906943LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x601 = INT32_MAX;
	volatile int8_t x602 = -1;
	volatile uint64_t x603 = 6575LLU;
	static int16_t x604 = -30;
	volatile int32_t t33 = INT32_MAX;

	t33 = (x601>>((x602+x603)/x604));

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x613 = 259635918844376LL;
	uint16_t x614 = UINT16_MAX;
	static int16_t x615 = INT16_MAX;
	static uint32_t x616 = 827259089U;
	static int64_t t34 = 103728064743LL;

	t34 = (x613>>((x614+x615)/x616));

	if (t34 != 259635918844376LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x661 = 83029053U;
	int32_t x662 = -137237885;
	int32_t x663 = INT32_MAX;
	int64_t x664 = -906745948397LL;
	uint32_t t35 = 458597770U;

	t35 = (x661>>((x662+x663)/x664));

	if (t35 != 83029053U) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x685 = 1U;
	uint16_t x686 = UINT16_MAX;
	uint32_t x687 = 400329U;
	uint64_t x688 = 271263500272432992LLU;

	t36 = (x685>>((x686+x687)/x688));

	if (t36 != 1U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x729 = INT8_MAX;
	volatile int16_t x730 = -1;
	int8_t x731 = -1;
	volatile uint8_t x732 = 3U;
	volatile int32_t t37 = -198489271;

	t37 = (x729>>((x730+x731)/x732));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x749 = INT32_MAX;
	static uint16_t x751 = 21072U;
	volatile int32_t t38 = INT32_MAX;

	t38 = (x749>>((x750+x751)/x752));

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x753 = UINT64_MAX;
	int64_t x754 = -52896LL;
	uint16_t x755 = 94U;

	t39 = (x753>>((x754+x755)/x756));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x761 = INT64_MAX;
	static uint32_t x763 = 0U;
	int64_t t40 = INT64_MAX;

	t40 = (x761>>((x762+x763)/x764));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x785 = INT8_MAX;
	uint32_t x786 = UINT32_MAX;
	int32_t x787 = -1;
	int32_t x788 = -87187;
	static int32_t t41 = 29;

	t41 = (x785>>((x786+x787)/x788));

	if (t41 != 63) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x789 = 3555326154783205595LLU;
	static int32_t x790 = INT32_MAX;
	uint32_t x791 = UINT32_MAX;
	int8_t x792 = INT8_MIN;
	volatile uint64_t t42 = 1624221001455262409LLU;

	t42 = (x789>>((x790+x791)/x792));

	if (t42 != 3555326154783205595LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x799 = 67U;
	static int64_t x800 = 1123988743779168LL;
	static uint32_t t43 = 8821507U;

	t43 = (x797>>((x798+x799)/x800));

	if (t43 != 69315U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x817 = 229U;
	static volatile uint64_t x820 = 86542132146LLU;
	uint32_t t44 = 4039656U;

	t44 = (x817>>((x818+x819)/x820));

	if (t44 != 229U) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x833 = 1U;
	volatile uint32_t x834 = 18000120U;
	static int32_t x836 = -1;

	t45 = (x833>>((x834+x835)/x836));

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x869 = 1U;
	int8_t x870 = INT8_MAX;
	static int64_t x871 = -1LL;
	static int16_t x872 = INT16_MIN;
	volatile int32_t t46 = 6771664;

	t46 = (x869>>((x870+x871)/x872));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x957 = 6772296U;
	int32_t x958 = -1;
	static uint32_t x959 = 3077U;
	volatile uint32_t t47 = 74U;

	t47 = (x957>>((x958+x959)/x960));

	if (t47 != 6772296U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x961 = 119U;
	int64_t x962 = -1LL;
	volatile uint64_t x963 = 152LLU;
	volatile int64_t x964 = 290004986558LL;
	int32_t t48 = 2773186;

	t48 = (x961>>((x962+x963)/x964));

	if (t48 != 119) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x985 = UINT8_MAX;
	uint16_t x986 = UINT16_MAX;

	t49 = (x985>>((x986+x987)/x988));

	if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x1009 = 432754944921972LL;
	static int16_t x1011 = INT16_MIN;

	t50 = (x1009>>((x1010+x1011)/x1012));

	if (t50 != 216377472460986LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x1013 = INT8_MAX;
	volatile uint32_t x1014 = 91937468U;
	int32_t x1015 = INT32_MIN;
	volatile int16_t x1016 = INT16_MIN;
	int32_t t51 = -32;

	t51 = (x1013>>((x1014+x1015)/x1016));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x1025 = INT8_MAX;
	int32_t x1026 = -1;
	static int32_t x1027 = 6049586;
	static int64_t x1028 = -39104169927LL;
	int32_t t52 = 1524312;

	t52 = (x1025>>((x1026+x1027)/x1028));

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x1037 = 50636;
	int16_t x1038 = 8403;
	int8_t x1039 = INT8_MIN;
	uint64_t x1040 = 2046179835769199409LLU;
	volatile int32_t t53 = -376;

	t53 = (x1037>>((x1038+x1039)/x1040));

	if (t53 != 50636) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x1049 = 8545321378312LLU;
	int8_t x1050 = INT8_MIN;
	volatile uint8_t x1051 = 0U;
	int8_t x1052 = -43;

	t54 = (x1049>>((x1050+x1051)/x1052));

	if (t54 != 2136330344578LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x1053 = UINT64_MAX;
	int16_t x1054 = INT16_MIN;
	uint32_t x1055 = 7248U;
	int64_t x1056 = INT64_MAX;
	uint64_t t55 = UINT64_MAX;

	t55 = (x1053>>((x1054+x1055)/x1056));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x1057 = INT32_MAX;
	int16_t x1059 = INT16_MAX;
	int64_t x1060 = 1467561803303396LL;

	t56 = (x1057>>((x1058+x1059)/x1060));

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x1137 = UINT8_MAX;
	static int8_t x1138 = INT8_MAX;
	static uint64_t x1139 = 3LLU;
	int8_t x1140 = INT8_MIN;
	static int32_t t57 = 1340;

	t57 = (x1137>>((x1138+x1139)/x1140));

	if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x1141 = 202U;
	uint16_t x1143 = 1U;
	uint64_t x1144 = 6523929336583LLU;
	volatile int32_t t58 = 6124773;

	t58 = (x1141>>((x1142+x1143)/x1144));

	if (t58 != 202) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x1157 = 2939U;
	int32_t x1158 = INT32_MIN;
	static uint32_t x1159 = 6U;
	volatile int32_t t59 = 1;

	t59 = (x1157>>((x1158+x1159)/x1160));

	if (t59 != 2939) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x1173 = 14;
	int8_t x1174 = -15;
	int16_t x1175 = -1;
	int8_t x1176 = INT8_MAX;

	t60 = (x1173>>((x1174+x1175)/x1176));

	if (t60 != 14) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x1193 = 681677017306998045LLU;
	static volatile uint32_t x1194 = 2U;
	static volatile uint32_t x1195 = UINT32_MAX;
	uint64_t t61 = 1764022987LLU;

	t61 = (x1193>>((x1194+x1195)/x1196));

	if (t61 != 681677017306998045LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x1217 = 27U;
	int16_t x1218 = -1;
	volatile int64_t x1219 = -1LL;
	int64_t x1220 = INT64_MIN;
	volatile uint32_t t62 = 9271U;

	t62 = (x1217>>((x1218+x1219)/x1220));

	if (t62 != 27U) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x1282 = 47673451901LLU;
	int64_t x1284 = INT64_MIN;
	volatile int32_t t63 = 1172;

	t63 = (x1281>>((x1282+x1283)/x1284));

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x1285 = 5U;
	uint32_t x1286 = 29237282U;
	int8_t x1287 = -42;
	int16_t x1288 = -1;
	volatile int32_t t64 = -117230;

	t64 = (x1285>>((x1286+x1287)/x1288));

	if (t64 != 5) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x1289 = UINT32_MAX;
	int8_t x1290 = -36;
	int32_t x1292 = INT32_MAX;
	volatile uint32_t t65 = UINT32_MAX;

	t65 = (x1289>>((x1290+x1291)/x1292));

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x1297 = 16298U;
	uint32_t x1298 = 244895533U;
	static volatile int8_t x1299 = INT8_MIN;
	uint32_t t66 = 484819U;

	t66 = (x1297>>((x1298+x1299)/x1300));

	if (t66 != 16298U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x1301 = 3128374812577430LL;
	uint32_t x1302 = 6U;
	int32_t x1303 = INT32_MIN;
	int32_t x1304 = INT32_MIN;

	t67 = (x1301>>((x1302+x1303)/x1304));

	if (t67 != 1564187406288715LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x1317 = 25U;
	static volatile uint8_t x1318 = 0U;
	static int32_t x1320 = -2032;
	int32_t t68 = -5275537;

	t68 = (x1317>>((x1318+x1319)/x1320));

	if (t68 != 25) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x1333 = 81502530;
	int16_t x1334 = INT16_MIN;
	volatile uint32_t x1336 = UINT32_MAX;
	volatile int32_t t69 = 27;

	t69 = (x1333>>((x1334+x1335)/x1336));

	if (t69 != 81502530) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x1361 = INT32_MAX;
	volatile uint16_t x1362 = 7U;
	int16_t x1363 = INT16_MIN;
	volatile int32_t t70 = INT32_MAX;

	t70 = (x1361>>((x1362+x1363)/x1364));

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x1377 = 128182357U;
	static uint16_t x1378 = 3858U;
	int16_t x1380 = 209;
	uint32_t t71 = 43574U;

	t71 = (x1377>>((x1378+x1379)/x1380));

	if (t71 != 488U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x1381 = INT64_MAX;
	int64_t x1382 = -1LL;
	int32_t x1383 = INT32_MAX;
	static uint64_t x1384 = UINT64_MAX;
	volatile int64_t t72 = INT64_MAX;

	t72 = (x1381>>((x1382+x1383)/x1384));

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x1393 = INT64_MAX;
	volatile int8_t x1394 = -1;
	static int16_t x1395 = INT16_MAX;
	int64_t x1396 = INT64_MIN;

	t73 = (x1393>>((x1394+x1395)/x1396));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x1397 = 56U;
	volatile uint32_t x1398 = UINT32_MAX;
	int8_t x1399 = 0;
	static int8_t x1400 = -4;
	volatile int32_t t74 = 1;

	t74 = (x1397>>((x1398+x1399)/x1400));

	if (t74 != 28) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x1405 = 3;
	uint64_t x1408 = 52584393461873430LLU;
	static int32_t t75 = 2320627;

	t75 = (x1405>>((x1406+x1407)/x1408));

	if (t75 != 3) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint64_t x1417 = 121723LLU;
	volatile uint64_t x1419 = 1518837LLU;
	int32_t x1420 = INT32_MIN;
	volatile uint64_t t76 = 1579274LLU;

	t76 = (x1417>>((x1418+x1419)/x1420));

	if (t76 != 121723LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x1429 = 29U;
	int16_t x1430 = -5312;
	int16_t x1431 = INT16_MAX;
	int32_t t77 = 964139;

	t77 = (x1429>>((x1430+x1431)/x1432));

	if (t77 != 29) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x1458 = 1LLU;
	uint8_t x1459 = UINT8_MAX;
	int16_t x1460 = -1;
	int32_t t78 = -116659726;

	t78 = (x1457>>((x1458+x1459)/x1460));

	if (t78 != 5) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x1465 = UINT16_MAX;
	static int32_t x1466 = -252;
	int8_t x1468 = INT8_MIN;
	int32_t t79 = 0;

	t79 = (x1465>>((x1466+x1467)/x1468));

	if (t79 != 16383) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x1481 = 6;
	static volatile int32_t x1482 = INT32_MIN;
	uint32_t x1483 = 308157U;
	volatile int32_t t80 = 1555;

	t80 = (x1481>>((x1482+x1483)/x1484));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x1493 = 7063666867454LLU;
	int64_t x1494 = 5201LL;
	int16_t x1495 = -1;
	int64_t x1496 = INT64_MIN;
	uint64_t t81 = 25759LLU;

	t81 = (x1493>>((x1494+x1495)/x1496));

	if (t81 != 7063666867454LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x1498 = -1;
	static uint32_t x1499 = 120366097U;
	int64_t x1500 = INT64_MAX;
	volatile int32_t t82 = 1498;

	t82 = (x1497>>((x1498+x1499)/x1500));

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x1501 = 2U;
	int32_t x1502 = 1;
	int8_t x1503 = INT8_MIN;
	volatile uint16_t x1504 = UINT16_MAX;
	int32_t t83 = -4136125;

	t83 = (x1501>>((x1502+x1503)/x1504));

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x1505 = 0;
	uint32_t x1506 = 5916263U;
	int64_t x1508 = INT64_MIN;
	volatile int32_t t84 = -4052;

	t84 = (x1505>>((x1506+x1507)/x1508));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x1517 = 13826U;
	uint16_t x1519 = 1U;
	uint16_t x1520 = UINT16_MAX;
	volatile int32_t t85 = 10323;

	t85 = (x1517>>((x1518+x1519)/x1520));

	if (t85 != 13826) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x1521 = 54U;
	int16_t x1523 = INT16_MAX;
	uint16_t x1524 = 6569U;
	volatile int32_t t86 = 19;

	t86 = (x1521>>((x1522+x1523)/x1524));

	if (t86 != 54) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x1529 = 1860164939U;
	static uint32_t x1531 = UINT32_MAX;
	static uint64_t x1532 = 1234511429875256109LLU;

	t87 = (x1529>>((x1530+x1531)/x1532));

	if (t87 != 1860164939U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x1533 = 54750464U;
	static volatile uint64_t x1534 = UINT64_MAX;

	t88 = (x1533>>((x1534+x1535)/x1536));

	if (t88 != 54750464U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x1537 = 62U;
	int64_t x1539 = -1834LL;
	uint16_t x1540 = UINT16_MAX;
	int32_t t89 = -448930;

	t89 = (x1537>>((x1538+x1539)/x1540));

	if (t89 != 62) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x1541 = UINT32_MAX;
	uint32_t x1542 = UINT32_MAX;
	uint32_t x1543 = 6817U;
	uint64_t x1544 = UINT64_MAX;
	uint32_t t90 = UINT32_MAX;

	t90 = (x1541>>((x1542+x1543)/x1544));

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x1570 = 38U;
	int16_t x1571 = INT16_MIN;
	volatile int32_t x1572 = INT32_MIN;
	volatile int32_t t91 = 278772329;

	t91 = (x1569>>((x1570+x1571)/x1572));

	if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x1586 = UINT64_MAX;
	uint16_t x1587 = 1722U;

	t92 = (x1585>>((x1586+x1587)/x1588));

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x1590 = 3U;
	static volatile int8_t x1591 = -1;
	volatile uint32_t x1592 = UINT32_MAX;
	volatile int32_t t93 = INT32_MAX;

	t93 = (x1589>>((x1590+x1591)/x1592));

	if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x1593 = INT16_MAX;
	uint8_t x1594 = 82U;
	uint64_t x1595 = UINT64_MAX;
	static int64_t x1596 = 28528LL;
	static volatile int32_t t94 = -72550822;

	t94 = (x1593>>((x1594+x1595)/x1596));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x1605 = 1001U;
	static uint64_t x1606 = 1103658833124357LLU;
	uint8_t x1607 = UINT8_MAX;
	volatile int8_t x1608 = INT8_MIN;
	static uint32_t t95 = 33020009U;

	t95 = (x1605>>((x1606+x1607)/x1608));

	if (t95 != 1001U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x1619 = 5LLU;
	volatile uint64_t t96 = UINT64_MAX;

	t96 = (x1617>>((x1618+x1619)/x1620));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x1649 = INT16_MAX;
	int16_t x1650 = 259;
	static int32_t x1651 = -469;
	static uint16_t x1652 = 252U;
	volatile int32_t t97 = 2442;

	t97 = (x1649>>((x1650+x1651)/x1652));

	if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x1654 = -1;
	static volatile int16_t x1655 = INT16_MIN;
	volatile uint32_t t98 = UINT32_MAX;

	t98 = (x1653>>((x1654+x1655)/x1656));

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x1657 = INT64_MAX;
	uint64_t x1658 = 9833022695LLU;
	uint64_t x1659 = 45797776LLU;
	int8_t x1660 = -1;

	t99 = (x1657>>((x1658+x1659)/x1660));

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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

