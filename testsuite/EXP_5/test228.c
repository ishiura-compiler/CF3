#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = INT32_MAX;
uint32_t x25 = UINT32_MAX;
int32_t t2 = -627541;
int64_t x69 = 804023799565279LL;
static volatile int16_t x130 = INT16_MIN;
volatile int64_t x131 = -941LL;
int32_t t7 = 1703;
int64_t x220 = INT64_MAX;
int64_t t8 = -19788LL;
int8_t x245 = INT8_MAX;
int32_t t9 = -1;
uint16_t x283 = 0U;
int16_t x284 = INT16_MIN;
static uint8_t x293 = 75U;
static uint8_t x305 = UINT8_MAX;
uint8_t x306 = 2U;
int8_t x325 = 0;
static volatile int32_t x326 = -1;
int32_t t14 = 18882;
volatile int64_t x349 = INT64_MAX;
int16_t x394 = -1;
uint64_t x413 = UINT64_MAX;
static uint64_t t18 = 994945LLU;
static int32_t x446 = 24510;
volatile uint16_t x447 = 13519U;
uint16_t x463 = UINT16_MAX;
static int16_t x471 = INT16_MAX;
int64_t x472 = -1LL;
volatile int32_t t21 = -519972;
uint64_t x490 = 102643111767821018LLU;
volatile int32_t t22 = 0;
uint8_t x533 = 55U;
static volatile int32_t x566 = -1;
uint8_t x576 = 3U;
uint8_t x596 = 19U;
int64_t x655 = INT64_MAX;
int64_t x656 = -1LL;
static volatile int32_t t29 = -1;
uint32_t x671 = UINT32_MAX;
int64_t x774 = -1LL;
int64_t x775 = INT64_MIN;
int32_t t33 = 54;
uint64_t x851 = UINT64_MAX;
static int16_t x852 = INT16_MAX;
uint64_t x897 = 6LLU;
int8_t x938 = INT8_MIN;
static uint16_t x1041 = 1U;
int32_t x1056 = -1;
int64_t x1059 = -1LL;
int16_t x1101 = INT16_MAX;
int32_t x1103 = -1;
int32_t t43 = 12495;
uint64_t x1138 = 484593595002LLU;
volatile int32_t t44 = 11117;
volatile int32_t t45 = -44772;
static int64_t x1191 = 5455LL;
uint32_t x1237 = UINT32_MAX;
int16_t x1256 = -1;
volatile uint32_t t48 = 74694U;
int16_t x1276 = 1;
int8_t x1313 = INT8_MAX;
int64_t x1318 = INT64_MAX;
int32_t t53 = -480194;
uint16_t x1351 = 17925U;
volatile uint32_t t54 = UINT32_MAX;
static int32_t x1468 = INT32_MIN;
static volatile int8_t x1483 = -27;
volatile int8_t x1506 = INT8_MIN;
uint64_t x1515 = 261781389LLU;
volatile uint32_t x1543 = 167915U;
uint64_t x1585 = UINT64_MAX;
static uint8_t x1588 = 26U;
uint16_t x1638 = UINT16_MAX;
static uint8_t x1639 = 6U;
int16_t x1656 = -1;
volatile int32_t t66 = -1;
uint8_t x1677 = 0U;
int32_t x1679 = INT32_MIN;
static int64_t x1690 = -1LL;
volatile uint64_t t69 = 195960578LLU;
int8_t x1734 = INT8_MAX;
int8_t x1818 = 3;
int8_t x1887 = 4;
int64_t x1925 = 29503LL;
int16_t x1927 = -1;
volatile int16_t x1928 = -1;
volatile uint32_t x1937 = 5U;
int32_t x1939 = -1;
static int64_t x1940 = -1LL;
static uint32_t x2002 = UINT32_MAX;
int32_t x2004 = INT32_MAX;
int32_t x2063 = -1;
static uint16_t x2150 = 27U;
int8_t x2161 = INT8_MAX;
static int32_t t82 = 153;
uint16_t x2198 = UINT16_MAX;
int64_t t85 = 132228758600213972LL;
volatile int64_t t86 = 25471431840704638LL;
uint32_t x2353 = 2075344U;
uint64_t x2493 = 10626083608743925LLU;
volatile int32_t t90 = 1;
uint32_t x2516 = 15U;
int16_t x2541 = 1;
int32_t t93 = 113;
static uint8_t x2569 = 86U;
int16_t x2572 = -1;
volatile int32_t t95 = 156;
static uint8_t x2629 = UINT8_MAX;
static volatile int8_t x2631 = INT8_MIN;
volatile int32_t t96 = 1103;
volatile int64_t x2641 = INT64_MAX;
int64_t x2644 = -592072286LL;


