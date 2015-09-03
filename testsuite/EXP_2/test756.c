#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x21 = 12U;
int32_t x22 = -1;
volatile uint8_t x85 = 8U;
static volatile uint16_t x86 = UINT16_MAX;
int32_t t1 = 0;
uint64_t x98 = UINT64_MAX;
static uint64_t x164 = UINT64_MAX;
static int32_t x193 = 18077;
volatile uint64_t x194 = 0LLU;
int16_t x195 = -442;
uint8_t x196 = 0U;
int32_t t7 = -22;
static uint32_t x217 = UINT32_MAX;
int16_t x237 = 70;
volatile int64_t x239 = -1LL;
int64_t x289 = INT64_MAX;
volatile uint32_t x290 = 169U;
static uint8_t x291 = 84U;
uint8_t x424 = 37U;
int32_t x434 = INT32_MIN;
static volatile int32_t x436 = INT32_MIN;
int8_t x474 = INT8_MIN;
uint8_t x478 = UINT8_MAX;
int32_t x480 = 0;
int8_t x510 = -1;
static int16_t x511 = -1;
int32_t x531 = INT32_MIN;
static int32_t x532 = -1;
volatile uint64_t t25 = 870LLU;
uint32_t t26 = 6U;
uint8_t x606 = 8U;
static volatile int32_t x708 = -29692;
static volatile int32_t t29 = -1904388;
uint32_t x741 = 0U;
volatile uint32_t x742 = UINT32_MAX;
uint8_t x807 = 69U;
static int8_t x853 = INT8_MAX;
uint64_t x858 = 1734922369435LLU;
int32_t x866 = INT32_MIN;
volatile int8_t x867 = -1;
static uint32_t x881 = UINT32_MAX;
static int16_t x883 = -1;
int64_t x892 = -1LL;
int32_t t39 = 8285243;
volatile uint64_t t41 = 30447781567047LLU;
volatile int32_t x961 = 3384;
int16_t x962 = -1;
static volatile int16_t x964 = -9;
int32_t t43 = -1;
int8_t x994 = -2;
uint8_t x1041 = UINT8_MAX;
uint32_t x1053 = 1132979U;
static int32_t x1054 = 0;
uint8_t x1056 = 14U;
static uint32_t x1063 = 1556433058U;
static uint32_t x1073 = UINT32_MAX;
int8_t x1075 = -1;
int16_t x1141 = INT16_MAX;
int32_t x1162 = 3361539;
int64_t x1164 = INT64_MAX;
volatile int64_t t51 = 56021LL;
int8_t x1167 = -1;
uint32_t t52 = 254268U;
static volatile int8_t x1190 = 0;
uint64_t t53 = 532LLU;
int64_t x1193 = INT64_MAX;
static int64_t t54 = -967527098166822LL;
int16_t x1203 = -1;
int64_t t55 = 2270LL;
uint32_t x1209 = UINT32_MAX;
volatile int8_t x1211 = -1;
uint32_t x1212 = 49537324U;
volatile uint32_t t56 = 123644690U;
uint8_t x1227 = 7U;
int16_t x1228 = 229;
static int8_t x1271 = 36;
static int16_t x1341 = INT16_MAX;
volatile int16_t x1343 = -1;
int8_t x1352 = -1;
int32_t t63 = -3773707;
uint32_t x1361 = 21773U;
volatile int32_t x1442 = 157558654;
int64_t x1473 = 224LL;
volatile uint16_t x1474 = 230U;
static volatile int8_t x1512 = -1;
int32_t x1560 = INT32_MIN;
uint8_t x1593 = 1U;
static volatile int16_t x1596 = -7;
volatile int64_t t72 = -7964773996550LL;
uint64_t t74 = 2608444196145LLU;
int64_t x1682 = INT64_MIN;
uint64_t x1684 = 7LLU;
uint64_t t75 = 31108072LLU;
static volatile int16_t x1694 = -45;
int32_t t76 = -55287501;
static uint64_t x1716 = 93158476926757LLU;
int8_t x1785 = 7;
int32_t t78 = -1410623;
int8_t x1799 = -1;
static uint8_t x1825 = UINT8_MAX;
volatile int32_t t81 = 85705795;
uint64_t x1837 = UINT64_MAX;
int64_t x1859 = -1000037LL;
uint8_t x1863 = 2U;
int32_t x1864 = INT32_MIN;
static uint32_t x1965 = 26844368U;
uint8_t x2002 = 4U;
uint64_t t93 = 37437267870LLU;
volatile uint32_t x2070 = 30U;
uint64_t x2138 = 12611006475130LLU;


