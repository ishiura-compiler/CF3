#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t3 = -4;
static uint8_t x24 = 18U;
uint16_t x33 = 0U;
volatile uint32_t t7 = 185265830U;
volatile int16_t x43 = INT16_MIN;
volatile uint8_t x45 = 9U;
volatile int64_t x50 = -1LL;
volatile int64_t t11 = -495305704681619LL;
volatile uint16_t x53 = 21562U;
volatile int32_t x63 = 61;
volatile int64_t t15 = -15443LL;
int32_t x74 = 122840;
int8_t x75 = 1;
volatile int32_t t16 = 18466;
volatile int32_t t17 = -22781800;
int64_t t20 = -82703509458LL;
volatile int64_t x97 = -1LL;
int16_t x98 = INT16_MIN;
uint64_t x102 = 222249858LLU;
int8_t x107 = INT8_MIN;
static int8_t x112 = INT8_MIN;
int8_t x115 = INT8_MAX;
int32_t t26 = -390;
int64_t x117 = -1LL;
int32_t x119 = 31;
int64_t x123 = -1LL;
static int8_t x124 = -1;
int64_t t28 = 26209702LL;
volatile int64_t x126 = -1LL;
int16_t x130 = -1;
static uint32_t x131 = 7761U;
static int16_t x133 = 66;
int64_t x135 = 257301LL;
static uint64_t x136 = UINT64_MAX;
int8_t x137 = -1;
uint64_t x143 = 410108925568950LLU;
int32_t x150 = INT32_MIN;
uint32_t x154 = 150U;
int16_t x155 = INT16_MIN;
static volatile uint32_t x169 = 11440185U;
volatile int16_t x172 = 105;
static uint32_t x183 = 5U;
static volatile uint32_t t44 = 5508982U;
uint8_t x194 = UINT8_MAX;
int8_t x200 = INT8_MIN;
volatile uint64_t x204 = UINT64_MAX;
int32_t x207 = INT32_MIN;
uint64_t x209 = UINT64_MAX;
int32_t x213 = 34;
int32_t x227 = INT32_MIN;
uint32_t t54 = 94645308U;
uint16_t x243 = 10U;
int64_t x249 = INT64_MAX;
int16_t x255 = INT16_MIN;
int8_t x256 = INT8_MIN;
int16_t x260 = -248;
uint64_t x262 = 1753LLU;
int8_t x266 = INT8_MIN;
static int16_t x267 = -1;
volatile int32_t x271 = INT32_MIN;
volatile int8_t x273 = -1;
volatile int16_t x274 = INT16_MIN;
int32_t x276 = INT32_MIN;
static int32_t x280 = 248;
static uint32_t x285 = 64065U;
uint32_t x289 = 38U;
int16_t x294 = INT16_MIN;
int16_t x296 = INT16_MIN;
volatile int32_t t70 = 5730743;
volatile int8_t x298 = 3;
int64_t t72 = 15LL;
uint16_t x307 = 2274U;
int16_t x309 = INT16_MAX;
static volatile uint32_t x311 = UINT32_MAX;
int32_t x316 = INT32_MAX;
static uint16_t x320 = UINT16_MAX;
int64_t x323 = INT64_MAX;
static int16_t x332 = INT16_MIN;
static volatile uint32_t x334 = 623869U;
int16_t x336 = INT16_MIN;
int32_t x337 = -1;
static uint32_t x338 = UINT32_MAX;
int8_t x358 = -1;
uint32_t x360 = 176U;
int32_t x362 = -1;
int32_t t87 = 2;
uint16_t x370 = 6U;
int32_t x371 = 25;
int32_t x374 = INT32_MIN;
int16_t x376 = -1;
static volatile int64_t t90 = -4866976600LL;
uint32_t x380 = 55U;
uint64_t x382 = UINT64_MAX;
int8_t x383 = 59;
int16_t x384 = -1;
static int32_t x385 = -384;
uint8_t x387 = UINT8_MAX;
static int64_t x391 = INT64_MIN;
volatile int32_t x392 = INT32_MIN;
uint16_t x394 = 9747U;
int64_t t95 = 1LL;
static int8_t x401 = INT8_MIN;
static int64_t x407 = -60LL;
int64_t x408 = -1LL;
int8_t x411 = -1;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int16_t x2 = 81;
	volatile uint64_t x3 = UINT64_MAX;
	uint8_t x4 = 10U;
	uint64_t t0 = 88259268309285LLU;

	t0 = ((x1^x2)^(x3%x4));

	if (t0 != 171LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = -1;
	uint32_t x6 = 9510577U;
	uint8_t x7 = 11U;
	uint16_t x8 = 1127U;
	uint32_t t1 = 3922U;

	t1 = ((x5^x6)^(x7%x8));

	if (t1 != 4285456709U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 1191394700545LLU;
	int32_t x10 = 74;
	volatile int8_t x11 = 0;
	int8_t x12 = INT8_MIN;
	volatile uint64_t t2 = 119839841198LLU;

	t2 = ((x9^x10)^(x11%x12));

	if (t2 != 1191394700619LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = 62U;
	uint8_t x18 = UINT8_MAX;
	uint16_t x19 = 33U;
	int32_t x20 = 5;

	t3 = ((x17^x18)^(x19%x20));

	if (t3 != 194) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	int16_t x22 = 1667;
	int64_t x23 = INT64_MIN;
	volatile int64_t t4 = -501118195319796LL;

	t4 = ((x21^x22)^(x23%x24));

	if (t4 != 1787LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -1;
	uint64_t x26 = 36542127958LLU;
	int8_t x27 = INT8_MIN;
	uint64_t x28 = 27431LLU;
	volatile uint64_t t5 = 6399736LLU;

	t5 = ((x25^x26)^(x27%x28));

	if (t5 != 18446744037167423136LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x29 = INT16_MIN;
	volatile int8_t x30 = INT8_MAX;
	int16_t x31 = INT16_MAX;
	uint32_t x32 = UINT32_MAX;
	volatile uint32_t t6 = 26115U;

	t6 = ((x29^x30)^(x31%x32));

	if (t6 != 4294967168U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x34 = 55U;
	uint32_t x35 = 64736U;
	int16_t x36 = INT16_MIN;

	t7 = ((x33^x34)^(x35%x36));

	if (t7 != 64727U) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x37 = -10;
	volatile uint32_t x38 = 39U;
	volatile int8_t x39 = INT8_MIN;
	int8_t x40 = INT8_MIN;
	volatile uint32_t t8 = 17585U;

	t8 = ((x37^x38)^(x39%x40));

	if (t8 != 4294967249U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MIN;
	int16_t x42 = INT16_MIN;
	uint32_t x44 = UINT32_MAX;
	volatile int64_t t9 = -497895LL;

	t9 = ((x41^x42)^(x43%x44));

	if (t9 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x46 = 13590457LLU;
	int16_t x47 = -1;
	int32_t x48 = INT32_MAX;
	volatile uint64_t t10 = 3654186444LLU;

	t10 = ((x45^x46)^(x47%x48));

	if (t10 != 18446744073695961167LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = 50U;
	static volatile int64_t x51 = INT64_MAX;
	int16_t x52 = INT16_MIN;

	t11 = ((x49^x50)^(x51%x52));

	if (t11 != -32718LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x54 = 0U;
	int64_t x55 = INT64_MIN;
	static int16_t x56 = -10;
	volatile int64_t t12 = -1535777356LL;

	t12 = ((x53^x54)^(x55%x56));

	if (t12 != -21566LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x57 = INT8_MAX;
	int16_t x58 = INT16_MIN;
	int32_t x59 = -121610;
	int16_t x60 = 35;
	int32_t t13 = -1046;

	t13 = ((x57^x58)^(x59%x60));

	if (t13 != 32659) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = -1;
	int64_t x62 = -1381759781846354713LL;
	int8_t x64 = -1;
	volatile int64_t t14 = 820651803582LL;

	t14 = ((x61^x62)^(x63%x64));

	if (t14 != 1381759781846354712LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x65 = INT32_MIN;
	volatile int32_t x66 = INT32_MIN;
	static volatile int64_t x67 = -364722745147014634LL;
	int64_t x68 = INT64_MIN;

	t15 = ((x65^x66)^(x67%x68));

	if (t15 != -364722745147014634LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x73 = INT16_MIN;
	int16_t x76 = 1089;

	t16 = ((x73^x74)^(x75%x76));

	if (t16 != -106535) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x77 = 4437U;
	static volatile int8_t x78 = 14;
	int16_t x79 = -1;
	int8_t x80 = -1;

	t17 = ((x77^x78)^(x79%x80));

	if (t17 != 4443) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MIN;
	int64_t x82 = -133798436277154LL;
	uint64_t x83 = 2620773LLU;
	int8_t x84 = 2;
	volatile uint64_t t18 = 127LLU;

	t18 = ((x81^x82)^(x83%x84));

	if (t18 != 133798436277215LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = INT16_MIN;
	volatile int64_t x86 = INT64_MAX;
	volatile uint8_t x87 = 61U;
	static int64_t x88 = 1LL;
	int64_t t19 = -126284341LL;

	t19 = ((x85^x86)^(x87%x88));

	if (t19 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = 40759489;
	volatile int16_t x90 = INT16_MIN;
	int64_t x91 = INT64_MIN;
	volatile int64_t x92 = INT64_MIN;

	t20 = ((x89^x90)^(x91%x92));

	if (t20 != -40734527LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x93 = UINT64_MAX;
	int64_t x94 = 2617184346461599LL;
	uint8_t x95 = 0U;
	volatile int32_t x96 = INT32_MIN;
	uint64_t t21 = 358335836314357LLU;

	t21 = ((x93^x94)^(x95%x96));

	if (t21 != 18444126889363090016LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x99 = 56U;
	int64_t x100 = 240LL;
	int64_t t22 = 15764799191544LL;

	t22 = ((x97^x98)^(x99%x100));

	if (t22 != 32711LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x101 = UINT64_MAX;
	static int32_t x103 = 97;
	static int8_t x104 = -1;
	volatile uint64_t t23 = 1035LLU;

	t23 = ((x101^x102)^(x103%x104));

	if (t23 != 18446744073487301757LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x105 = -7;
	uint8_t x106 = UINT8_MAX;
	int64_t x108 = INT64_MIN;
	volatile int64_t t24 = 55841LL;

	t24 = ((x105^x106)^(x107%x108));

	if (t24 != 134LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x109 = UINT16_MAX;
	uint64_t x110 = 33767028397LLU;
	static uint8_t x111 = 48U;
	volatile uint64_t t25 = 24859LLU;

	t25 = ((x109^x110)^(x111%x112));

	if (t25 != 33766967650LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x113 = 4U;
	int32_t x114 = -1;
	int16_t x116 = -1;

	t26 = ((x113^x114)^(x115%x116));

	if (t26 != -5) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x118 = 17276719892951LLU;
	uint8_t x120 = 4U;
	volatile uint64_t t27 = 1468LLU;

	t27 = ((x117^x118)^(x119%x120));

	if (t27 != 18446726796989658667LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = INT16_MIN;
	int32_t x122 = -457;

	t28 = ((x121^x122)^(x123%x124));

	if (t28 != 32311LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x125 = 78113U;
	static uint32_t x127 = UINT32_MAX;
	int16_t x128 = INT16_MIN;
	int64_t t29 = 326LL;

	t29 = ((x125^x126)^(x127%x128));

	if (t29 != -85727LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x129 = INT16_MIN;
	static int32_t x132 = -1;
	static volatile uint32_t t30 = 249316063U;

	t30 = ((x129^x130)^(x131%x132));

	if (t30 != 25006U) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x134 = -1;
	uint64_t t31 = 59635241863524704LLU;

	t31 = ((x133^x134)^(x135%x136));

	if (t31 != 18446744073709294248LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x138 = UINT8_MAX;
	uint16_t x139 = UINT16_MAX;
	volatile int8_t x140 = 3;
	int32_t t32 = -3916;

	t32 = ((x137^x138)^(x139%x140));

	if (t32 != -256) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = 680126330LL;
	int16_t x142 = INT16_MAX;
	volatile uint64_t x144 = 6239LLU;
	volatile uint64_t t33 = 4407135598027190LLU;

	t33 = ((x141^x142)^(x143%x144));

	if (t33 != 680104388LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = INT8_MIN;
	int8_t x146 = INT8_MIN;
	int16_t x147 = INT16_MIN;
	uint32_t x148 = UINT32_MAX;
	static volatile uint32_t t34 = 1U;

	t34 = ((x145^x146)^(x147%x148));

	if (t34 != 4294934528U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x149 = INT16_MIN;
	static int64_t x151 = INT64_MIN;
	int16_t x152 = -1;
	static int64_t t35 = 1499112841527398LL;

	t35 = ((x149^x150)^(x151%x152));

	if (t35 != 2147450880LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x153 = INT16_MIN;
	int64_t x156 = INT64_MIN;
	int64_t t36 = -3898019567462491LL;

	t36 = ((x153^x154)^(x155%x156));

	if (t36 != -4294967146LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x157 = INT16_MIN;
	uint64_t x158 = UINT64_MAX;
	int16_t x159 = INT16_MAX;
	uint32_t x160 = UINT32_MAX;
	static volatile uint64_t t37 = 1LLU;

	t37 = ((x157^x158)^(x159%x160));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = INT16_MIN;
	uint32_t x162 = 4682659U;
	int16_t x163 = -40;
	int64_t x164 = INT64_MAX;
	volatile int64_t t38 = 2096736972213853LL;

	t38 = ((x161^x162)^(x163%x164));

	if (t38 != -4290311045LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x165 = 8U;
	volatile uint16_t x166 = 1185U;
	int16_t x167 = INT16_MIN;
	volatile int8_t x168 = INT8_MIN;
	int32_t t39 = 10;

	t39 = ((x165^x166)^(x167%x168));

	if (t39 != 1193) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x170 = INT8_MIN;
	static int16_t x171 = 5;
	static uint32_t t40 = 248U;

	t40 = ((x169^x170)^(x171%x172));

	if (t40 != 4283527100U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x173 = UINT8_MAX;
	static int64_t x174 = -1LL;
	static volatile uint16_t x175 = 6364U;
	static volatile int64_t x176 = INT64_MAX;
	volatile int64_t t41 = -35758798LL;

	t41 = ((x173^x174)^(x175%x176));

	if (t41 != -6180LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x177 = UINT32_MAX;
	int8_t x178 = 13;
	static int16_t x179 = INT16_MIN;
	static uint64_t x180 = 8125503798660628LLU;
	static uint64_t t42 = 5772702656866964406LLU;

	t42 = ((x177^x178)^(x179%x180));

	if (t42 != 1850449554625882LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x181 = 1U;
	int64_t x182 = INT64_MIN;
	uint16_t x184 = 18U;
	int64_t t43 = 0LL;

	t43 = ((x181^x182)^(x183%x184));

	if (t43 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x185 = 3U;
	static int8_t x186 = 2;
	int16_t x187 = 5994;
	uint8_t x188 = UINT8_MAX;

	t44 = ((x185^x186)^(x187%x188));

	if (t44 != 128U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = -1;
	int64_t x190 = -1LL;
	uint8_t x191 = 2U;
	int8_t x192 = -1;
	volatile int64_t t45 = -45943004392261LL;

	t45 = ((x189^x190)^(x191%x192));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x193 = INT8_MIN;
	int8_t x195 = -1;
	static uint8_t x196 = 2U;
	int32_t t46 = -299;

	t46 = ((x193^x194)^(x195%x196));

	if (t46 != 128) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x197 = 984277605193LLU;
	uint8_t x198 = 21U;
	static int32_t x199 = 0;
	volatile uint64_t t47 = 971184087765721LLU;

	t47 = ((x197^x198)^(x199%x200));

	if (t47 != 984277605212LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = -1;
	volatile int16_t x202 = 9397;
	static int16_t x203 = INT16_MIN;
	uint64_t t48 = 1928464905LLU;

	t48 = ((x201^x202)^(x203%x204));

	if (t48 != 23370LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x205 = -925;
	int64_t x206 = INT64_MIN;
	int8_t x208 = INT8_MAX;
	int64_t t49 = -2908LL;

	t49 = ((x205^x206)^(x207%x208));

	if (t49 != -9223372036854774885LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x210 = INT64_MIN;
	int16_t x211 = INT16_MAX;
	volatile int64_t x212 = 1LL;
	uint64_t t50 = 3643927LLU;

	t50 = ((x209^x210)^(x211%x212));

	if (t50 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x214 = INT32_MIN;
	int64_t x215 = -1LL;
	int64_t x216 = -1LL;
	static int64_t t51 = 158161485124LL;

	t51 = ((x213^x214)^(x215%x216));

	if (t51 != -2147483614LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x217 = INT32_MIN;
	int32_t x218 = INT32_MIN;
	static int16_t x219 = -5596;
	int32_t x220 = -5354099;
	volatile int32_t t52 = 1926;

	t52 = ((x217^x218)^(x219%x220));

	if (t52 != -5596) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x221 = 4LLU;
	uint16_t x222 = 0U;
	int8_t x223 = INT8_MIN;
	volatile int8_t x224 = -1;
	uint64_t t53 = 3843788885037705LLU;

	t53 = ((x221^x222)^(x223%x224));

	if (t53 != 4LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x225 = INT8_MIN;
	static volatile int8_t x226 = INT8_MAX;
	uint32_t x228 = 104U;

	t54 = ((x225^x226)^(x227%x228));

	if (t54 != 4294967271U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x229 = -31437LL;
	uint8_t x230 = 61U;
	int16_t x231 = INT16_MIN;
	static int32_t x232 = -1;
	volatile int64_t t55 = -16361LL;

	t55 = ((x229^x230)^(x231%x232));

	if (t55 != -31474LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x233 = 3U;
	volatile int8_t x234 = INT8_MAX;
	int32_t x235 = -1;
	static uint64_t x236 = 249912639595LLU;
	static uint64_t t56 = 114996747654462977LLU;

	t56 = ((x233^x234)^(x235%x236));

	if (t56 != 137103563080LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x241 = 1478014;
	uint8_t x242 = UINT8_MAX;
	int16_t x244 = 7;
	static volatile int32_t t57 = -30591277;

	t57 = ((x241^x242)^(x243%x244));

	if (t57 != 1478018) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x245 = INT32_MIN;
	uint8_t x246 = 11U;
	int8_t x247 = 1;
	volatile uint64_t x248 = 286979LLU;
	volatile uint64_t t58 = 884681960LLU;

	t58 = ((x245^x246)^(x247%x248));

	if (t58 != 18446744071562067978LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x250 = 2U;
	uint64_t x251 = UINT64_MAX;
	static uint8_t x252 = UINT8_MAX;
	uint64_t t59 = 169801232LLU;

	t59 = ((x249^x250)^(x251%x252));

	if (t59 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x253 = 659629493;
	volatile uint8_t x254 = UINT8_MAX;
	volatile int32_t t60 = 6;

	t60 = ((x253^x254)^(x255%x256));

	if (t60 != 659629386) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x257 = -1;
	uint8_t x258 = UINT8_MAX;
	static int32_t x259 = -172;
	volatile int32_t t61 = 12602;

	t61 = ((x257^x258)^(x259%x260));

	if (t61 != 84) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x261 = -1;
	uint16_t x263 = 19U;
	int8_t x264 = INT8_MAX;
	uint64_t t62 = 383654863LLU;

	t62 = ((x261^x262)^(x263%x264));

	if (t62 != 18446744073709549877LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x265 = UINT16_MAX;
	static uint8_t x268 = 5U;
	volatile int32_t t63 = 2;

	t63 = ((x265^x266)^(x267%x268));

	if (t63 != 65408) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x269 = INT64_MIN;
	uint8_t x270 = UINT8_MAX;
	uint64_t x272 = 1LLU;
	uint64_t t64 = 1128376LLU;

	t64 = ((x269^x270)^(x271%x272));

	if (t64 != 9223372036854776063LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x275 = -1;
	int32_t t65 = -3;

	t65 = ((x273^x274)^(x275%x276));

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x277 = INT32_MIN;
	static volatile int32_t x278 = INT32_MIN;
	uint64_t x279 = 761479LLU;
	volatile uint64_t t66 = 81391804485056LLU;

	t66 = ((x277^x278)^(x279%x280));

	if (t66 != 119LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x281 = -1;
	uint8_t x282 = 33U;
	uint32_t x283 = 31767U;
	static int64_t x284 = INT64_MIN;
	volatile int64_t t67 = 24LL;

	t67 = ((x281^x282)^(x283%x284));

	if (t67 != -31799LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x286 = INT64_MAX;
	static int8_t x287 = INT8_MIN;
	int16_t x288 = 416;
	volatile int64_t t68 = -22877648243841948LL;

	t68 = ((x285^x286)^(x287%x288));

	if (t68 != -9223372036854711746LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x290 = -540526251721LL;
	uint32_t x291 = 3353364U;
	static int32_t x292 = 1799;
	int64_t t69 = 135186148890LL;

	t69 = ((x289^x290)^(x291%x292));

	if (t69 != -540526251763LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x293 = INT16_MIN;
	uint8_t x295 = 1U;

	t70 = ((x293^x294)^(x295%x296));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x297 = UINT16_MAX;
	int32_t x299 = INT32_MIN;
	volatile uint32_t x300 = 3U;
	uint32_t t71 = 109U;

	t71 = ((x297^x298)^(x299%x300));

	if (t71 != 65534U) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x301 = INT16_MIN;
	uint32_t x302 = 225385331U;
	int64_t x303 = -955558941539720LL;
	static int64_t x304 = INT64_MIN;

	t72 = ((x301^x302)^(x303%x304));

	if (t72 != -955559722690293LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x305 = -3293;
	volatile int32_t x306 = 58523;
	int16_t x308 = 2797;
	static volatile int32_t t73 = 3790590;

	t73 = ((x305^x306)^(x307%x308));

	if (t73 != -57510) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x310 = 0;
	uint64_t x312 = 117418997931LLU;
	uint64_t t74 = 25023922675832163LLU;

	t74 = ((x309^x310)^(x311%x312));

	if (t74 != 4294934528LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x313 = INT16_MIN;
	static int16_t x314 = -91;
	int64_t x315 = -5916736390LL;
	volatile int64_t t75 = -3210LL;

	t75 = ((x313^x314)^(x315%x316));

	if (t75 != -1621771299LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x317 = -1LL;
	uint8_t x318 = 15U;
	int64_t x319 = 176135735LL;
	volatile int64_t t76 = -36581970LL;

	t76 = ((x317^x318)^(x319%x320));

	if (t76 != -43194LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x321 = 0U;
	int16_t x322 = 0;
	int64_t x324 = INT64_MAX;
	int64_t t77 = -3656660LL;

	t77 = ((x321^x322)^(x323%x324));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x325 = INT64_MAX;
	uint32_t x326 = UINT32_MAX;
	volatile int16_t x327 = INT16_MIN;
	uint16_t x328 = 13366U;
	int64_t t78 = 2821466320LL;

	t78 = ((x325^x326)^(x327%x328));

	if (t78 != -9223372032559814548LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x329 = -74891LL;
	int64_t x330 = -44547113021LL;
	uint8_t x331 = 95U;
	volatile int64_t t79 = -254903632614LL;

	t79 = ((x329^x330)^(x331%x332));

	if (t79 != 44547056873LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x333 = 291LLU;
	int8_t x335 = -1;
	volatile uint64_t t80 = 193LLU;

	t80 = ((x333^x334)^(x335%x336));

	if (t80 != 18446744073708927521LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x339 = INT32_MIN;
	static int32_t x340 = -1;
	uint32_t t81 = 239U;

	t81 = ((x337^x338)^(x339%x340));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x341 = 16U;
	static uint64_t x342 = UINT64_MAX;
	int32_t x343 = -329354;
	int32_t x344 = INT32_MIN;
	volatile uint64_t t82 = 749783102LLU;

	t82 = ((x341^x342)^(x343%x344));

	if (t82 != 329369LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x345 = INT64_MAX;
	int8_t x346 = -1;
	volatile int64_t x347 = -321676818587772LL;
	static int8_t x348 = -45;
	int64_t t83 = -42219495LL;

	t83 = ((x345^x346)^(x347%x348));

	if (t83 != 9223372036854775766LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x349 = INT32_MIN;
	int16_t x350 = INT16_MAX;
	int8_t x351 = INT8_MAX;
	static volatile uint8_t x352 = 2U;
	volatile int32_t t84 = -1000438547;

	t84 = ((x349^x350)^(x351%x352));

	if (t84 != -2147450882) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x353 = 4063975LLU;
	static volatile int16_t x354 = -1;
	static volatile int16_t x355 = -30;
	volatile int64_t x356 = INT64_MIN;
	static uint64_t t85 = 363LLU;

	t85 = ((x353^x354)^(x355%x356));

	if (t85 != 4063994LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x357 = INT32_MAX;
	int8_t x359 = INT8_MAX;
	volatile uint32_t t86 = 139664730U;

	t86 = ((x357^x358)^(x359%x360));

	if (t86 != 2147483775U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x361 = -8;
	uint8_t x363 = UINT8_MAX;
	int32_t x364 = -2;

	t87 = ((x361^x362)^(x363%x364));

	if (t87 != 6) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x365 = 11;
	uint16_t x366 = 2870U;
	uint8_t x367 = UINT8_MAX;
	int64_t x368 = INT64_MIN;
	static volatile int64_t t88 = -584LL;

	t88 = ((x365^x366)^(x367%x368));

	if (t88 != 3010LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x369 = INT16_MIN;
	uint64_t x372 = UINT64_MAX;
	uint64_t t89 = 15002088LLU;

	t89 = ((x369^x370)^(x371%x372));

	if (t89 != 18446744073709518879LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x373 = INT64_MIN;
	int32_t x375 = INT32_MAX;

	t90 = ((x373^x374)^(x375%x376));

	if (t90 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x377 = UINT64_MAX;
	static uint16_t x378 = 6785U;
	static int32_t x379 = 2129;
	volatile uint64_t t91 = 7343994445831671LLU;

	t91 = ((x377^x378)^(x379%x380));

	if (t91 != 18446744073709544793LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x381 = -1;
	uint64_t t92 = 7292LLU;

	t92 = ((x381^x382)^(x383%x384));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x386 = INT8_MIN;
	int16_t x388 = -11082;
	volatile int32_t t93 = 1668;

	t93 = ((x385^x386)^(x387%x388));

	if (t93 != 511) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x389 = INT8_MAX;
	int64_t x390 = -28740516468873LL;
	int64_t t94 = -13685LL;

	t94 = ((x389^x390)^(x391%x392));

	if (t94 != -28740516468984LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x393 = INT32_MIN;
	int16_t x395 = INT16_MAX;
	int64_t x396 = -460336534LL;

	t95 = ((x393^x394)^(x395%x396));

	if (t95 != -2147460628LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x397 = 12155U;
	volatile int64_t x398 = -777103267LL;
	volatile int16_t x399 = INT16_MIN;
	uint32_t x400 = UINT32_MAX;
	int64_t t96 = 72267814LL;

	t96 = ((x397^x398)^(x399%x400));

	if (t96 != -3517843674LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x402 = -1;
	static int64_t x403 = INT64_MAX;
	uint16_t x404 = 25938U;
	static int64_t t97 = 2991065391LL;

	t97 = ((x401^x402)^(x403%x404));

	if (t97 != 11792LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x405 = 20706408820442243LLU;
	uint16_t x406 = UINT16_MAX;
	volatile uint64_t t98 = 49LLU;

	t98 = ((x405^x406)^(x407%x408));

	if (t98 != 20706408820505468LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x409 = 10U;
	int16_t x410 = 1;
	uint32_t x412 = 21111U;
	uint32_t t99 = 15552U;

	t99 = ((x409^x410)^(x411%x412));

	if (t99 != 18798U) { NG(); } else { ; }
	
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

