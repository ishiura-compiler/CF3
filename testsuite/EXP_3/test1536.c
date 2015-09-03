#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x4 = UINT32_MAX;
uint64_t x10 = UINT64_MAX;
volatile int32_t x14 = -1;
static int64_t x19 = INT64_MAX;
uint16_t x20 = UINT16_MAX;
uint16_t x31 = 79U;
static uint64_t x33 = 24167034LLU;
int8_t x35 = 7;
int64_t x37 = -464760802906LL;
volatile uint64_t x39 = 3LLU;
uint32_t x40 = 13335409U;
int64_t t7 = -514406LL;
volatile int64_t x44 = -102582852597359077LL;
static int32_t t8 = 1958637;
uint16_t x48 = UINT16_MAX;
int32_t t9 = -3337443;
int64_t x50 = -1LL;
int64_t x51 = INT64_MIN;
int16_t x53 = -208;
uint16_t x54 = UINT16_MAX;
volatile int32_t t13 = 175127406;
uint64_t x66 = 185152646823LLU;
int8_t x67 = INT8_MIN;
volatile uint64_t t14 = 56188LLU;
int16_t x69 = -18;
int16_t x76 = INT16_MAX;
int16_t x77 = -1;
int32_t x78 = -1;
static int8_t x80 = INT8_MIN;
static uint8_t x83 = 0U;
int8_t x84 = -1;
static int64_t x86 = INT64_MIN;
int16_t x87 = INT16_MIN;
int64_t t20 = -4313657270093267150LL;
static int32_t x100 = INT32_MAX;
int8_t x101 = 63;
int64_t x107 = INT64_MIN;
int32_t t24 = 2096286;
int8_t x111 = -1;
volatile uint64_t t27 = 3668655818431207LLU;
uint16_t x131 = 15031U;
static uint32_t x132 = 5975897U;
int16_t x135 = -7735;
int16_t x145 = 7;
uint64_t x146 = 1618358037053420358LLU;
int32_t x147 = INT32_MIN;
volatile int32_t t33 = -174;
int8_t x161 = 0;
volatile uint64_t x165 = UINT64_MAX;
uint64_t x173 = 5LLU;
static volatile int32_t x175 = INT32_MIN;
int64_t t39 = INT64_MAX;
volatile uint64_t t40 = 460095141250015619LLU;
int32_t x185 = -1;
volatile uint32_t t43 = 0U;
static uint64_t t44 = 245466098LLU;
int32_t t45 = 1;
volatile int8_t x207 = 0;
int64_t t46 = -373703047922822921LL;
uint64_t x209 = 1495028254LLU;
int32_t x214 = INT32_MIN;
static uint8_t x215 = 3U;
uint16_t x220 = 0U;
volatile uint32_t t49 = 3996U;
static int16_t x227 = INT16_MIN;
int32_t x234 = -758626;
static int64_t x247 = -55156LL;
int16_t x249 = -1;
static int8_t x250 = -17;
static int16_t x254 = -21;
int32_t x255 = INT32_MIN;
uint32_t x258 = UINT32_MAX;
int64_t x267 = 335382146871305LL;
static uint32_t x268 = UINT32_MAX;
uint16_t x269 = UINT16_MAX;
volatile int16_t x270 = -1;
int16_t x273 = -6;
volatile int64_t x276 = 230LL;
volatile int8_t x284 = 1;
volatile int32_t x288 = -12680838;
int16_t x292 = INT16_MIN;
int32_t t65 = 84324255;
static int16_t x301 = -1;
static int32_t x303 = INT32_MAX;
static int32_t t67 = 53;
static volatile int64_t t68 = 1LL;
static volatile uint16_t x311 = UINT16_MAX;
uint32_t x316 = 23U;
uint32_t t70 = 0U;
static uint32_t x319 = 10U;
int8_t x320 = -1;
int8_t x325 = -3;
int32_t t72 = -1379;
uint32_t x333 = 14311U;
int8_t x334 = INT8_MAX;
volatile int32_t x335 = -76950832;
int64_t x343 = INT64_MAX;
int64_t t75 = -1017262923844491LL;
int8_t x350 = INT8_MAX;
volatile int32_t t77 = -451269756;
int16_t x359 = INT16_MAX;
int32_t x376 = INT32_MAX;
volatile int64_t t85 = 3356498450796505LL;
int64_t x391 = INT64_MIN;
static int32_t x405 = INT32_MIN;
int32_t x410 = INT32_MIN;
uint16_t x419 = UINT16_MAX;
volatile int64_t t92 = 124712851LL;
int32_t x421 = -1;
int64_t t93 = INT64_MAX;
static uint64_t x427 = 1906547087280925133LLU;
int8_t x428 = INT8_MIN;
int32_t t95 = -1;
volatile uint32_t t96 = 8603U;
int16_t x443 = -8;
volatile int32_t t97 = 156;
volatile int32_t t98 = -232816687;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int8_t x2 = -1;
	volatile int16_t x3 = INT16_MAX;
	volatile int32_t t0 = INT32_MIN;

	t0 = ((x1-x2)-(x3<=x4));

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	int32_t x6 = INT32_MIN;
	uint16_t x7 = 81U;
	int8_t x8 = INT8_MIN;
	static int32_t t1 = INT32_MAX;

	t1 = ((x5-x6)-(x7<=x8));

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	int8_t x11 = 1;
	int8_t x12 = INT8_MIN;
	static uint64_t t2 = 11LLU;

	t2 = ((x9-x10)-(x11<=x12));

	if (t2 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = UINT64_MAX;
	int64_t x15 = INT64_MAX;
	int8_t x16 = INT8_MAX;
	uint64_t t3 = 1070354223620050034LLU;

	t3 = ((x13-x14)-(x15<=x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 16LL;
	int8_t x18 = 34;
	static int64_t t4 = 569710596931320854LL;

	t4 = ((x17-x18)-(x19<=x20));

	if (t4 != -18LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = INT16_MIN;
	int8_t x30 = INT8_MIN;
	static int8_t x32 = INT8_MAX;
	volatile int32_t t5 = -13234841;

	t5 = ((x29-x30)-(x31<=x32));

	if (t5 != -32641) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x34 = -21;
	volatile int8_t x36 = INT8_MIN;
	volatile uint64_t t6 = 175212LLU;

	t6 = ((x33-x34)-(x35<=x36));

	if (t6 != 24167055LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x38 = INT32_MIN;

	t7 = ((x37-x38)-(x39<=x40));

	if (t7 != -462613319259LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x41 = -1;
	uint16_t x42 = 20453U;
	int16_t x43 = INT16_MIN;

	t8 = ((x41-x42)-(x43<=x44));

	if (t8 != -20454) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x45 = UINT16_MAX;
	volatile uint16_t x46 = 3148U;
	uint32_t x47 = UINT32_MAX;

	t9 = ((x45-x46)-(x47<=x48));

	if (t9 != 62387) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x49 = 326419652LLU;
	static uint8_t x52 = 1U;
	volatile uint64_t t10 = 2061104LLU;

	t10 = ((x49-x50)-(x51<=x52));

	if (t10 != 326419652LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x55 = -3995007211LL;
	static int16_t x56 = -1;
	int32_t t11 = -1442201;

	t11 = ((x53-x54)-(x55<=x56));

	if (t11 != -65744) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = 20291625751LL;
	int8_t x58 = 1;
	uint32_t x59 = 239U;
	uint8_t x60 = UINT8_MAX;
	static volatile int64_t t12 = 4022LL;

	t12 = ((x57-x58)-(x59<=x60));

	if (t12 != 20291625749LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x61 = UINT16_MAX;
	int8_t x62 = INT8_MIN;
	int32_t x63 = INT32_MAX;
	static int64_t x64 = -1870269695995656LL;

	t13 = ((x61-x62)-(x63<=x64));

	if (t13 != 65663) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x65 = UINT64_MAX;
	int16_t x68 = -1;

	t14 = ((x65-x66)-(x67<=x68));

	if (t14 != 18446743888556904791LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x70 = 32U;
	uint8_t x71 = 14U;
	volatile int64_t x72 = -1LL;
	int32_t t15 = -25;

	t15 = ((x69-x70)-(x71<=x72));

	if (t15 != -50) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x73 = 1;
	uint32_t x74 = 0U;
	volatile int16_t x75 = -5;
	volatile uint32_t t16 = 4U;

	t16 = ((x73-x74)-(x75<=x76));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x79 = 112763U;
	volatile int32_t t17 = -317590;

	t17 = ((x77-x78)-(x79<=x80));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MAX;
	int64_t x82 = 1099310584LL;
	volatile int64_t t18 = 13526LL;

	t18 = ((x81-x82)-(x83<=x84));

	if (t18 != -1099310457LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x85 = -4032;
	int16_t x88 = -1;
	volatile int64_t t19 = 236658002LL;

	t19 = ((x85-x86)-(x87<=x88));

	if (t19 != 9223372036854771775LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x89 = -187;
	int64_t x90 = -1LL;
	static uint32_t x91 = 1U;
	int32_t x92 = INT32_MAX;

	t20 = ((x89-x90)-(x91<=x92));

	if (t20 != -187LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = -1;
	static int32_t x94 = 31;
	int16_t x95 = 1549;
	static int16_t x96 = 4;
	volatile int32_t t21 = 0;

	t21 = ((x93-x94)-(x95<=x96));

	if (t21 != -32) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = INT16_MAX;
	volatile int8_t x98 = -48;
	volatile int32_t x99 = -1;
	volatile int32_t t22 = 351;

	t22 = ((x97-x98)-(x99<=x100));

	if (t22 != 32814) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x102 = INT32_MAX;
	volatile int8_t x103 = 0;
	volatile int32_t x104 = INT32_MIN;
	volatile int32_t t23 = 1864322;

	t23 = ((x101-x102)-(x103<=x104));

	if (t23 != -2147483584) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x105 = 457;
	static int32_t x106 = 23818988;
	int16_t x108 = INT16_MIN;

	t24 = ((x105-x106)-(x107<=x108));

	if (t24 != -23818532) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = -1;
	uint8_t x110 = 0U;
	int64_t x112 = INT64_MIN;
	volatile int32_t t25 = 2;

	t25 = ((x109-x110)-(x111<=x112));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x113 = 99U;
	uint16_t x114 = 10993U;
	volatile int32_t x115 = INT32_MIN;
	int32_t x116 = -256002;
	int32_t t26 = -676;

	t26 = ((x113-x114)-(x115<=x116));

	if (t26 != -10895) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x117 = UINT64_MAX;
	static int8_t x118 = INT8_MIN;
	static uint8_t x119 = 1U;
	int32_t x120 = -1;

	t27 = ((x117-x118)-(x119<=x120));

	if (t27 != 127LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x125 = 0U;
	static uint16_t x126 = 8U;
	uint8_t x127 = 63U;
	int8_t x128 = -1;
	volatile int32_t t28 = 276;

	t28 = ((x125-x126)-(x127<=x128));

	if (t28 != -8) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x129 = -1;
	static int8_t x130 = INT8_MIN;
	int32_t t29 = -33711;

	t29 = ((x129-x130)-(x131<=x132));

	if (t29 != 126) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x133 = 260894480182938868LLU;
	uint64_t x134 = UINT64_MAX;
	int16_t x136 = -2664;
	volatile uint64_t t30 = 893035348951168642LLU;

	t30 = ((x133-x134)-(x135<=x136));

	if (t30 != 260894480182938868LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x141 = INT64_MIN;
	uint64_t x142 = 31932407279361273LLU;
	uint32_t x143 = 63609975U;
	static int64_t x144 = -27231438338884LL;
	uint64_t t31 = 1120148664849765884LLU;

	t31 = ((x141-x142)-(x143<=x144));

	if (t31 != 9191439629575414535LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x148 = -1;
	static volatile uint64_t t32 = 36859LLU;

	t32 = ((x145-x146)-(x147<=x148));

	if (t32 != 16828386036656131264LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x149 = 15;
	int32_t x150 = -4452347;
	uint64_t x151 = 30048068546600792LLU;
	uint8_t x152 = 1U;

	t33 = ((x149-x150)-(x151<=x152));

	if (t33 != 4452362) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x153 = 467109324112LL;
	uint32_t x154 = 15759U;
	int16_t x155 = -1;
	int32_t x156 = INT32_MIN;
	int64_t t34 = -805305LL;

	t34 = ((x153-x154)-(x155<=x156));

	if (t34 != 467109308353LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x157 = INT16_MAX;
	static uint32_t x158 = 529347380U;
	uint16_t x159 = UINT16_MAX;
	volatile uint32_t x160 = 7824071U;
	volatile uint32_t t35 = 24583U;

	t35 = ((x157-x158)-(x159<=x160));

	if (t35 != 3765652682U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x162 = -1;
	volatile int8_t x163 = -1;
	int8_t x164 = INT8_MIN;
	int32_t t36 = 0;

	t36 = ((x161-x162)-(x163<=x164));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x166 = -7318313;
	int64_t x167 = -9LL;
	static int8_t x168 = INT8_MIN;
	uint64_t t37 = 155468911LLU;

	t37 = ((x165-x166)-(x167<=x168));

	if (t37 != 7318312LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x174 = UINT64_MAX;
	static uint8_t x176 = 7U;
	static uint64_t t38 = 0LLU;

	t38 = ((x173-x174)-(x175<=x176));

	if (t38 != 5LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x177 = -1;
	volatile int64_t x178 = INT64_MIN;
	volatile int16_t x179 = 8070;
	int64_t x180 = INT64_MIN;

	t39 = ((x177-x178)-(x179<=x180));

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint64_t x181 = 1672LLU;
	uint16_t x182 = 5942U;
	int32_t x183 = -1;
	int8_t x184 = INT8_MAX;

	t40 = ((x181-x182)-(x183<=x184));

	if (t40 != 18446744073709547345LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x186 = 60U;
	int16_t x187 = -1;
	uint16_t x188 = 343U;
	volatile uint32_t t41 = 36684903U;

	t41 = ((x185-x186)-(x187<=x188));

	if (t41 != 4294967234U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x189 = UINT64_MAX;
	int16_t x190 = INT16_MAX;
	int64_t x191 = -61148059LL;
	uint8_t x192 = UINT8_MAX;
	uint64_t t42 = 1572006704LLU;

	t42 = ((x189-x190)-(x191<=x192));

	if (t42 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint32_t x193 = 157450753U;
	static int8_t x194 = INT8_MIN;
	int64_t x195 = -7069054LL;
	volatile int16_t x196 = INT16_MAX;

	t43 = ((x193-x194)-(x195<=x196));

	if (t43 != 157450880U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x197 = 11LLU;
	int32_t x198 = INT32_MIN;
	uint16_t x199 = UINT16_MAX;
	int32_t x200 = -98;

	t44 = ((x197-x198)-(x199<=x200));

	if (t44 != 2147483659LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x201 = -1;
	static uint8_t x202 = 6U;
	int8_t x203 = INT8_MIN;
	uint8_t x204 = UINT8_MAX;

	t45 = ((x201-x202)-(x203<=x204));

	if (t45 != -8) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x205 = INT64_MAX;
	uint32_t x206 = 6759416U;
	volatile uint64_t x208 = 24718583701LLU;

	t46 = ((x205-x206)-(x207<=x208));

	if (t46 != 9223372036848016390LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x210 = 1500956368U;
	static int16_t x211 = 1;
	volatile uint32_t x212 = UINT32_MAX;
	static uint64_t t47 = 250LLU;

	t47 = ((x209-x210)-(x211<=x212));

	if (t47 != 18446744073703623501LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x213 = INT16_MIN;
	int32_t x216 = -22;
	volatile int32_t t48 = -477860;

	t48 = ((x213-x214)-(x215<=x216));

	if (t48 != 2147450880) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x217 = 3997U;
	volatile int8_t x218 = 1;
	uint16_t x219 = 1381U;

	t49 = ((x217-x218)-(x219<=x220));

	if (t49 != 3996U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x221 = 732U;
	int64_t x222 = 14684417LL;
	static volatile int8_t x223 = INT8_MIN;
	int16_t x224 = INT16_MIN;
	volatile int64_t t50 = -24360353934178LL;

	t50 = ((x221-x222)-(x223<=x224));

	if (t50 != -14683685LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x225 = 69894175U;
	int8_t x226 = 0;
	int8_t x228 = INT8_MIN;
	uint32_t t51 = 9470U;

	t51 = ((x225-x226)-(x227<=x228));

	if (t51 != 69894174U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x233 = -3;
	int64_t x235 = INT64_MIN;
	uint8_t x236 = 70U;
	int32_t t52 = -3800133;

	t52 = ((x233-x234)-(x235<=x236));

	if (t52 != 758622) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x245 = INT8_MIN;
	static volatile int16_t x246 = -1;
	static uint64_t x248 = 24245329931LLU;
	static int32_t t53 = 43327982;

	t53 = ((x245-x246)-(x247<=x248));

	if (t53 != -127) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x251 = 3942U;
	uint32_t x252 = UINT32_MAX;
	int32_t t54 = 39;

	t54 = ((x249-x250)-(x251<=x252));

	if (t54 != 15) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x253 = INT16_MIN;
	static uint8_t x256 = UINT8_MAX;
	volatile int32_t t55 = 332;

	t55 = ((x253-x254)-(x255<=x256));

	if (t55 != -32748) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x257 = INT16_MIN;
	int64_t x259 = 4007LL;
	uint64_t x260 = UINT64_MAX;
	uint32_t t56 = 20U;

	t56 = ((x257-x258)-(x259<=x260));

	if (t56 != 4294934528U) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x261 = INT8_MAX;
	uint32_t x262 = 4528266U;
	int16_t x263 = 83;
	volatile uint16_t x264 = 21234U;
	static uint32_t t57 = 1994U;

	t57 = ((x261-x262)-(x263<=x264));

	if (t57 != 4290439156U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x265 = -1;
	int32_t x266 = INT32_MAX;
	static volatile int32_t t58 = INT32_MIN;

	t58 = ((x265-x266)-(x267<=x268));

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x271 = 3U;
	uint32_t x272 = 288U;
	int32_t t59 = -66136277;

	t59 = ((x269-x270)-(x271<=x272));

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x274 = -1;
	static int32_t x275 = INT32_MIN;
	int32_t t60 = -142045889;

	t60 = ((x273-x274)-(x275<=x276));

	if (t60 != -6) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x277 = INT32_MIN;
	uint32_t x278 = 152U;
	uint64_t x279 = 19664271766273983LLU;
	uint16_t x280 = UINT16_MAX;
	static volatile uint32_t t61 = 660U;

	t61 = ((x277-x278)-(x279<=x280));

	if (t61 != 2147483496U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x281 = -13;
	int32_t x282 = -44589029;
	int64_t x283 = INT64_MIN;
	int32_t t62 = -32;

	t62 = ((x281-x282)-(x283<=x284));

	if (t62 != 44589015) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x285 = INT16_MAX;
	static uint64_t x286 = 73LLU;
	int16_t x287 = INT16_MIN;
	static uint64_t t63 = 97LLU;

	t63 = ((x285-x286)-(x287<=x288));

	if (t63 != 32694LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x289 = INT8_MAX;
	static volatile uint8_t x290 = UINT8_MAX;
	int8_t x291 = -1;
	volatile int32_t t64 = -1319;

	t64 = ((x289-x290)-(x291<=x292));

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x293 = -1;
	int8_t x294 = INT8_MIN;
	volatile uint8_t x295 = 15U;
	int64_t x296 = -22519883LL;

	t65 = ((x293-x294)-(x295<=x296));

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x297 = 29U;
	static volatile int64_t x298 = 1724292828701980LL;
	static int16_t x299 = -1;
	uint32_t x300 = UINT32_MAX;
	int64_t t66 = 918855089177LL;

	t66 = ((x297-x298)-(x299<=x300));

	if (t66 != -1724292828701952LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x302 = INT16_MIN;
	uint64_t x304 = 156215677LLU;

	t67 = ((x301-x302)-(x303<=x304));

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x305 = INT16_MIN;
	static volatile int64_t x306 = 17798001LL;
	int16_t x307 = 211;
	uint16_t x308 = 106U;

	t68 = ((x305-x306)-(x307<=x308));

	if (t68 != -17830769LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x309 = INT8_MIN;
	int64_t x310 = INT64_MIN;
	static volatile uint32_t x312 = 5487U;
	volatile int64_t t69 = 356851121434LL;

	t69 = ((x309-x310)-(x311<=x312));

	if (t69 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x313 = UINT32_MAX;
	int32_t x314 = 2;
	int64_t x315 = INT64_MAX;

	t70 = ((x313-x314)-(x315<=x316));

	if (t70 != 4294967293U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x317 = UINT32_MAX;
	uint16_t x318 = 6666U;
	volatile uint32_t t71 = 6U;

	t71 = ((x317-x318)-(x319<=x320));

	if (t71 != 4294960628U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x326 = INT16_MAX;
	uint32_t x327 = 59719021U;
	uint8_t x328 = 101U;

	t72 = ((x325-x326)-(x327<=x328));

	if (t72 != -32770) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x336 = INT8_MIN;
	static uint32_t t73 = 16085U;

	t73 = ((x333-x334)-(x335<=x336));

	if (t73 != 14183U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x337 = UINT8_MAX;
	int8_t x338 = 1;
	int64_t x339 = -1LL;
	int64_t x340 = INT64_MAX;
	volatile int32_t t74 = -1154314;

	t74 = ((x337-x338)-(x339<=x340));

	if (t74 != 253) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x341 = 6933741366061LL;
	uint32_t x342 = 3U;
	uint8_t x344 = UINT8_MAX;

	t75 = ((x341-x342)-(x343<=x344));

	if (t75 != 6933741366058LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x345 = 50LLU;
	volatile int8_t x346 = INT8_MIN;
	static int16_t x347 = -1387;
	int16_t x348 = 44;
	volatile uint64_t t76 = 216005437409538LLU;

	t76 = ((x345-x346)-(x347<=x348));

	if (t76 != 177LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x349 = INT8_MAX;
	int8_t x351 = INT8_MIN;
	int64_t x352 = -1LL;

	t77 = ((x349-x350)-(x351<=x352));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x357 = INT16_MIN;
	int16_t x358 = INT16_MIN;
	int64_t x360 = 554160764LL;
	volatile int32_t t78 = -65856;

	t78 = ((x357-x358)-(x359<=x360));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x361 = -1602LL;
	int8_t x362 = -1;
	int64_t x363 = -103318381926440LL;
	volatile int8_t x364 = -1;
	int64_t t79 = 265361557799LL;

	t79 = ((x361-x362)-(x363<=x364));

	if (t79 != -1602LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x365 = 0;
	uint16_t x366 = UINT16_MAX;
	int32_t x367 = 286137501;
	int8_t x368 = -1;
	volatile int32_t t80 = 6740932;

	t80 = ((x365-x366)-(x367<=x368));

	if (t80 != -65535) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x369 = UINT16_MAX;
	static uint64_t x370 = UINT64_MAX;
	uint32_t x371 = UINT32_MAX;
	int8_t x372 = -1;
	uint64_t t81 = 223LLU;

	t81 = ((x369-x370)-(x371<=x372));

	if (t81 != 65535LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x373 = INT64_MIN;
	int16_t x374 = -1;
	int16_t x375 = INT16_MAX;
	volatile int64_t t82 = INT64_MIN;

	t82 = ((x373-x374)-(x375<=x376));

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x377 = 1U;
	uint16_t x378 = UINT16_MAX;
	volatile int16_t x379 = INT16_MAX;
	uint16_t x380 = 3U;
	volatile int32_t t83 = -12038718;

	t83 = ((x377-x378)-(x379<=x380));

	if (t83 != -65534) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x381 = 1;
	int8_t x382 = -37;
	int64_t x383 = INT64_MIN;
	static int16_t x384 = -1;
	volatile int32_t t84 = 329631;

	t84 = ((x381-x382)-(x383<=x384));

	if (t84 != 37) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x385 = INT16_MAX;
	int64_t x386 = -33141580366LL;
	static int64_t x387 = INT64_MIN;
	static uint16_t x388 = UINT16_MAX;

	t85 = ((x385-x386)-(x387<=x388));

	if (t85 != 33141613132LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x389 = 0U;
	int16_t x390 = INT16_MIN;
	volatile int64_t x392 = 7273831080864LL;
	int32_t t86 = -1042136;

	t86 = ((x389-x390)-(x391<=x392));

	if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x393 = 3U;
	volatile uint8_t x394 = 3U;
	uint32_t x395 = 6304578U;
	uint32_t x396 = UINT32_MAX;
	static volatile int32_t t87 = -2;

	t87 = ((x393-x394)-(x395<=x396));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x401 = 92129677LL;
	int16_t x402 = 49;
	int64_t x403 = INT64_MIN;
	int32_t x404 = -39180;
	static int64_t t88 = 50332614LL;

	t88 = ((x401-x402)-(x403<=x404));

	if (t88 != 92129627LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x406 = INT8_MIN;
	uint16_t x407 = UINT16_MAX;
	int32_t x408 = -1049652;
	static int32_t t89 = 10;

	t89 = ((x405-x406)-(x407<=x408));

	if (t89 != -2147483520) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x409 = 14764959750408LLU;
	volatile int8_t x411 = INT8_MIN;
	uint64_t x412 = UINT64_MAX;
	uint64_t t90 = 363154695180LLU;

	t90 = ((x409-x410)-(x411<=x412));

	if (t90 != 14767107234055LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x413 = UINT8_MAX;
	volatile uint8_t x414 = 61U;
	static int8_t x415 = INT8_MIN;
	uint8_t x416 = 1U;
	volatile int32_t t91 = -725989;

	t91 = ((x413-x414)-(x415<=x416));

	if (t91 != 193) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x417 = INT64_MIN;
	static int32_t x418 = -1;
	int64_t x420 = -23452557506LL;

	t92 = ((x417-x418)-(x419<=x420));

	if (t92 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x422 = INT64_MIN;
	volatile int64_t x423 = INT64_MAX;
	static int16_t x424 = INT16_MAX;

	t93 = ((x421-x422)-(x423<=x424));

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x425 = -1;
	static uint16_t x426 = 8015U;
	volatile int32_t t94 = 189;

	t94 = ((x425-x426)-(x427<=x428));

	if (t94 != -8017) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x433 = -2;
	uint16_t x434 = 9833U;
	int64_t x435 = -66120620LL;
	int8_t x436 = INT8_MIN;

	t95 = ((x433-x434)-(x435<=x436));

	if (t95 != -9836) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x437 = UINT32_MAX;
	uint32_t x438 = 283U;
	static int32_t x439 = -1;
	int32_t x440 = INT32_MIN;

	t96 = ((x437-x438)-(x439<=x440));

	if (t96 != 4294967012U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x441 = INT8_MIN;
	int16_t x442 = 5;
	volatile int64_t x444 = 699930226427922784LL;

	t97 = ((x441-x442)-(x443<=x444));

	if (t97 != -134) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x445 = INT8_MAX;
	uint8_t x446 = UINT8_MAX;
	int8_t x447 = INT8_MAX;
	int32_t x448 = -401644888;

	t98 = ((x445-x446)-(x447<=x448));

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x449 = 22122766876690596LLU;
	static int32_t x450 = -1;
	uint8_t x451 = 3U;
	uint64_t x452 = 7048036LLU;
	static uint64_t t99 = 1190LLU;

	t99 = ((x449-x450)-(x451<=x452));

	if (t99 != 22122766876690596LLU) { NG(); } else { ; }
	
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

