#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x3 = INT32_MIN;
int16_t x4 = 300;
volatile int64_t x11 = -21LL;
uint64_t t3 = 2035423468313915348LLU;
static int64_t x17 = 31845732034132705LL;
uint64_t x20 = 99402091754585LLU;
uint64_t x23 = UINT64_MAX;
uint64_t t5 = 10235LLU;
int8_t x26 = INT8_MIN;
static uint64_t x29 = UINT64_MAX;
volatile int64_t x43 = -16661576276120404LL;
uint64_t x56 = 3120028LLU;
static volatile uint64_t t12 = 44613826239LLU;
static int64_t x57 = -1LL;
volatile int32_t t14 = 38032620;
int64_t t16 = 128356275976LL;
int32_t x73 = -643;
uint16_t x79 = 3U;
int8_t x80 = -19;
volatile int16_t x85 = -1;
int16_t x86 = INT16_MAX;
static int8_t x89 = 0;
int32_t x90 = 1;
volatile uint32_t x92 = 401516U;
uint32_t t21 = 10U;
static volatile int16_t x98 = 1;
int16_t x105 = 1444;
uint64_t t26 = 133629206115LLU;
uint32_t x122 = UINT32_MAX;
static volatile int16_t x123 = -1;
static volatile uint32_t x126 = 2U;
uint64_t t29 = 48076LLU;
int32_t x130 = -1;
uint64_t x135 = 0LLU;
volatile uint64_t x146 = 93834938137LLU;
uint8_t x147 = 0U;
int16_t x149 = -1004;
volatile uint32_t t35 = 0U;
int8_t x153 = -1;
int16_t x156 = INT16_MAX;
int32_t x166 = -1;
uint16_t x172 = UINT16_MAX;
static int64_t x175 = 6247869348933442LL;
volatile int16_t x183 = -450;
volatile int16_t x184 = -1;
volatile int32_t x186 = -1;
volatile int16_t x189 = 2495;
static int32_t x204 = INT32_MIN;
int32_t t47 = 243006;
volatile uint64_t t49 = 24297000LLU;
int64_t x214 = -1LL;
uint16_t x218 = 28U;
static int64_t x228 = -17LL;
int16_t x233 = INT16_MIN;
int32_t x245 = INT32_MIN;
uint64_t x266 = 972884916700260LLU;
static int16_t x267 = -1;
uint32_t x270 = 14U;
uint16_t x273 = UINT16_MAX;
static int32_t x274 = INT32_MIN;
volatile int8_t x276 = -1;
static volatile int32_t t60 = 63147292;
int8_t x278 = INT8_MIN;
int64_t x289 = -7517829LL;
int64_t x290 = -1LL;
static int64_t t62 = 0LL;
static int64_t x300 = INT64_MAX;
int64_t t65 = 203630LL;
volatile int8_t x310 = INT8_MIN;
int8_t x313 = 9;
static volatile uint32_t x317 = UINT32_MAX;
uint16_t x327 = 44U;
volatile int32_t t71 = 0;
static int32_t x333 = 3121739;
uint64_t x334 = 160342570LLU;
int16_t x339 = INT16_MIN;
volatile uint32_t t74 = 31077U;
static int8_t x353 = INT8_MAX;
static volatile uint8_t x356 = 1U;
static volatile int64_t t76 = -3LL;
volatile int64_t x361 = -443497752LL;
uint16_t x363 = 28639U;
uint64_t x371 = 0LLU;
uint64_t x375 = 154574931417560265LLU;
static uint8_t x384 = 40U;
int64_t t82 = 0LL;
static int16_t x392 = INT16_MAX;
volatile uint64_t x398 = 17407791024478665LLU;
volatile int64_t t86 = -13223893170323LL;
volatile int64_t x421 = INT64_MIN;
uint64_t t89 = 1981796877756015751LLU;
uint64_t t90 = 1619634345714130990LLU;
static int8_t x434 = -1;
int32_t x442 = INT32_MIN;
uint16_t x443 = 42U;
uint32_t x450 = UINT32_MAX;
int8_t x451 = INT8_MIN;
static uint16_t x456 = 309U;
volatile int8_t x457 = 0;
volatile int8_t x458 = -1;
volatile int64_t t97 = 638644LL;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	uint64_t x2 = UINT64_MAX;
	static uint64_t t0 = 154637390001262563LLU;

	t0 = (((x1^x2)+x3)/x4);

	if (t0 != 61489146905206893LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	int16_t x6 = -1;
	static int32_t x7 = -1;
	volatile int8_t x8 = INT8_MIN;
	int64_t t1 = -3421LL;

	t1 = (((x5^x6)+x7)/x8);

	if (t1 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MAX;
	volatile uint8_t x10 = 1U;
	int32_t x12 = INT32_MIN;
	int64_t t2 = -52718631580LL;

	t2 = (((x9^x10)+x11)/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 9537705U;
	int16_t x14 = 48;
	int8_t x15 = 10;
	static uint64_t x16 = UINT64_MAX;

	t3 = (((x13^x14)+x15)/x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x18 = UINT8_MAX;
	int64_t x19 = INT64_MIN;
	uint64_t t4 = 234845LLU;

	t4 = (((x17^x18)+x19)/x20);

	if (t4 != 93108LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x21 = UINT16_MAX;
	int8_t x22 = 32;
	static volatile int64_t x24 = INT64_MIN;

	t5 = (((x21^x22)+x23)/x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	volatile uint32_t x27 = UINT32_MAX;
	volatile int8_t x28 = INT8_MIN;
	uint32_t t6 = 1U;

	t6 = (((x25^x26)+x27)/x28);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x30 = INT32_MIN;
	static volatile int64_t x31 = INT64_MIN;
	volatile uint16_t x32 = UINT16_MAX;
	volatile uint64_t t7 = 4474887LLU;

	t7 = (((x29^x30)+x31)/x32);

	if (t7 != 140739635904513LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -31385607LL;
	uint64_t x34 = UINT64_MAX;
	int16_t x35 = INT16_MIN;
	volatile int32_t x36 = INT32_MIN;
	uint64_t t8 = 926810051LLU;

	t8 = (((x33^x34)+x35)/x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = -8;
	int8_t x38 = INT8_MIN;
	int64_t x39 = INT64_MIN;
	static int8_t x40 = INT8_MAX;
	static int64_t t9 = 442362877941784192LL;

	t9 = (((x37^x38)+x39)/x40);

	if (t9 != -72624976668147840LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = -1LL;
	volatile int64_t x42 = -3196400LL;
	volatile int32_t x44 = INT32_MIN;
	volatile int64_t t10 = -25444119753LL;

	t10 = (((x41^x42)+x43)/x44);

	if (t10 != 7758651LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -2577416LL;
	int16_t x46 = -9;
	int64_t x47 = -2319450LL;
	static int64_t x48 = INT64_MIN;
	int64_t t11 = -38433133LL;

	t11 = (((x45^x46)+x47)/x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x53 = INT8_MIN;
	volatile int32_t x54 = 8965946;
	static int8_t x55 = -7;

	t12 = (((x53^x54)+x55)/x56);

	if (t12 != 5912364912654LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x58 = -2763;
	static uint32_t x59 = 824401U;
	int64_t x60 = INT64_MIN;
	volatile int64_t t13 = -15002563291470LL;

	t13 = (((x57^x58)+x59)/x60);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x61 = 46U;
	volatile uint16_t x62 = UINT16_MAX;
	int32_t x63 = INT32_MIN;
	static volatile int8_t x64 = INT8_MIN;

	t14 = (((x61^x62)+x63)/x64);

	if (t14 != 16776704) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x65 = UINT64_MAX;
	int8_t x66 = INT8_MIN;
	volatile int32_t x67 = INT32_MIN;
	int8_t x68 = 34;
	static uint64_t t15 = 4597562100000082466LLU;

	t15 = (((x65^x66)+x67)/x68);

	if (t15 != 542551296222413767LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x69 = UINT8_MAX;
	static uint8_t x70 = 4U;
	volatile int16_t x71 = INT16_MIN;
	int64_t x72 = -1LL;

	t16 = (((x69^x70)+x71)/x72);

	if (t16 != 32517LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x74 = 174618LLU;
	int8_t x75 = 0;
	uint16_t x76 = 57U;
	volatile uint64_t t17 = 6261324107LLU;

	t17 = (((x73^x74)+x75)/x76);

	if (t17 != 323627089012445217LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -235148486744LL;
	volatile int64_t x78 = -692256063LL;
	volatile int64_t t18 = 230220448757012LL;

	t18 = (((x77^x78)+x79)/x80);

	if (t18 != -12339821156LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x81 = 272LL;
	static uint16_t x82 = 1341U;
	int32_t x83 = INT32_MIN;
	int32_t x84 = INT32_MIN;
	volatile int64_t t19 = 7043570LL;

	t19 = (((x81^x82)+x83)/x84);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x87 = INT32_MAX;
	int8_t x88 = 5;
	int32_t t20 = 524952126;

	t20 = (((x85^x86)+x87)/x88);

	if (t20 != 429490175) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x91 = INT8_MAX;

	t21 = (((x89^x90)+x91)/x92);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = -1;
	int32_t x94 = -570614174;
	int16_t x95 = 44;
	int64_t x96 = INT64_MIN;
	static int64_t t22 = -135267839LL;

	t22 = (((x93^x94)+x95)/x96);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x97 = 2011483856806LLU;
	volatile int8_t x99 = 1;
	volatile uint16_t x100 = UINT16_MAX;
	volatile uint64_t t23 = 34LLU;

	t23 = (((x97^x98)+x99)/x100);

	if (t23 != 30693276LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x106 = 372;
	static int64_t x107 = INT64_MIN;
	static uint32_t x108 = 1798U;
	volatile int64_t t24 = 604648409LL;

	t24 = (((x105^x106)+x107)/x108);

	if (t24 != -5129795348640030LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x109 = 2672299342412456LL;
	volatile uint8_t x110 = 24U;
	static int8_t x111 = INT8_MAX;
	int16_t x112 = INT16_MIN;
	int64_t t25 = 849198758370224LL;

	t25 = (((x109^x110)+x111)/x112);

	if (t25 != -81552103955LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = 27889;
	int8_t x114 = 21;
	int64_t x115 = INT64_MIN;
	volatile uint64_t x116 = 2856LLU;

	t26 = (((x113^x114)+x115)/x116);

	if (t26 != 3229472001699861LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = 0;
	int16_t x118 = INT16_MAX;
	int64_t x119 = -53807840LL;
	static int32_t x120 = INT32_MIN;
	int64_t t27 = -1206916594212LL;

	t27 = (((x117^x118)+x119)/x120);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = -41;
	int8_t x124 = -1;
	volatile uint32_t t28 = 7409U;

	t28 = (((x121^x122)+x123)/x124);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = 192421125999204454LL;
	static int32_t x127 = INT32_MAX;
	uint64_t x128 = 233677847LLU;

	t29 = (((x125^x126)+x127)/x128);

	if (t29 != 823446170LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = INT8_MIN;
	int64_t x131 = INT64_MIN;
	volatile int64_t x132 = INT64_MIN;
	static volatile int64_t t30 = 521794422456831265LL;

	t30 = (((x129^x130)+x131)/x132);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x133 = 1;
	static int16_t x134 = INT16_MAX;
	volatile int64_t x136 = INT64_MAX;
	uint64_t t31 = 1LLU;

	t31 = (((x133^x134)+x135)/x136);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x137 = INT64_MIN;
	volatile int16_t x138 = -1233;
	static int64_t x139 = -1LL;
	int64_t x140 = INT64_MIN;
	int64_t t32 = 1LL;

	t32 = (((x137^x138)+x139)/x140);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x141 = INT64_MIN;
	uint16_t x142 = UINT16_MAX;
	int64_t x143 = -1LL;
	int32_t x144 = 30351417;
	int64_t t33 = -13471532825960LL;

	t33 = (((x141^x142)+x143)/x144);

	if (t33 != -303886043832LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x145 = -1;
	uint32_t x148 = UINT32_MAX;
	uint64_t t34 = 10664701307LLU;

	t34 = (((x145^x146)+x147)/x148);

	if (t34 != 4294967275LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x150 = 602U;
	int8_t x151 = INT8_MIN;
	uint32_t x152 = UINT32_MAX;

	t35 = (((x149^x150)+x151)/x152);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x154 = UINT64_MAX;
	volatile int32_t x155 = INT32_MIN;
	volatile uint64_t t36 = 4250927021377103067LLU;

	t36 = (((x153^x154)+x155)/x156);

	if (t36 != 562967133749262LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x157 = INT64_MIN;
	int16_t x158 = INT16_MAX;
	volatile uint8_t x159 = 0U;
	int32_t x160 = INT32_MIN;
	volatile int64_t t37 = -2671987905LL;

	t37 = (((x157^x158)+x159)/x160);

	if (t37 != 4294967295LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = -1;
	volatile int32_t x162 = -1;
	uint16_t x163 = 977U;
	int16_t x164 = INT16_MIN;
	volatile int32_t t38 = -245362;

	t38 = (((x161^x162)+x163)/x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = INT16_MAX;
	int16_t x167 = -926;
	int8_t x168 = -1;
	static int32_t t39 = 2;

	t39 = (((x165^x166)+x167)/x168);

	if (t39 != 33694) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x169 = UINT16_MAX;
	volatile uint32_t x170 = 10U;
	static volatile uint8_t x171 = UINT8_MAX;
	uint32_t t40 = 3904747U;

	t40 = (((x169^x170)+x171)/x172);

	if (t40 != 1U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x173 = 13U;
	int16_t x174 = -1;
	uint64_t x176 = 23860588903013410LLU;
	static volatile uint64_t t41 = 1LLU;

	t41 = (((x173^x174)+x175)/x176);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x177 = -1;
	uint16_t x178 = UINT16_MAX;
	int16_t x179 = -458;
	uint32_t x180 = UINT32_MAX;
	uint32_t t42 = 0U;

	t42 = (((x177^x178)+x179)/x180);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x181 = INT16_MIN;
	uint64_t x182 = 11133LLU;
	volatile uint64_t t43 = 217632612913LLU;

	t43 = (((x181^x182)+x183)/x184);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x185 = 255303725371094191LL;
	volatile int32_t x187 = INT32_MIN;
	int8_t x188 = INT8_MAX;
	volatile int64_t t44 = -260618060LL;

	t44 = (((x185^x186)+x187)/x188);

	if (t44 != -2010265571012423LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x190 = 55LLU;
	int16_t x191 = INT16_MIN;
	int32_t x192 = -20;
	static volatile uint64_t t45 = 3912493455363774LLU;

	t45 = (((x189^x190)+x191)/x192);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x197 = INT16_MIN;
	int8_t x198 = -1;
	int64_t x199 = INT64_MIN;
	volatile int64_t x200 = 61LL;
	volatile int64_t t46 = 150500526012LL;

	t46 = (((x197^x198)+x199)/x200);

	if (t46 != -151202820276307262LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = INT32_MAX;
	int16_t x202 = -1;
	int32_t x203 = INT32_MAX;

	t47 = (((x201^x202)+x203)/x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x205 = UINT8_MAX;
	volatile int32_t x206 = -1;
	uint32_t x207 = 250U;
	int16_t x208 = -1009;
	uint32_t t48 = 986293549U;

	t48 = (((x205^x206)+x207)/x208);

	if (t48 != 1U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x209 = INT32_MIN;
	int32_t x210 = 57;
	uint64_t x211 = UINT64_MAX;
	int8_t x212 = INT8_MIN;

	t49 = (((x209^x210)+x211)/x212);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x213 = 710U;
	static int8_t x215 = 10;
	static int64_t x216 = INT64_MIN;
	static volatile int64_t t50 = 2980309LL;

	t50 = (((x213^x214)+x215)/x216);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x217 = -132458341545722356LL;
	uint32_t x219 = 16659890U;
	int8_t x220 = INT8_MAX;
	static volatile int64_t t51 = -1LL;

	t51 = (((x217^x218)+x219)/x220);

	if (t51 != -1042979067157972LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x225 = UINT8_MAX;
	static int8_t x226 = -9;
	static int16_t x227 = INT16_MIN;
	int64_t t52 = 1LL;

	t52 = (((x225^x226)+x227)/x228);

	if (t52 != 1942LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x234 = 24U;
	int8_t x235 = INT8_MAX;
	int8_t x236 = -1;
	volatile int32_t t53 = 40710747;

	t53 = (((x233^x234)+x235)/x236);

	if (t53 != 32617) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x246 = -1LL;
	int32_t x247 = INT32_MIN;
	static volatile int32_t x248 = -1;
	int64_t t54 = -28356302886270989LL;

	t54 = (((x245^x246)+x247)/x248);

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x249 = 27U;
	uint16_t x250 = 419U;
	volatile int32_t x251 = INT32_MIN;
	uint64_t x252 = UINT64_MAX;
	volatile uint64_t t55 = 8431693614273789267LLU;

	t55 = (((x249^x250)+x251)/x252);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x253 = INT64_MIN;
	volatile int32_t x254 = 1;
	uint8_t x255 = 3U;
	static int32_t x256 = -1;
	volatile int64_t t56 = 80511372941299LL;

	t56 = (((x253^x254)+x255)/x256);

	if (t56 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x261 = 7553781LLU;
	int8_t x262 = INT8_MAX;
	volatile int64_t x263 = INT64_MIN;
	uint32_t x264 = UINT32_MAX;
	volatile uint64_t t57 = 7679936880LLU;

	t57 = (((x261^x262)+x263)/x264);

	if (t57 != 2147483648LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x265 = -416314068676715LL;
	int64_t x268 = 8LL;
	volatile uint64_t t58 = 10LLU;

	t58 = (((x265^x266)+x267)/x268);

	if (t58 != 2305770652017199486LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x269 = 1;
	int8_t x271 = 0;
	int8_t x272 = -55;
	static volatile uint32_t t59 = 338792U;

	t59 = (((x269^x270)+x271)/x272);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x275 = INT16_MIN;

	t60 = (((x273^x274)+x275)/x276);

	if (t60 != 2147450881) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x277 = INT64_MAX;
	static int64_t x279 = INT64_MAX;
	uint32_t x280 = 38U;
	int64_t t61 = 23LL;

	t61 = (((x277^x278)+x279)/x280);

	if (t61 != 3LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x291 = INT32_MAX;
	int64_t x292 = -12557028254050991LL;

	t62 = (((x289^x290)+x291)/x292);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x293 = 3U;
	volatile int8_t x294 = INT8_MAX;
	int8_t x295 = INT8_MIN;
	int8_t x296 = INT8_MAX;
	int32_t t63 = -8325001;

	t63 = (((x293^x294)+x295)/x296);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x297 = INT16_MIN;
	uint64_t x298 = UINT64_MAX;
	volatile uint32_t x299 = UINT32_MAX;
	static volatile uint64_t t64 = 1043LLU;

	t64 = (((x297^x298)+x299)/x300);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x301 = -209;
	static int64_t x302 = -906775911159751LL;
	uint16_t x303 = 2U;
	int32_t x304 = -1;

	t65 = (((x301^x302)+x303)/x304);

	if (t65 != -906775911159576LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x309 = 8U;
	uint8_t x311 = UINT8_MAX;
	static volatile int16_t x312 = INT16_MIN;
	static volatile int32_t t66 = -657531311;

	t66 = (((x309^x310)+x311)/x312);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x314 = -1;
	volatile uint64_t x315 = 31472319LLU;
	uint32_t x316 = 137983345U;
	static uint64_t t67 = 1LLU;

	t67 = (((x313^x314)+x315)/x316);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x318 = INT8_MIN;
	int32_t x319 = INT32_MAX;
	uint8_t x320 = 104U;
	uint32_t t68 = 1155U;

	t68 = (((x317^x318)+x319)/x320);

	if (t68 != 20648882U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x321 = 3741990653LLU;
	int32_t x322 = INT32_MIN;
	static int64_t x323 = INT64_MAX;
	static uint8_t x324 = 1U;
	static volatile uint64_t t69 = 1774582LLU;

	t69 = (((x321^x322)+x323)/x324);

	if (t69 != 9223372034154315516LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x325 = UINT8_MAX;
	volatile int16_t x326 = 7;
	volatile uint16_t x328 = UINT16_MAX;
	int32_t t70 = 129338894;

	t70 = (((x325^x326)+x327)/x328);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x329 = INT16_MIN;
	uint16_t x330 = UINT16_MAX;
	int8_t x331 = 56;
	static uint8_t x332 = UINT8_MAX;

	t71 = (((x329^x330)+x331)/x332);

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x335 = 1814U;
	uint32_t x336 = 19U;
	uint64_t t72 = 15666245528332LLU;

	t72 = (((x333^x334)+x335)/x336);

	if (t72 != 8502534LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x337 = -1;
	int32_t x338 = -1;
	uint16_t x340 = 29U;
	static volatile int32_t t73 = 44607436;

	t73 = (((x337^x338)+x339)/x340);

	if (t73 != -1129) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x341 = INT32_MIN;
	uint8_t x342 = UINT8_MAX;
	int8_t x343 = -1;
	uint32_t x344 = 409U;

	t74 = (((x341^x342)+x343)/x344);

	if (t74 != 5250571U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x349 = 10U;
	int8_t x350 = INT8_MIN;
	uint64_t x351 = 1757616376578920718LLU;
	static volatile int8_t x352 = INT8_MIN;
	volatile uint64_t t75 = 86642370653LLU;

	t75 = (((x349^x350)+x351)/x352);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x354 = INT64_MAX;
	volatile int8_t x355 = INT8_MIN;

	t76 = (((x353^x354)+x355)/x356);

	if (t76 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x362 = -1;
	uint64_t x364 = 4290969696LLU;
	volatile uint64_t t77 = 1884230LLU;

	t77 = (((x361^x362)+x363)/x364);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x365 = 59;
	static uint64_t x366 = 31756653240625358LLU;
	uint8_t x367 = UINT8_MAX;
	int32_t x368 = -1;
	static volatile uint64_t t78 = 195988LLU;

	t78 = (((x365^x366)+x367)/x368);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x369 = 1595U;
	uint32_t x370 = UINT32_MAX;
	uint16_t x372 = 12U;
	volatile uint64_t t79 = 274690127883LLU;

	t79 = (((x369^x370)+x371)/x372);

	if (t79 != 357913808LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x373 = INT8_MIN;
	int8_t x374 = INT8_MAX;
	int16_t x376 = -1;
	uint64_t t80 = 62069703905916495LLU;

	t80 = (((x373^x374)+x375)/x376);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint16_t x377 = 2135U;
	int64_t x378 = 14988391398LL;
	volatile int8_t x379 = -1;
	int64_t x380 = 6LL;
	volatile int64_t t81 = 115636LL;

	t81 = (((x377^x378)+x379)/x380);

	if (t81 != 2498065565LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x381 = INT64_MIN;
	int64_t x382 = -51758723LL;
	uint16_t x383 = UINT16_MAX;

	t82 = (((x381^x382)+x383)/x384);

	if (t82 != 230584300920077065LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x389 = INT32_MIN;
	volatile uint16_t x390 = UINT16_MAX;
	static uint16_t x391 = UINT16_MAX;
	int32_t t83 = 503;

	t83 = (((x389^x390)+x391)/x392);

	if (t83 != -65534) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x393 = 694;
	static uint64_t x394 = 196639222160LLU;
	int8_t x395 = INT8_MAX;
	int8_t x396 = INT8_MIN;
	volatile uint64_t t84 = 1082686123477209852LLU;

	t84 = (((x393^x394)+x395)/x396);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x397 = INT32_MIN;
	int64_t x399 = 3173044LL;
	int8_t x400 = INT8_MAX;
	static uint64_t t85 = 89614LLU;

	t85 = (((x397^x398)+x399)/x400);

	if (t85 != 145112884111517527LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x401 = 19LL;
	int32_t x402 = INT32_MIN;
	int32_t x403 = INT32_MAX;
	volatile uint32_t x404 = 12U;

	t86 = (((x401^x402)+x403)/x404);

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x405 = INT64_MIN;
	int64_t x406 = INT64_MIN;
	volatile int64_t x407 = 87LL;
	int32_t x408 = INT32_MIN;
	int64_t t87 = 7158417063LL;

	t87 = (((x405^x406)+x407)/x408);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x409 = INT8_MIN;
	uint8_t x410 = 61U;
	int16_t x411 = 27;
	uint32_t x412 = UINT32_MAX;
	uint32_t t88 = 91477U;

	t88 = (((x409^x410)+x411)/x412);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x422 = 66710105905376492LLU;
	static int8_t x423 = INT8_MIN;
	volatile uint16_t x424 = UINT16_MAX;

	t89 = (((x421^x422)+x423)/x424);

	if (t89 != 141757566838485LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x429 = INT64_MIN;
	int8_t x430 = INT8_MIN;
	int32_t x431 = -4;
	static uint64_t x432 = 11LLU;

	t90 = (((x429^x430)+x431)/x432);

	if (t90 != 838488366986797788LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x433 = -1;
	volatile uint32_t x435 = UINT32_MAX;
	uint16_t x436 = 6930U;
	uint32_t t91 = 3143023U;

	t91 = (((x433^x434)+x435)/x436);

	if (t91 != 619764U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x437 = 63;
	int16_t x438 = INT16_MIN;
	static int64_t x439 = 4272410019LL;
	uint8_t x440 = 22U;
	int64_t t92 = -26366LL;

	t92 = (((x437^x438)+x439)/x440);

	if (t92 != 194198968LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x441 = INT64_MIN;
	uint64_t x444 = 2354333LLU;
	uint64_t t93 = 1745991234LLU;

	t93 = (((x441^x442)+x443)/x444);

	if (t93 != 3917615747095LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x445 = -1;
	uint32_t x446 = UINT32_MAX;
	uint32_t x447 = 1294U;
	volatile int8_t x448 = INT8_MIN;
	volatile uint32_t t94 = 793U;

	t94 = (((x445^x446)+x447)/x448);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x449 = INT16_MAX;
	static int32_t x452 = INT32_MIN;
	volatile uint32_t t95 = 18125U;

	t95 = (((x449^x450)+x451)/x452);

	if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x453 = INT32_MIN;
	volatile uint16_t x454 = 1638U;
	static int16_t x455 = -6;
	volatile int32_t t96 = 18431020;

	t96 = (((x453^x454)+x455)/x456);

	if (t96 != -6949779) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x459 = 31304U;
	volatile int64_t x460 = -1LL;

	t97 = (((x457^x458)+x459)/x460);

	if (t97 != -31303LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x469 = 23U;
	uint8_t x470 = 3U;
	static volatile int64_t x471 = INT64_MIN;
	int16_t x472 = INT16_MIN;
	volatile int64_t t98 = 0LL;

	t98 = (((x469^x470)+x471)/x472);

	if (t98 != 281474976710655LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x473 = INT16_MAX;
	int16_t x474 = INT16_MIN;
	volatile uint32_t x475 = 2U;
	uint32_t x476 = UINT32_MAX;
	uint32_t t99 = 233U;

	t99 = (((x473^x474)+x475)/x476);

	if (t99 != 0U) { NG(); } else { ; }
	
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

