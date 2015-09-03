#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x84 = -1;
volatile int8_t x152 = -1;
volatile int32_t t3 = 3;
static int8_t x215 = -1;
volatile uint32_t x233 = 167927898U;
uint16_t x319 = 135U;
int16_t x324 = 31;
int32_t t11 = -1;
int64_t x338 = 16198558642LL;
volatile int64_t x340 = -272123789002081LL;
int32_t t13 = INT32_MAX;
int64_t x366 = -75594739943LL;
volatile int64_t x367 = 6LL;
static int32_t t14 = 1;
int32_t x392 = INT32_MIN;
uint8_t x414 = 121U;
uint32_t x415 = UINT32_MAX;
int32_t t17 = 8;
int8_t x471 = 14;
int8_t x497 = 1;
static uint64_t x500 = UINT64_MAX;
uint32_t x503 = UINT32_MAX;
int32_t x514 = INT32_MIN;
uint32_t x515 = 58621U;
uint64_t x520 = UINT64_MAX;
static uint32_t x538 = 883U;
volatile int32_t x557 = 1;
int32_t t24 = -2070862;
static volatile int32_t t25 = -165;
int16_t x596 = INT16_MAX;
int64_t x632 = INT64_MIN;
uint16_t x638 = UINT16_MAX;
static int32_t x640 = INT32_MIN;
int32_t x646 = -161623;
static uint32_t x665 = 24589U;
int8_t x667 = INT8_MAX;
static volatile uint32_t t30 = 218688U;
volatile uint32_t x692 = UINT32_MAX;
uint64_t x713 = 246802645406LLU;
int8_t x714 = INT8_MIN;
uint16_t x716 = 33U;
volatile uint64_t t33 = 4337173404433439LLU;
uint32_t x730 = 12306619U;
static uint8_t x805 = 1U;
volatile uint32_t x808 = UINT32_MAX;
volatile int32_t t37 = -4663;
uint64_t x858 = 188LLU;
int8_t x869 = 17;
static uint32_t x877 = 465U;
int32_t x880 = 3739;
static volatile int16_t x898 = INT16_MIN;
volatile int16_t x899 = INT16_MAX;
uint64_t x930 = UINT64_MAX;
int32_t t45 = -201;
static int32_t x944 = -918361517;
static volatile uint64_t t46 = UINT64_MAX;
volatile uint64_t x971 = UINT64_MAX;
int64_t x972 = INT64_MAX;
uint32_t x974 = UINT32_MAX;
volatile int8_t x993 = 0;
uint8_t x994 = UINT8_MAX;
static volatile int64_t x996 = 3106948889694521LL;
int32_t t51 = 1;
int8_t x1002 = INT8_MIN;
int8_t x1009 = INT8_MAX;
uint16_t x1013 = UINT16_MAX;
uint8_t x1033 = UINT8_MAX;
uint32_t x1040 = 839835461U;
volatile uint64_t x1046 = 289429842162749LLU;
uint32_t x1049 = 11288U;
uint64_t x1050 = 2035996019380742LLU;
volatile uint64_t x1152 = UINT64_MAX;
int8_t x1197 = 0;
static volatile uint64_t x1219 = 769113LLU;
int16_t x1234 = INT16_MAX;
uint64_t x1236 = 902509115752711787LLU;
uint32_t x1261 = 16042943U;
uint8_t x1262 = 1U;
int32_t x1287 = -1;
static volatile uint64_t t69 = UINT64_MAX;
volatile int32_t x1402 = INT32_MIN;
int8_t x1410 = 7;
uint8_t x1429 = UINT8_MAX;
static int32_t x1430 = -1;
volatile uint16_t x1431 = 6U;
static int64_t x1440 = -15430585090471744LL;
volatile int64_t x1513 = 14667795443016LL;
uint32_t x1515 = 919942U;
uint64_t x1541 = 1988643189774LLU;
volatile uint8_t x1559 = 0U;
uint8_t x1621 = UINT8_MAX;
int8_t x1654 = INT8_MAX;
static int8_t x1655 = INT8_MIN;
static int64_t x1664 = 16307319225756LL;
int32_t x1666 = -1;
volatile int32_t x1667 = -490346122;
int32_t x1673 = 4834;
int8_t x1683 = INT8_MIN;
uint32_t x1714 = 131U;
int16_t x1715 = INT16_MIN;
uint64_t x1831 = 6613404108590276LLU;
uint8_t x1870 = 0U;
uint32_t x1887 = 1452U;
static int8_t x1889 = INT8_MAX;
int32_t t99 = 559953;


