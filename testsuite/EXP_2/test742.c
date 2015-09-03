#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x113 = 470U;
uint64_t x161 = 367672279LLU;
int8_t x214 = INT8_MIN;
int8_t x215 = -1;
uint8_t x216 = UINT8_MAX;
uint64_t x218 = 19LLU;
int32_t x290 = INT32_MIN;
volatile int16_t x291 = -1;
uint16_t x385 = 239U;
static volatile uint16_t x388 = 12734U;
volatile int32_t t12 = -3446056;
uint32_t x429 = UINT32_MAX;
static uint8_t x442 = UINT8_MAX;
int8_t x461 = INT8_MAX;
int64_t x470 = INT64_MAX;
int64_t x505 = 375323616250588LL;
uint32_t x524 = UINT32_MAX;
volatile uint32_t t18 = UINT32_MAX;
volatile int16_t x535 = INT16_MIN;
int8_t x545 = INT8_MAX;
static uint8_t x561 = 5U;
volatile int8_t x563 = -1;
volatile int32_t x564 = 25;
static uint64_t x569 = 13469LLU;
int8_t x571 = -1;
uint16_t x600 = UINT16_MAX;
int32_t t25 = 3;
static int32_t x632 = -11;
int16_t x644 = -1;
int64_t x655 = -1LL;
uint8_t x718 = 42U;
volatile int32_t x719 = -3;
uint32_t x749 = 20U;
static uint16_t x808 = 3450U;
int16_t x847 = -1;
int16_t x853 = INT16_MAX;
int32_t t35 = 8011438;
int64_t x926 = 115292902786341LL;
int32_t t39 = 87074;
int32_t x951 = INT32_MIN;
uint64_t t40 = 13609345424569053LLU;
uint64_t x955 = UINT64_MAX;
uint32_t x1003 = UINT32_MAX;
static volatile int32_t x1005 = INT32_MAX;
static int8_t x1006 = INT8_MIN;
uint8_t x1014 = 3U;
uint64_t x1016 = 4599483012197159013LLU;
uint64_t t46 = 12932833908LLU;
int32_t x1074 = INT32_MIN;
volatile uint64_t x1082 = 8LLU;
uint16_t x1083 = 7U;
int8_t x1095 = -2;
volatile int16_t x1102 = INT16_MAX;
static uint32_t x1104 = 105U;
volatile int8_t x1210 = 11;
static int16_t x1219 = -1;
int64_t x1228 = INT64_MIN;
static uint16_t x1233 = 255U;
int8_t x1235 = -1;
volatile uint8_t x1237 = 2U;
uint64_t x1239 = UINT64_MAX;
int32_t t58 = 69210048;
int32_t x1274 = INT32_MIN;
volatile int16_t x1276 = INT16_MAX;
static uint64_t x1324 = 434482276582LLU;
uint8_t x1366 = 12U;
int8_t x1407 = -1;
static uint8_t x1416 = 81U;
uint64_t x1446 = 202662LLU;
static int64_t x1447 = 14LL;
static int64_t x1457 = 3LL;
uint32_t x1458 = UINT32_MAX;
volatile int64_t t69 = 517822656LL;
int32_t t70 = 23;
volatile uint32_t x1644 = 493U;
static int32_t x1658 = INT32_MIN;
int32_t t74 = 21;
volatile int8_t x1679 = INT8_MIN;
uint16_t x1737 = 3U;
static int64_t x1793 = 1380235877169216930LL;
static volatile int64_t x1795 = INT64_MIN;
volatile uint8_t x1838 = UINT8_MAX;
volatile int32_t t80 = -17;
volatile uint8_t x1849 = 31U;
int64_t x1879 = 148169419LL;
uint64_t x1880 = UINT64_MAX;
int8_t x1967 = -1;
uint64_t x1968 = 1111847759099592LLU;
int8_t x1997 = 57;
uint16_t x2000 = 56U;
static volatile int32_t t89 = -77879762;
uint16_t x2094 = 25244U;
static volatile int16_t x2096 = 1;
int16_t x2125 = 771;
volatile uint32_t x2129 = 138U;
static int8_t x2135 = INT8_MAX;
static int8_t x2168 = -32;
uint16_t x2173 = UINT16_MAX;
int64_t x2175 = -1LL;
int8_t x2226 = 45;
static volatile uint16_t x2227 = UINT16_MAX;
uint8_t x2270 = 1U;
int64_t x2271 = INT64_MIN;


