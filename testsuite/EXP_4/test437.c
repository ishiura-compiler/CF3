
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MAX;
uint32_t x4 = UINT32_MAX;
uint64_t x10 = UINT64_MAX;
int8_t x13 = 1;
static volatile uint16_t x14 = 0U;
volatile int16_t x23 = 2931;
volatile int64_t x34 = -1LL;
uint64_t t5 = 19538073LLU;
uint64_t x43 = 1828890132241477101LLU;
static int64_t x44 = INT64_MIN;
uint16_t x53 = 24172U;
volatile uint64_t x55 = 1548780538293LLU;
volatile int64_t t8 = 8687821073984328LL;
uint8_t x71 = 3U;
volatile uint32_t t11 = 28840U;
uint32_t x87 = 295119U;
uint16_t x88 = 2U;
volatile uint32_t t18 = 114668113U;
int32_t x119 = 41;
uint8_t x120 = UINT8_MAX;
volatile int32_t t19 = -11881612;
uint8_t x123 = 15U;
static uint32_t x125 = 25082U;
int32_t t22 = 120648;
uint64_t x147 = UINT64_MAX;
static uint64_t t24 = 169353932LLU;
static volatile uint64_t t25 = 34400LLU;
uint32_t x154 = 64850208U;
int8_t x162 = -1;
volatile int16_t x190 = INT16_MIN;
static int8_t x196 = -1;
static int8_t x251 = INT8_MAX;
uint64_t t39 = 63743LLU;
uint64_t x257 = 1149LLU;
int32_t x275 = -54031728;
volatile uint64_t t42 = 60212759LLU;
int8_t x278 = INT8_MAX;
volatile int64_t t44 = 7361139LL;
static volatile int64_t t45 = -19163345038219LL;
int32_t x316 = -1;
volatile int16_t x318 = INT16_MIN;
uint8_t x319 = 40U;
static int8_t x327 = 48;
static volatile uint64_t t53 = 43LLU;
static uint64_t t55 = 61786016LLU;
int16_t x366 = 10992;
uint64_t x372 = 52LLU;
uint8_t x397 = 1U;
int32_t t60 = 111;
int16_t x403 = -1;
volatile int16_t x404 = 5;
int8_t x437 = INT8_MIN;
int64_t x441 = INT64_MIN;
volatile uint8_t x446 = UINT8_MAX;
uint64_t x453 = 2014209672398LLU;
int16_t x457 = -6;
int32_t x459 = INT32_MIN;
volatile uint64_t t72 = 5834498931LLU;
uint64_t x466 = 416787651801621LLU;
uint64_t x477 = UINT64_MAX;
static int8_t x486 = INT8_MAX;
int16_t x487 = -1;
uint64_t t79 = 25956LLU;
volatile int32_t t80 = 718175953;
uint64_t x508 = 2LLU;
volatile uint64_t t81 = 50835088387647920LLU;
int8_t x510 = 1;
uint64_t x517 = 13877901685427711LLU;
static uint16_t x537 = 1598U;
int64_t x540 = -1LL;
static int64_t x558 = 1405480246633LL;
int64_t x563 = INT64_MAX;
volatile int32_t x569 = INT32_MAX;
static int64_t x570 = -1LL;
static uint32_t x593 = UINT32_MAX;
uint64_t x597 = 928331886859212978LLU;
int8_t x600 = 9;
int8_t x626 = INT8_MIN;
int64_t t98 = 249902266930925267LL;
int64_t x629 = INT64_MIN;
volatile int16_t x631 = INT16_MAX;
static int16_t x645 = -1;
volatile int64_t t100 = -1098136486252754182LL;
int8_t x653 = -1;
static int32_t x654 = INT32_MAX;
volatile uint8_t x656 = 50U;
uint16_t x663 = UINT16_MAX;
uint64_t x664 = 26811880049427LLU;
int64_t x677 = 140357849364LL;
volatile uint32_t x678 = 245207114U;
uint32_t x683 = 16582606U;
static int64_t t106 = 8109456975694838LL;
int8_t x692 = INT8_MIN;
volatile uint16_t x696 = 936U;
uint32_t x707 = UINT32_MAX;
int32_t x714 = INT32_MAX;
static int8_t x726 = INT8_MIN;
int32_t x745 = -1;
volatile uint64_t x746 = 4764999LLU;
volatile int16_t x750 = INT16_MAX;
static int16_t x769 = INT16_MAX;
static volatile uint32_t t121 = 2U;
uint32_t x784 = 5237U;
int16_t x794 = -1;
int8_t x795 = INT8_MAX;
uint32_t x797 = 11875547U;
int16_t x798 = INT16_MIN;
int8_t x817 = INT8_MAX;
static int32_t x818 = 24347826;
static int64_t x827 = 322324346345LL;
uint64_t x831 = UINT64_MAX;
int8_t x833 = 1;
int64_t x842 = -739862LL;
int8_t x843 = -1;
volatile uint8_t x846 = 1U;
static uint8_t x847 = 1U;
uint32_t t137 = 3736U;
int16_t x854 = INT16_MIN;
int8_t x856 = -1;
int8_t x857 = -1;
volatile int8_t x858 = INT8_MIN;
static volatile uint64_t t139 = UINT64_MAX;
int64_t x869 = INT64_MAX;
volatile uint8_t x891 = UINT8_MAX;
int32_t x893 = INT32_MIN;
int32_t t143 = -3;
int64_t x902 = 3081562691602LL;
uint64_t x906 = 93324LLU;
volatile int16_t x907 = 240;
static int32_t x908 = -792171;
volatile uint64_t t146 = 32453619558LLU;
static uint32_t x916 = UINT32_MAX;
int8_t x924 = -1;
int64_t x926 = 10787798753525035LL;
static int8_t x927 = 2;
volatile uint8_t x928 = UINT8_MAX;
int16_t x943 = -1;
int32_t t154 = 427;
int32_t x962 = -1;
int8_t x966 = -1;
volatile uint32_t t158 = 470U;
int32_t x974 = INT32_MAX;
uint32_t x980 = 4527U;
int16_t x997 = INT16_MIN;
int8_t x998 = INT8_MAX;
int16_t x1000 = -2;
uint64_t x1012 = 981781874380LLU;
uint16_t x1014 = UINT16_MAX;
uint32_t t166 = 240U;
uint64_t x1020 = 6697792813483916LLU;
uint64_t t168 = 6498221229516LLU;
int32_t t169 = -63096;
static int16_t x1050 = INT16_MIN;
volatile int32_t x1053 = -737715;
int16_t x1054 = -1866;
int32_t x1065 = -1;
static int8_t x1067 = INT8_MAX;
volatile uint16_t x1068 = 3019U;
int8_t x1069 = INT8_MIN;
static int8_t x1072 = -1;
static int32_t x1076 = -6224;
int32_t t174 = -268635;
int32_t x1116 = -1;
uint8_t x1119 = 1U;
int16_t x1122 = INT16_MIN;
int32_t x1125 = INT32_MIN;
volatile uint32_t x1126 = 374615958U;
uint8_t x1131 = UINT8_MAX;
volatile int64_t t183 = -204536LL;
uint8_t x1135 = UINT8_MAX;
int32_t x1136 = -103;
volatile int8_t x1147 = INT8_MAX;
int32_t x1149 = -1;
int8_t x1150 = INT8_MIN;
int32_t x1158 = 3879673;
int64_t x1160 = 319352LL;
volatile uint32_t x1179 = 1U;
static volatile uint32_t t190 = 33U;
static int64_t x1186 = -1LL;
uint32_t x1193 = UINT32_MAX;
volatile uint32_t t192 = UINT32_MAX;
int16_t x1197 = -899;
volatile uint16_t x1206 = 6U;
static uint64_t x1207 = 2184205LLU;
int8_t x1208 = INT8_MIN;
static volatile uint64_t t194 = 75866214LLU;
volatile int8_t x1209 = 7;
int32_t x1215 = -1;
int32_t t196 = -254;
static int64_t x1225 = 294014LL;
uint64_t x1232 = 1289LLU;
static int8_t x1233 = INT8_MAX;
static volatile int32_t x1235 = -489400149;
int64_t t199 = 935348312305LL;


