#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x70 = -1;
static uint64_t t1 = 33715714987198LLU;
int32_t x92 = 31;
uint32_t x106 = 52U;
static volatile uint64_t t3 = 11725983801370733LLU;
volatile int16_t x198 = INT16_MAX;
int64_t x229 = 315408019298498650LL;
uint16_t x232 = 1U;
int8_t x256 = 25;
uint8_t x281 = UINT8_MAX;
int8_t x284 = 6;
volatile int32_t t10 = 3;
static int8_t x338 = 1;
static int16_t x386 = INT16_MAX;
int16_t x568 = 0;
uint64_t x601 = 235340625LLU;
int64_t x603 = INT64_MIN;
int16_t x605 = 224;
uint8_t x608 = 1U;
int32_t t19 = 373907;
uint16_t x645 = 3U;
uint8_t x646 = 2U;
static int32_t t20 = -655;
volatile uint16_t x738 = 3U;
int16_t x753 = INT16_MAX;
uint64_t x844 = 1LLU;
uint64_t t25 = 822209284044330LLU;
int64_t x897 = -1LL;
static int64_t x913 = 32LL;
uint8_t x916 = 0U;
static int32_t x1060 = 13;
int8_t x1111 = INT8_MIN;
static uint32_t x1212 = 3U;
volatile int64_t t34 = -264153680LL;
static volatile int32_t t35 = 759520948;
volatile uint64_t x1256 = 0LLU;
int8_t x1358 = INT8_MIN;
uint64_t x1359 = 314LLU;
volatile uint8_t x1360 = 35U;
static uint8_t x1495 = UINT8_MAX;
static volatile int32_t t38 = 112;
int32_t x1505 = INT32_MAX;
static int8_t x1610 = INT8_MAX;
uint16_t x1612 = 2U;
int64_t x1679 = -1LL;
uint64_t t45 = 8210001165745888LLU;
uint8_t x1800 = 1U;
static uint64_t x1826 = UINT64_MAX;
volatile int32_t x1878 = INT32_MIN;
volatile uint64_t x1879 = 137264810439LLU;
uint8_t x1892 = 2U;
uint16_t x1917 = 62U;
uint64_t x1986 = 116123070485LLU;
int8_t x1988 = 62;
volatile uint8_t x2012 = 1U;
static uint16_t x2061 = 63U;
uint32_t t56 = 599069749U;
int16_t x2170 = INT16_MIN;
uint64_t t57 = 2LLU;
uint8_t x2248 = 1U;
int64_t x2397 = INT64_MAX;
int16_t x2398 = -1;
int16_t x2467 = INT16_MIN;
volatile int64_t x2529 = -1LL;
uint64_t t63 = 13LLU;
int64_t x2550 = INT64_MIN;
uint32_t x2552 = 18U;
uint16_t x2557 = 0U;
int8_t x2560 = 39;
volatile uint64_t t66 = 31LLU;
uint64_t x2777 = UINT64_MAX;
uint8_t x2780 = 2U;
uint32_t x2858 = 69671268U;
int8_t x2872 = 1;
uint8_t x2964 = 27U;
uint16_t x2971 = 69U;
volatile int16_t x3070 = INT16_MIN;
uint32_t x3073 = 16U;
volatile int8_t x3074 = 3;
uint32_t x3283 = 15765145U;
uint8_t x3318 = 101U;
volatile int16_t x3319 = INT16_MIN;
volatile int64_t t85 = -2818705699588552LL;
static uint64_t x3335 = 2134804009LLU;
uint64_t x3402 = 17208193LLU;
volatile uint64_t t87 = 20162884LLU;
int32_t x3457 = -1;
int32_t x3589 = INT32_MAX;
static uint8_t x3590 = 12U;
static int64_t x3591 = INT64_MIN;
int64_t t90 = -1LL;
int16_t x3608 = 1;
uint16_t x3614 = 270U;
volatile int16_t x3633 = 1;
int32_t x3634 = -1;
volatile int32_t t94 = -1;
uint8_t x3757 = 13U;
int8_t x3760 = 21;
int64_t x3779 = INT64_MIN;
uint32_t x3860 = 12U;
static int8_t x3863 = INT8_MAX;
volatile int32_t t99 = -13708147;