void f0(void) {
	uint8_t x77 = UINT8_MAX;
	int64_t x78 = -9LL;
	uint16_t x79 = UINT16_MAX;
	volatile int16_t x80 = INT16_MIN;
	static volatile int32_t t0 = -1;

	t0 = (x77<<((x78*x79)/x80));

	if (t0 != 33423360) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x81 = INT64_MAX;
	int8_t x82 = INT8_MIN;
	uint32_t x83 = 352603U;
	volatile int64_t t1 = INT64_MAX;

	t1 = (x81<<((x82*x83)/x84));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x149 = INT32_MAX;
	static uint64_t x150 = 13302983984LLU;
	volatile int8_t x151 = INT8_MAX;
	int32_t t2 = INT32_MAX;

	t2 = (x149<<((x150*x151)/x152));

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x169 = UINT16_MAX;
	int16_t x170 = -1;
	int64_t x171 = -25LL;
	volatile int32_t x172 = INT32_MIN;

	t3 = (x169<<((x170*x171)/x172));

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x189 = 61U;
	uint16_t x190 = 0U;
	uint64_t x191 = UINT64_MAX;
	int32_t x192 = INT32_MIN;
	static int32_t t4 = -1224;

	t4 = (x189<<((x190*x191)/x192));

	if (t4 != 61) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x197 = 485899705887835937LLU;
	uint32_t x198 = UINT32_MAX;
	volatile int16_t x199 = INT16_MIN;
	int16_t x200 = INT16_MIN;
	volatile uint64_t t5 = 8LLU;

	t5 = (x197<<((x198*x199)/x200));

	if (t5 != 485899705887835937LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x213 = 1;
	int8_t x214 = -1;
	int32_t x216 = INT32_MIN;
	int32_t t6 = -4;

	t6 = (x213<<((x214*x215)/x216));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x234 = 16;
	volatile int32_t x235 = -11721;
	int32_t x236 = INT32_MIN;
	uint32_t t7 = 340021903U;

	t7 = (x233<<((x234*x235)/x236));

	if (t7 != 167927898U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x269 = 1U;
	volatile int64_t x270 = INT64_MIN;
	static uint8_t x271 = 0U;
	volatile uint64_t x272 = 5LLU;
	volatile int32_t t8 = -14195;

	t8 = (x269<<((x270*x271)/x272));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x285 = INT8_MAX;
	uint64_t x286 = 1119844441904983LLU;
	uint32_t x287 = 16299365U;
	int8_t x288 = INT8_MIN;
	int32_t t9 = 1;

	t9 = (x285<<((x286*x287)/x288));

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x317 = 3510;
	int8_t x318 = -2;
	int8_t x320 = INT8_MIN;
	volatile int32_t t10 = -381524;

	t10 = (x317<<((x318*x319)/x320));

	if (t10 != 14040) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint8_t x321 = 117U;
	int16_t x322 = -1;
	int32_t x323 = -1;

	t11 = (x321<<((x322*x323)/x324));

	if (t11 != 117) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x325 = 1969179854647149843LL;
	int16_t x326 = -479;
	uint16_t x327 = 24U;
	int16_t x328 = INT16_MIN;
	volatile int64_t t12 = 0LL;

	t12 = (x325<<((x326*x327)/x328));

	if (t12 != 1969179854647149843LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x337 = INT32_MAX;
	uint8_t x339 = UINT8_MAX;

	t13 = (x337<<((x338*x339)/x340));

	if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint16_t x365 = UINT16_MAX;
	volatile uint64_t x368 = 1198783756276415337LLU;

	t14 = (x365<<((x366*x367)/x368));

	if (t14 != 2147450880) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x389 = INT32_MAX;
	int32_t x390 = INT32_MIN;
	volatile uint64_t x391 = 4LLU;
	int32_t t15 = INT32_MAX;

	t15 = (x389<<((x390*x391)/x392));

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x413 = INT16_MAX;
	int32_t x416 = INT32_MAX;
	volatile int32_t t16 = -794;

	t16 = (x413<<((x414*x415)/x416));

	if (t16 != 65534) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x429 = 1;
	int16_t x430 = INT16_MIN;
	uint64_t x431 = UINT64_MAX;
	uint32_t x432 = UINT32_MAX;

	t17 = (x429<<((x430*x431)/x432));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x469 = INT64_MAX;
	volatile int32_t x470 = -1;
	uint16_t x472 = UINT16_MAX;
	int64_t t18 = INT64_MAX;

	t18 = (x469<<((x470*x471)/x472));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x498 = 1;
	int32_t x499 = INT32_MIN;
	static int32_t t19 = -31;

	t19 = (x497<<((x498*x499)/x500));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x501 = 770LLU;
	uint32_t x502 = 9U;
	uint32_t x504 = 1471209240U;
	uint64_t t20 = 160773761535LLU;

	t20 = (x501<<((x502*x503)/x504));

	if (t20 != 3080LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x513 = 22U;
	int64_t x516 = INT64_MIN;
	static int32_t t21 = -469378;

	t21 = (x513<<((x514*x515)/x516));

	if (t21 != 22) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x517 = 4U;
	int64_t x518 = 31845325552LL;
	int16_t x519 = -1;
	volatile int32_t t22 = -792257;

	t22 = (x517<<((x518*x519)/x520));

	if (t22 != 4) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x537 = INT64_MAX;
	int8_t x539 = INT8_MAX;
	uint64_t x540 = UINT64_MAX;
	int64_t t23 = INT64_MAX;

	t23 = (x537<<((x538*x539)/x540));

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x558 = -1;
	static int8_t x559 = -1;
	volatile int64_t x560 = 559497505LL;

	t24 = (x557<<((x558*x559)/x560));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x577 = UINT16_MAX;
	int8_t x578 = INT8_MAX;
	static uint16_t x579 = 11484U;
	uint32_t x580 = 785858U;

	t25 = (x577<<((x578*x579)/x580));

	if (t25 != 131070) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x593 = 48397;
	uint8_t x594 = 78U;
	static int16_t x595 = 755;
	volatile int32_t t26 = -25006169;

	t26 = (x593<<((x594*x595)/x596));

	if (t26 != 96794) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x629 = INT16_MAX;
	static int64_t x630 = -28351967311354987LL;
	int8_t x631 = INT8_MIN;
	int32_t t27 = -3949;

	t27 = (x629<<((x630*x631)/x632));

	if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x637 = 622307LLU;
	volatile int64_t x639 = -1LL;
	uint64_t t28 = 7LLU;

	t28 = (x637<<((x638*x639)/x640));

	if (t28 != 622307LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x645 = 654LL;
	int8_t x647 = INT8_MAX;
	int64_t x648 = INT64_MAX;
	int64_t t29 = 6802651852LL;

	t29 = (x645<<((x646*x647)/x648));

	if (t29 != 654LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x666 = INT8_MIN;
	uint16_t x668 = UINT16_MAX;

	t30 = (x665<<((x666*x667)/x668));

	if (t30 != 24589U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x689 = 13604U;
	int8_t x690 = 18;
	int8_t x691 = INT8_MIN;
	volatile uint32_t t31 = 207U;

	t31 = (x689<<((x690*x691)/x692));

	if (t31 != 13604U) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x701 = 2;
	uint32_t x702 = 258U;
	volatile int16_t x703 = INT16_MIN;
	int32_t x704 = INT32_MIN;
	int32_t t32 = -12;

	t32 = (x701<<((x702*x703)/x704));

	if (t32 != 4) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x715 = UINT32_MAX;

	t33 = (x713<<((x714*x715)/x716));

	if (t33 != 1974421163248LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x729 = 378U;
	int32_t x731 = -1;
	int64_t x732 = INT64_MIN;
	int32_t t34 = -459807217;

	t34 = (x729<<((x730*x731)/x732));

	if (t34 != 378) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x733 = UINT8_MAX;
	uint64_t x734 = 26818869631439064LLU;
	int16_t x735 = 377;
	int32_t x736 = INT32_MIN;
	volatile int32_t t35 = 3;

	t35 = (x733<<((x734*x735)/x736));

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x789 = 478U;
	static volatile uint64_t x790 = 75621579997189LLU;
	static int8_t x791 = INT8_MAX;
	static int32_t x792 = -1;
	volatile int32_t t36 = 185;

	t36 = (x789<<((x790*x791)/x792));

	if (t36 != 478) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x806 = 2397U;
	int32_t x807 = -11;

	t37 = (x805<<((x806*x807)/x808));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x841 = UINT64_MAX;
	volatile int16_t x842 = INT16_MAX;
	int8_t x843 = -9;
	int32_t x844 = INT32_MIN;
	uint64_t t38 = UINT64_MAX;

	t38 = (x841<<((x842*x843)/x844));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x845 = 16214LLU;
	uint32_t x846 = 29498U;
	int8_t x847 = -1;
	static int32_t x848 = INT32_MIN;
	volatile uint64_t t39 = 21627LLU;

	t39 = (x845<<((x846*x847)/x848));

	if (t39 != 32428LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x857 = INT64_MAX;
	volatile int64_t x859 = -3632672128282325LL;
	volatile int32_t x860 = INT32_MIN;
	int64_t t40 = INT64_MAX;

	t40 = (x857<<((x858*x859)/x860));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x870 = UINT16_MAX;
	static int16_t x871 = INT16_MIN;
	int32_t x872 = INT32_MAX;
	static int32_t t41 = -675159802;

	t41 = (x869<<((x870*x871)/x872));

	if (t41 != 17) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x878 = -1;
	uint8_t x879 = UINT8_MAX;
	volatile uint32_t t42 = 1098U;

	t42 = (x877<<((x878*x879)/x880));

	if (t42 != 465U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x885 = 213757183805883088LLU;
	int8_t x886 = INT8_MIN;
	int8_t x887 = -1;
	int8_t x888 = INT8_MAX;
	volatile uint64_t t43 = 165164336897LLU;

	t43 = (x885<<((x886*x887)/x888));

	if (t43 != 427514367611766176LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x897 = 46U;
	int64_t x900 = INT64_MAX;
	int32_t t44 = 28071346;

	t44 = (x897<<((x898*x899)/x900));

	if (t44 != 46) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x929 = 3;
	int8_t x931 = INT8_MAX;
	int64_t x932 = INT64_MIN;

	t45 = (x929<<((x930*x931)/x932));

	if (t45 != 6) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x941 = UINT64_MAX;
	uint64_t x942 = 1871453754222LLU;
	static uint32_t x943 = 148509714U;

	t46 = (x941<<((x942*x943)/x944));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint32_t x965 = 107482U;
	static uint32_t x966 = 154U;
	uint8_t x967 = 1U;
	int64_t x968 = INT64_MIN;
	uint32_t t47 = 14U;

	t47 = (x965<<((x966*x967)/x968));

	if (t47 != 107482U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x969 = 0U;
	int8_t x970 = INT8_MAX;
	static int32_t t48 = 5578;

	t48 = (x969<<((x970*x971)/x972));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x973 = UINT64_MAX;
	int32_t x975 = -100;
	int64_t x976 = INT64_MAX;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = (x973<<((x974*x975)/x976));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x985 = 21U;
	volatile uint64_t x986 = UINT64_MAX;
	uint8_t x987 = 2U;
	volatile int8_t x988 = -1;
	volatile int32_t t50 = 212;

	t50 = (x985<<((x986*x987)/x988));

	if (t50 != 21) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x995 = -1LL;

	t51 = (x993<<((x994*x995)/x996));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1001 = INT32_MAX;
	int8_t x1003 = INT8_MIN;
	int64_t x1004 = 4184268154LL;
	int32_t t52 = INT32_MAX;

	t52 = (x1001<<((x1002*x1003)/x1004));

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x1010 = INT8_MIN;
	int8_t x1011 = INT8_MAX;
	volatile uint64_t x1012 = UINT64_MAX;
	static int32_t t53 = 11;

	t53 = (x1009<<((x1010*x1011)/x1012));

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x1014 = 126LLU;
	static uint64_t x1015 = 3697238975LLU;
	volatile int64_t x1016 = INT64_MIN;
	int32_t t54 = 528;

	t54 = (x1013<<((x1014*x1015)/x1016));

	if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x1017 = UINT8_MAX;
	static uint32_t x1018 = 63967823U;
	int8_t x1019 = INT8_MIN;
	static int8_t x1020 = -1;
	volatile int32_t t55 = 204;

	t55 = (x1017<<((x1018*x1019)/x1020));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1034 = -278;
	static uint16_t x1035 = 0U;
	int32_t x1036 = 930985;
	volatile int32_t t56 = 6253;

	t56 = (x1033<<((x1034*x1035)/x1036));

	if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x1037 = 4601U;
	static uint64_t x1038 = 3LLU;
	volatile uint8_t x1039 = UINT8_MAX;
	volatile uint32_t t57 = 34U;

	t57 = (x1037<<((x1038*x1039)/x1040));

	if (t57 != 4601U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x1045 = 1U;
	static int8_t x1047 = INT8_MIN;
	int64_t x1048 = INT64_MIN;
	volatile int32_t t58 = -1;

	t58 = (x1045<<((x1046*x1047)/x1048));

	if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x1051 = 98571069866418928LL;
	static uint64_t x1052 = UINT64_MAX;
	static uint32_t t59 = 1638389U;

	t59 = (x1049<<((x1050*x1051)/x1052));

	if (t59 != 11288U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x1145 = UINT64_MAX;
	int32_t x1146 = -90098;
	uint64_t x1147 = 1028515301LLU;
	int32_t x1148 = INT32_MIN;
	volatile uint64_t t60 = UINT64_MAX;

	t60 = (x1145<<((x1146*x1147)/x1148));

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x1149 = 2;
	int32_t x1150 = 393;
	int16_t x1151 = -1;
	int32_t t61 = -7181469;

	t61 = (x1149<<((x1150*x1151)/x1152));

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x1198 = 0U;
	int64_t x1199 = INT64_MAX;
	int16_t x1200 = INT16_MIN;
	volatile int32_t t62 = -12863231;

	t62 = (x1197<<((x1198*x1199)/x1200));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x1217 = INT64_MAX;
	static int64_t x1218 = -1LL;
	int16_t x1220 = -1;
	volatile int64_t t63 = INT64_MAX;

	t63 = (x1217<<((x1218*x1219)/x1220));

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x1225 = INT8_MAX;
	volatile int16_t x1226 = -801;
	int16_t x1227 = -1;
	int32_t x1228 = 3685211;
	int32_t t64 = 8514730;

	t64 = (x1225<<((x1226*x1227)/x1228));

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x1233 = 74055U;
	static int8_t x1235 = INT8_MAX;
	uint32_t t65 = 72428311U;

	t65 = (x1233<<((x1234*x1235)/x1236));

	if (t65 != 74055U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x1241 = 687555224LLU;
	static volatile uint32_t x1242 = 90540019U;
	uint8_t x1243 = UINT8_MAX;
	int16_t x1244 = INT16_MIN;
	volatile uint64_t t66 = 1772522800877862LLU;

	t66 = (x1241<<((x1242*x1243)/x1244));

	if (t66 != 687555224LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x1263 = UINT64_MAX;
	static volatile int32_t x1264 = INT32_MIN;
	volatile uint32_t t67 = 381470U;

	t67 = (x1261<<((x1262*x1263)/x1264));

	if (t67 != 32085886U) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x1269 = 1;
	static volatile int16_t x1270 = -1;
	uint64_t x1271 = UINT64_MAX;
	static int32_t x1272 = INT32_MIN;
	int32_t t68 = -375406916;

	t68 = (x1269<<((x1270*x1271)/x1272));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x1285 = UINT64_MAX;
	int32_t x1286 = INT32_MAX;
	uint32_t x1288 = UINT32_MAX;

	t69 = (x1285<<((x1286*x1287)/x1288));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x1373 = 122;
	static volatile int8_t x1374 = -13;
	int32_t x1375 = -1;
	static int32_t x1376 = INT32_MIN;
	volatile int32_t t70 = 955353744;

	t70 = (x1373<<((x1374*x1375)/x1376));

	if (t70 != 122) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x1377 = 708734274124731LL;
	uint32_t x1378 = 0U;
	uint16_t x1379 = 12U;
	int8_t x1380 = -1;
	int64_t t71 = -289353914236324LL;

	t71 = (x1377<<((x1378*x1379)/x1380));

	if (t71 != 708734274124731LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x1401 = UINT8_MAX;
	uint32_t x1403 = 1022U;
	int64_t x1404 = INT64_MIN;
	volatile int32_t t72 = -83513;

	t72 = (x1401<<((x1402*x1403)/x1404));

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x1409 = 32;
	volatile int8_t x1411 = -1;
	int32_t x1412 = INT32_MAX;
	volatile int32_t t73 = 14;

	t73 = (x1409<<((x1410*x1411)/x1412));

	if (t73 != 32) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x1432 = INT8_MIN;
	int32_t t74 = 17600130;

	t74 = (x1429<<((x1430*x1431)/x1432));

	if (t74 != 255) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x1437 = 6U;
	int8_t x1438 = INT8_MIN;
	int16_t x1439 = INT16_MIN;
	uint32_t t75 = 1U;

	t75 = (x1437<<((x1438*x1439)/x1440));

	if (t75 != 6U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x1457 = 50012192038607386LL;
	static uint64_t x1458 = 673517509531LLU;
	static int8_t x1459 = 0;
	int64_t x1460 = INT64_MIN;
	static volatile int64_t t76 = 304LL;

	t76 = (x1457<<((x1458*x1459)/x1460));

	if (t76 != 50012192038607386LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x1505 = INT16_MAX;
	int32_t x1506 = -1;
	int32_t x1507 = -1;
	int8_t x1508 = 4;
	int32_t t77 = -5;

	t77 = (x1505<<((x1506*x1507)/x1508));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x1514 = INT32_MIN;
	int16_t x1516 = INT16_MAX;
	static int64_t t78 = -24468LL;

	t78 = (x1513<<((x1514*x1515)/x1516));

	if (t78 != 14667795443016LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x1542 = -1;
	int8_t x1543 = INT8_MIN;
	static uint16_t x1544 = UINT16_MAX;
	uint64_t t79 = 509LLU;

	t79 = (x1541<<((x1542*x1543)/x1544));

	if (t79 != 1988643189774LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x1557 = 53U;
	int8_t x1558 = INT8_MAX;
	int8_t x1560 = -3;
	int32_t t80 = 85967;

	t80 = (x1557<<((x1558*x1559)/x1560));

	if (t80 != 53) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x1597 = 44LLU;
	uint8_t x1598 = UINT8_MAX;
	uint32_t x1599 = 3301U;
	uint32_t x1600 = UINT32_MAX;
	volatile uint64_t t81 = 119434LLU;

	t81 = (x1597<<((x1598*x1599)/x1600));

	if (t81 != 44LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x1622 = INT16_MIN;
	uint16_t x1623 = 1357U;
	int64_t x1624 = 343704111LL;
	int32_t t82 = 822505;

	t82 = (x1621<<((x1622*x1623)/x1624));

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x1649 = INT64_MAX;
	static int16_t x1650 = -1;
	int16_t x1651 = 1;
	uint16_t x1652 = 12U;
	static int64_t t83 = INT64_MAX;

	t83 = (x1649<<((x1650*x1651)/x1652));

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x1653 = UINT32_MAX;
	volatile int16_t x1656 = INT16_MIN;
	volatile uint32_t t84 = UINT32_MAX;

	t84 = (x1653<<((x1654*x1655)/x1656));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x1661 = INT64_MAX;
	uint16_t x1662 = UINT16_MAX;
	int8_t x1663 = INT8_MAX;
	static volatile int64_t t85 = INT64_MAX;

	t85 = (x1661<<((x1662*x1663)/x1664));

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x1665 = INT8_MAX;
	int32_t x1668 = INT32_MIN;
	volatile int32_t t86 = -1;

	t86 = (x1665<<((x1666*x1667)/x1668));

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x1674 = 221914203LLU;
	int16_t x1675 = INT16_MAX;
	int64_t x1676 = 3341248316874994952LL;
	int32_t t87 = -62513782;

	t87 = (x1673<<((x1674*x1675)/x1676));

	if (t87 != 4834) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x1681 = INT16_MAX;
	int32_t x1682 = -1;
	static volatile int64_t x1684 = INT64_MIN;
	static int32_t t88 = -95637678;

	t88 = (x1681<<((x1682*x1683)/x1684));

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x1713 = 24U;
	int16_t x1716 = INT16_MIN;
	int32_t t89 = 98;

	t89 = (x1713<<((x1714*x1715)/x1716));

	if (t89 != 24) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x1717 = 617LLU;
	volatile uint64_t x1718 = UINT64_MAX;
	int16_t x1719 = -3;
	int32_t x1720 = -1;
	volatile uint64_t t90 = 1206183601558LLU;

	t90 = (x1717<<((x1718*x1719)/x1720));

	if (t90 != 617LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x1721 = 16028LL;
	volatile int8_t x1722 = -1;
	int16_t x1723 = -42;
	int32_t x1724 = INT32_MIN;
	int64_t t91 = 3766586304LL;

	t91 = (x1721<<((x1722*x1723)/x1724));

	if (t91 != 16028LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x1725 = INT8_MAX;
	uint64_t x1726 = UINT64_MAX;
	uint32_t x1727 = 0U;
	int8_t x1728 = INT8_MIN;
	volatile int32_t t92 = -401939;

	t92 = (x1725<<((x1726*x1727)/x1728));

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x1737 = 1;
	static int8_t x1738 = INT8_MAX;
	int32_t x1739 = 252935;
	int32_t x1740 = INT32_MAX;
	int32_t t93 = -678495;

	t93 = (x1737<<((x1738*x1739)/x1740));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x1761 = INT16_MAX;
	int16_t x1762 = -1;
	int8_t x1763 = -1;
	int16_t x1764 = 1124;
	int32_t t94 = -209737;

	t94 = (x1761<<((x1762*x1763)/x1764));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x1829 = 0;
	uint8_t x1830 = 13U;
	int8_t x1832 = -1;
	static int32_t t95 = -1003078;

	t95 = (x1829<<((x1830*x1831)/x1832));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x1841 = 0U;
	volatile int16_t x1842 = INT16_MAX;
	int64_t x1843 = 1LL;
	uint32_t x1844 = UINT32_MAX;
	int32_t t96 = 41;

	t96 = (x1841<<((x1842*x1843)/x1844));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x1869 = 28U;
	int32_t x1871 = 66;
	volatile int32_t x1872 = -13;
	volatile int32_t t97 = 710907059;

	t97 = (x1869<<((x1870*x1871)/x1872));

	if (t97 != 28) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x1885 = 1;
	uint32_t x1886 = UINT32_MAX;
	int8_t x1888 = -1;
	volatile int32_t t98 = 6814;

	t98 = (x1885<<((x1886*x1887)/x1888));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x1890 = 2053U;
	uint16_t x1891 = UINT16_MAX;
	static uint32_t x1892 = UINT32_MAX;

	t99 = (x1889<<((x1890*x1891)/x1892));

	if (t99 != 127) { NG(); } else { ; }
	
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