void f0(void) {
	uint32_t x23 = 14U;
	static uint16_t x24 = UINT16_MAX;
	volatile int32_t t0 = 6554;

	t0 = ((x21>>(x22%x23))-x24);

	if (t0 != -65534) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x87 = INT16_MAX;
	int32_t x88 = -1;

	t1 = ((x85>>(x86%x87))-x88);

	if (t1 != 5) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x97 = UINT16_MAX;
	uint16_t x99 = UINT16_MAX;
	uint64_t x100 = 2691154873981933LLU;
	volatile uint64_t t2 = 86698LLU;

	t2 = ((x97>>(x98%x99))-x100);

	if (t2 != 18444052918835635218LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x129 = 778LLU;
	uint16_t x130 = 12U;
	volatile int32_t x131 = INT32_MIN;
	int64_t x132 = INT64_MIN;
	uint64_t t3 = 60098554LLU;

	t3 = ((x129>>(x130%x131))-x132);

	if (t3 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x161 = 3U;
	static int16_t x162 = INT16_MIN;
	volatile int16_t x163 = INT16_MIN;
	volatile uint64_t t4 = 184322681699276425LLU;

	t4 = ((x161>>(x162%x163))-x164);

	if (t4 != 4LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x173 = UINT32_MAX;
	static int8_t x174 = INT8_MAX;
	volatile uint64_t x175 = 10LLU;
	int16_t x176 = -1;
	static uint32_t t5 = 25U;

	t5 = ((x173>>(x174%x175))-x176);

	if (t5 != 33554432U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t t6 = -1620;

	t6 = ((x193>>(x194%x195))-x196);

	if (t6 != 18077) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x197 = 0;
	uint32_t x198 = UINT32_MAX;
	int32_t x199 = INT32_MAX;
	int32_t x200 = -24396;

	t7 = ((x197>>(x198%x199))-x200);

	if (t7 != 24396) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x218 = UINT64_MAX;
	int8_t x219 = 11;
	volatile int16_t x220 = 1;
	uint32_t t8 = 10U;

	t8 = ((x217>>(x218%x219))-x220);

	if (t8 != 268435454U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x221 = 141821785LLU;
	uint8_t x222 = 7U;
	int8_t x223 = 30;
	uint8_t x224 = UINT8_MAX;
	static volatile uint64_t t9 = 69253023977844281LLU;

	t9 = ((x221>>(x222%x223))-x224);

	if (t9 != 1107727LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x225 = 0;
	int8_t x226 = 1;
	uint16_t x227 = 428U;
	volatile int16_t x228 = INT16_MAX;
	volatile int32_t t10 = 181;

	t10 = ((x225>>(x226%x227))-x228);

	if (t10 != -32767) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x233 = 55957U;
	int8_t x234 = 3;
	volatile int64_t x235 = 23LL;
	static uint64_t x236 = 3227230071LLU;
	uint64_t t11 = 34976385870819LLU;

	t11 = ((x233>>(x234%x235))-x236);

	if (t11 != 18446744070482328539LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x238 = -1755;
	int8_t x240 = INT8_MAX;
	volatile int32_t t12 = -1;

	t12 = ((x237>>(x238%x239))-x240);

	if (t12 != -57) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x257 = 203899U;
	int64_t x258 = INT64_MIN;
	int32_t x259 = INT32_MIN;
	uint16_t x260 = UINT16_MAX;
	static volatile uint32_t t13 = 25443U;

	t13 = ((x257>>(x258%x259))-x260);

	if (t13 != 138364U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x292 = -91;
	static volatile int64_t t14 = 3445002913LL;

	t14 = ((x289>>(x290%x291))-x292);

	if (t14 != 4611686018427387994LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x301 = 0;
	uint8_t x302 = UINT8_MAX;
	int8_t x303 = INT8_MAX;
	int16_t x304 = -3154;
	int32_t t15 = -444023;

	t15 = ((x301>>(x302%x303))-x304);

	if (t15 != 3154) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x421 = INT32_MAX;
	volatile uint64_t x422 = 5015699092462024611LLU;
	uint32_t x423 = 6U;
	volatile int32_t t16 = 3;

	t16 = ((x421>>(x422%x423))-x424);

	if (t16 != 268435418) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x433 = 611902287274799250LLU;
	int64_t x435 = -1LL;
	uint64_t t17 = 39389LLU;

	t17 = ((x433>>(x434%x435))-x436);

	if (t17 != 611902289422282898LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x445 = 13U;
	int16_t x446 = INT16_MIN;
	int16_t x447 = INT16_MIN;
	int64_t x448 = 0LL;
	volatile int64_t t18 = -21LL;

	t18 = ((x445>>(x446%x447))-x448);

	if (t18 != 13LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x453 = INT64_MAX;
	uint8_t x454 = 12U;
	int16_t x455 = 7;
	int8_t x456 = INT8_MIN;
	int64_t t19 = -535191881496LL;

	t19 = ((x453>>(x454%x455))-x456);

	if (t19 != 288230376151711871LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x473 = UINT32_MAX;
	volatile int16_t x475 = -1;
	int16_t x476 = INT16_MIN;
	volatile uint32_t t20 = 77628385U;

	t20 = ((x473>>(x474%x475))-x476);

	if (t20 != 32767U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x477 = 166U;
	int16_t x479 = -15;
	volatile int32_t t21 = -62273;

	t21 = ((x477>>(x478%x479))-x480);

	if (t21 != 166) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x509 = 3454482U;
	volatile int8_t x512 = -24;
	volatile uint32_t t22 = 3U;

	t22 = ((x509>>(x510%x511))-x512);

	if (t22 != 3454506U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x521 = 310LLU;
	int8_t x522 = INT8_MAX;
	int64_t x523 = -1LL;
	static int16_t x524 = INT16_MIN;
	uint64_t t23 = 268687LLU;

	t23 = ((x521>>(x522%x523))-x524);

	if (t23 != 33078LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x529 = 48;
	int64_t x530 = INT64_MIN;
	volatile int32_t t24 = 607432185;

	t24 = ((x529>>(x530%x531))-x532);

	if (t24 != 49) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x545 = 2218130401866196LLU;
	static uint8_t x546 = 8U;
	uint8_t x547 = 3U;
	static int16_t x548 = 211;

	t25 = ((x545>>(x546%x547))-x548);

	if (t25 != 554532600466338LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x585 = 1;
	int32_t x586 = -2;
	uint32_t x587 = 5U;
	uint32_t x588 = UINT32_MAX;

	t26 = ((x585>>(x586%x587))-x588);

	if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x605 = 8U;
	volatile int8_t x607 = -1;
	uint64_t x608 = 1545682LLU;
	uint64_t t27 = 1022LLU;

	t27 = ((x605>>(x606%x607))-x608);

	if (t27 != 18446744073708005942LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x617 = 1345857587691858587LLU;
	volatile uint8_t x618 = 0U;
	int8_t x619 = -1;
	volatile uint16_t x620 = 1U;
	volatile uint64_t t28 = 3404895241471215LLU;

	t28 = ((x617>>(x618%x619))-x620);

	if (t28 != 1345857587691858586LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x705 = UINT16_MAX;
	uint64_t x706 = 49433134766343LLU;
	static uint8_t x707 = 3U;

	t29 = ((x705>>(x706%x707))-x708);

	if (t29 != 95227) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x743 = 1022LL;
	static int16_t x744 = -1;
	uint32_t t30 = 13495911U;

	t30 = ((x741>>(x742%x743))-x744);

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x753 = 27055932U;
	int32_t x754 = INT32_MIN;
	int16_t x755 = INT16_MIN;
	uint32_t x756 = UINT32_MAX;
	volatile uint32_t t31 = 1415571896U;

	t31 = ((x753>>(x754%x755))-x756);

	if (t31 != 27055933U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x805 = INT16_MAX;
	int32_t x806 = INT32_MAX;
	int64_t x808 = -1LL;
	volatile int64_t t32 = -1149450025325952383LL;

	t32 = ((x805>>(x806%x807))-x808);

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x821 = INT32_MAX;
	uint16_t x822 = UINT16_MAX;
	uint8_t x823 = 14U;
	volatile uint16_t x824 = UINT16_MAX;
	volatile int32_t t33 = -13;

	t33 = ((x821>>(x822%x823))-x824);

	if (t33 != 1073676288) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x854 = INT32_MIN;
	int8_t x855 = INT8_MIN;
	uint32_t x856 = 9709146U;
	volatile uint32_t t34 = 211908U;

	t34 = ((x853>>(x854%x855))-x856);

	if (t34 != 4285258277U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x857 = INT16_MAX;
	int16_t x859 = 1;
	static int8_t x860 = -1;
	volatile int32_t t35 = -83;

	t35 = ((x857>>(x858%x859))-x860);

	if (t35 != 32768) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x865 = 0;
	int8_t x868 = -1;
	static volatile int32_t t36 = -242951;

	t36 = ((x865>>(x866%x867))-x868);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x882 = -4688;
	volatile int32_t x884 = INT32_MIN;
	volatile uint32_t t37 = 2U;

	t37 = ((x881>>(x882%x883))-x884);

	if (t37 != 2147483647U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x889 = 15876LL;
	int64_t x890 = 46LL;
	static int64_t x891 = -1LL;
	static volatile int64_t t38 = 62499572LL;

	t38 = ((x889>>(x890%x891))-x892);

	if (t38 != 15877LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x893 = 67U;
	volatile uint16_t x894 = 1637U;
	uint8_t x895 = 1U;
	static uint16_t x896 = 15466U;

	t39 = ((x893>>(x894%x895))-x896);

	if (t39 != -15399) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x925 = 3U;
	uint8_t x926 = 0U;
	int8_t x927 = INT8_MAX;
	int64_t x928 = -9290LL;
	volatile int64_t t40 = 2690730667LL;

	t40 = ((x925>>(x926%x927))-x928);

	if (t40 != 9293LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x941 = 10U;
	int16_t x942 = INT16_MIN;
	static int32_t x943 = -1;
	uint64_t x944 = UINT64_MAX;

	t41 = ((x941>>(x942%x943))-x944);

	if (t41 != 11LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x945 = 1245U;
	static int64_t x946 = -1LL;
	volatile int8_t x947 = -1;
	int8_t x948 = INT8_MIN;
	int32_t t42 = -26408;

	t42 = ((x945>>(x946%x947))-x948);

	if (t42 != 1373) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x963 = -1;

	t43 = ((x961>>(x962%x963))-x964);

	if (t43 != 3393) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x993 = INT16_MAX;
	uint64_t x995 = 7LLU;
	static int8_t x996 = -14;
	volatile int32_t t44 = -753036;

	t44 = ((x993>>(x994%x995))-x996);

	if (t44 != 32781) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1042 = UINT32_MAX;
	int16_t x1043 = INT16_MAX;
	static uint64_t x1044 = 4238177954777441LLU;
	uint64_t t45 = 3352909574031913LLU;

	t45 = ((x1041>>(x1042%x1043))-x1044);

	if (t45 != 18442505895754774206LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1055 = 1LL;
	uint32_t t46 = 92U;

	t46 = ((x1053>>(x1054%x1055))-x1056);

	if (t46 != 1132965U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x1057 = UINT8_MAX;
	volatile int64_t x1058 = -1LL;
	int64_t x1059 = -1LL;
	volatile int32_t x1060 = -795633159;
	int32_t t47 = -2;

	t47 = ((x1057>>(x1058%x1059))-x1060);

	if (t47 != 795633414) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x1061 = 1U;
	static int16_t x1062 = 0;
	uint32_t x1064 = UINT32_MAX;
	uint32_t t48 = 334U;

	t48 = ((x1061>>(x1062%x1063))-x1064);

	if (t48 != 2U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1074 = INT64_MIN;
	volatile uint32_t x1076 = 127U;
	uint32_t t49 = 255645U;

	t49 = ((x1073>>(x1074%x1075))-x1076);

	if (t49 != 4294967168U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1142 = 1U;
	int32_t x1143 = -883360746;
	static uint32_t x1144 = 128036468U;
	uint32_t t50 = 20430252U;

	t50 = ((x1141>>(x1142%x1143))-x1144);

	if (t50 != 4166947211U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1161 = 0;
	volatile int16_t x1163 = -61;

	t51 = ((x1161>>(x1162%x1163))-x1164);

	if (t51 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x1165 = 114876485U;
	int32_t x1166 = -1;
	uint16_t x1168 = 566U;

	t52 = ((x1165>>(x1166%x1167))-x1168);

	if (t52 != 114875919U) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x1189 = 1202LLU;
	uint32_t x1191 = 347815437U;
	volatile int16_t x1192 = 140;

	t53 = ((x1189>>(x1190%x1191))-x1192);

	if (t53 != 1062LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x1194 = INT32_MAX;
	int64_t x1195 = -155LL;
	int32_t x1196 = INT32_MIN;

	t54 = ((x1193>>(x1194%x1195))-x1196);

	if (t54 != 4294967295LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x1201 = 255U;
	volatile int32_t x1202 = -1;
	int64_t x1204 = INT64_MAX;

	t55 = ((x1201>>(x1202%x1203))-x1204);

	if (t55 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x1210 = INT8_MAX;

	t56 = ((x1209>>(x1210%x1211))-x1212);

	if (t56 != 4245429971U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x1225 = 45617843U;
	uint64_t x1226 = 1704LLU;
	uint32_t t57 = 130U;

	t57 = ((x1225>>(x1226%x1227))-x1228);

	if (t57 != 5702001U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x1269 = 1;
	int32_t x1270 = 115705493;
	uint16_t x1272 = UINT16_MAX;
	volatile int32_t t58 = -689;

	t58 = ((x1269>>(x1270%x1271))-x1272);

	if (t58 != -65535) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x1285 = 2677U;
	uint8_t x1286 = 3U;
	int16_t x1287 = -1;
	static uint8_t x1288 = 42U;
	static volatile uint32_t t59 = 14873U;

	t59 = ((x1285>>(x1286%x1287))-x1288);

	if (t59 != 2635U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x1317 = UINT16_MAX;
	static uint8_t x1318 = 1U;
	uint16_t x1319 = 134U;
	int8_t x1320 = 0;
	volatile int32_t t60 = 13387305;

	t60 = ((x1317>>(x1318%x1319))-x1320);

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x1333 = UINT8_MAX;
	volatile uint8_t x1334 = UINT8_MAX;
	int8_t x1335 = -1;
	uint16_t x1336 = 147U;
	int32_t t61 = -3;

	t61 = ((x1333>>(x1334%x1335))-x1336);

	if (t61 != 108) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x1342 = 1685U;
	uint16_t x1344 = 23977U;
	int32_t t62 = 30;

	t62 = ((x1341>>(x1342%x1343))-x1344);

	if (t62 != 8790) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x1349 = UINT8_MAX;
	static int8_t x1350 = 3;
	int32_t x1351 = INT32_MIN;

	t63 = ((x1349>>(x1350%x1351))-x1352);

	if (t63 != 32) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x1362 = -1;
	static volatile uint64_t x1363 = UINT64_MAX;
	int32_t x1364 = INT32_MIN;
	volatile uint32_t t64 = 1328U;

	t64 = ((x1361>>(x1362%x1363))-x1364);

	if (t64 != 2147505421U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x1441 = UINT8_MAX;
	int32_t x1443 = -35;
	uint64_t x1444 = 291708053LLU;
	volatile uint64_t t65 = 679618LLU;

	t65 = ((x1441>>(x1442%x1443))-x1444);

	if (t65 != 18446744073417843563LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x1475 = -1;
	volatile int32_t x1476 = -35683704;
	volatile int64_t t66 = 464189471069018251LL;

	t66 = ((x1473>>(x1474%x1475))-x1476);

	if (t66 != 35683928LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x1493 = INT32_MAX;
	uint8_t x1494 = 2U;
	uint8_t x1495 = UINT8_MAX;
	static volatile int32_t x1496 = -32100;
	static int32_t t67 = 9555866;

	t67 = ((x1493>>(x1494%x1495))-x1496);

	if (t67 != 536903011) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x1509 = 316LL;
	int16_t x1510 = INT16_MIN;
	int16_t x1511 = INT16_MIN;
	volatile int64_t t68 = 42104613LL;

	t68 = ((x1509>>(x1510%x1511))-x1512);

	if (t68 != 317LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x1557 = 6945LLU;
	uint8_t x1558 = UINT8_MAX;
	int8_t x1559 = INT8_MAX;
	volatile uint64_t t69 = 12546509277190LLU;

	t69 = ((x1557>>(x1558%x1559))-x1560);

	if (t69 != 2147487120LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x1561 = 100U;
	int8_t x1562 = 2;
	int8_t x1563 = INT8_MAX;
	uint64_t x1564 = 3LLU;
	uint64_t t70 = 1947856405LLU;

	t70 = ((x1561>>(x1562%x1563))-x1564);

	if (t70 != 22LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x1594 = UINT16_MAX;
	uint32_t x1595 = 38U;
	int32_t t71 = -42926;

	t71 = ((x1593>>(x1594%x1595))-x1596);

	if (t71 != 7) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x1609 = INT64_MAX;
	uint8_t x1610 = UINT8_MAX;
	static int8_t x1611 = -7;
	static uint16_t x1612 = 484U;

	t72 = ((x1609>>(x1610%x1611))-x1612);

	if (t72 != 1152921504606846491LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x1613 = 694U;
	uint8_t x1614 = 2U;
	int8_t x1615 = INT8_MIN;
	uint16_t x1616 = 18251U;
	int32_t t73 = 420;

	t73 = ((x1613>>(x1614%x1615))-x1616);

	if (t73 != -18078) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x1617 = 4568LLU;
	static int8_t x1618 = 0;
	uint32_t x1619 = UINT32_MAX;
	int16_t x1620 = INT16_MIN;

	t74 = ((x1617>>(x1618%x1619))-x1620);

	if (t74 != 37336LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x1681 = 259604;
	int32_t x1683 = INT32_MIN;

	t75 = ((x1681>>(x1682%x1683))-x1684);

	if (t75 != 259597LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x1693 = 1510;
	int8_t x1695 = 1;
	volatile int32_t x1696 = -1;

	t76 = ((x1693>>(x1694%x1695))-x1696);

	if (t76 != 1511) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x1713 = 0U;
	uint64_t x1714 = UINT64_MAX;
	volatile int8_t x1715 = -14;
	uint64_t t77 = 1898799489457LLU;

	t77 = ((x1713>>(x1714%x1715))-x1716);

	if (t77 != 18446650915232624859LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x1786 = -1;
	uint32_t x1787 = UINT32_MAX;
	static volatile uint16_t x1788 = 1U;

	t78 = ((x1785>>(x1786%x1787))-x1788);

	if (t78 != 6) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x1797 = 245901;
	int8_t x1798 = INT8_MIN;
	uint8_t x1800 = 75U;
	volatile int32_t t79 = 4551;

	t79 = ((x1797>>(x1798%x1799))-x1800);

	if (t79 != 245826) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x1826 = INT32_MIN;
	static int8_t x1827 = INT8_MIN;
	int16_t x1828 = -1;
	static int32_t t80 = 1;

	t80 = ((x1825>>(x1826%x1827))-x1828);

	if (t80 != 256) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x1833 = 4704U;
	volatile int16_t x1834 = -665;
	static volatile uint32_t x1835 = 18U;
	static int16_t x1836 = 0;

	t81 = ((x1833>>(x1834%x1835))-x1836);

	if (t81 != 147) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x1838 = 0U;
	static volatile int16_t x1839 = INT16_MAX;
	int8_t x1840 = 33;
	static volatile uint64_t t82 = 21114LLU;

	t82 = ((x1837>>(x1838%x1839))-x1840);

	if (t82 != 18446744073709551582LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x1849 = 7U;
	uint16_t x1850 = UINT16_MAX;
	int32_t x1851 = -1;
	uint64_t x1852 = 119LLU;
	volatile uint64_t t83 = 132244037424LLU;

	t83 = ((x1849>>(x1850%x1851))-x1852);

	if (t83 != 18446744073709551504LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x1857 = 2U;
	int8_t x1858 = 25;
	int16_t x1860 = INT16_MIN;
	volatile int32_t t84 = -421635338;

	t84 = ((x1857>>(x1858%x1859))-x1860);

	if (t84 != 32768) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x1861 = 1U;
	uint8_t x1862 = 1U;
	volatile uint32_t t85 = 14032116U;

	t85 = ((x1861>>(x1862%x1863))-x1864);

	if (t85 != 2147483648U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x1893 = INT8_MAX;
	uint8_t x1894 = 31U;
	uint64_t x1895 = 441515484LLU;
	static uint64_t x1896 = 5413LLU;
	uint64_t t86 = 151326979721854LLU;

	t86 = ((x1893>>(x1894%x1895))-x1896);

	if (t86 != 18446744073709546203LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x1917 = 4LLU;
	int16_t x1918 = INT16_MAX;
	uint8_t x1919 = 26U;
	int32_t x1920 = 1;
	volatile uint64_t t87 = UINT64_MAX;

	t87 = ((x1917>>(x1918%x1919))-x1920);

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x1957 = 14;
	uint64_t x1958 = UINT64_MAX;
	volatile uint32_t x1959 = 51U;
	volatile uint32_t x1960 = 2U;
	volatile uint32_t t88 = 9638835U;

	t88 = ((x1957>>(x1958%x1959))-x1960);

	if (t88 != 12U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x1966 = INT64_MAX;
	int8_t x1967 = INT8_MAX;
	volatile uint64_t x1968 = 5583500220391078893LLU;
	uint64_t t89 = 13869259942718LLU;

	t89 = ((x1965>>(x1966%x1967))-x1968);

	if (t89 != 12863243853345317091LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x1973 = UINT32_MAX;
	uint8_t x1974 = 6U;
	int64_t x1975 = INT64_MIN;
	static int16_t x1976 = -1;
	uint32_t t90 = 74541U;

	t90 = ((x1973>>(x1974%x1975))-x1976);

	if (t90 != 67108864U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x1989 = 10U;
	volatile int16_t x1990 = INT16_MIN;
	int8_t x1991 = INT8_MIN;
	int64_t x1992 = -1LL;
	static int64_t t91 = 53606785082021LL;

	t91 = ((x1989>>(x1990%x1991))-x1992);

	if (t91 != 11LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x2001 = 1U;
	static int32_t x2003 = INT32_MIN;
	volatile int16_t x2004 = -1;
	volatile int32_t t92 = 3188255;

	t92 = ((x2001>>(x2002%x2003))-x2004);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x2013 = 2291526758LLU;
	int32_t x2014 = INT32_MAX;
	int8_t x2015 = -1;
	int16_t x2016 = INT16_MIN;

	t93 = ((x2013>>(x2014%x2015))-x2016);

	if (t93 != 2291559526LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x2069 = UINT8_MAX;
	int16_t x2071 = INT16_MAX;
	uint8_t x2072 = UINT8_MAX;
	int32_t t94 = 809430046;

	t94 = ((x2069>>(x2070%x2071))-x2072);

	if (t94 != -255) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint16_t x2093 = UINT16_MAX;
	int32_t x2094 = INT32_MIN;
	int8_t x2095 = -1;
	int64_t x2096 = -1LL;
	volatile int64_t t95 = 31118413278691LL;

	t95 = ((x2093>>(x2094%x2095))-x2096);

	if (t95 != 65536LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x2121 = 1;
	volatile uint16_t x2122 = 0U;
	uint64_t x2123 = 2189LLU;
	int16_t x2124 = 4151;
	volatile int32_t t96 = -309;

	t96 = ((x2121>>(x2122%x2123))-x2124);

	if (t96 != -4150) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x2129 = 879395431LL;
	static uint8_t x2130 = 18U;
	int16_t x2131 = 326;
	static int32_t x2132 = INT32_MAX;
	static int64_t t97 = -9751619663293LL;

	t97 = ((x2129>>(x2130%x2131))-x2132);

	if (t97 != -2147480293LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x2137 = UINT8_MAX;
	uint16_t x2139 = 68U;
	int64_t x2140 = INT64_MAX;
	int64_t t98 = -1054513491257LL;

	t98 = ((x2137>>(x2138%x2139))-x2140);

	if (t98 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x2153 = INT16_MAX;
	int16_t x2154 = INT16_MIN;
	volatile int8_t x2155 = -1;
	int8_t x2156 = -1;
	volatile int32_t t99 = -22;

	t99 = ((x2153>>(x2154%x2155))-x2156);

	if (t99 != 32768) { NG(); } else { ; }
	
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