void f0(void) {
	volatile int16_t x37 = INT16_MAX;
	int32_t x38 = INT32_MIN;
	static int16_t x39 = INT16_MIN;
	uint32_t x40 = 189U;
	volatile uint32_t t0 = 1695936U;

	t0 = ((x37<<(x38%x39))+x40);

	if (t0 != 32956U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x77 = 607150838899LLU;
	int32_t x78 = 14;
	uint16_t x79 = 1U;
	uint32_t x80 = UINT32_MAX;
	static uint64_t t1 = 456364LLU;

	t1 = ((x77<<(x78%x79))+x80);

	if (t1 != 611445806194LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x114 = INT32_MIN;
	int16_t x115 = INT16_MIN;
	static uint16_t x116 = UINT16_MAX;
	uint32_t t2 = 819U;

	t2 = ((x113<<(x114%x115))+x116);

	if (t2 != 66005U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x162 = 2;
	static uint8_t x163 = UINT8_MAX;
	static uint64_t x164 = 2583LLU;
	uint64_t t3 = 30052LLU;

	t3 = ((x161<<(x162%x163))+x164);

	if (t3 != 1470691699LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x173 = 1U;
	volatile uint8_t x174 = 1U;
	int32_t x175 = -1;
	int16_t x176 = INT16_MIN;
	static int32_t t4 = -2387;

	t4 = ((x173<<(x174%x175))+x176);

	if (t4 != -32767) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x201 = UINT8_MAX;
	uint16_t x202 = 7009U;
	volatile int64_t x203 = 1LL;
	int64_t x204 = INT64_MIN;
	int64_t t5 = 214LL;

	t5 = ((x201<<(x202%x203))+x204);

	if (t5 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x213 = INT8_MAX;
	static int32_t t6 = -875397297;

	t6 = ((x213<<(x214%x215))+x216);

	if (t6 != 382) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x217 = INT8_MAX;
	uint8_t x219 = 24U;
	volatile int16_t x220 = -1;
	static int32_t t7 = -974714;

	t7 = ((x217<<(x218%x219))+x220);

	if (t7 != 66584575) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x265 = 60059429LLU;
	uint8_t x266 = 42U;
	int16_t x267 = -11;
	int32_t x268 = INT32_MIN;
	static volatile uint64_t t8 = 1581LLU;

	t8 = ((x265<<(x266%x267))+x268);

	if (t8 != 28602944000LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x289 = 8;
	volatile int16_t x292 = INT16_MAX;
	volatile int32_t t9 = 7;

	t9 = ((x289<<(x290%x291))+x292);

	if (t9 != 32775) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x373 = 30U;
	uint32_t x374 = UINT32_MAX;
	int16_t x375 = -3;
	uint64_t x376 = 84051529027409414LLU;
	volatile uint64_t t10 = 296530289074LLU;

	t10 = ((x373<<(x374%x375))+x376);

	if (t10 != 84051529027409534LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x386 = UINT16_MAX;
	int64_t x387 = -1LL;
	volatile int32_t t11 = -65;

	t11 = ((x385<<(x386%x387))+x388);

	if (t11 != 12973) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x409 = UINT8_MAX;
	static uint32_t x410 = 2036390U;
	int8_t x411 = 1;
	uint8_t x412 = UINT8_MAX;

	t12 = ((x409<<(x410%x411))+x412);

	if (t12 != 510) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x430 = INT32_MAX;
	int8_t x431 = INT8_MAX;
	uint16_t x432 = 823U;
	uint32_t t13 = 13945331U;

	t13 = ((x429<<(x430%x431))+x432);

	if (t13 != 695U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x441 = 0;
	volatile int8_t x443 = -1;
	int16_t x444 = INT16_MIN;
	volatile int32_t t14 = -1;

	t14 = ((x441<<(x442%x443))+x444);

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x462 = 26U;
	int8_t x463 = -1;
	int32_t x464 = 48791;
	static int32_t t15 = -1221886;

	t15 = ((x461<<(x462%x463))+x464);

	if (t15 != 48918) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x469 = 0;
	static uint8_t x471 = 1U;
	volatile int8_t x472 = INT8_MIN;
	int32_t t16 = 203918437;

	t16 = ((x469<<(x470%x471))+x472);

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x506 = UINT64_MAX;
	static volatile int64_t x507 = 1LL;
	static int16_t x508 = INT16_MAX;
	volatile int64_t t17 = 87831LL;

	t17 = ((x505<<(x506%x507))+x508);

	if (t17 != 375323616283355LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x521 = 0;
	uint16_t x522 = UINT16_MAX;
	volatile int16_t x523 = -1;

	t18 = ((x521<<(x522%x523))+x524);

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x533 = 1367LLU;
	uint8_t x534 = 22U;
	int8_t x536 = -30;
	volatile uint64_t t19 = 524235327884335LLU;

	t19 = ((x533<<(x534%x535))+x536);

	if (t19 != 5733613538LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x546 = 1U;
	volatile int64_t x547 = 2673402LL;
	uint16_t x548 = 12U;
	int32_t t20 = 341138;

	t20 = ((x545<<(x546%x547))+x548);

	if (t20 != 266) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x562 = 0;
	int32_t t21 = 0;

	t21 = ((x561<<(x562%x563))+x564);

	if (t21 != 30) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x565 = UINT16_MAX;
	int16_t x566 = -136;
	int8_t x567 = -4;
	int32_t x568 = INT32_MIN;
	int32_t t22 = 1693;

	t22 = ((x565<<(x566%x567))+x568);

	if (t22 != -2147418113) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x570 = INT16_MIN;
	int16_t x572 = INT16_MAX;
	uint64_t t23 = 1679113141305482LLU;

	t23 = ((x569<<(x570%x571))+x572);

	if (t23 != 46236LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x581 = UINT8_MAX;
	volatile uint64_t x582 = 14944428366520347LLU;
	int8_t x583 = 1;
	uint8_t x584 = 54U;
	int32_t t24 = -261;

	t24 = ((x581<<(x582%x583))+x584);

	if (t24 != 309) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x597 = UINT8_MAX;
	int8_t x598 = 3;
	int16_t x599 = 101;

	t25 = ((x597<<(x598%x599))+x600);

	if (t25 != 67575) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x629 = 2692LL;
	int8_t x630 = INT8_MAX;
	int64_t x631 = -1LL;
	static volatile int64_t t26 = -403763811LL;

	t26 = ((x629<<(x630%x631))+x632);

	if (t26 != 2681LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x641 = UINT16_MAX;
	int32_t x642 = INT32_MIN;
	int32_t x643 = INT32_MIN;
	volatile int32_t t27 = -195876807;

	t27 = ((x641<<(x642%x643))+x644);

	if (t27 != 65534) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x653 = 376519857357243132LLU;
	volatile uint8_t x654 = 10U;
	int8_t x656 = INT8_MAX;
	uint64_t t28 = 492837750LLU;

	t28 = ((x653<<(x654%x655))+x656);

	if (t28 != 376519857357243259LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x693 = UINT16_MAX;
	static int16_t x694 = 912;
	int64_t x695 = -1LL;
	static volatile int64_t x696 = INT64_MIN;
	int64_t t29 = 6316LL;

	t29 = ((x693<<(x694%x695))+x696);

	if (t29 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x717 = 20835U;
	uint8_t x720 = 23U;
	volatile uint32_t t30 = 36U;

	t30 = ((x717<<(x718%x719))+x720);

	if (t30 != 20858U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x750 = 1U;
	uint8_t x751 = UINT8_MAX;
	int8_t x752 = INT8_MIN;
	volatile uint32_t t31 = 525423219U;

	t31 = ((x749<<(x750%x751))+x752);

	if (t31 != 4294967208U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x805 = 28380203294831LL;
	int64_t x806 = 1LL;
	uint8_t x807 = UINT8_MAX;
	volatile int64_t t32 = 3389LL;

	t32 = ((x805<<(x806%x807))+x808);

	if (t32 != 56760406593112LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint64_t x829 = 8662101LLU;
	volatile uint8_t x830 = 0U;
	int32_t x831 = INT32_MAX;
	int32_t x832 = INT32_MIN;
	static uint64_t t33 = 3003047056252820LLU;

	t33 = ((x829<<(x830%x831))+x832);

	if (t33 != 18446744071570730069LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x845 = UINT8_MAX;
	int16_t x846 = INT16_MIN;
	static int8_t x848 = 59;
	volatile int32_t t34 = -1;

	t34 = ((x845<<(x846%x847))+x848);

	if (t34 != 314) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x854 = 8U;
	static int32_t x855 = INT32_MIN;
	static volatile uint8_t x856 = 1U;

	t35 = ((x853<<(x854%x855))+x856);

	if (t35 != 8388353) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x865 = INT8_MAX;
	static volatile uint8_t x866 = 2U;
	volatile uint8_t x867 = UINT8_MAX;
	uint64_t x868 = UINT64_MAX;
	uint64_t t36 = 42942266695718LLU;

	t36 = ((x865<<(x866%x867))+x868);

	if (t36 != 507LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x893 = UINT32_MAX;
	int8_t x894 = INT8_MIN;
	int16_t x895 = -1;
	static int8_t x896 = INT8_MIN;
	volatile uint32_t t37 = 1687355U;

	t37 = ((x893<<(x894%x895))+x896);

	if (t37 != 4294967167U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x925 = UINT64_MAX;
	volatile int8_t x927 = -1;
	int32_t x928 = INT32_MIN;
	volatile uint64_t t38 = 24744662LLU;

	t38 = ((x925<<(x926%x927))+x928);

	if (t38 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x933 = 15;
	static int8_t x934 = 1;
	int64_t x935 = -1539229310786989501LL;
	uint16_t x936 = UINT16_MAX;

	t39 = ((x933<<(x934%x935))+x936);

	if (t39 != 65565) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x949 = 294072LLU;
	uint8_t x950 = 1U;
	int16_t x952 = -7805;

	t40 = ((x949<<(x950%x951))+x952);

	if (t40 != 580339LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x953 = INT64_MAX;
	int8_t x954 = -1;
	int8_t x956 = INT8_MIN;
	int64_t t41 = -1217944986LL;

	t41 = ((x953<<(x954%x955))+x956);

	if (t41 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x981 = INT64_MAX;
	uint8_t x982 = 0U;
	int32_t x983 = -5657;
	int32_t x984 = -2868450;
	static volatile int64_t t42 = -171941436LL;

	t42 = ((x981<<(x982%x983))+x984);

	if (t42 != 9223372036851907357LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x989 = 0U;
	uint32_t x990 = 1U;
	uint8_t x991 = 2U;
	int8_t x992 = INT8_MIN;
	static int32_t t43 = -938732;

	t43 = ((x989<<(x990%x991))+x992);

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1001 = 17073943984LLU;
	volatile uint32_t x1002 = UINT32_MAX;
	volatile int16_t x1004 = INT16_MAX;
	volatile uint64_t t44 = 19608832357LLU;

	t44 = ((x1001<<(x1002%x1003))+x1004);

	if (t44 != 17073976751LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x1007 = -1LL;
	int64_t x1008 = INT64_MIN;
	int64_t t45 = 7158412LL;

	t45 = ((x1005<<(x1006%x1007))+x1008);

	if (t45 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x1013 = UINT16_MAX;
	static volatile uint32_t x1015 = 66U;

	t46 = ((x1013<<(x1014%x1015))+x1016);

	if (t46 != 4599483012197683293LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x1041 = 1LLU;
	uint16_t x1042 = 1U;
	static uint16_t x1043 = 27U;
	uint32_t x1044 = 153051271U;
	volatile uint64_t t47 = 610598851LLU;

	t47 = ((x1041<<(x1042%x1043))+x1044);

	if (t47 != 153051273LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x1073 = UINT64_MAX;
	volatile int8_t x1075 = INT8_MIN;
	static uint8_t x1076 = 46U;
	volatile uint64_t t48 = 135852LLU;

	t48 = ((x1073<<(x1074%x1075))+x1076);

	if (t48 != 45LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x1081 = 13760900LLU;
	volatile int16_t x1084 = -1;
	volatile uint64_t t49 = 175301853487614LLU;

	t49 = ((x1081<<(x1082%x1083))+x1084);

	if (t49 != 27521799LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x1093 = 0U;
	uint32_t x1094 = UINT32_MAX;
	uint64_t x1096 = 270147647482159LLU;
	volatile uint64_t t50 = 6020940LLU;

	t50 = ((x1093<<(x1094%x1095))+x1096);

	if (t50 != 270147647482159LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x1101 = 10558U;
	int8_t x1103 = 31;
	uint32_t t51 = 11203362U;

	t51 = ((x1101<<(x1102%x1103))+x1104);

	if (t51 != 10663U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x1105 = 0;
	volatile uint64_t x1106 = UINT64_MAX;
	uint16_t x1107 = 287U;
	volatile int16_t x1108 = -1;
	volatile int32_t t52 = -833031;

	t52 = ((x1105<<(x1106%x1107))+x1108);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x1117 = UINT32_MAX;
	volatile int32_t x1118 = 339;
	int8_t x1119 = -1;
	static volatile int8_t x1120 = -44;
	uint32_t t53 = 62509U;

	t53 = ((x1117<<(x1118%x1119))+x1120);

	if (t53 != 4294967251U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1209 = 0;
	int16_t x1211 = INT16_MIN;
	int8_t x1212 = INT8_MAX;
	static volatile int32_t t54 = 151784837;

	t54 = ((x1209<<(x1210%x1211))+x1212);

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x1217 = 44010249LL;
	uint32_t x1218 = UINT32_MAX;
	volatile int8_t x1220 = 36;
	volatile int64_t t55 = 3804199816719976LL;

	t55 = ((x1217<<(x1218%x1219))+x1220);

	if (t55 != 44010285LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x1225 = 21337530205LLU;
	volatile int32_t x1226 = -1;
	static int16_t x1227 = -1;
	static uint64_t t56 = 101700731035345429LLU;

	t56 = ((x1225<<(x1226%x1227))+x1228);

	if (t56 != 9223372058192306013LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x1234 = INT8_MAX;
	volatile uint16_t x1236 = 30753U;
	volatile int32_t t57 = 4225;

	t57 = ((x1233<<(x1234%x1235))+x1236);

	if (t57 != 31008) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x1238 = -1;
	int32_t x1240 = -1;

	t58 = ((x1237<<(x1238%x1239))+x1240);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x1245 = INT8_MAX;
	int64_t x1246 = INT64_MAX;
	int8_t x1247 = 5;
	int8_t x1248 = INT8_MAX;
	volatile int32_t t59 = 349632;

	t59 = ((x1245<<(x1246%x1247))+x1248);

	if (t59 != 635) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x1273 = 10U;
	static int8_t x1275 = INT8_MIN;
	volatile int32_t t60 = -28939;

	t60 = ((x1273<<(x1274%x1275))+x1276);

	if (t60 != 32777) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x1321 = UINT16_MAX;
	uint8_t x1322 = 1U;
	static uint32_t x1323 = 72571076U;
	volatile uint64_t t61 = 15LLU;

	t61 = ((x1321<<(x1322%x1323))+x1324);

	if (t61 != 434482407652LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x1329 = 1288U;
	int32_t x1330 = INT32_MAX;
	int16_t x1331 = -1;
	uint8_t x1332 = UINT8_MAX;
	volatile int32_t t62 = -32591;

	t62 = ((x1329<<(x1330%x1331))+x1332);

	if (t62 != 1543) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x1365 = UINT8_MAX;
	int16_t x1367 = INT16_MAX;
	static int8_t x1368 = -1;
	int32_t t63 = 10605;

	t63 = ((x1365<<(x1366%x1367))+x1368);

	if (t63 != 1044479) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x1405 = 440897U;
	volatile int8_t x1406 = INT8_MIN;
	volatile int16_t x1408 = INT16_MIN;
	uint32_t t64 = 39U;

	t64 = ((x1405<<(x1406%x1407))+x1408);

	if (t64 != 408129U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x1413 = 12108116999LLU;
	static int32_t x1414 = -1;
	volatile int8_t x1415 = -1;
	volatile uint64_t t65 = 0LLU;

	t65 = ((x1413<<(x1414%x1415))+x1416);

	if (t65 != 12108117080LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x1433 = 33566370096192LL;
	int8_t x1434 = 2;
	static int64_t x1435 = INT64_MIN;
	volatile int64_t x1436 = INT64_MIN;
	static volatile int64_t t66 = 154382004247845LL;

	t66 = ((x1433<<(x1434%x1435))+x1436);

	if (t66 != -9223237771374391040LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x1437 = UINT16_MAX;
	uint8_t x1438 = 5U;
	volatile int8_t x1439 = INT8_MIN;
	uint32_t x1440 = 1443869445U;
	volatile uint32_t t67 = 19448305U;

	t67 = ((x1437<<(x1438%x1439))+x1440);

	if (t67 != 1445966565U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x1445 = 82U;
	volatile uint64_t x1448 = 32886248LLU;
	volatile uint64_t t68 = 46LLU;

	t68 = ((x1445<<(x1446%x1447))+x1448);

	if (t68 != 33222120LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x1459 = UINT8_MAX;
	uint16_t x1460 = 1U;

	t69 = ((x1457<<(x1458%x1459))+x1460);

	if (t69 != 4LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x1549 = INT16_MAX;
	static volatile uint8_t x1550 = 1U;
	static int8_t x1551 = 2;
	int32_t x1552 = -15836360;

	t70 = ((x1549<<(x1550%x1551))+x1552);

	if (t70 != -15770826) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x1553 = UINT32_MAX;
	volatile int16_t x1554 = INT16_MIN;
	int16_t x1555 = -1;
	volatile int16_t x1556 = 6;
	volatile uint32_t t71 = 922U;

	t71 = ((x1553<<(x1554%x1555))+x1556);

	if (t71 != 5U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x1641 = 5U;
	static uint8_t x1642 = 1U;
	int64_t x1643 = INT64_MAX;
	uint32_t t72 = 446232140U;

	t72 = ((x1641<<(x1642%x1643))+x1644);

	if (t72 != 503U) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x1649 = 4926;
	static int64_t x1650 = INT64_MAX;
	int16_t x1651 = -1;
	int32_t x1652 = INT32_MIN;
	int32_t t73 = 885;

	t73 = ((x1649<<(x1650%x1651))+x1652);

	if (t73 != -2147478722) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x1657 = UINT8_MAX;
	static int8_t x1659 = 1;
	uint16_t x1660 = UINT16_MAX;

	t74 = ((x1657<<(x1658%x1659))+x1660);

	if (t74 != 65790) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x1677 = 0;
	int64_t x1678 = INT64_MIN;
	volatile int64_t x1680 = INT64_MAX;
	volatile int64_t t75 = INT64_MAX;

	t75 = ((x1677<<(x1678%x1679))+x1680);

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x1738 = 7;
	int8_t x1739 = INT8_MAX;
	int32_t x1740 = -787;
	int32_t t76 = -5822589;

	t76 = ((x1737<<(x1738%x1739))+x1740);

	if (t76 != -403) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x1753 = INT8_MAX;
	int64_t x1754 = -1LL;
	static volatile uint16_t x1755 = 1U;
	int16_t x1756 = -6556;
	int32_t t77 = 563;

	t77 = ((x1753<<(x1754%x1755))+x1756);

	if (t77 != -6429) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x1794 = 2U;
	static int32_t x1796 = -35;
	volatile int64_t t78 = -6611218261512186LL;

	t78 = ((x1793<<(x1794%x1795))+x1796);

	if (t78 != 5520943508676867685LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x1821 = UINT16_MAX;
	static uint16_t x1822 = 6U;
	uint64_t x1823 = 289LLU;
	int32_t x1824 = INT32_MIN;
	int32_t t79 = -13;

	t79 = ((x1821<<(x1822%x1823))+x1824);

	if (t79 != -2143289408) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x1837 = INT32_MAX;
	int8_t x1839 = -1;
	int32_t x1840 = INT32_MIN;

	t80 = ((x1837<<(x1838%x1839))+x1840);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x1850 = 7U;
	int8_t x1851 = 21;
	uint64_t x1852 = 149LLU;
	static volatile uint64_t t81 = 10LLU;

	t81 = ((x1849<<(x1850%x1851))+x1852);

	if (t81 != 4117LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x1861 = 517LLU;
	volatile int8_t x1862 = 50;
	int64_t x1863 = -548692874432625454LL;
	static uint16_t x1864 = UINT16_MAX;
	uint64_t t82 = 12375203431559LLU;

	t82 = ((x1861<<(x1862%x1863))+x1864);

	if (t82 != 582090251837702143LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x1877 = 187928334U;
	int8_t x1878 = 31;
	uint64_t t83 = UINT64_MAX;

	t83 = ((x1877<<(x1878%x1879))+x1880);

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x1897 = 127U;
	int16_t x1898 = 4909;
	volatile uint16_t x1899 = 30U;
	uint32_t x1900 = UINT32_MAX;
	volatile uint32_t t84 = 773U;

	t84 = ((x1897<<(x1898%x1899))+x1900);

	if (t84 != 66584575U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x1901 = 301U;
	int32_t x1902 = 11972;
	uint8_t x1903 = 24U;
	static int64_t x1904 = -1LL;
	int64_t t85 = -822991336183LL;

	t85 = ((x1901<<(x1902%x1903))+x1904);

	if (t85 != 315621375LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x1965 = 26110U;
	int8_t x1966 = 1;
	volatile uint64_t t86 = 8514713489149423LLU;

	t86 = ((x1965<<(x1966%x1967))+x1968);

	if (t86 != 1111847759125702LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x1981 = UINT8_MAX;
	uint16_t x1982 = UINT16_MAX;
	uint8_t x1983 = 4U;
	static uint32_t x1984 = UINT32_MAX;
	static volatile uint32_t t87 = 1363U;

	t87 = ((x1981<<(x1982%x1983))+x1984);

	if (t87 != 2039U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x1998 = 41;
	int8_t x1999 = -1;
	volatile int32_t t88 = 5282;

	t88 = ((x1997<<(x1998%x1999))+x2000);

	if (t88 != 113) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x2065 = 13U;
	static int32_t x2066 = 0;
	uint32_t x2067 = UINT32_MAX;
	int32_t x2068 = -1;

	t89 = ((x2065<<(x2066%x2067))+x2068);

	if (t89 != 12) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x2093 = 2U;
	int8_t x2095 = 1;
	int32_t t90 = 200;

	t90 = ((x2093<<(x2094%x2095))+x2096);

	if (t90 != 3) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x2126 = INT8_MIN;
	int8_t x2127 = INT8_MIN;
	volatile uint8_t x2128 = 50U;
	static volatile int32_t t91 = 8084519;

	t91 = ((x2125<<(x2126%x2127))+x2128);

	if (t91 != 821) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t x2130 = 95832653;
	volatile int8_t x2131 = -7;
	uint16_t x2132 = 14348U;
	uint32_t t92 = 2445810U;

	t92 = ((x2129<<(x2130%x2131))+x2132);

	if (t92 != 14486U) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint8_t x2133 = 99U;
	uint64_t x2134 = UINT64_MAX;
	uint16_t x2136 = UINT16_MAX;
	volatile int32_t t93 = 3;

	t93 = ((x2133<<(x2134%x2135))+x2136);

	if (t93 != 65733) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x2165 = UINT8_MAX;
	int64_t x2166 = INT64_MAX;
	int8_t x2167 = -1;
	volatile int32_t t94 = -436834986;

	t94 = ((x2165<<(x2166%x2167))+x2168);

	if (t94 != 223) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x2174 = 0;
	volatile int64_t x2176 = 1030LL;
	static int64_t t95 = -10666LL;

	t95 = ((x2173<<(x2174%x2175))+x2176);

	if (t95 != 66565LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x2205 = 368U;
	uint8_t x2206 = 13U;
	uint8_t x2207 = UINT8_MAX;
	uint16_t x2208 = 4U;
	volatile int32_t t96 = 102;

	t96 = ((x2205<<(x2206%x2207))+x2208);

	if (t96 != 3014660) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x2225 = 4LLU;
	volatile int64_t x2228 = -5955997305LL;
	volatile uint64_t t97 = 1925397LLU;

	t97 = ((x2225<<(x2226%x2227))+x2228);

	if (t97 != 140731532358023LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x2229 = 12U;
	static volatile int8_t x2230 = -3;
	int32_t x2231 = -1;
	int16_t x2232 = -7414;
	static volatile int32_t t98 = -22148;

	t98 = ((x2229<<(x2230%x2231))+x2232);

	if (t98 != -7402) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x2269 = 64885LLU;
	int8_t x2272 = INT8_MIN;
	uint64_t t99 = 96006091150507LLU;

	t99 = ((x2269<<(x2270%x2271))+x2272);

	if (t99 != 129642LLU) { NG(); } else { ; }
	
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