void f0(void) {
    	int64_t x2 = INT64_MIN;
	int16_t x3 = INT16_MIN;
	int64_t t0 = 614LL;

    t0 = (x1*(x2/(x3*x4)));

    if (t0 != -9223090561878065152LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x9 = INT16_MAX;
	int64_t x11 = INT64_MAX;
	static int64_t x12 = -1LL;
	volatile uint64_t t1 = 34716354762948717LLU;

    t1 = (x9*(x10/(x11*x12)));

    if (t1 != 32767LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x15 = 1065954991607LLU;
	volatile int64_t x16 = INT64_MAX;
	uint64_t t2 = 11471LLU;

    t2 = (x13*(x14/(x15*x16)));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x17 = 7;
	int64_t x18 = 22331LL;
	int32_t x19 = -470345930;
	int8_t x20 = -2;
	static int64_t t3 = 420309430320LL;

    t3 = (x17*(x18/(x19*x20)));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x21 = INT8_MIN;
	static volatile int64_t x22 = INT64_MIN;
	volatile int8_t x24 = -1;
	int64_t t4 = 16687LL;

    t4 = (x21*(x22/(x23*x24)));

    if (t4 != -402794821125012352LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x33 = 2LLU;
	uint32_t x35 = UINT32_MAX;
	static int16_t x36 = -9986;

    t5 = (x33*(x34/(x35*x36)));

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x41 = 0U;
	volatile uint64_t x42 = UINT64_MAX;
	volatile uint64_t t6 = 296468395LLU;

    t6 = (x41*(x42/(x43*x44)));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x54 = 208641U;
	volatile int64_t x56 = INT64_MAX;
	uint64_t t7 = 2190209LLU;

    t7 = (x53*(x54/(x55*x56)));

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x57 = INT64_MIN;
	volatile uint32_t x58 = 45U;
	static int16_t x59 = 1;
	int16_t x60 = INT16_MIN;

    t8 = (x57*(x58/(x59*x60)));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x61 = -6;
	static int32_t x62 = 11049093;
	volatile uint8_t x63 = 7U;
	volatile uint16_t x64 = 219U;
	static volatile int32_t t9 = 254407;

    t9 = (x61*(x62/(x63*x64)));

    if (t9 != -43242) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x65 = 424130160LL;
	int32_t x66 = 50307669;
	volatile int32_t x67 = -6931;
	uint8_t x68 = 10U;
	static volatile int64_t t10 = -3479099954776LL;

    t10 = (x65*(x66/(x67*x68)));

    if (t10 != -307494366000LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x69 = 890800U;
	int8_t x70 = INT8_MAX;
	int32_t x72 = -1;

    t11 = (x69*(x70/(x71*x72)));

    if (t11 != 4257553696U) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x73 = -4;
	uint32_t x74 = 60U;
	static int8_t x75 = INT8_MAX;
	volatile int64_t x76 = 57LL;
	int64_t t12 = -5697LL;

    t12 = (x73*(x74/(x75*x76)));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x77 = 4626629LL;
	uint16_t x78 = 64U;
	uint64_t x79 = 1520321126373657LLU;
	int32_t x80 = INT32_MIN;
	uint64_t t13 = 2311530LLU;

    t13 = (x77*(x78/(x79*x80)));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x81 = UINT8_MAX;
	static int8_t x82 = 5;
	static volatile uint8_t x83 = 60U;
	static uint64_t x84 = 89926406694334LLU;
	uint64_t t14 = 4389LLU;

    t14 = (x81*(x82/(x83*x84)));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x85 = INT8_MIN;
	uint8_t x86 = UINT8_MAX;
	uint32_t t15 = 24457U;

    t15 = (x85*(x86/(x87*x88)));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x97 = INT32_MIN;
	int16_t x98 = -1;
	static uint8_t x99 = 1U;
	static int8_t x100 = INT8_MAX;
	static volatile int32_t t16 = -1774;

    t16 = (x97*(x98/(x99*x100)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x101 = INT64_MIN;
	int8_t x102 = INT8_MAX;
	volatile uint64_t x103 = UINT64_MAX;
	int32_t x104 = -1;
	uint64_t t17 = 5LLU;

    t17 = (x101*(x102/(x103*x104)));

    if (t17 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x113 = INT16_MIN;
	static int8_t x114 = INT8_MIN;
	volatile uint32_t x115 = 54297081U;
	static uint32_t x116 = 16U;

    t18 = (x113*(x114/(x115*x116)));

    if (t18 != 4294836224U) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x117 = -1;
	static uint16_t x118 = UINT16_MAX;

    t19 = (x117*(x118/(x119*x120)));

    if (t19 != -6) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x121 = INT16_MIN;
	uint32_t x122 = 469236U;
	int64_t x124 = 273786185LL;
	volatile int64_t t20 = 166LL;

    t20 = (x121*(x122/(x123*x124)));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x126 = INT32_MAX;
	int8_t x127 = INT8_MIN;
	volatile int8_t x128 = 4;
	static uint32_t t21 = 16447U;

    t21 = (x125*(x126/(x127*x128)));

    if (t21 != 2172674554U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x133 = INT8_MIN;
	static uint8_t x134 = 1U;
	static int16_t x135 = -1;
	uint16_t x136 = UINT16_MAX;

    t22 = (x133*(x134/(x135*x136)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x137 = INT8_MIN;
	uint64_t x138 = UINT64_MAX;
	uint64_t x139 = 2383446871424752366LLU;
	uint16_t x140 = UINT16_MAX;
	volatile uint64_t t23 = 16126188LLU;

    t23 = (x137*(x138/(x139*x140)));

    if (t23 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x145 = 2681422448004035566LL;
	int32_t x146 = INT32_MAX;
	static uint8_t x148 = UINT8_MAX;

    t24 = (x145*(x146/(x147*x148)));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x149 = 17;
	int8_t x150 = -1;
	static uint64_t x151 = UINT64_MAX;
	static int64_t x152 = INT64_MAX;

    t25 = (x149*(x150/(x151*x152)));

    if (t25 != 17LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x153 = INT16_MIN;
	static int8_t x155 = INT8_MIN;
	int32_t x156 = 27;
	static uint32_t t26 = 2023499U;

    t26 = (x153*(x154/(x155*x156)));

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x161 = INT32_MAX;
	static int16_t x163 = 1;
	volatile int16_t x164 = INT16_MAX;
	int32_t t27 = 1;

    t27 = (x161*(x162/(x163*x164)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x169 = INT8_MIN;
	static volatile int32_t x170 = -1;
	uint8_t x171 = UINT8_MAX;
	uint64_t x172 = 4570226860418305LLU;
	uint64_t t28 = 6405524794LLU;

    t28 = (x169*(x170/(x171*x172)));

    if (t28 != 18446744073709549696LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x177 = 47326529U;
	static uint64_t x178 = UINT64_MAX;
	uint32_t x179 = UINT32_MAX;
	uint16_t x180 = UINT16_MAX;
	uint64_t t29 = 3484623LLU;

    t29 = (x177*(x178/(x179*x180)));

    if (t29 != 203268995832273599LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x181 = -1;
	uint64_t x182 = 0LLU;
	int8_t x183 = 23;
	static volatile int64_t x184 = -1LL;
	uint64_t t30 = 1415LLU;

    t30 = (x181*(x182/(x183*x184)));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int8_t x189 = -13;
	int8_t x191 = INT8_MAX;
	uint8_t x192 = 122U;
	int32_t t31 = 364631286;

    t31 = (x189*(x190/(x191*x192)));

    if (t31 != 26) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x193 = INT8_MAX;
	uint8_t x194 = 3U;
	int16_t x195 = INT16_MIN;
	volatile int32_t t32 = 205473;

    t32 = (x193*(x194/(x195*x196)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x201 = INT8_MIN;
	uint64_t x202 = 15LLU;
	int16_t x203 = -1;
	volatile int16_t x204 = INT16_MIN;
	volatile uint64_t t33 = 15220275957LLU;

    t33 = (x201*(x202/(x203*x204)));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x213 = INT32_MIN;
	volatile uint8_t x214 = 3U;
	uint64_t x215 = UINT64_MAX;
	static int8_t x216 = -27;
	uint64_t t34 = 26LLU;

    t34 = (x213*(x214/(x215*x216)));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x225 = 1U;
	uint64_t x226 = UINT64_MAX;
	int8_t x227 = INT8_MIN;
	volatile int8_t x228 = INT8_MAX;
	volatile uint64_t t35 = 885LLU;

    t35 = (x225*(x226/(x227*x228)));

    if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x233 = -154206235420344LL;
	static volatile uint64_t x234 = 95458980LLU;
	int64_t x235 = -12LL;
	volatile int16_t x236 = INT16_MIN;
	uint64_t t36 = 209400657657LLU;

    t36 = (x233*(x234/(x235*x236)));

    if (t36 != 18409426164737828368LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x241 = -1;
	uint16_t x242 = 27U;
	static int32_t x243 = -546;
	int64_t x244 = 636763LL;
	volatile int64_t t37 = -1718363011LL;

    t37 = (x241*(x242/(x243*x244)));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int16_t x249 = INT16_MAX;
	volatile int64_t x250 = -1LL;
	volatile uint32_t x252 = 1350806125U;
	volatile int64_t t38 = 19622846LL;

    t38 = (x249*(x250/(x251*x252)));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint64_t x253 = UINT64_MAX;
	uint64_t x254 = 14489244929LLU;
	int64_t x255 = 91111260LL;
	int8_t x256 = -1;

    t39 = (x253*(x254/(x255*x256)));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x258 = INT64_MIN;
	int64_t x259 = -22083500611168960LL;
	uint64_t x260 = 96954LLU;
	uint64_t t40 = 152124166998207LLU;

    t40 = (x257*(x258/(x259*x260)));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x265 = INT8_MAX;
	int64_t x266 = -1LL;
	int32_t x267 = -1;
	uint8_t x268 = UINT8_MAX;
	volatile int64_t t41 = 18399LL;

    t41 = (x265*(x266/(x267*x268)));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x273 = 153339924243LLU;
	uint32_t x274 = 773U;
	int8_t x276 = 32;

    t42 = (x273*(x274/(x275*x276)));

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x277 = 9;
	static uint32_t x279 = UINT32_MAX;
	int16_t x280 = 227;
	uint32_t t43 = 1U;

    t43 = (x277*(x278/(x279*x280)));

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x281 = -1;
	int32_t x282 = INT32_MIN;
	static int16_t x283 = -1;
	volatile int64_t x284 = 1050681378084508343LL;

    t44 = (x281*(x282/(x283*x284)));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x285 = 0U;
	int32_t x286 = -1;
	int64_t x287 = -149195505629487LL;
	int8_t x288 = -2;

    t45 = (x285*(x286/(x287*x288)));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x301 = -7;
	int64_t x302 = -1LL;
	int8_t x303 = INT8_MAX;
	volatile int16_t x304 = INT16_MIN;
	volatile int64_t t46 = -15848LL;

    t46 = (x301*(x302/(x303*x304)));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x305 = INT8_MIN;
	int8_t x306 = INT8_MIN;
	uint64_t x307 = UINT64_MAX;
	int8_t x308 = INT8_MIN;
	uint64_t t47 = 505071558327LLU;

    t47 = (x305*(x306/(x307*x308)));

    if (t47 != 128LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x313 = -1;
	int16_t x314 = 30;
	uint32_t x315 = 70190041U;
	volatile uint32_t t48 = 35820U;

    t48 = (x313*(x314/(x315*x316)));

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x317 = -1;
	volatile uint8_t x320 = 1U;
	volatile int32_t t49 = 6;

    t49 = (x317*(x318/(x319*x320)));

    if (t49 != 819) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x321 = 119U;
	int32_t x322 = -1;
	int8_t x323 = 1;
	int64_t x324 = -408587LL;
	volatile int64_t t50 = -59782969LL;

    t50 = (x321*(x322/(x323*x324)));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x325 = -26;
	uint8_t x326 = 1U;
	static int64_t x328 = 232152408687174LL;
	static int64_t t51 = 24LL;

    t51 = (x325*(x326/(x327*x328)));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x333 = INT16_MIN;
	int32_t x334 = INT32_MIN;
	int32_t x335 = INT32_MAX;
	int8_t x336 = -1;
	volatile int32_t t52 = 2513130;

    t52 = (x333*(x334/(x335*x336)));

    if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x341 = 493132519738235LLU;
	uint64_t x342 = UINT64_MAX;
	int64_t x343 = -1LL;
	int16_t x344 = INT16_MIN;

    t53 = (x341*(x342/(x343*x344)));

    if (t53 != 1654016780585497733LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int8_t x345 = -1;
	int64_t x346 = -1LL;
	int8_t x347 = INT8_MIN;
	int64_t x348 = -4166955LL;
	volatile int64_t t54 = -242679853209484LL;

    t54 = (x345*(x346/(x347*x348)));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x349 = INT16_MAX;
	static volatile int8_t x350 = INT8_MIN;
	int64_t x351 = INT64_MAX;
	volatile uint64_t x352 = UINT64_MAX;

    t55 = (x349*(x350/(x351*x352)));

    if (t55 != 32767LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x353 = 18U;
	int8_t x354 = 0;
	int8_t x355 = -1;
	int16_t x356 = INT16_MAX;
	volatile int32_t t56 = 249259689;

    t56 = (x353*(x354/(x355*x356)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x361 = 8354956507322262LLU;
	int64_t x362 = INT64_MIN;
	uint8_t x363 = 1U;
	volatile int16_t x364 = INT16_MIN;
	volatile uint64_t t57 = 0LLU;

    t57 = (x361*(x362/(x363*x364)));

    if (t57 != 10922917946233716736LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x365 = INT64_MIN;
	int16_t x367 = INT16_MIN;
	int64_t x368 = -1007LL;
	static volatile int64_t t58 = -590210912LL;

    t58 = (x365*(x366/(x367*x368)));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint8_t x369 = UINT8_MAX;
	int64_t x370 = INT64_MAX;
	int8_t x371 = -1;
	uint64_t t59 = 0LLU;

    t59 = (x369*(x370/(x371*x372)));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x398 = -1;
	uint16_t x399 = 27756U;
	int32_t x400 = -1;

    t60 = (x397*(x398/(x399*x400)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x401 = -73;
	static int8_t x402 = INT8_MIN;
	volatile int32_t t61 = -9;

    t61 = (x401*(x402/(x403*x404)));

    if (t61 != -1825) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x405 = INT32_MAX;
	uint16_t x406 = 16191U;
	int32_t x407 = INT32_MAX;
	uint64_t x408 = 651LLU;
	uint64_t t62 = 4456LLU;

    t62 = (x405*(x406/(x407*x408)));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x413 = INT8_MIN;
	int8_t x414 = INT8_MIN;
	int16_t x415 = -2115;
	uint64_t x416 = 3280170746LLU;
	volatile uint64_t t63 = 34669746432914LLU;

    t63 = (x413*(x414/(x415*x416)));

    if (t63 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x421 = -1;
	int8_t x422 = INT8_MIN;
	int64_t x423 = -1LL;
	int8_t x424 = -16;
	volatile int64_t t64 = -462344031213206092LL;

    t64 = (x421*(x422/(x423*x424)));

    if (t64 != 8LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x429 = INT16_MAX;
	int16_t x430 = -48;
	uint16_t x431 = UINT16_MAX;
	uint16_t x432 = 4U;
	static int32_t t65 = 101;

    t65 = (x429*(x430/(x431*x432)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x433 = 7248592;
	int8_t x434 = INT8_MAX;
	static uint64_t x435 = UINT64_MAX;
	int64_t x436 = 42041862064LL;
	uint64_t t66 = 4096334857275LLU;

    t66 = (x433*(x434/(x435*x436)));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x438 = 0U;
	int16_t x439 = -50;
	uint16_t x440 = 14U;
	volatile uint32_t t67 = 7U;

    t67 = (x437*(x438/(x439*x440)));

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x442 = -1238;
	uint64_t x443 = 12765066437LLU;
	int64_t x444 = INT64_MIN;
	uint64_t t68 = 70970634LLU;

    t68 = (x441*(x442/(x443*x444)));

    if (t68 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x445 = INT8_MAX;
	static int16_t x447 = INT16_MIN;
	volatile uint8_t x448 = UINT8_MAX;
	volatile int32_t t69 = -553;

    t69 = (x445*(x446/(x447*x448)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x454 = UINT8_MAX;
	int8_t x455 = 1;
	int8_t x456 = INT8_MAX;
	uint64_t t70 = 1288278LLU;

    t70 = (x453*(x454/(x455*x456)));

    if (t70 != 4028419344796LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x458 = -1;
	uint8_t x460 = 1U;
	volatile int32_t t71 = 305292;

    t71 = (x457*(x458/(x459*x460)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x461 = INT64_MIN;
	int32_t x462 = INT32_MAX;
	uint64_t x463 = UINT64_MAX;
	static int16_t x464 = 491;

    t72 = (x461*(x462/(x463*x464)));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x465 = -1;
	static int64_t x467 = -1LL;
	uint16_t x468 = 278U;
	volatile uint64_t t73 = 910428344LLU;

    t73 = (x465*(x466/(x467*x468)));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x473 = 5U;
	static int8_t x474 = INT8_MIN;
	static int64_t x475 = -20031077608LL;
	static int8_t x476 = -1;
	static volatile int64_t t74 = 1LL;

    t74 = (x473*(x474/(x475*x476)));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x478 = UINT32_MAX;
	int8_t x479 = -3;
	int8_t x480 = -15;
	static volatile uint64_t t75 = 1115628536385LLU;

    t75 = (x477*(x478/(x479*x480)));

    if (t75 != 18446744073614107899LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x481 = 89;
	static int16_t x482 = INT16_MIN;
	int8_t x483 = 3;
	int16_t x484 = INT16_MAX;
	int32_t t76 = -31;

    t76 = (x481*(x482/(x483*x484)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x485 = 192210442LLU;
	uint8_t x488 = 3U;
	uint64_t t77 = 2689768168696651356LLU;

    t77 = (x485*(x486/(x487*x488)));

    if (t77 != 18446744065636713052LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x489 = -2029364;
	uint8_t x490 = UINT8_MAX;
	static volatile int16_t x491 = INT16_MIN;
	int32_t x492 = -613;
	volatile int32_t t78 = -338;

    t78 = (x489*(x490/(x491*x492)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x497 = 943927552;
	uint64_t x498 = 1LLU;
	uint32_t x499 = 911U;
	static uint32_t x500 = 1U;

    t79 = (x497*(x498/(x499*x500)));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x501 = -7209;
	static int16_t x502 = -90;
	uint8_t x503 = 123U;
	uint8_t x504 = 6U;

    t80 = (x501*(x502/(x503*x504)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x505 = INT16_MIN;
	volatile uint16_t x506 = 175U;
	uint32_t x507 = UINT32_MAX;

    t81 = (x505*(x506/(x507*x508)));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x509 = INT64_MIN;
	int8_t x511 = INT8_MAX;
	int8_t x512 = INT8_MIN;
	volatile int64_t t82 = 45243469125198086LL;

    t82 = (x509*(x510/(x511*x512)));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint8_t x518 = UINT8_MAX;
	int32_t x519 = -1;
	volatile int16_t x520 = -7983;
	volatile uint64_t t83 = 7810268448LLU;

    t83 = (x517*(x518/(x519*x520)));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x521 = -926364471LL;
	static volatile uint64_t x522 = 2973934855785265LLU;
	int64_t x523 = -1LL;
	int32_t x524 = INT32_MAX;
	volatile uint64_t t84 = 6292533072LLU;

    t84 = (x521*(x522/(x523*x524)));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x533 = INT16_MIN;
	int32_t x534 = INT32_MIN;
	static int8_t x535 = INT8_MIN;
	uint32_t x536 = 3U;
	volatile uint32_t t85 = 47U;

    t85 = (x533*(x534/(x535*x536)));

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x538 = -65689814041LL;
	int16_t x539 = INT16_MIN;
	int64_t t86 = -738106LL;

    t86 = (x537*(x538/(x539*x540)));

    if (t86 != -3203501012LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x545 = 15U;
	int64_t x546 = -1LL;
	volatile int8_t x547 = -1;
	uint16_t x548 = UINT16_MAX;
	int64_t t87 = 11979821846137776LL;

    t87 = (x545*(x546/(x547*x548)));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x549 = 360U;
	volatile uint64_t x550 = 89159926865LLU;
	int64_t x551 = 3180550000699LL;
	uint16_t x552 = 53U;
	static volatile uint64_t t88 = 495394773LLU;

    t88 = (x549*(x550/(x551*x552)));

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x553 = 0LLU;
	int32_t x554 = -398;
	volatile int64_t x555 = -33078685LL;
	static uint32_t x556 = UINT32_MAX;
	uint64_t t89 = 10746164LLU;

    t89 = (x553*(x554/(x555*x556)));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x557 = UINT32_MAX;
	int64_t x559 = -4255185402893LL;
	static int16_t x560 = INT16_MIN;
	static int64_t t90 = -412LL;

    t90 = (x557*(x558/(x559*x560)));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x561 = INT32_MIN;
	static int8_t x562 = 20;
	static int8_t x564 = -1;
	int64_t t91 = 5LL;

    t91 = (x561*(x562/(x563*x564)));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint16_t x571 = 869U;
	int64_t x572 = 464LL;
	volatile int64_t t92 = -4505LL;

    t92 = (x569*(x570/(x571*x572)));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint32_t x577 = 0U;
	static uint64_t x578 = 8451519267458748LLU;
	static uint32_t x579 = UINT32_MAX;
	int8_t x580 = INT8_MAX;
	uint64_t t93 = 62582773026344210LLU;

    t93 = (x577*(x578/(x579*x580)));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x585 = -2647349879218126470LL;
	static int8_t x586 = INT8_MAX;
	uint64_t x587 = 602219LLU;
	int8_t x588 = INT8_MAX;
	uint64_t t94 = 118901949847052877LLU;

    t94 = (x585*(x586/(x587*x588)));

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x594 = UINT16_MAX;
	uint64_t x595 = 1576256070525475230LLU;
	int64_t x596 = -1LL;
	static uint64_t t95 = 243573938827046852LLU;

    t95 = (x593*(x594/(x595*x596)));

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int8_t x598 = INT8_MIN;
	int8_t x599 = INT8_MIN;
	uint64_t t96 = 60LLU;

    t96 = (x597*(x598/(x599*x600)));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int16_t x601 = INT16_MAX;
	static uint8_t x602 = 0U;
	uint32_t x603 = 24U;
	uint8_t x604 = UINT8_MAX;
	uint32_t t97 = 3015U;

    t97 = (x601*(x602/(x603*x604)));

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x625 = INT8_MAX;
	int64_t x627 = -1LL;
	static uint16_t x628 = 5221U;

    t98 = (x625*(x626/(x627*x628)));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x630 = -1;
	uint8_t x632 = 3U;
	int64_t t99 = -6655LL;

    t99 = (x629*(x630/(x631*x632)));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x646 = UINT8_MAX;
	int16_t x647 = INT16_MAX;
	int64_t x648 = -3316016LL;

    t100 = (x645*(x646/(x647*x648)));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x649 = -160625232;
	static uint16_t x650 = 39U;
	uint32_t x651 = UINT32_MAX;
	int8_t x652 = INT8_MIN;
	volatile uint32_t t101 = 19913967U;

    t101 = (x649*(x650/(x651*x652)));

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x655 = 566LLU;
	uint64_t t102 = 6457075180599789473LLU;

    t102 = (x653*(x654/(x655*x656)));

    if (t102 != 18446744073709475734LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x657 = 186;
	int32_t x658 = -1;
	uint32_t x659 = UINT32_MAX;
	int32_t x660 = -1;
	static volatile uint32_t t103 = 117281225U;

    t103 = (x657*(x658/(x659*x660)));

    if (t103 != 4294967110U) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x661 = INT64_MIN;
	uint16_t x662 = UINT16_MAX;
	uint64_t t104 = 854LLU;

    t104 = (x661*(x662/(x663*x664)));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x679 = UINT16_MAX;
	int8_t x680 = 3;
	int64_t t105 = 45292414750419LL;

    t105 = (x677*(x678/(x679*x680)));

    if (t105 != 175026238156908LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x681 = INT64_MIN;
	uint8_t x682 = 124U;
	int32_t x684 = -86338;

    t106 = (x681*(x682/(x683*x684)));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x689 = UINT16_MAX;
	static int32_t x690 = -8068;
	int64_t x691 = 110463188LL;
	int64_t t107 = 42354108LL;

    t107 = (x689*(x690/(x691*x692)));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x693 = 8380278682059LL;
	volatile int64_t x694 = 0LL;
	int8_t x695 = INT8_MIN;
	volatile int64_t t108 = 71077LL;

    t108 = (x693*(x694/(x695*x696)));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x701 = INT32_MIN;
	int8_t x702 = INT8_MAX;
	static volatile int64_t x703 = -1LL;
	uint32_t x704 = 213U;
	int64_t t109 = 2272776956452444449LL;

    t109 = (x701*(x702/(x703*x704)));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x705 = -2;
	uint16_t x706 = UINT16_MAX;
	int8_t x708 = INT8_MIN;
	uint32_t t110 = 356363896U;

    t110 = (x705*(x706/(x707*x708)));

    if (t110 != 4294966274U) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile uint32_t x713 = 10674U;
	static uint64_t x715 = UINT64_MAX;
	int16_t x716 = -63;
	static volatile uint64_t t111 = 1951905279LLU;

    t111 = (x713*(x714/(x715*x716)));

    if (t111 != 363845086308LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x721 = 6371;
	volatile uint32_t x722 = 3724327U;
	static uint64_t x723 = 16012246299789LLU;
	int32_t x724 = INT32_MAX;
	volatile uint64_t t112 = 503384528179020077LLU;

    t112 = (x721*(x722/(x723*x724)));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x725 = INT16_MIN;
	int64_t x727 = -1LL;
	int32_t x728 = 1;
	int64_t t113 = -136471667451944590LL;

    t113 = (x725*(x726/(x727*x728)));

    if (t113 != -4194304LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x729 = -555838408;
	int8_t x730 = INT8_MAX;
	uint32_t x731 = 7U;
	static volatile int8_t x732 = INT8_MIN;
	uint32_t t114 = 324672U;

    t114 = (x729*(x730/(x731*x732)));

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x733 = 8;
	uint8_t x734 = 0U;
	volatile uint8_t x735 = UINT8_MAX;
	int16_t x736 = 1;
	int32_t t115 = 0;

    t115 = (x733*(x734/(x735*x736)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x737 = UINT8_MAX;
	int8_t x738 = INT8_MIN;
	int16_t x739 = 16263;
	int16_t x740 = 1442;
	int32_t t116 = 2365529;

    t116 = (x737*(x738/(x739*x740)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x747 = 1914738U;
	static int8_t x748 = -1;
	volatile uint64_t t117 = 85LLU;

    t117 = (x745*(x746/(x747*x748)));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x749 = INT16_MIN;
	uint16_t x751 = 1823U;
	uint8_t x752 = UINT8_MAX;
	int32_t t118 = 329760500;

    t118 = (x749*(x750/(x751*x752)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x753 = INT8_MAX;
	uint32_t x754 = UINT32_MAX;
	int16_t x755 = 24;
	static volatile uint32_t x756 = 549786161U;
	volatile uint32_t t119 = 4949U;

    t119 = (x753*(x754/(x755*x756)));

    if (t119 != 1651U) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x770 = 0;
	static int32_t x771 = -1;
	volatile int8_t x772 = INT8_MIN;
	int32_t t120 = 0;

    t120 = (x769*(x770/(x771*x772)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x773 = 34086049U;
	int32_t x774 = INT32_MAX;
	int8_t x775 = INT8_MAX;
	int8_t x776 = INT8_MIN;

    t121 = (x773*(x774/(x775*x776)));

    if (t121 != 2517276408U) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x781 = -1;
	uint8_t x782 = 25U;
	static int64_t x783 = -685812LL;
	volatile int64_t t122 = -6251LL;

    t122 = (x781*(x782/(x783*x784)));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x789 = INT8_MIN;
	int32_t x790 = -109486;
	volatile int64_t x791 = -1LL;
	uint32_t x792 = UINT32_MAX;
	int64_t t123 = -1910178928LL;

    t123 = (x789*(x790/(x791*x792)));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x793 = 1073U;
	uint64_t x796 = 6753LLU;
	uint64_t t124 = 120LLU;

    t124 = (x793*(x794/(x795*x796)));

    if (t124 != 23079105572314979LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x799 = 14;
	static uint16_t x800 = 195U;
	volatile uint32_t t125 = 27889U;

    t125 = (x797*(x798/(x799*x800)));

    if (t125 != 4152460732U) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x801 = -1;
	static uint64_t x802 = 2956500991755LLU;
	uint64_t x803 = 47LLU;
	int8_t x804 = INT8_MIN;
	static uint64_t t126 = 45489521428013LLU;

    t126 = (x801*(x802/(x803*x804)));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x805 = -1;
	volatile uint8_t x806 = 34U;
	int16_t x807 = INT16_MAX;
	uint8_t x808 = 1U;
	volatile int32_t t127 = 109649518;

    t127 = (x805*(x806/(x807*x808)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x809 = INT8_MIN;
	volatile int32_t x810 = -1;
	static uint8_t x811 = 3U;
	static volatile int64_t x812 = -38707586806337LL;
	static volatile int64_t t128 = 108007420735028LL;

    t128 = (x809*(x810/(x811*x812)));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x813 = UINT8_MAX;
	int8_t x814 = 0;
	int64_t x815 = 159129LL;
	uint16_t x816 = 47U;
	volatile int64_t t129 = 30117LL;

    t129 = (x813*(x814/(x815*x816)));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint32_t x819 = UINT32_MAX;
	int16_t x820 = -12659;
	static uint32_t t130 = 370990U;

    t130 = (x817*(x818/(x819*x820)));

    if (t130 != 244221U) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x825 = INT64_MIN;
	volatile int64_t x826 = -428508607703LL;
	volatile int32_t x828 = -1017;
	int64_t t131 = 0LL;

    t131 = (x825*(x826/(x827*x828)));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x829 = INT32_MAX;
	volatile uint16_t x830 = 330U;
	int64_t x832 = -243611669LL;
	uint64_t t132 = 270403455439308LLU;

    t132 = (x829*(x830/(x831*x832)));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x834 = 123U;
	static volatile int8_t x835 = -1;
	static uint64_t x836 = UINT64_MAX;
	volatile uint64_t t133 = 1027866250215514471LLU;

    t133 = (x833*(x834/(x835*x836)));

    if (t133 != 123LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x837 = -28;
	uint32_t x838 = UINT32_MAX;
	int8_t x839 = -1;
	uint32_t x840 = 38U;
	static volatile uint32_t t134 = 3261U;

    t134 = (x837*(x838/(x839*x840)));

    if (t134 != 4294967268U) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x841 = 5;
	volatile int8_t x844 = INT8_MIN;
	volatile int64_t t135 = 54700192749916161LL;

    t135 = (x841*(x842/(x843*x844)));

    if (t135 != -28900LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x845 = 259228LLU;
	static volatile int32_t x848 = -1;
	volatile uint64_t t136 = 1LLU;

    t136 = (x845*(x846/(x847*x848)));

    if (t136 != 18446744073709292388LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x849 = INT16_MAX;
	int8_t x850 = INT8_MAX;
	int16_t x851 = INT16_MIN;
	static uint32_t x852 = 168U;

    t137 = (x849*(x850/(x851*x852)));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x853 = INT8_MAX;
	volatile int64_t x855 = -1LL;
	volatile int64_t t138 = -1LL;

    t138 = (x853*(x854/(x855*x856)));

    if (t138 != -4161536LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x859 = INT32_MAX;
	uint64_t x860 = UINT64_MAX;

    t139 = (x857*(x858/(x859*x860)));

    if (t139 != UINT64_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x861 = -227;
	static int64_t x862 = -14196LL;
	volatile uint16_t x863 = UINT16_MAX;
	volatile int8_t x864 = 3;
	volatile int64_t t140 = 119439079445LL;

    t140 = (x861*(x862/(x863*x864)));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x870 = INT8_MIN;
	int8_t x871 = -3;
	static int32_t x872 = 86;
	volatile int64_t t141 = -701764097777818829LL;

    t141 = (x869*(x870/(x871*x872)));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x889 = -148;
	static uint64_t x890 = UINT64_MAX;
	int8_t x892 = 14;
	static uint64_t t142 = 11376164562557571LLU;

    t142 = (x889*(x890/(x891*x892)));

    if (t142 != 17682005103707026840LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int8_t x894 = 0;
	volatile int8_t x895 = -1;
	static int16_t x896 = -151;

    t143 = (x893*(x894/(x895*x896)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int8_t x897 = -12;
	int8_t x898 = INT8_MIN;
	static int64_t x899 = -1LL;
	static int32_t x900 = INT32_MIN;
	volatile int64_t t144 = 118410707LL;

    t144 = (x897*(x898/(x899*x900)));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x901 = -1LL;
	int16_t x903 = -1;
	int32_t x904 = -1;
	int64_t t145 = -781465LL;

    t145 = (x901*(x902/(x903*x904)));

    if (t145 != -3081562691602LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x905 = 4U;

    t146 = (x905*(x906/(x907*x908)));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint32_t x909 = UINT32_MAX;
	int64_t x910 = -3332467LL;
	uint32_t x911 = UINT32_MAX;
	volatile uint8_t x912 = 76U;
	int64_t t147 = -137147941713LL;

    t147 = (x909*(x910/(x911*x912)));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x913 = 14U;
	int64_t x914 = -1LL;
	static volatile int32_t x915 = INT32_MAX;
	static volatile int64_t t148 = 276974574474400LL;

    t148 = (x913*(x914/(x915*x916)));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x917 = 1578967;
	uint64_t x918 = 110360585773043066LLU;
	static int16_t x919 = INT16_MIN;
	static uint8_t x920 = 98U;
	static volatile uint64_t t149 = 2337146628LLU;

    t149 = (x917*(x918/(x919*x920)));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x921 = UINT16_MAX;
	int16_t x922 = -1330;
	int64_t x923 = 1102677944LL;
	static int64_t t150 = 34978488604LL;

    t150 = (x921*(x922/(x923*x924)));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x925 = -1;
	volatile int64_t t151 = -120161596LL;

    t151 = (x925*(x926/(x927*x928)));

    if (t151 != -21152546575539LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x941 = INT16_MIN;
	int8_t x942 = INT8_MIN;
	static int64_t x944 = -1LL;
	volatile int64_t t152 = 62LL;

    t152 = (x941*(x942/(x943*x944)));

    if (t152 != 4194304LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x945 = INT8_MIN;
	int64_t x946 = INT64_MIN;
	int16_t x947 = -1;
	uint8_t x948 = UINT8_MAX;
	static volatile int64_t t153 = -4200195398124LL;

    t153 = (x945*(x946/(x947*x948)));

    if (t153 != -4629771061636907008LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x953 = INT16_MIN;
	volatile uint16_t x954 = 7U;
	volatile int32_t x955 = -66864;
	volatile uint8_t x956 = 94U;

    t154 = (x953*(x954/(x955*x956)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x957 = INT32_MIN;
	uint16_t x958 = UINT16_MAX;
	uint32_t x959 = 1U;
	int64_t x960 = -1LL;
	volatile int64_t t155 = 187022106525657661LL;

    t155 = (x957*(x958/(x959*x960)));

    if (t155 != 140735340871680LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x961 = INT32_MIN;
	uint32_t x963 = 9907888U;
	int8_t x964 = -1;
	static uint32_t t156 = 11062U;

    t156 = (x961*(x962/(x963*x964)));

    if (t156 != 2147483648U) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x965 = INT32_MAX;
	int8_t x967 = -1;
	static uint32_t x968 = UINT32_MAX;
	uint32_t t157 = 3330U;

    t157 = (x965*(x966/(x967*x968)));

    if (t157 != 2147483649U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x969 = 3071030U;
	static volatile int16_t x970 = 8633;
	int16_t x971 = INT16_MIN;
	volatile uint32_t x972 = 228U;

    t158 = (x969*(x970/(x971*x972)));

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x973 = -4690;
	int16_t x975 = -1;
	static int64_t x976 = -14845LL;
	static int64_t t159 = 13467LL;

    t159 = (x973*(x974/(x975*x976)));

    if (t159 != -678455400LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x977 = INT16_MIN;
	volatile uint32_t x978 = 88336U;
	int8_t x979 = INT8_MAX;
	volatile uint32_t t160 = 1574303136U;

    t160 = (x977*(x978/(x979*x980)));

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x981 = -480277945;
	volatile int16_t x982 = 0;
	static int64_t x983 = -1087529592521LL;
	int64_t x984 = -21LL;
	int64_t t161 = 22318LL;

    t161 = (x981*(x982/(x983*x984)));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x985 = UINT8_MAX;
	static int16_t x986 = -484;
	int32_t x987 = -1;
	uint8_t x988 = 117U;
	volatile int32_t t162 = -22;

    t162 = (x985*(x986/(x987*x988)));

    if (t162 != 1020) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x989 = INT32_MIN;
	int32_t x990 = -1;
	uint64_t x991 = 15LLU;
	static int8_t x992 = -1;
	volatile uint64_t t163 = 684079676LLU;

    t163 = (x989*(x990/(x991*x992)));

    if (t163 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x999 = INT16_MAX;
	volatile int32_t t164 = -55818094;

    t164 = (x997*(x998/(x999*x1000)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x1009 = -1LL;
	int64_t x1010 = INT64_MIN;
	int8_t x1011 = 6;
	volatile uint64_t t165 = 11485383LLU;

    t165 = (x1009*(x1010/(x1011*x1012)));

    if (t165 != 18446744073707985863LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x1013 = -10343;
	volatile uint32_t x1015 = 224167515U;
	static int32_t x1016 = INT32_MIN;

    t166 = (x1013*(x1014/(x1015*x1016)));

    if (t166 != 0U) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x1017 = -1LL;
	int16_t x1018 = -357;
	volatile int16_t x1019 = INT16_MAX;
	uint64_t t167 = UINT64_MAX;

    t167 = (x1017*(x1018/(x1019*x1020)));

    if (t167 != UINT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x1021 = 77164487189730LLU;
	static volatile int64_t x1022 = INT64_MAX;
	uint32_t x1023 = 483351U;
	volatile int8_t x1024 = INT8_MIN;

    t168 = (x1021*(x1022/(x1023*x1024)));

    if (t168 != 7778848952641258326LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x1037 = -5;
	int8_t x1038 = 3;
	volatile int16_t x1039 = 422;
	volatile int32_t x1040 = -1;

    t169 = (x1037*(x1038/(x1039*x1040)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x1049 = 380037228;
	volatile uint64_t x1051 = 1043086076233LLU;
	uint64_t x1052 = 34918420288299248LLU;
	uint64_t t170 = 1113961439314277LLU;

    t170 = (x1049*(x1050/(x1051*x1052)));

    if (t170 != 380037228LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x1055 = INT16_MAX;
	volatile uint32_t x1056 = 29U;
	volatile uint32_t t171 = 344263588U;

    t171 = (x1053*(x1054/(x1055*x1056)));

    if (t171 != 961233211U) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x1066 = INT8_MIN;
	int32_t t172 = -149537;

    t172 = (x1065*(x1066/(x1067*x1068)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x1070 = 12LL;
	uint16_t x1071 = 2554U;
	static int64_t t173 = 2LL;

    t173 = (x1069*(x1070/(x1071*x1072)));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x1073 = -111758;
	int8_t x1074 = INT8_MIN;
	volatile int16_t x1075 = 7361;

    t174 = (x1073*(x1074/(x1075*x1076)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x1077 = 36740878398LLU;
	static int64_t x1078 = INT64_MIN;
	volatile int32_t x1079 = -1;
	static uint8_t x1080 = UINT8_MAX;
	volatile uint64_t t175 = 969954187941568LLU;

    t175 = (x1077*(x1078/(x1079*x1080)));

    if (t175 != 651061537100209920LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x1089 = 3LL;
	uint64_t x1090 = UINT64_MAX;
	static int16_t x1091 = -29;
	volatile uint64_t x1092 = 719783537726LLU;
	uint64_t t176 = 3239664370761500143LLU;

    t176 = (x1089*(x1090/(x1091*x1092)));

    if (t176 != 3LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x1105 = 12039U;
	int32_t x1106 = INT32_MIN;
	static volatile uint64_t x1107 = 4LLU;
	static int16_t x1108 = INT16_MIN;
	volatile uint64_t t177 = 2006468868270112LLU;

    t177 = (x1105*(x1106/(x1107*x1108)));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x1109 = 4430585883118LLU;
	static int32_t x1110 = INT32_MAX;
	volatile uint64_t x1111 = 257327731979109674LLU;
	static int16_t x1112 = 5737;
	uint64_t t178 = 3301508113662LLU;

    t178 = (x1109*(x1110/(x1111*x1112)));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x1113 = 65404177015LLU;
	uint32_t x1114 = 0U;
	int8_t x1115 = 1;
	volatile uint64_t t179 = 535459942LLU;

    t179 = (x1113*(x1114/(x1115*x1116)));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x1117 = 400817414U;
	int32_t x1118 = INT32_MIN;
	volatile uint32_t x1120 = 17U;
	static volatile uint32_t t180 = 10362668U;

    t180 = (x1117*(x1118/(x1119*x1120)));

    if (t180 != 1808963626U) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1121 = INT8_MAX;
	uint64_t x1123 = 141LLU;
	int64_t x1124 = -372LL;
	uint64_t t181 = 543LLU;

    t181 = (x1121*(x1122/(x1123*x1124)));

    if (t181 != 127LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x1127 = 102U;
	static int8_t x1128 = INT8_MAX;
	static volatile uint32_t t182 = 0U;

    t182 = (x1125*(x1126/(x1127*x1128)));

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x1129 = 311U;
	int64_t x1130 = INT64_MIN;
	static volatile int32_t x1132 = 122676;

    t183 = (x1129*(x1130/(x1131*x1132)));

    if (t183 != -91695986796836LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x1133 = 30U;
	volatile int16_t x1134 = 0;
	int32_t t184 = 0;

    t184 = (x1133*(x1134/(x1135*x1136)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint8_t x1137 = 3U;
	int32_t x1138 = -1;
	int32_t x1139 = -1;
	static int64_t x1140 = 265900652LL;
	int64_t t185 = 41853262242709684LL;

    t185 = (x1137*(x1138/(x1139*x1140)));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1145 = -1;
	volatile int32_t x1146 = INT32_MIN;
	uint8_t x1148 = UINT8_MAX;
	static int32_t t186 = -574702;

    t186 = (x1145*(x1146/(x1147*x1148)));

    if (t186 != 66311) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1151 = -1;
	uint32_t x1152 = UINT32_MAX;
	uint32_t t187 = 277075038U;

    t187 = (x1149*(x1150/(x1151*x1152)));

    if (t187 != 128U) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x1157 = UINT64_MAX;
	int16_t x1159 = INT16_MAX;
	uint64_t t188 = 5569LLU;

    t188 = (x1157*(x1158/(x1159*x1160)));

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1173 = INT16_MAX;
	static uint64_t x1174 = 452036532863464184LLU;
	int64_t x1175 = -1599829612982LL;
	int32_t x1176 = -1;
	volatile uint64_t t189 = 78LLU;

    t189 = (x1173*(x1174/(x1175*x1176)));

    if (t189 != 9258381384LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x1177 = INT32_MIN;
	int8_t x1178 = -1;
	int8_t x1180 = 3;

    t190 = (x1177*(x1178/(x1179*x1180)));

    if (t190 != 2147483648U) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1185 = 3;
	uint32_t x1187 = UINT32_MAX;
	uint32_t x1188 = UINT32_MAX;
	static volatile int64_t t191 = 1994841501161787675LL;

    t191 = (x1185*(x1186/(x1187*x1188)));

    if (t191 != -3LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1194 = INT16_MIN;
	static int16_t x1195 = INT16_MAX;
	volatile int16_t x1196 = -1;

    t192 = (x1193*(x1194/(x1195*x1196)));

    if (t192 != UINT32_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1198 = -1;
	int32_t x1199 = 1;
	uint32_t x1200 = UINT32_MAX;
	uint32_t t193 = 1305459U;

    t193 = (x1197*(x1198/(x1199*x1200)));

    if (t193 != 4294966397U) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x1205 = -742660187649LL;

    t194 = (x1205*(x1206/(x1207*x1208)));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1210 = -1338824LL;
	int8_t x1211 = INT8_MIN;
	int32_t x1212 = 2199;
	volatile int64_t t195 = 103716165957248LL;

    t195 = (x1209*(x1210/(x1211*x1212)));

    if (t195 != 28LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1213 = INT16_MAX;
	uint8_t x1214 = 3U;
	static int8_t x1216 = INT8_MAX;

    t196 = (x1213*(x1214/(x1215*x1216)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x1226 = 971115U;
	static uint64_t x1227 = 47368960LLU;
	int16_t x1228 = INT16_MIN;
	volatile uint64_t t197 = 37458458624022LLU;

    t197 = (x1225*(x1226/(x1227*x1228)));

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x1229 = 8U;
	volatile int64_t x1230 = INT64_MIN;
	int8_t x1231 = INT8_MIN;
	uint64_t t198 = 1850259343LLU;

    t198 = (x1229*(x1230/(x1231*x1232)));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int64_t x1234 = -6554222369986651LL;
	int16_t x1236 = -1;

    t199 = (x1233*(x1234/(x1235*x1236)));

    if (t199 != -1700829466LL) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

