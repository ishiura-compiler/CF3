#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x45 = INT8_MAX;
int8_t x47 = -1;
uint8_t x48 = 0U;
static uint16_t x58 = 3248U;
uint8_t x78 = 48U;
int8_t x96 = 0;
uint64_t x105 = 3841751436921566228LLU;
int8_t x108 = 0;
uint64_t t5 = 322195455801LLU;
int8_t x265 = 3;
int8_t x266 = INT8_MIN;
uint8_t x290 = 14U;
int64_t x291 = INT64_MAX;
uint16_t x317 = UINT16_MAX;
uint32_t x319 = 404658448U;
int16_t x333 = 387;
volatile int64_t x335 = INT64_MIN;
int32_t x350 = INT32_MAX;
int16_t x429 = -1;
static volatile uint64_t x431 = 585449703085916739LLU;
static uint8_t x432 = 5U;
static int32_t t15 = -10;
int8_t x452 = 0;
uint16_t x475 = 0U;
int32_t t18 = 0;
static uint64_t x533 = 174846035LLU;
static uint32_t x536 = 49U;
int64_t x557 = INT64_MAX;
uint64_t x618 = 4913071037806LLU;
uint64_t x619 = 82735473259016882LLU;
int8_t x626 = 36;
volatile uint8_t x628 = 3U;
static int32_t t24 = 501308917;
int64_t x677 = INT64_MAX;
int64_t x686 = -2034436567618LL;
static uint8_t x700 = 0U;
uint64_t x703 = UINT64_MAX;
int32_t t30 = -4;
static int32_t t31 = 0;
int8_t x787 = 1;
static uint16_t x895 = 25U;
uint16_t x907 = 24415U;
uint8_t x935 = UINT8_MAX;
uint16_t x953 = 20704U;
volatile uint16_t x968 = 27U;
int16_t x1038 = -67;
static uint16_t x1039 = 245U;
volatile int64_t t45 = 13760267410009643LL;
int8_t x1058 = 14;
volatile uint8_t x1060 = 9U;
static uint16_t x1077 = 47U;
uint64_t x1099 = 32976692LLU;
volatile int16_t x1102 = 18;
int8_t x1103 = -1;
static uint16_t x1139 = 77U;
uint16_t x1156 = 15U;
static volatile uint64_t t52 = 532755665598632485LLU;
int32_t x1190 = INT32_MIN;
volatile uint64_t t53 = 30458620744260576LLU;
volatile int32_t t54 = -121;
static int16_t x1239 = -1;
volatile int64_t x1418 = 58172282LL;
int8_t x1434 = 39;
volatile int64_t x1435 = INT64_MIN;
static uint16_t x1436 = 3U;
volatile int64_t t60 = 394294075LL;
uint16_t x1504 = 1U;
static int32_t x1551 = 16043;
uint8_t x1576 = 5U;
int8_t x1578 = -8;
uint8_t x1580 = 6U;
volatile int8_t x1589 = INT8_MAX;
volatile int32_t t67 = 169611;
uint32_t x1609 = 1228938U;
volatile int16_t x1645 = INT16_MAX;
int32_t t70 = 5;
int16_t x1726 = -1;
static uint64_t x1727 = 16934801442LLU;
int16_t x1761 = INT16_MIN;
uint32_t x1764 = 4U;
static volatile int32_t t73 = -1;
volatile uint16_t x1770 = 92U;
volatile uint16_t x1839 = 3U;
uint8_t x1864 = 1U;
static uint16_t x1878 = 15566U;
int8_t x1883 = INT8_MAX;
volatile uint64_t t78 = 2186669LLU;
int64_t x1969 = 115537824637402LL;
int16_t x1972 = 1;
static int8_t x1982 = INT8_MAX;
int64_t x1997 = 382033988778760779LL;
volatile int32_t x2010 = INT32_MAX;
int64_t x2023 = 12381868941LL;
int16_t x2033 = -91;
int8_t x2036 = 14;
uint16_t x2077 = UINT16_MAX;
uint64_t x2080 = 0LLU;
int32_t t88 = 3919;
uint64_t x2131 = UINT64_MAX;
uint8_t x2132 = 28U;
static volatile uint16_t x2248 = 2U;
int8_t x2290 = 6;
int32_t x2291 = INT32_MIN;
volatile int32_t t95 = -35385;
int8_t x2321 = 8;
int32_t x2323 = INT32_MIN;
uint64_t x2342 = UINT64_MAX;
uint64_t x2382 = 13121879LLU;
static int16_t x2397 = INT16_MIN;
int32_t x2400 = 0;