void f0(void) {
	uint16_t x57 = UINT16_MAX;
	int64_t x58 = INT64_MIN;
	int16_t x59 = INT16_MAX;
	int64_t x60 = 14LL;
	volatile int64_t t0 = -66419600744962160LL;

	t0 = ((x57-(x58/x59))>>x60);

	if (t0 != 17180393492LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x69 = -15;
	static uint64_t x71 = 2905524839LLU;
	static int16_t x72 = 2;

	t1 = ((x69-(x70/x71))>>x72);

	if (t1 != 4611686016840175168LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x89 = 3267U;
	static int8_t x90 = INT8_MAX;
	static uint64_t x91 = UINT64_MAX;
	uint64_t t2 = 5037423890031936641LLU;

	t2 = ((x89-(x90/x91))>>x92);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x105 = -2827091865564308721LL;
	uint64_t x107 = 3879932LLU;
	volatile uint8_t x108 = 24U;

	t3 = ((x105-(x106/x107))>>x108);

	if (t3 != 931003821381LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x141 = INT8_MAX;
	static uint64_t x142 = UINT64_MAX;
	uint8_t x143 = UINT8_MAX;
	volatile uint16_t x144 = 2U;
	uint64_t t4 = 452268748LLU;

	t4 = ((x141-(x142/x143))>>x144);

	if (t4 != 4593600975217868767LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x185 = 181129U;
	uint32_t x186 = UINT32_MAX;
	int16_t x187 = 12;
	static uint8_t x188 = 12U;
	uint32_t t5 = 61000U;

	t5 = ((x185-(x186/x187))>>x188);

	if (t5 != 961238U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x197 = 975582659U;
	uint64_t x199 = 11962LLU;
	uint8_t x200 = 24U;
	static uint64_t t6 = 31501633LLU;

	t6 = ((x197-(x198/x199))>>x200);

	if (t6 != 58LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x230 = UINT8_MAX;
	int32_t x231 = 606859576;
	int64_t t7 = 2LL;

	t7 = ((x229-(x230/x231))>>x232);

	if (t7 != 157704009649249325LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x241 = UINT16_MAX;
	static volatile uint8_t x242 = 14U;
	uint64_t x243 = 681501633940937LLU;
	int8_t x244 = 1;
	uint64_t t8 = 1LLU;

	t8 = ((x241-(x242/x243))>>x244);

	if (t8 != 32767LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x253 = -1;
	int16_t x254 = INT16_MIN;
	int8_t x255 = 57;
	volatile int32_t t9 = 301202625;

	t9 = ((x253-(x254/x255))>>x256);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x282 = 2U;
	volatile uint8_t x283 = UINT8_MAX;

	t10 = ((x281-(x282/x283))>>x284);

	if (t10 != 3) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x289 = UINT32_MAX;
	static volatile uint64_t x290 = 15555035LLU;
	volatile uint64_t x291 = 2988661705267LLU;
	uint8_t x292 = 25U;
	volatile uint64_t t11 = 604413604LLU;

	t11 = ((x289-(x290/x291))>>x292);

	if (t11 != 127LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x329 = 1072U;
	uint8_t x330 = 4U;
	int32_t x331 = INT32_MAX;
	volatile int16_t x332 = 1;
	static uint32_t t12 = 429190616U;

	t12 = ((x329-(x330/x331))>>x332);

	if (t12 != 536U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x333 = -54;
	int32_t x334 = -1;
	static uint32_t x335 = 516072052U;
	uint32_t x336 = 2U;
	static uint32_t t13 = 2023U;

	t13 = ((x333-(x334/x335))>>x336);

	if (t13 != 1073741808U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x337 = INT16_MAX;
	volatile int32_t x339 = INT32_MIN;
	uint16_t x340 = 1U;
	int32_t t14 = 38724861;

	t14 = ((x337-(x338/x339))>>x340);

	if (t14 != 16383) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x385 = INT8_MAX;
	int64_t x387 = INT64_MAX;
	uint32_t x388 = 7U;
	volatile int64_t t15 = 0LL;

	t15 = ((x385-(x386/x387))>>x388);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x545 = 21376330U;
	int32_t x546 = -77914267;
	uint32_t x547 = 772434U;
	static uint8_t x548 = 20U;
	uint32_t t16 = 1764U;

	t16 = ((x545-(x546/x547))>>x548);

	if (t16 != 20U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x565 = -1;
	int8_t x566 = INT8_MAX;
	int64_t x567 = -1LL;
	volatile int64_t t17 = 6344653LL;

	t17 = ((x565-(x566/x567))>>x568);

	if (t17 != 126LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x602 = 0U;
	uint16_t x604 = 58U;
	uint64_t t18 = 3019975833478509828LLU;

	t18 = ((x601-(x602/x603))>>x604);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x606 = 80U;
	int16_t x607 = INT16_MAX;

	t19 = ((x605-(x606/x607))>>x608);

	if (t19 != 112) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x647 = -11726;
	uint32_t x648 = 29U;

	t20 = ((x645-(x646/x647))>>x648);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint32_t x673 = UINT32_MAX;
	int8_t x674 = INT8_MAX;
	volatile uint64_t x675 = 5343133624975LLU;
	int16_t x676 = 4;
	static volatile uint64_t t21 = 5067864LLU;

	t21 = ((x673-(x674/x675))>>x676);

	if (t21 != 268435455LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint32_t x737 = 21529U;
	volatile int16_t x739 = INT16_MIN;
	int64_t x740 = 0LL;
	uint32_t t22 = 252248U;

	t22 = ((x737-(x738/x739))>>x740);

	if (t22 != 21529U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x754 = 353965272LLU;
	int32_t x755 = -16720483;
	uint8_t x756 = 10U;
	uint64_t t23 = 108481875501LLU;

	t23 = ((x753-(x754/x755))>>x756);

	if (t23 != 31LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x817 = 23963034100LL;
	volatile uint32_t x818 = UINT32_MAX;
	int64_t x819 = 1LL;
	uint16_t x820 = 24U;
	static int64_t t24 = 0LL;

	t24 = ((x817-(x818/x819))>>x820);

	if (t24 != 1172LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x841 = 46LLU;
	int64_t x842 = INT64_MAX;
	volatile int8_t x843 = INT8_MAX;

	t25 = ((x841-(x842/x843))>>x844);

	if (t25 != 9187059548520701910LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x898 = 608LLU;
	int64_t x899 = INT64_MIN;
	uint8_t x900 = 0U;
	volatile uint64_t t26 = UINT64_MAX;

	t26 = ((x897-(x898/x899))>>x900);

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x914 = 16U;
	int8_t x915 = -2;
	int64_t t27 = 4214473372LL;

	t27 = ((x913-(x914/x915))>>x916);

	if (t27 != 40LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1021 = 407;
	int32_t x1022 = -1;
	uint64_t x1023 = 53609LLU;
	uint32_t x1024 = 1U;
	volatile uint64_t t28 = 21013473847941LLU;

	t28 = ((x1021-(x1022/x1023))>>x1024);

	if (t28 != 9223199987907083371LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1053 = 0;
	int16_t x1054 = INT16_MIN;
	uint64_t x1055 = 7866979LLU;
	uint8_t x1056 = 29U;
	uint64_t t29 = 8570186698LLU;

	t29 = ((x1053-(x1054/x1055))>>x1056);

	if (t29 != 34359734000LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1057 = -1;
	uint16_t x1058 = UINT16_MAX;
	int16_t x1059 = INT16_MIN;
	static volatile int32_t t30 = -11068;

	t30 = ((x1057-(x1058/x1059))>>x1060);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x1073 = 704879665786LLU;
	int16_t x1074 = INT16_MIN;
	int64_t x1075 = INT64_MIN;
	uint8_t x1076 = 0U;
	volatile uint64_t t31 = 122439554LLU;

	t31 = ((x1073-(x1074/x1075))>>x1076);

	if (t31 != 704879665786LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1109 = UINT32_MAX;
	static uint32_t x1110 = 274796270U;
	int32_t x1112 = 3;
	uint32_t t32 = 39030867U;

	t32 = ((x1109-(x1110/x1111))>>x1112);

	if (t32 != 536870911U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1141 = UINT16_MAX;
	int32_t x1142 = INT32_MIN;
	uint64_t x1143 = 78040748LLU;
	int8_t x1144 = 0;
	volatile uint64_t t33 = 4094LLU;

	t33 = ((x1141-(x1142/x1143))>>x1144);

	if (t33 != 18446743837336382088LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x1209 = 4U;
	static int64_t x1210 = INT64_MIN;
	int32_t x1211 = INT32_MAX;

	t34 = ((x1209-(x1210/x1211))>>x1212);

	if (t34 != 536870912LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1221 = 949581;
	int8_t x1222 = INT8_MIN;
	int32_t x1223 = INT32_MIN;
	uint16_t x1224 = 26U;

	t35 = ((x1221-(x1222/x1223))>>x1224);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1253 = 0LLU;
	static int16_t x1254 = 30;
	int32_t x1255 = INT32_MIN;
	static uint64_t t36 = 491354499774786LLU;

	t36 = ((x1253-(x1254/x1255))>>x1256);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1357 = -71916002539536079LL;
	uint64_t t37 = 110980003454LLU;

	t37 = ((x1357-(x1358/x1359))>>x1360);

	if (t37 != 533068100LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x1493 = INT8_MAX;
	int32_t x1494 = -1048;
	uint8_t x1496 = 1U;

	t38 = ((x1493-(x1494/x1495))>>x1496);

	if (t38 != 65) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1506 = 3;
	static int64_t x1507 = -1001LL;
	int8_t x1508 = 45;
	volatile int64_t t39 = -246581LL;

	t39 = ((x1505-(x1506/x1507))>>x1508);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x1521 = 15396503135765540LLU;
	int64_t x1522 = INT64_MAX;
	volatile int32_t x1523 = -2741;
	uint8_t x1524 = 24U;
	uint64_t t40 = 53122464241223553LLU;

	t40 = ((x1521-(x1522/x1523))>>x1524);

	if (t40 != 1118270708LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x1565 = INT16_MAX;
	uint64_t x1566 = 4145LLU;
	static int32_t x1567 = INT32_MAX;
	uint8_t x1568 = 60U;
	volatile uint64_t t41 = 8182663804635894841LLU;

	t41 = ((x1565-(x1566/x1567))>>x1568);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1593 = -1;
	int32_t x1594 = 3475643;
	volatile int16_t x1595 = -32;
	uint32_t x1596 = 1U;
	volatile int32_t t42 = 8406643;

	t42 = ((x1593-(x1594/x1595))>>x1596);

	if (t42 != 54306) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1609 = 0;
	int32_t x1611 = INT32_MIN;
	volatile int32_t t43 = -18;

	t43 = ((x1609-(x1610/x1611))>>x1612);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1677 = UINT64_MAX;
	static volatile uint16_t x1678 = 212U;
	int32_t x1680 = 1;
	static uint64_t t44 = 331578946LLU;

	t44 = ((x1677-(x1678/x1679))>>x1680);

	if (t44 != 105LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x1749 = INT16_MIN;
	uint32_t x1750 = 1308924U;
	uint64_t x1751 = 333480LLU;
	uint8_t x1752 = 1U;

	t45 = ((x1749-(x1750/x1751))>>x1752);

	if (t45 != 9223372036854759422LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1761 = -1;
	int64_t x1762 = INT64_MAX;
	uint64_t x1763 = 869253727170606819LLU;
	static int8_t x1764 = 0;
	static volatile uint64_t t46 = 0LLU;

	t46 = ((x1761-(x1762/x1763))>>x1764);

	if (t46 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1797 = 0;
	volatile int16_t x1798 = -1;
	static int8_t x1799 = 1;
	volatile int32_t t47 = -11;

	t47 = ((x1797-(x1798/x1799))>>x1800);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1805 = INT64_MIN;
	volatile uint64_t x1806 = UINT64_MAX;
	volatile int64_t x1807 = -16502217714880LL;
	uint64_t x1808 = 2LLU;
	volatile uint64_t t48 = 86LLU;

	t48 = ((x1805-(x1806/x1807))>>x1808);

	if (t48 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x1825 = INT32_MAX;
	int8_t x1827 = 1;
	uint8_t x1828 = 9U;
	volatile uint64_t t49 = 270117174LLU;

	t49 = ((x1825-(x1826/x1827))>>x1828);

	if (t49 != 4194304LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x1877 = 72;
	int8_t x1880 = 0;
	static uint64_t t50 = 379506085935274269LLU;

	t50 = ((x1877-(x1878/x1879))>>x1880);

	if (t50 != 18446744073575163683LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x1889 = UINT32_MAX;
	uint32_t x1890 = 0U;
	volatile uint8_t x1891 = 10U;
	uint32_t t51 = 138U;

	t51 = ((x1889-(x1890/x1891))>>x1892);

	if (t51 != 1073741823U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x1918 = UINT64_MAX;
	uint32_t x1919 = 57183U;
	int8_t x1920 = 0;
	static uint64_t t52 = 7448333970471LLU;

	t52 = ((x1917-(x1918/x1919))>>x1920);

	if (t52 != 18446421482308720845LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x1953 = 1U;
	int32_t x1954 = 197443;
	volatile int8_t x1955 = -1;
	volatile uint8_t x1956 = 1U;
	int32_t t53 = -408;

	t53 = ((x1953-(x1954/x1955))>>x1956);

	if (t53 != 98722) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x1985 = UINT64_MAX;
	int64_t x1987 = INT64_MAX;
	uint64_t t54 = 7LLU;

	t54 = ((x1985-(x1986/x1987))>>x1988);

	if (t54 != 3LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x2009 = INT8_MIN;
	int32_t x2010 = INT32_MIN;
	uint64_t x2011 = 6LLU;
	volatile uint64_t t55 = 10528907830741LLU;

	t55 = ((x2009-(x2010/x2011))>>x2012);

	if (t55 != 7686143364224603413LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint32_t x2062 = UINT32_MAX;
	volatile int16_t x2063 = 2269;
	volatile uint32_t x2064 = 11U;

	t56 = ((x2061-(x2062/x2063))>>x2064);

	if (t56 != 2096227U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x2169 = UINT64_MAX;
	int64_t x2171 = INT64_MIN;
	uint8_t x2172 = 55U;

	t57 = ((x2169-(x2170/x2171))>>x2172);

	if (t57 != 511LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x2197 = UINT16_MAX;
	static int64_t x2198 = -1LL;
	int32_t x2199 = -966926;
	static uint16_t x2200 = 0U;
	volatile int64_t t58 = -26LL;

	t58 = ((x2197-(x2198/x2199))>>x2200);

	if (t58 != 65535LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x2245 = 6851757076030LL;
	uint32_t x2246 = 247801382U;
	int64_t x2247 = INT64_MIN;
	static int64_t t59 = -1408834426826314711LL;

	t59 = ((x2245-(x2246/x2247))>>x2248);

	if (t59 != 3425878538015LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x2325 = 1055U;
	uint64_t x2326 = 4LLU;
	int64_t x2327 = 56487LL;
	volatile int8_t x2328 = 1;
	volatile uint64_t t60 = 188664LLU;

	t60 = ((x2325-(x2326/x2327))>>x2328);

	if (t60 != 527LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2399 = -584079000;
	uint64_t x2400 = 10LLU;
	static int64_t t61 = -19LL;

	t61 = ((x2397-(x2398/x2399))>>x2400);

	if (t61 != 9007199254740991LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x2465 = -1070238174;
	uint64_t x2466 = 1LLU;
	int32_t x2468 = 40;
	uint64_t t62 = 24270LLU;

	t62 = ((x2465-(x2466/x2467))>>x2468);

	if (t62 != 16777215LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2530 = INT8_MIN;
	volatile uint64_t x2531 = 14772093652265LLU;
	uint32_t x2532 = 15U;

	t63 = ((x2529-(x2530/x2531))>>x2532);

	if (t63 != 562949953421273LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x2549 = 489LLU;
	uint32_t x2551 = UINT32_MAX;
	static uint64_t t64 = 161LLU;

	t64 = ((x2549-(x2550/x2551))>>x2552);

	if (t64 != 8192LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x2558 = INT64_MIN;
	uint16_t x2559 = 199U;
	volatile int64_t t65 = -12388LL;

	t65 = ((x2557-(x2558/x2559))>>x2560);

	if (t65 != 84307LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x2561 = 1158540969313511000LLU;
	int32_t x2562 = INT32_MIN;
	static volatile uint32_t x2563 = UINT32_MAX;
	uint8_t x2564 = 0U;

	t66 = ((x2561-(x2562/x2563))>>x2564);

	if (t66 != 1158540969313511000LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x2641 = INT64_MAX;
	volatile int8_t x2642 = INT8_MIN;
	volatile int32_t x2643 = -56;
	int8_t x2644 = 1;
	volatile int64_t t67 = 12714LL;

	t67 = ((x2641-(x2642/x2643))>>x2644);

	if (t67 != 4611686018427387902LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x2689 = 248597092;
	static int8_t x2690 = INT8_MAX;
	static int8_t x2691 = 1;
	int8_t x2692 = 1;
	static int32_t t68 = 0;

	t68 = ((x2689-(x2690/x2691))>>x2692);

	if (t68 != 124298482) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2717 = INT8_MIN;
	volatile uint64_t x2718 = 312527190LLU;
	int64_t x2719 = INT64_MIN;
	uint8_t x2720 = 9U;
	static volatile uint64_t t69 = 2193870741601LLU;

	t69 = ((x2717-(x2718/x2719))>>x2720);

	if (t69 != 36028797018963967LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x2725 = 0U;
	int16_t x2726 = INT16_MIN;
	static volatile int8_t x2727 = 1;
	int8_t x2728 = 18;
	volatile int32_t t70 = 552339705;

	t70 = ((x2725-(x2726/x2727))>>x2728);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x2778 = UINT32_MAX;
	static int32_t x2779 = 129038;
	volatile uint64_t t71 = 42LLU;

	t71 = ((x2777-(x2778/x2779))>>x2780);

	if (t71 != 4611686018427379582LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x2857 = INT32_MIN;
	int32_t x2859 = -1;
	int32_t x2860 = 0;
	volatile uint32_t t72 = 19953U;

	t72 = ((x2857-(x2858/x2859))>>x2860);

	if (t72 != 2147483648U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x2861 = 0U;
	int64_t x2862 = -1LL;
	volatile int8_t x2863 = 5;
	static int8_t x2864 = 1;
	int64_t t73 = -21542LL;

	t73 = ((x2861-(x2862/x2863))>>x2864);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x2869 = 1635096394U;
	int8_t x2870 = 1;
	int32_t x2871 = -3;
	static volatile uint32_t t74 = 7444638U;

	t74 = ((x2869-(x2870/x2871))>>x2872);

	if (t74 != 817548197U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x2921 = UINT64_MAX;
	int8_t x2922 = -1;
	uint8_t x2923 = UINT8_MAX;
	uint8_t x2924 = 0U;
	volatile uint64_t t75 = UINT64_MAX;

	t75 = ((x2921-(x2922/x2923))>>x2924);

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2961 = INT64_MAX;
	static volatile int32_t x2962 = 794388299;
	uint8_t x2963 = 13U;
	static volatile int64_t t76 = 204LL;

	t76 = ((x2961-(x2962/x2963))>>x2964);

	if (t76 != 68719476735LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x2969 = 66U;
	int64_t x2970 = INT64_MIN;
	int32_t x2972 = 27;
	int64_t t77 = 468093393732LL;

	t77 = ((x2969-(x2970/x2971))>>x2972);

	if (t77 != 995934445LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x3069 = 32703674LLU;
	static volatile int32_t x3071 = INT32_MAX;
	volatile int8_t x3072 = 15;
	static uint64_t t78 = 502611180LLU;

	t78 = ((x3069-(x3070/x3071))>>x3072);

	if (t78 != 998LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x3075 = -1;
	uint16_t x3076 = 24U;
	static uint32_t t79 = 358340U;

	t79 = ((x3073-(x3074/x3075))>>x3076);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x3093 = UINT16_MAX;
	uint8_t x3094 = 13U;
	int64_t x3095 = INT64_MIN;
	uint32_t x3096 = 0U;
	volatile int64_t t80 = 376208229523LL;

	t80 = ((x3093-(x3094/x3095))>>x3096);

	if (t80 != 65535LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x3157 = INT16_MIN;
	uint64_t x3158 = 3432706633866LLU;
	int16_t x3159 = INT16_MIN;
	uint16_t x3160 = 1U;
	volatile uint64_t t81 = 4490LLU;

	t81 = ((x3157-(x3158/x3159))>>x3160);

	if (t81 != 9223372036854759424LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x3257 = 43542063214420LL;
	int8_t x3258 = INT8_MAX;
	volatile int32_t x3259 = INT32_MAX;
	static int8_t x3260 = 1;
	int64_t t82 = -17389945971855541LL;

	t82 = ((x3257-(x3258/x3259))>>x3260);

	if (t82 != 21771031607210LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x3269 = INT8_MIN;
	int16_t x3270 = -158;
	volatile uint32_t x3271 = UINT32_MAX;
	uint8_t x3272 = 1U;
	uint32_t t83 = 220791U;

	t83 = ((x3269-(x3270/x3271))>>x3272);

	if (t83 != 2147483584U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x3281 = 0U;
	int8_t x3282 = INT8_MAX;
	uint8_t x3284 = 0U;
	static uint32_t t84 = 29901316U;

	t84 = ((x3281-(x3282/x3283))>>x3284);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x3317 = INT64_MAX;
	volatile uint16_t x3320 = 3U;

	t85 = ((x3317-(x3318/x3319))>>x3320);

	if (t85 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x3333 = UINT64_MAX;
	int64_t x3334 = INT64_MIN;
	int16_t x3336 = 26;
	uint64_t t86 = 1659LLU;

	t86 = ((x3333-(x3334/x3335))>>x3336);

	if (t86 != 274877906879LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x3401 = -62758642LL;
	int64_t x3403 = -1LL;
	uint8_t x3404 = 27U;

	t87 = ((x3401-(x3402/x3403))>>x3404);

	if (t87 != 137438953471LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x3453 = UINT32_MAX;
	uint64_t x3454 = 6926343658750024LLU;
	volatile uint8_t x3455 = UINT8_MAX;
	uint32_t x3456 = 5U;
	volatile uint64_t t88 = 4350606050372LLU;

	t88 = ((x3453-(x3454/x3455))>>x3456);

	if (t88 != 576459903621016369LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x3458 = -421;
	static uint32_t x3459 = UINT32_MAX;
	uint16_t x3460 = 2U;
	static volatile uint32_t t89 = 1980034051U;

	t89 = ((x3457-(x3458/x3459))>>x3460);

	if (t89 != 1073741823U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x3592 = 6;

	t90 = ((x3589-(x3590/x3591))>>x3592);

	if (t90 != 33554431LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x3597 = 2356378LLU;
	uint8_t x3598 = 21U;
	int16_t x3599 = INT16_MIN;
	static uint8_t x3600 = 12U;
	uint64_t t91 = 938676LLU;

	t91 = ((x3597-(x3598/x3599))>>x3600);

	if (t91 != 575LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x3605 = -1;
	int16_t x3606 = INT16_MIN;
	static uint32_t x3607 = UINT32_MAX;
	uint32_t t92 = 12U;

	t92 = ((x3605-(x3606/x3607))>>x3608);

	if (t92 != 2147483647U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x3613 = 3679LLU;
	int8_t x3615 = INT8_MIN;
	uint16_t x3616 = 12U;
	static volatile uint64_t t93 = 61963831075482673LLU;

	t93 = ((x3613-(x3614/x3615))>>x3616);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint8_t x3635 = UINT8_MAX;
	static volatile uint16_t x3636 = 3U;

	t94 = ((x3633-(x3634/x3635))>>x3636);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x3758 = INT32_MAX;
	volatile int8_t x3759 = INT8_MIN;
	static int32_t t95 = 685558550;

	t95 = ((x3757-(x3758/x3759))>>x3760);

	if (t95 != 8) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x3777 = 571U;
	int16_t x3778 = 59;
	int16_t x3780 = 1;
	int64_t t96 = 1833329310751640724LL;

	t96 = ((x3777-(x3778/x3779))>>x3780);

	if (t96 != 285LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x3857 = 3504650U;
	uint64_t x3858 = UINT64_MAX;
	static volatile uint16_t x3859 = 4U;
	volatile uint64_t t97 = 140282229573029114LLU;

	t97 = ((x3857-(x3858/x3859))>>x3860);

	if (t97 != 3377699720528727LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x3861 = -1;
	volatile int32_t x3862 = INT32_MIN;
	uint8_t x3864 = 3U;
	volatile int32_t t98 = -2638129;

	t98 = ((x3861-(x3862/x3863))>>x3864);

	if (t98 != 2113664) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x3865 = 12U;
	int16_t x3866 = INT16_MIN;
	int8_t x3867 = INT8_MAX;
	uint16_t x3868 = 3U;

	t99 = ((x3865-(x3866/x3867))>>x3868);

	if (t99 != 33) { NG(); } else { ; }
	
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