void f0(void) {
	int32_t x9 = INT32_MAX;
	static int64_t x10 = -1LL;
	volatile int16_t x11 = INT16_MAX;
	int8_t x12 = -1;

	t0 = (x9>>((x10-x11)%x12));

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x26 = INT8_MAX;
	int16_t x27 = -1;
	int16_t x28 = 28;
	uint32_t t1 = 235284U;

	t1 = (x25>>((x26-x27)%x28));

	if (t1 != 65535U) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x57 = 0U;
	volatile uint64_t x58 = 1236632013118874LLU;
	int32_t x59 = INT32_MAX;
	uint8_t x60 = UINT8_MAX;

	t2 = (x57>>((x58-x59)%x60));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x70 = INT16_MIN;
	int64_t x71 = -1LL;
	static volatile int8_t x72 = -1;
	int64_t t3 = 1777375LL;

	t3 = (x69>>((x70-x71)%x72));

	if (t3 != 804023799565279LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x73 = 3181261;
	volatile int8_t x74 = -1;
	int32_t x75 = INT32_MIN;
	static int32_t x76 = INT32_MAX;
	int32_t t4 = 47;

	t4 = (x73>>((x74-x75)%x76));

	if (t4 != 3181261) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x97 = 7U;
	static uint16_t x98 = UINT16_MAX;
	int64_t x99 = -18999650442686LL;
	int8_t x100 = -1;
	volatile int32_t t5 = -1398590;

	t5 = (x97>>((x98-x99)%x100));

	if (t5 != 7) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x129 = 123U;
	uint16_t x132 = 3U;
	static volatile int32_t t6 = 1065;

	t6 = (x129>>((x130-x131)%x132));

	if (t6 != 123) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x173 = 4U;
	volatile int64_t x174 = -1LL;
	int64_t x175 = -1LL;
	int16_t x176 = 10;

	t7 = (x173>>((x174-x175)%x176));

	if (t7 != 4) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x217 = INT64_MAX;
	int8_t x218 = 7;
	int16_t x219 = 6;

	t8 = (x217>>((x218-x219)%x220));

	if (t8 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x246 = 3;
	int64_t x247 = -1LL;
	volatile int32_t x248 = -2;

	t9 = (x245>>((x246-x247)%x248));

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x281 = 1291U;
	uint32_t x282 = 0U;
	volatile uint32_t t10 = 57U;

	t10 = (x281>>((x282-x283)%x284));

	if (t10 != 1291U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x294 = -1;
	volatile int8_t x295 = -6;
	int16_t x296 = -33;
	volatile int32_t t11 = -2417111;

	t11 = (x293>>((x294-x295)%x296));

	if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x301 = 27544822U;
	volatile uint8_t x302 = UINT8_MAX;
	volatile int64_t x303 = -1LL;
	int16_t x304 = -12;
	volatile uint32_t t12 = 283681U;

	t12 = (x301>>((x302-x303)%x304));

	if (t12 != 1721551U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x307 = INT8_MIN;
	int8_t x308 = INT8_MIN;
	volatile int32_t t13 = 569;

	t13 = (x305>>((x306-x307)%x308));

	if (t13 != 63) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x327 = INT64_MAX;
	volatile int64_t x328 = INT64_MIN;

	t14 = (x325>>((x326-x327)%x328));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x350 = 35;
	static volatile int16_t x351 = -1;
	static uint16_t x352 = 27443U;
	static volatile int64_t t15 = -1874150509742032LL;

	t15 = (x349>>((x350-x351)%x352));

	if (t15 != 134217727LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x389 = 674663U;
	uint16_t x390 = UINT16_MAX;
	static int32_t x391 = INT32_MAX;
	int8_t x392 = INT8_MIN;
	uint32_t t16 = 21322621U;

	t16 = (x389>>((x390-x391)%x392));

	if (t16 != 674663U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x393 = 78813LLU;
	int32_t x395 = -1;
	volatile uint32_t x396 = 16157508U;
	uint64_t t17 = 547657082415608868LLU;

	t17 = (x393>>((x394-x395)%x396));

	if (t17 != 78813LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x414 = 0;
	volatile int16_t x415 = -1;
	uint64_t x416 = UINT64_MAX;

	t18 = (x413>>((x414-x415)%x416));

	if (t18 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x445 = 124811U;
	static uint16_t x448 = 1U;
	volatile uint32_t t19 = 179626525U;

	t19 = (x445>>((x446-x447)%x448));

	if (t19 != 124811U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x461 = INT64_MAX;
	volatile int32_t x462 = INT32_MAX;
	static volatile int8_t x464 = INT8_MIN;
	int64_t t20 = INT64_MAX;

	t20 = (x461>>((x462-x463)%x464));

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x469 = 6U;
	static uint32_t x470 = 40U;

	t21 = (x469>>((x470-x471)%x472));

	if (t21 != 6) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x489 = UINT16_MAX;
	uint8_t x491 = 76U;
	int32_t x492 = 12;

	t22 = (x489>>((x490-x491)%x492));

	if (t22 != 63) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x517 = UINT64_MAX;
	int16_t x518 = INT16_MAX;
	static uint8_t x519 = UINT8_MAX;
	int8_t x520 = INT8_MIN;
	static uint64_t t23 = UINT64_MAX;

	t23 = (x517>>((x518-x519)%x520));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x534 = -1;
	int8_t x535 = INT8_MAX;
	volatile uint64_t x536 = 9LLU;
	volatile int32_t t24 = 5;

	t24 = (x533>>((x534-x535)%x536));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x565 = 9U;
	int8_t x567 = -48;
	int16_t x568 = -8;
	int32_t t25 = 944875190;

	t25 = (x565>>((x566-x567)%x568));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x573 = 286;
	int16_t x574 = INT16_MIN;
	int8_t x575 = INT8_MIN;
	int32_t t26 = -13;

	t26 = (x573>>((x574-x575)%x576));

	if (t26 != 286) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x593 = INT32_MAX;
	uint64_t x594 = UINT64_MAX;
	volatile int64_t x595 = -14679LL;
	volatile int32_t t27 = 21975;

	t27 = (x593>>((x594-x595)%x596));

	if (t27 != 2097151) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x645 = 7920LLU;
	static int16_t x646 = INT16_MIN;
	static uint64_t x647 = UINT64_MAX;
	int8_t x648 = INT8_MAX;
	uint64_t t28 = 28225680969827190LLU;

	t28 = (x645>>((x646-x647)%x648));

	if (t28 != 3960LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x653 = 4U;
	volatile uint8_t x654 = UINT8_MAX;

	t29 = (x653>>((x654-x655)%x656));

	if (t29 != 4) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x669 = INT64_MAX;
	int16_t x670 = -1;
	static volatile uint8_t x672 = UINT8_MAX;
	volatile int64_t t30 = INT64_MAX;

	t30 = (x669>>((x670-x671)%x672));

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x741 = 25U;
	uint16_t x742 = UINT16_MAX;
	static int32_t x743 = -43;
	uint16_t x744 = 2U;
	volatile int32_t t31 = -159370666;

	t31 = (x741>>((x742-x743)%x744));

	if (t31 != 25) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x765 = UINT16_MAX;
	static int8_t x766 = -1;
	int64_t x767 = 4875478126LL;
	int32_t x768 = -1;
	int32_t t32 = 877786465;

	t32 = (x765>>((x766-x767)%x768));

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x773 = 643;
	int32_t x776 = -1;

	t33 = (x773>>((x774-x775)%x776));

	if (t33 != 643) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x849 = 15830LLU;
	int64_t x850 = INT64_MAX;
	volatile uint64_t t34 = 9306189390862LLU;

	t34 = (x849>>((x850-x851)%x852));

	if (t34 != 61LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x877 = INT16_MAX;
	volatile int8_t x878 = -2;
	int8_t x879 = INT8_MAX;
	volatile int64_t x880 = -1LL;
	volatile int32_t t35 = 21428;

	t35 = (x877>>((x878-x879)%x880));

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x898 = -1;
	int32_t x899 = -1;
	int8_t x900 = INT8_MAX;
	volatile uint64_t t36 = 1LLU;

	t36 = (x897>>((x898-x899)%x900));

	if (t36 != 6LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x933 = 15U;
	volatile int8_t x934 = INT8_MIN;
	int8_t x935 = INT8_MIN;
	int16_t x936 = -1;
	volatile int32_t t37 = -242;

	t37 = (x933>>((x934-x935)%x936));

	if (t37 != 15) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x937 = 195880U;
	int32_t x939 = INT32_MIN;
	static int64_t x940 = -27LL;
	uint32_t t38 = 1U;

	t38 = (x937>>((x938-x939)%x940));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1042 = -1LL;
	int32_t x1043 = 863268414;
	int16_t x1044 = -1;
	int32_t t39 = 2;

	t39 = (x1041>>((x1042-x1043)%x1044));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x1053 = 0U;
	static volatile int32_t x1054 = -1;
	static uint16_t x1055 = UINT16_MAX;
	int32_t t40 = 12936;

	t40 = (x1053>>((x1054-x1055)%x1056));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1057 = 0;
	uint64_t x1058 = UINT64_MAX;
	static uint64_t x1060 = 23425871LLU;
	int32_t t41 = -59368;

	t41 = (x1057>>((x1058-x1059)%x1060));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x1077 = 97841606924LLU;
	uint8_t x1078 = 96U;
	static int8_t x1079 = 63;
	uint8_t x1080 = UINT8_MAX;
	volatile uint64_t t42 = 38733890LLU;

	t42 = (x1077>>((x1078-x1079)%x1080));

	if (t42 != 11LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x1102 = -1LL;
	volatile uint8_t x1104 = 90U;

	t43 = (x1101>>((x1102-x1103)%x1104));

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1137 = 1;
	static uint16_t x1139 = 2U;
	uint8_t x1140 = 2U;

	t44 = (x1137>>((x1138-x1139)%x1140));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x1149 = UINT8_MAX;
	int64_t x1150 = 3985580LL;
	static int32_t x1151 = -9666;
	int8_t x1152 = -5;

	t45 = (x1149>>((x1150-x1151)%x1152));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x1189 = 0;
	static int8_t x1190 = INT8_MAX;
	int64_t x1192 = -1LL;
	int32_t t46 = 2377543;

	t46 = (x1189>>((x1190-x1191)%x1192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x1238 = UINT32_MAX;
	volatile int16_t x1239 = -1;
	uint16_t x1240 = 24U;
	static uint32_t t47 = UINT32_MAX;

	t47 = (x1237>>((x1238-x1239)%x1240));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x1253 = 79257U;
	int16_t x1254 = INT16_MIN;
	int64_t x1255 = INT64_MIN;

	t48 = (x1253>>((x1254-x1255)%x1256));

	if (t48 != 79257U) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x1273 = 2;
	int32_t x1274 = 109335;
	int64_t x1275 = 951714218617852510LL;
	int32_t t49 = 158;

	t49 = (x1273>>((x1274-x1275)%x1276));

	if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1314 = UINT16_MAX;
	static int8_t x1315 = -1;
	static uint8_t x1316 = 3U;
	int32_t t50 = -3557132;

	t50 = (x1313>>((x1314-x1315)%x1316));

	if (t50 != 63) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x1317 = 1725U;
	int16_t x1319 = INT16_MAX;
	uint8_t x1320 = UINT8_MAX;
	volatile uint32_t t51 = 900612U;

	t51 = (x1317>>((x1318-x1319)%x1320));

	if (t51 != 1725U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x1341 = UINT32_MAX;
	static int32_t x1342 = 5342032;
	volatile int32_t x1343 = 1723422;
	uint16_t x1344 = 50U;
	volatile uint32_t t52 = 15U;

	t52 = (x1341>>((x1342-x1343)%x1344));

	if (t52 != 4194303U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x1345 = 56;
	uint32_t x1346 = UINT32_MAX;
	static volatile uint8_t x1347 = 10U;
	uint8_t x1348 = 12U;

	t53 = (x1345>>((x1346-x1347)%x1348));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x1349 = UINT32_MAX;
	uint16_t x1350 = 13U;
	int8_t x1352 = -1;

	t54 = (x1349>>((x1350-x1351)%x1352));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1465 = 154685;
	int64_t x1466 = INT64_MIN;
	volatile int32_t x1467 = INT32_MIN;
	int32_t t55 = -570;

	t55 = (x1465>>((x1466-x1467)%x1468));

	if (t55 != 154685) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x1481 = 6545643395133701LLU;
	volatile uint32_t x1482 = 33U;
	int64_t x1484 = INT64_MAX;
	uint64_t t56 = 222693092LLU;

	t56 = (x1481>>((x1482-x1483)%x1484));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x1505 = 257U;
	static int16_t x1507 = INT16_MAX;
	int64_t x1508 = -1LL;
	volatile int32_t t57 = -197299;

	t57 = (x1505>>((x1506-x1507)%x1508));

	if (t57 != 257) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x1513 = 0U;
	int32_t x1514 = -10085783;
	uint32_t x1516 = 504U;
	static int32_t t58 = -157143;

	t58 = (x1513>>((x1514-x1515)%x1516));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x1525 = 18049373LLU;
	volatile int16_t x1526 = 32;
	static volatile uint64_t x1527 = UINT64_MAX;
	int8_t x1528 = -3;
	volatile uint64_t t59 = 51854485LLU;

	t59 = (x1525>>((x1526-x1527)%x1528));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x1533 = 619;
	int16_t x1534 = 3;
	uint16_t x1535 = 3U;
	int8_t x1536 = INT8_MIN;
	int32_t t60 = 243837830;

	t60 = (x1533>>((x1534-x1535)%x1536));

	if (t60 != 619) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x1541 = INT64_MAX;
	int32_t x1542 = INT32_MIN;
	static uint32_t x1544 = 5U;
	volatile int64_t t61 = -16565122188678198LL;

	t61 = (x1541>>((x1542-x1543)%x1544));

	if (t61 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x1586 = 1;
	uint32_t x1587 = 221U;
	uint64_t t62 = 3077549540290182LLU;

	t62 = (x1585>>((x1586-x1587)%x1588));

	if (t62 != 18014398509481983LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x1609 = 2;
	int32_t x1610 = -1;
	volatile int32_t x1611 = INT32_MAX;
	int16_t x1612 = INT16_MIN;
	volatile int32_t t63 = -7235;

	t63 = (x1609>>((x1610-x1611)%x1612));

	if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x1613 = 13U;
	uint64_t x1614 = UINT64_MAX;
	uint64_t x1615 = UINT64_MAX;
	int16_t x1616 = -1;
	static int32_t t64 = 0;

	t64 = (x1613>>((x1614-x1615)%x1616));

	if (t64 != 13) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x1637 = UINT16_MAX;
	static volatile int16_t x1640 = -1;
	static volatile int32_t t65 = -1907;

	t65 = (x1637>>((x1638-x1639)%x1640));

	if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint16_t x1653 = UINT16_MAX;
	int8_t x1654 = INT8_MIN;
	int16_t x1655 = INT16_MAX;

	t66 = (x1653>>((x1654-x1655)%x1656));

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x1678 = INT16_MIN;
	int32_t x1680 = -1;
	static int32_t t67 = 3;

	t67 = (x1677>>((x1678-x1679)%x1680));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x1689 = UINT32_MAX;
	int16_t x1691 = INT16_MIN;
	volatile int64_t x1692 = -1LL;
	uint32_t t68 = UINT32_MAX;

	t68 = (x1689>>((x1690-x1691)%x1692));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x1701 = 4759LLU;
	int16_t x1702 = 3;
	int8_t x1703 = INT8_MIN;
	int16_t x1704 = 101;

	t69 = (x1701>>((x1702-x1703)%x1704));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x1733 = 3;
	static int64_t x1735 = INT64_MAX;
	static int32_t x1736 = -1;
	static volatile int32_t t70 = -24588;

	t70 = (x1733>>((x1734-x1735)%x1736));

	if (t70 != 3) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x1805 = 1U;
	uint64_t x1806 = 210159LLU;
	uint32_t x1807 = UINT32_MAX;
	static int64_t x1808 = 22LL;
	int32_t t71 = -173072;

	t71 = (x1805>>((x1806-x1807)%x1808));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x1817 = 11U;
	int8_t x1819 = 0;
	static int16_t x1820 = -1;
	static volatile int32_t t72 = -130531369;

	t72 = (x1817>>((x1818-x1819)%x1820));

	if (t72 != 11) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x1885 = INT64_MAX;
	static int32_t x1886 = INT32_MAX;
	volatile int32_t x1888 = 9;
	volatile int64_t t73 = 8529886166237983LL;

	t73 = (x1885>>((x1886-x1887)%x1888));

	if (t73 != 144115188075855871LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x1889 = 0U;
	int16_t x1890 = INT16_MAX;
	static uint32_t x1891 = 15U;
	volatile uint8_t x1892 = 3U;
	int32_t t74 = -136223776;

	t74 = (x1889>>((x1890-x1891)%x1892));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x1926 = -1065160289LL;
	int64_t t75 = -39516031LL;

	t75 = (x1925>>((x1926-x1927)%x1928));

	if (t75 != 29503LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x1938 = INT16_MIN;
	volatile uint32_t t76 = 20914147U;

	t76 = (x1937>>((x1938-x1939)%x1940));

	if (t76 != 5U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x2001 = INT16_MAX;
	uint16_t x2003 = 1U;
	volatile int32_t t77 = 94382330;

	t77 = (x2001>>((x2002-x2003)%x2004));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x2061 = 8U;
	volatile int64_t x2062 = -1LL;
	uint32_t x2064 = 58717686U;
	static int32_t t78 = -4398;

	t78 = (x2061>>((x2062-x2063)%x2064));

	if (t78 != 8) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x2069 = 19370U;
	uint64_t x2070 = 54197452LLU;
	int32_t x2071 = 2010;
	volatile int8_t x2072 = 5;
	int32_t t79 = -5007;

	t79 = (x2069>>((x2070-x2071)%x2072));

	if (t79 != 4842) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x2149 = 54131U;
	int32_t x2151 = 0;
	int32_t x2152 = 59;
	volatile uint32_t t80 = 2313U;

	t80 = (x2149>>((x2150-x2151)%x2152));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x2162 = -1304736963271176LL;
	int32_t x2163 = -267587365;
	int8_t x2164 = -1;
	int32_t t81 = -49024188;

	t81 = (x2161>>((x2162-x2163)%x2164));

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x2189 = UINT16_MAX;
	int32_t x2190 = INT32_MIN;
	static volatile int64_t x2191 = -2LL;
	uint8_t x2192 = 1U;

	t82 = (x2189>>((x2190-x2191)%x2192));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x2197 = INT64_MAX;
	uint16_t x2199 = 443U;
	uint16_t x2200 = 1U;
	static volatile int64_t t83 = INT64_MAX;

	t83 = (x2197>>((x2198-x2199)%x2200));

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x2233 = 106;
	volatile int16_t x2234 = -1;
	int32_t x2235 = -1;
	uint64_t x2236 = UINT64_MAX;
	volatile int32_t t84 = -747;

	t84 = (x2233>>((x2234-x2235)%x2236));

	if (t84 != 106) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x2293 = 4007LL;
	int16_t x2294 = INT16_MIN;
	int8_t x2295 = INT8_MIN;
	static int64_t x2296 = -1LL;

	t85 = (x2293>>((x2294-x2295)%x2296));

	if (t85 != 4007LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x2321 = 472355283LL;
	uint32_t x2322 = 8U;
	int8_t x2323 = -1;
	int32_t x2324 = -470004;

	t86 = (x2321>>((x2322-x2323)%x2324));

	if (t86 != 922568LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x2354 = -1;
	int32_t x2355 = INT32_MAX;
	volatile int8_t x2356 = INT8_MIN;
	volatile uint32_t t87 = 8152U;

	t87 = (x2353>>((x2354-x2355)%x2356));

	if (t87 != 2075344U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x2429 = UINT64_MAX;
	uint16_t x2430 = 0U;
	int32_t x2431 = -1;
	volatile uint64_t x2432 = 1710618LLU;
	volatile uint64_t t88 = 15228LLU;

	t88 = (x2429>>((x2430-x2431)%x2432));

	if (t88 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x2494 = -1;
	int16_t x2495 = -1;
	int8_t x2496 = -1;
	volatile uint64_t t89 = 3LLU;

	t89 = (x2493>>((x2494-x2495)%x2496));

	if (t89 != 10626083608743925LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x2497 = 7U;
	volatile int32_t x2498 = INT32_MAX;
	volatile int64_t x2499 = INT64_MAX;
	int8_t x2500 = -1;

	t90 = (x2497>>((x2498-x2499)%x2500));

	if (t90 != 7) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x2513 = 1U;
	static volatile int8_t x2514 = -1;
	int32_t x2515 = -14;
	volatile int32_t t91 = -34;

	t91 = (x2513>>((x2514-x2515)%x2516));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x2521 = UINT64_MAX;
	volatile int16_t x2522 = -1;
	int16_t x2523 = INT16_MIN;
	uint8_t x2524 = 5U;
	uint64_t t92 = 114076675821065LLU;

	t92 = (x2521>>((x2522-x2523)%x2524));

	if (t92 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x2542 = INT32_MAX;
	int32_t x2543 = 108336812;
	static volatile uint8_t x2544 = 4U;

	t93 = (x2541>>((x2542-x2543)%x2544));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x2549 = 240U;
	volatile int64_t x2550 = INT64_MAX;
	static uint16_t x2551 = 340U;
	volatile int8_t x2552 = -1;
	volatile int32_t t94 = -672291;

	t94 = (x2549>>((x2550-x2551)%x2552));

	if (t94 != 240) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x2570 = 1383553623U;
	int64_t x2571 = INT64_MAX;

	t95 = (x2569>>((x2570-x2571)%x2572));

	if (t95 != 86) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x2630 = 896U;
	uint8_t x2632 = 3U;

	t96 = (x2629>>((x2630-x2631)%x2632));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x2642 = INT16_MIN;
	int16_t x2643 = INT16_MIN;
	int64_t t97 = INT64_MAX;

	t97 = (x2641>>((x2642-x2643)%x2644));

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x2657 = 111;
	int8_t x2658 = INT8_MIN;
	static int64_t x2659 = INT64_MIN;
	int8_t x2660 = 1;
	volatile int32_t t98 = 833;

	t98 = (x2657>>((x2658-x2659)%x2660));

	if (t98 != 111) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x2697 = INT64_MAX;
	int32_t x2698 = -1;
	static int8_t x2699 = -1;
	int64_t x2700 = INT64_MIN;
	int64_t t99 = INT64_MAX;

	t99 = (x2697>>((x2698-x2699)%x2700));

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