void f0(void) {
	static int8_t x37 = INT8_MIN;
	volatile uint8_t x38 = UINT8_MAX;
	static uint8_t x39 = 1U;
	uint8_t x40 = 4U;
	int32_t t0 = -628614;

	t0 = ((x37*(x38==x39))>>x40);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x46 = INT64_MAX;
	volatile int32_t t1 = -267;

	t1 = ((x45*(x46==x47))>>x48);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x57 = INT8_MAX;
	int8_t x59 = INT8_MAX;
	static volatile uint8_t x60 = 0U;
	static volatile int32_t t2 = 519768829;

	t2 = ((x57*(x58==x59))>>x60);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x77 = UINT32_MAX;
	int64_t x79 = INT64_MAX;
	volatile uint8_t x80 = 1U;
	static uint32_t t3 = 7391U;

	t3 = ((x77*(x78==x79))>>x80);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x93 = 61;
	static int8_t x94 = 55;
	int64_t x95 = -32647LL;
	volatile int32_t t4 = 158037299;

	t4 = ((x93*(x94==x95))>>x96);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x106 = INT16_MIN;
	int64_t x107 = -1LL;

	t5 = ((x105*(x106==x107))>>x108);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x137 = INT64_MIN;
	uint8_t x138 = UINT8_MAX;
	int16_t x139 = INT16_MAX;
	uint8_t x140 = 1U;
	static int64_t t6 = 39LL;

	t6 = ((x137*(x138==x139))>>x140);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x145 = -1;
	int64_t x146 = -18LL;
	int32_t x147 = INT32_MIN;
	uint8_t x148 = 0U;
	int32_t t7 = -1;

	t7 = ((x145*(x146==x147))>>x148);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x267 = -13;
	int8_t x268 = 12;
	volatile int32_t t8 = 1652;

	t8 = ((x265*(x266==x267))>>x268);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x289 = INT64_MIN;
	static int8_t x292 = 1;
	volatile int64_t t9 = 73294497581509490LL;

	t9 = ((x289*(x290==x291))>>x292);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x318 = 10789370U;
	volatile uint8_t x320 = 5U;
	static volatile int32_t t10 = 57810;

	t10 = ((x317*(x318==x319))>>x320);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x334 = -14070;
	uint16_t x336 = 15U;
	volatile int32_t t11 = 19961224;

	t11 = ((x333*(x334==x335))>>x336);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x349 = UINT64_MAX;
	int64_t x351 = 635502308LL;
	static uint8_t x352 = 2U;
	volatile uint64_t t12 = 136LLU;

	t12 = ((x349*(x350==x351))>>x352);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x369 = -1;
	int8_t x370 = INT8_MIN;
	static uint64_t x371 = UINT64_MAX;
	int8_t x372 = 0;
	volatile int32_t t13 = 38658263;

	t13 = ((x369*(x370==x371))>>x372);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x405 = 6;
	static int64_t x406 = -1LL;
	static volatile int8_t x407 = INT8_MAX;
	uint32_t x408 = 29U;
	volatile int32_t t14 = 107619;

	t14 = ((x405*(x406==x407))>>x408);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x430 = 3849249U;

	t15 = ((x429*(x430==x431))>>x432);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x449 = 0;
	int8_t x450 = INT8_MAX;
	uint64_t x451 = 4319766LLU;
	int32_t t16 = -102;

	t16 = ((x449*(x450==x451))>>x452);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x473 = -1LL;
	volatile int64_t x474 = 1837804LL;
	int8_t x476 = 28;
	volatile int64_t t17 = -119501562481LL;

	t17 = ((x473*(x474==x475))>>x476);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x517 = -1;
	static int64_t x518 = INT64_MAX;
	int16_t x519 = INT16_MIN;
	static int16_t x520 = 6;

	t18 = ((x517*(x518==x519))>>x520);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x534 = 55585770506457698LL;
	static uint32_t x535 = 10571U;
	uint64_t t19 = 18266570LLU;

	t19 = ((x533*(x534==x535))>>x536);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x558 = INT32_MAX;
	int32_t x559 = -174769856;
	int8_t x560 = 0;
	int64_t t20 = 3116170488LL;

	t20 = ((x557*(x558==x559))>>x560);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x569 = -1;
	int32_t x570 = INT32_MIN;
	int16_t x571 = INT16_MIN;
	int16_t x572 = 0;
	volatile int32_t t21 = 95952;

	t21 = ((x569*(x570==x571))>>x572);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x573 = INT32_MAX;
	volatile uint8_t x574 = 17U;
	int64_t x575 = -3432LL;
	volatile uint16_t x576 = 9U;
	int32_t t22 = 18869;

	t22 = ((x573*(x574==x575))>>x576);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x617 = -1;
	int16_t x620 = 2;
	int32_t t23 = 3181072;

	t23 = ((x617*(x618==x619))>>x620);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x625 = 223;
	int64_t x627 = INT64_MAX;

	t24 = ((x625*(x626==x627))>>x628);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x641 = INT16_MIN;
	int32_t x642 = -1;
	int16_t x643 = INT16_MAX;
	uint16_t x644 = 0U;
	volatile int32_t t25 = 1;

	t25 = ((x641*(x642==x643))>>x644);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x678 = -110921LL;
	int16_t x679 = -13;
	volatile uint8_t x680 = 5U;
	static volatile int64_t t26 = -15407686627LL;

	t26 = ((x677*(x678==x679))>>x680);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x685 = INT32_MIN;
	uint16_t x687 = 21U;
	int32_t x688 = 13;
	static int32_t t27 = -31781346;

	t27 = ((x685*(x686==x687))>>x688);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x697 = -27;
	int32_t x698 = -1;
	volatile uint16_t x699 = 1U;
	volatile int32_t t28 = -33391;

	t28 = ((x697*(x698==x699))>>x700);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x701 = 49152LLU;
	int8_t x702 = INT8_MIN;
	volatile uint8_t x704 = 1U;
	uint64_t t29 = 132824437754690577LLU;

	t29 = ((x701*(x702==x703))>>x704);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x721 = -1;
	volatile uint8_t x722 = 21U;
	volatile uint16_t x723 = 31U;
	int8_t x724 = 0;

	t30 = ((x721*(x722==x723))>>x724);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x757 = -22;
	uint8_t x758 = 94U;
	volatile int8_t x759 = INT8_MIN;
	static uint8_t x760 = 11U;

	t31 = ((x757*(x758==x759))>>x760);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x765 = INT8_MAX;
	uint64_t x766 = UINT64_MAX;
	volatile int8_t x767 = 2;
	uint8_t x768 = 0U;
	volatile int32_t t32 = -460275613;

	t32 = ((x765*(x766==x767))>>x768);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x773 = 3354661LLU;
	volatile uint32_t x774 = 85U;
	int32_t x775 = 0;
	volatile uint8_t x776 = 3U;
	volatile uint64_t t33 = 2178601852164370LLU;

	t33 = ((x773*(x774==x775))>>x776);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x781 = INT16_MAX;
	int16_t x782 = INT16_MAX;
	volatile int32_t x783 = INT32_MAX;
	volatile uint8_t x784 = 18U;
	static int32_t t34 = 13;

	t34 = ((x781*(x782==x783))>>x784);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x785 = INT32_MAX;
	int16_t x786 = INT16_MIN;
	int16_t x788 = 11;
	volatile int32_t t35 = -1;

	t35 = ((x785*(x786==x787))>>x788);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x865 = -1;
	int8_t x866 = 13;
	int64_t x867 = 2475768LL;
	static uint16_t x868 = 4U;
	int32_t t36 = -39587498;

	t36 = ((x865*(x866==x867))>>x868);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x869 = UINT64_MAX;
	static uint8_t x870 = 0U;
	volatile int8_t x871 = INT8_MIN;
	static uint8_t x872 = 20U;
	uint64_t t37 = 1505362513466666751LLU;

	t37 = ((x869*(x870==x871))>>x872);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x893 = INT32_MAX;
	int8_t x894 = INT8_MIN;
	int8_t x896 = 0;
	volatile int32_t t38 = -31980;

	t38 = ((x893*(x894==x895))>>x896);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x905 = UINT8_MAX;
	int16_t x906 = INT16_MIN;
	int32_t x908 = 1;
	int32_t t39 = -1838;

	t39 = ((x905*(x906==x907))>>x908);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x933 = 2U;
	static uint32_t x934 = UINT32_MAX;
	uint8_t x936 = 1U;
	static int32_t t40 = 0;

	t40 = ((x933*(x934==x935))>>x936);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x954 = -1LL;
	int64_t x955 = INT64_MAX;
	uint8_t x956 = 13U;
	int32_t t41 = 17419;

	t41 = ((x953*(x954==x955))>>x956);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x965 = 265444694222249842LLU;
	static uint32_t x966 = UINT32_MAX;
	int32_t x967 = INT32_MIN;
	static volatile uint64_t t42 = 658501888461188102LLU;

	t42 = ((x965*(x966==x967))>>x968);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x981 = INT32_MAX;
	int64_t x982 = INT64_MIN;
	int16_t x983 = INT16_MAX;
	uint8_t x984 = 6U;
	int32_t t43 = -2694937;

	t43 = ((x981*(x982==x983))>>x984);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1037 = 4311147486717047LLU;
	uint64_t x1040 = 0LLU;
	static volatile uint64_t t44 = 8171952955535LLU;

	t44 = ((x1037*(x1038==x1039))>>x1040);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1045 = INT64_MIN;
	int64_t x1046 = 14708417LL;
	static uint8_t x1047 = 13U;
	volatile uint64_t x1048 = 4LLU;

	t45 = ((x1045*(x1046==x1047))>>x1048);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x1057 = UINT32_MAX;
	static volatile int8_t x1059 = INT8_MIN;
	volatile uint32_t t46 = 427132U;

	t46 = ((x1057*(x1058==x1059))>>x1060);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x1078 = 13538U;
	static int64_t x1079 = -1LL;
	int8_t x1080 = 7;
	volatile int32_t t47 = 37;

	t47 = ((x1077*(x1078==x1079))>>x1080);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1097 = -178580;
	int64_t x1098 = INT64_MIN;
	int8_t x1100 = 18;
	int32_t t48 = 1;

	t48 = ((x1097*(x1098==x1099))>>x1100);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x1101 = 457932060LLU;
	int16_t x1104 = 0;
	volatile uint64_t t49 = 4491118791167081LLU;

	t49 = ((x1101*(x1102==x1103))>>x1104);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x1137 = INT8_MIN;
	volatile uint16_t x1138 = UINT16_MAX;
	volatile uint16_t x1140 = 7U;
	int32_t t50 = 10641502;

	t50 = ((x1137*(x1138==x1139))>>x1140);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x1153 = INT64_MAX;
	int16_t x1154 = INT16_MIN;
	int16_t x1155 = INT16_MIN;
	int64_t t51 = -65LL;

	t51 = ((x1153*(x1154==x1155))>>x1156);

	if (t51 != 281474976710655LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x1173 = UINT64_MAX;
	static int8_t x1174 = INT8_MIN;
	volatile uint32_t x1175 = UINT32_MAX;
	volatile int8_t x1176 = 12;

	t52 = ((x1173*(x1174==x1175))>>x1176);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x1189 = UINT64_MAX;
	int16_t x1191 = INT16_MAX;
	volatile uint8_t x1192 = 48U;

	t53 = ((x1189*(x1190==x1191))>>x1192);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1221 = INT8_MAX;
	int64_t x1222 = INT64_MAX;
	static uint64_t x1223 = 397532LLU;
	int16_t x1224 = 10;

	t54 = ((x1221*(x1222==x1223))>>x1224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x1237 = 2U;
	volatile int16_t x1238 = -1;
	volatile uint8_t x1240 = 1U;
	static volatile int32_t t55 = 121579;

	t55 = ((x1237*(x1238==x1239))>>x1240);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x1313 = INT32_MAX;
	volatile int16_t x1314 = -1;
	volatile uint64_t x1315 = 6928LLU;
	int16_t x1316 = 0;
	int32_t t56 = -348217;

	t56 = ((x1313*(x1314==x1315))>>x1316);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x1373 = 5113U;
	uint64_t x1374 = 37LLU;
	static int8_t x1375 = INT8_MIN;
	uint16_t x1376 = 5U;
	volatile int32_t t57 = 26;

	t57 = ((x1373*(x1374==x1375))>>x1376);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x1377 = UINT16_MAX;
	int8_t x1378 = 22;
	int64_t x1379 = 105079425LL;
	static uint8_t x1380 = 0U;
	static int32_t t58 = 5982;

	t58 = ((x1377*(x1378==x1379))>>x1380);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x1417 = 0U;
	int16_t x1419 = INT16_MAX;
	static uint8_t x1420 = 16U;
	int32_t t59 = 9;

	t59 = ((x1417*(x1418==x1419))>>x1420);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x1433 = INT64_MIN;

	t60 = ((x1433*(x1434==x1435))>>x1436);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x1477 = INT32_MIN;
	int8_t x1478 = INT8_MIN;
	int32_t x1479 = INT32_MAX;
	int8_t x1480 = 1;
	volatile int32_t t61 = 99794867;

	t61 = ((x1477*(x1478==x1479))>>x1480);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x1501 = -1;
	uint32_t x1502 = 17403961U;
	int16_t x1503 = -1;
	volatile int32_t t62 = -44217067;

	t62 = ((x1501*(x1502==x1503))>>x1504);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x1505 = UINT8_MAX;
	int32_t x1506 = INT32_MIN;
	static volatile int8_t x1507 = INT8_MAX;
	static int8_t x1508 = 1;
	static int32_t t63 = -16727138;

	t63 = ((x1505*(x1506==x1507))>>x1508);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x1549 = 95U;
	volatile uint8_t x1550 = UINT8_MAX;
	uint8_t x1552 = 6U;
	volatile int32_t t64 = 438207305;

	t64 = ((x1549*(x1550==x1551))>>x1552);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x1573 = -10;
	int8_t x1574 = -1;
	int8_t x1575 = INT8_MIN;
	volatile int32_t t65 = 55101;

	t65 = ((x1573*(x1574==x1575))>>x1576);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x1577 = 27657U;
	static volatile uint64_t x1579 = UINT64_MAX;
	int32_t t66 = 6;

	t66 = ((x1577*(x1578==x1579))>>x1580);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x1590 = -84;
	static int8_t x1591 = 1;
	uint8_t x1592 = 0U;

	t67 = ((x1589*(x1590==x1591))>>x1592);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x1610 = -1LL;
	static int16_t x1611 = -1;
	volatile int8_t x1612 = 0;
	uint32_t t68 = 1U;

	t68 = ((x1609*(x1610==x1611))>>x1612);

	if (t68 != 1228938U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x1646 = INT16_MIN;
	int64_t x1647 = INT64_MIN;
	int8_t x1648 = 15;
	int32_t t69 = 1;

	t69 = ((x1645*(x1646==x1647))>>x1648);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x1665 = -22829;
	static volatile int8_t x1666 = INT8_MIN;
	uint64_t x1667 = 11027LLU;
	static volatile uint8_t x1668 = 2U;

	t70 = ((x1665*(x1666==x1667))>>x1668);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x1725 = INT64_MIN;
	int16_t x1728 = 1;
	static int64_t t71 = 1121423LL;

	t71 = ((x1725*(x1726==x1727))>>x1728);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x1745 = INT16_MIN;
	int8_t x1746 = -1;
	static uint8_t x1747 = 1U;
	int8_t x1748 = 28;
	static volatile int32_t t72 = -18;

	t72 = ((x1745*(x1746==x1747))>>x1748);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x1762 = INT64_MAX;
	int64_t x1763 = -1LL;

	t73 = ((x1761*(x1762==x1763))>>x1764);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x1769 = INT8_MIN;
	int16_t x1771 = INT16_MIN;
	uint32_t x1772 = 24U;
	volatile int32_t t74 = 233069368;

	t74 = ((x1769*(x1770==x1771))>>x1772);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x1837 = INT16_MIN;
	uint16_t x1838 = 5U;
	static int8_t x1840 = 1;
	int32_t t75 = -544;

	t75 = ((x1837*(x1838==x1839))>>x1840);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x1861 = -1432;
	int32_t x1862 = INT32_MIN;
	uint32_t x1863 = 231U;
	int32_t t76 = -26213;

	t76 = ((x1861*(x1862==x1863))>>x1864);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x1877 = INT8_MAX;
	int32_t x1879 = INT32_MIN;
	static volatile int8_t x1880 = 1;
	int32_t t77 = 20324299;

	t77 = ((x1877*(x1878==x1879))>>x1880);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x1881 = 28685LLU;
	int64_t x1882 = INT64_MAX;
	uint8_t x1884 = 25U;

	t78 = ((x1881*(x1882==x1883))>>x1884);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x1970 = UINT32_MAX;
	int16_t x1971 = INT16_MIN;
	volatile int64_t t79 = -192LL;

	t79 = ((x1969*(x1970==x1971))>>x1972);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x1973 = INT16_MIN;
	uint8_t x1974 = UINT8_MAX;
	int16_t x1975 = 31;
	uint64_t x1976 = 22LLU;
	volatile int32_t t80 = -7180563;

	t80 = ((x1973*(x1974==x1975))>>x1976);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x1981 = INT64_MIN;
	volatile uint16_t x1983 = 31184U;
	static uint8_t x1984 = 9U;
	int64_t t81 = -123LL;

	t81 = ((x1981*(x1982==x1983))>>x1984);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x1998 = INT16_MIN;
	volatile int16_t x1999 = INT16_MIN;
	int16_t x2000 = 2;
	volatile int64_t t82 = 25527022949LL;

	t82 = ((x1997*(x1998==x1999))>>x2000);

	if (t82 != 95508497194690194LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x2009 = 35U;
	int64_t x2011 = -1464812336414LL;
	static uint8_t x2012 = 1U;
	static volatile int32_t t83 = -356354146;

	t83 = ((x2009*(x2010==x2011))>>x2012);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x2017 = -15;
	volatile int16_t x2018 = INT16_MIN;
	int8_t x2019 = INT8_MAX;
	int8_t x2020 = 24;
	volatile int32_t t84 = 98;

	t84 = ((x2017*(x2018==x2019))>>x2020);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x2021 = INT16_MAX;
	int16_t x2022 = -1;
	int8_t x2024 = 5;
	volatile int32_t t85 = 8;

	t85 = ((x2021*(x2022==x2023))>>x2024);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x2034 = INT16_MIN;
	int64_t x2035 = -2017820091628LL;
	int32_t t86 = 15;

	t86 = ((x2033*(x2034==x2035))>>x2036);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x2049 = INT8_MAX;
	uint32_t x2050 = 60628U;
	int32_t x2051 = -11659;
	static uint8_t x2052 = 4U;
	volatile int32_t t87 = -16083270;

	t87 = ((x2049*(x2050==x2051))>>x2052);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x2078 = 2U;
	uint8_t x2079 = UINT8_MAX;

	t88 = ((x2077*(x2078==x2079))>>x2080);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x2129 = -1;
	uint16_t x2130 = 14024U;
	volatile int32_t t89 = 837493;

	t89 = ((x2129*(x2130==x2131))>>x2132);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x2177 = 855827LLU;
	volatile uint64_t x2178 = 33553174991253997LLU;
	int16_t x2179 = -1;
	uint8_t x2180 = 0U;
	static volatile uint64_t t90 = 651487435214191LLU;

	t90 = ((x2177*(x2178==x2179))>>x2180);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x2205 = INT16_MIN;
	static volatile uint32_t x2206 = UINT32_MAX;
	uint8_t x2207 = UINT8_MAX;
	int8_t x2208 = 0;
	int32_t t91 = 1107;

	t91 = ((x2205*(x2206==x2207))>>x2208);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x2245 = 116U;
	uint16_t x2246 = UINT16_MAX;
	int32_t x2247 = -1;
	static volatile int32_t t92 = 0;

	t92 = ((x2245*(x2246==x2247))>>x2248);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x2265 = INT8_MIN;
	int8_t x2266 = 0;
	int64_t x2267 = 19180887851839606LL;
	static volatile uint8_t x2268 = 5U;
	static volatile int32_t t93 = 71369393;

	t93 = ((x2265*(x2266==x2267))>>x2268);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x2281 = -1;
	uint16_t x2282 = UINT16_MAX;
	static int8_t x2283 = 2;
	int16_t x2284 = 0;
	volatile int32_t t94 = 13;

	t94 = ((x2281*(x2282==x2283))>>x2284);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x2289 = -1;
	uint8_t x2292 = 26U;

	t95 = ((x2289*(x2290==x2291))>>x2292);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x2322 = UINT16_MAX;
	static volatile int8_t x2324 = 0;
	int32_t t96 = -119;

	t96 = ((x2321*(x2322==x2323))>>x2324);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x2341 = INT16_MIN;
	int8_t x2343 = INT8_MIN;
	uint16_t x2344 = 1U;
	int32_t t97 = 14981128;

	t97 = ((x2341*(x2342==x2343))>>x2344);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x2381 = INT16_MAX;
	uint8_t x2383 = 13U;
	uint64_t x2384 = 2LLU;
	volatile int32_t t98 = -9;

	t98 = ((x2381*(x2382==x2383))>>x2384);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x2398 = UINT32_MAX;
	volatile uint16_t x2399 = 108U;
	int32_t t99 = 377;

	t99 = ((x2397*(x2398==x2399))>>x2400);

	if (t99 != 0) { NG(); } else { ; }
	
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

