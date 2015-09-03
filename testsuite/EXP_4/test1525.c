#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x8 = 76U;
int32_t x14 = -1;
uint8_t x23 = 109U;
volatile int32_t t5 = 77394724;
volatile int32_t t9 = -505203622;
static int64_t x45 = INT64_MAX;
static int64_t x55 = INT64_MIN;
volatile int8_t x56 = -1;
int32_t t13 = 919;
static uint16_t x59 = UINT16_MAX;
int16_t x70 = -1;
int32_t t17 = -1151287;
int64_t x82 = INT64_MIN;
volatile int64_t x92 = 395968195510LL;
volatile int64_t t21 = 1LL;
uint8_t x95 = 2U;
int64_t x98 = INT64_MIN;
int32_t x100 = INT32_MIN;
int64_t t23 = 2LL;
int16_t x107 = -9496;
int16_t x108 = INT16_MAX;
static int8_t x112 = -1;
uint8_t x145 = 74U;
uint64_t x146 = 771921039157745407LLU;
static uint32_t x149 = 2304082U;
uint32_t x151 = 805590023U;
uint16_t x156 = 0U;
int16_t x158 = INT16_MIN;
uint32_t x181 = 532U;
uint8_t x183 = 12U;
int64_t x184 = -1LL;
uint32_t t39 = 1397676644U;
uint8_t x188 = 85U;
uint32_t x191 = 2108158U;
int16_t x194 = INT16_MIN;
volatile int32_t x198 = 124764;
volatile uint32_t t43 = 257500066U;
static int32_t t45 = -479;
int32_t x212 = -349548886;
int64_t t46 = -48236515140316LL;
int32_t x232 = 2;
uint64_t x233 = UINT64_MAX;
uint32_t x234 = UINT32_MAX;
static int64_t x255 = INT64_MIN;
volatile int32_t t55 = -1;
int16_t x279 = 0;
static uint8_t x282 = 1U;
static uint32_t x293 = 3565U;
uint8_t x298 = 2U;
int16_t x299 = 23;
int32_t t67 = 215;
static volatile uint64_t x305 = 48LLU;
static int32_t x308 = -1;
static volatile int32_t t69 = -601;
static volatile int32_t t70 = -129971;
static int64_t x321 = -58LL;
static volatile int32_t x323 = INT32_MIN;
int8_t x324 = INT8_MIN;
int8_t x329 = 40;
static int16_t x333 = INT16_MIN;
int32_t x340 = INT32_MIN;
uint64_t x347 = UINT64_MAX;
static volatile uint64_t t77 = 128782849LLU;
uint16_t x361 = 107U;
volatile uint32_t t83 = 36U;
int32_t t84 = -42106028;
int32_t x391 = INT32_MAX;
static uint64_t x395 = 877LLU;
int32_t x398 = -13665928;
uint64_t x401 = UINT64_MAX;
int32_t x402 = 1204111;
int8_t x404 = INT8_MIN;
int16_t x406 = -1;
volatile uint64_t x418 = 11LLU;
volatile uint64_t t92 = 1746127432505LLU;
int32_t t93 = -4;
volatile int16_t x427 = INT16_MAX;
uint32_t x430 = 147U;
int32_t x431 = INT32_MIN;
static int64_t t95 = -8937186496346LL;
static int64_t x434 = 1918196235LL;
volatile int64_t t96 = 4262LL;
uint64_t x437 = 950586212LLU;
static int32_t t98 = 271892604;
volatile int64_t t99 = -161021374754LL;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int8_t x2 = INT8_MIN;
	uint32_t x3 = 30993U;
	uint64_t x4 = 2049699644412448284LLU;
	uint64_t t0 = 5648214014LLU;

	t0 = (x1/(x2+(x3<=x4)));

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 0;
	int64_t x6 = INT64_MIN;
	static int32_t x7 = 442154;
	int64_t t1 = -26882LL;

	t1 = (x5/(x6+(x7<=x8)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int8_t x10 = INT8_MIN;
	uint16_t x11 = UINT16_MAX;
	static int32_t x12 = INT32_MAX;
	volatile int32_t t2 = -411506;

	t2 = (x9/(x10+(x11<=x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = 8434;
	volatile uint8_t x15 = 3U;
	int32_t x16 = INT32_MIN;
	volatile int32_t t3 = -2037483;

	t3 = (x13/(x14+(x15<=x16)));

	if (t3 != -8434) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	int32_t x18 = 11117692;
	int64_t x19 = INT64_MAX;
	volatile uint8_t x20 = UINT8_MAX;
	volatile int32_t t4 = -273;

	t4 = (x17/(x18+(x19<=x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x21 = INT8_MIN;
	uint8_t x22 = 1U;
	int64_t x24 = -2093942620247LL;

	t5 = (x21/(x22+(x23<=x24)));

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 371716449U;
	uint32_t x26 = UINT32_MAX;
	uint64_t x27 = UINT64_MAX;
	volatile int16_t x28 = INT16_MIN;
	volatile uint32_t t6 = 10916U;

	t6 = (x25/(x26+(x27<=x28)));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	uint8_t x30 = 3U;
	static int16_t x31 = 0;
	volatile int32_t x32 = 2998;
	volatile int32_t t7 = -3;

	t7 = (x29/(x30+(x31<=x32)));

	if (t7 != -536870912) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MAX;
	int16_t x34 = INT16_MAX;
	static int32_t x35 = INT32_MAX;
	uint32_t x36 = 159U;
	volatile int32_t t8 = -13689;

	t8 = (x33/(x34+(x35<=x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = INT32_MIN;
	volatile int16_t x38 = -39;
	static uint8_t x39 = 10U;
	uint64_t x40 = 566779015LLU;

	t9 = (x37/(x38+(x39<=x40)));

	if (t9 != 56512727) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x41 = 384U;
	int16_t x42 = INT16_MIN;
	static uint64_t x43 = UINT64_MAX;
	uint32_t x44 = UINT32_MAX;
	static uint32_t t10 = 0U;

	t10 = (x41/(x42+(x43<=x44)));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = INT32_MIN;
	uint32_t x47 = 10181U;
	static uint16_t x48 = 3U;
	int64_t t11 = -1859175473LL;

	t11 = (x45/(x46+(x47<=x48)));

	if (t11 != -4294967295LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	int32_t x50 = -205226;
	volatile uint16_t x51 = 7U;
	int8_t x52 = INT8_MIN;
	volatile int32_t t12 = 305685111;

	t12 = (x49/(x50+(x51<=x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	volatile int8_t x54 = INT8_MIN;

	t13 = (x53/(x54+(x55<=x56)));

	if (t13 != -2) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	int16_t x58 = INT16_MAX;
	volatile uint32_t x60 = UINT32_MAX;
	static int32_t t14 = -3793093;

	t14 = (x57/(x58+(x59<=x60)));

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 805003U;
	int16_t x62 = INT16_MIN;
	volatile int64_t x63 = INT64_MAX;
	uint8_t x64 = 32U;
	uint32_t t15 = 506812569U;

	t15 = (x61/(x62+(x63<=x64)));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = 32511U;
	int64_t x71 = INT64_MAX;
	int64_t x72 = 40190650354598728LL;
	volatile int32_t t16 = -60868;

	t16 = (x69/(x70+(x71<=x72)));

	if (t16 != -32511) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x73 = -1;
	uint16_t x74 = 14199U;
	uint32_t x75 = 798642609U;
	static volatile uint32_t x76 = 860960354U;

	t17 = (x73/(x74+(x75<=x76)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x77 = 9334584U;
	volatile uint8_t x78 = 2U;
	int64_t x79 = 3LL;
	int16_t x80 = INT16_MAX;
	uint32_t t18 = 270U;

	t18 = (x77/(x78+(x79<=x80)));

	if (t18 != 3111528U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = 1U;
	int32_t x83 = -1750;
	int8_t x84 = INT8_MAX;
	static int64_t t19 = 15LL;

	t19 = (x81/(x82+(x83<=x84)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = -1;
	int32_t x86 = INT32_MIN;
	uint64_t x87 = 943624951654111060LLU;
	static int16_t x88 = INT16_MIN;
	int32_t t20 = -2;

	t20 = (x85/(x86+(x87<=x88)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x89 = 40U;
	int64_t x90 = INT64_MIN;
	uint32_t x91 = 3453U;

	t21 = (x89/(x90+(x91<=x92)));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = -7400LL;
	uint16_t x94 = 41U;
	int8_t x96 = INT8_MIN;
	volatile int64_t t22 = -1626454410648179LL;

	t22 = (x93/(x94+(x95<=x96)));

	if (t22 != -180LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = INT16_MIN;
	int16_t x99 = -1;

	t23 = (x97/(x98+(x99<=x100)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x101 = -174;
	int8_t x102 = INT8_MIN;
	int8_t x103 = INT8_MIN;
	static int64_t x104 = INT64_MIN;
	static volatile int32_t t24 = -1;

	t24 = (x101/(x102+(x103<=x104)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x105 = -4LL;
	static int32_t x106 = -24;
	int64_t t25 = 0LL;

	t25 = (x105/(x106+(x107<=x108)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x109 = INT32_MIN;
	uint64_t x110 = 288501580773LLU;
	uint16_t x111 = 30965U;
	volatile uint64_t t26 = 989595253200LLU;

	t26 = (x109/(x110+(x111<=x112)));

	if (t26 != 63939837LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = -1;
	uint16_t x122 = 1U;
	static volatile int32_t x123 = INT32_MAX;
	int64_t x124 = 16480451LL;
	volatile int32_t t27 = -2806;

	t27 = (x121/(x122+(x123<=x124)));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = INT8_MIN;
	int64_t x130 = INT64_MIN;
	int32_t x131 = -1;
	volatile int16_t x132 = 4;
	int64_t t28 = -216108033856LL;

	t28 = (x129/(x130+(x131<=x132)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint64_t x133 = 50010847823454647LLU;
	uint16_t x134 = 10405U;
	int16_t x135 = INT16_MAX;
	uint64_t x136 = 229373LLU;
	uint64_t t29 = 28337838LLU;

	t29 = (x133/(x134+(x135<=x136)));

	if (t29 != 4805962696853LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x137 = INT32_MIN;
	static uint32_t x138 = 104349512U;
	int8_t x139 = INT8_MAX;
	static uint32_t x140 = UINT32_MAX;
	uint32_t t30 = 41006U;

	t30 = (x137/(x138+(x139<=x140)));

	if (t30 != 20U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x147 = UINT32_MAX;
	volatile uint64_t x148 = 11236259LLU;
	volatile uint64_t t31 = 4757303141433872818LLU;

	t31 = (x145/(x146+(x147<=x148)));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x150 = 90766U;
	int16_t x152 = INT16_MIN;
	static volatile uint32_t t32 = 6238197U;

	t32 = (x149/(x150+(x151<=x152)));

	if (t32 != 25U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x153 = 0U;
	volatile uint32_t x154 = 2059851612U;
	int16_t x155 = INT16_MAX;
	static volatile uint32_t t33 = 16096796U;

	t33 = (x153/(x154+(x155<=x156)));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x157 = 14597403687866996LLU;
	int16_t x159 = INT16_MIN;
	static int32_t x160 = INT32_MIN;
	static uint64_t t34 = 179438821LLU;

	t34 = (x157/(x158+(x159<=x160)));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x161 = 15;
	volatile int64_t x162 = -2424226790996522431LL;
	static uint32_t x163 = 6080U;
	volatile uint64_t x164 = UINT64_MAX;
	volatile int64_t t35 = -5627208625945077LL;

	t35 = (x161/(x162+(x163<=x164)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x165 = 18;
	volatile uint8_t x166 = 1U;
	static volatile uint64_t x167 = 90LLU;
	uint64_t x168 = 67819743LLU;
	volatile int32_t t36 = -66;

	t36 = (x165/(x166+(x167<=x168)));

	if (t36 != 9) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x169 = INT16_MIN;
	uint16_t x170 = UINT16_MAX;
	volatile int8_t x171 = -1;
	uint32_t x172 = 985939U;
	volatile int32_t t37 = -59;

	t37 = (x169/(x170+(x171<=x172)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x173 = INT8_MAX;
	int16_t x174 = 8;
	int32_t x175 = INT32_MIN;
	static uint8_t x176 = UINT8_MAX;
	int32_t t38 = 0;

	t38 = (x173/(x174+(x175<=x176)));

	if (t38 != 14) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x182 = 3745416;

	t39 = (x181/(x182+(x183<=x184)));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x185 = -96230081900LL;
	static int16_t x186 = 1;
	uint8_t x187 = UINT8_MAX;
	static volatile int64_t t40 = 215602LL;

	t40 = (x185/(x186+(x187<=x188)));

	if (t40 != -96230081900LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x189 = 284871843246114LL;
	uint32_t x190 = 29909863U;
	uint16_t x192 = 1963U;
	volatile int64_t t41 = 0LL;

	t41 = (x189/(x190+(x191<=x192)));

	if (t41 != 9524344LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x193 = INT8_MIN;
	int8_t x195 = INT8_MIN;
	int32_t x196 = 3002787;
	int32_t t42 = -530913378;

	t42 = (x193/(x194+(x195<=x196)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x197 = 10967542U;
	int32_t x199 = -1;
	uint8_t x200 = 39U;

	t43 = (x197/(x198+(x199<=x200)));

	if (t43 != 87U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x201 = UINT32_MAX;
	static uint8_t x202 = 17U;
	static uint8_t x203 = 93U;
	int8_t x204 = INT8_MAX;
	volatile uint32_t t44 = 189230U;

	t44 = (x201/(x202+(x203<=x204)));

	if (t44 != 238609294U) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x205 = -1;
	volatile uint8_t x206 = 16U;
	volatile int64_t x207 = 6296662LL;
	int32_t x208 = INT32_MAX;

	t45 = (x205/(x206+(x207<=x208)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x209 = 81471U;
	volatile int64_t x210 = INT64_MIN;
	int64_t x211 = -38826140073LL;

	t46 = (x209/(x210+(x211<=x212)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x221 = -1LL;
	uint16_t x222 = 1006U;
	static int16_t x223 = -3;
	volatile int8_t x224 = INT8_MIN;
	volatile int64_t t47 = -74148LL;

	t47 = (x221/(x222+(x223<=x224)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x225 = INT64_MIN;
	int64_t x226 = 1673939719217883LL;
	uint8_t x227 = UINT8_MAX;
	static volatile int64_t x228 = -1LL;
	static volatile int64_t t48 = 3407636568477837250LL;

	t48 = (x225/(x226+(x227<=x228)));

	if (t48 != -5509LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x229 = -13517387755851251LL;
	volatile uint8_t x230 = 0U;
	static int32_t x231 = INT32_MIN;
	volatile int64_t t49 = -56649098774570684LL;

	t49 = (x229/(x230+(x231<=x232)));

	if (t49 != -13517387755851251LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x235 = -1LL;
	static int64_t x236 = INT64_MIN;
	uint64_t t50 = 1LLU;

	t50 = (x233/(x234+(x235<=x236)));

	if (t50 != 4294967297LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x237 = 705548U;
	int64_t x238 = INT64_MIN;
	int64_t x239 = -1194733960LL;
	uint64_t x240 = UINT64_MAX;
	volatile int64_t t51 = 5379964854391441LL;

	t51 = (x237/(x238+(x239<=x240)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x241 = 7742U;
	uint64_t x242 = 29523651249417LLU;
	uint16_t x243 = 15922U;
	uint64_t x244 = 372984435670027LLU;
	volatile uint64_t t52 = 888937241572LLU;

	t52 = (x241/(x242+(x243<=x244)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x245 = 1;
	int32_t x246 = -1;
	static uint16_t x247 = 1619U;
	int8_t x248 = -1;
	volatile int32_t t53 = -1776;

	t53 = (x245/(x246+(x247<=x248)));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x249 = UINT64_MAX;
	int8_t x250 = 1;
	uint64_t x251 = 930096809LLU;
	static volatile uint16_t x252 = UINT16_MAX;
	static volatile uint64_t t54 = UINT64_MAX;

	t54 = (x249/(x250+(x251<=x252)));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x253 = 755090807;
	int8_t x254 = -5;
	int8_t x256 = -1;

	t55 = (x253/(x254+(x255<=x256)));

	if (t55 != -188772701) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x257 = INT64_MAX;
	uint32_t x258 = 121276284U;
	int16_t x259 = 0;
	volatile uint8_t x260 = 11U;
	int64_t t56 = -212149488240LL;

	t56 = (x257/(x258+(x259<=x260)));

	if (t56 != 76052560785LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x261 = -1885889593343443453LL;
	int64_t x262 = -6941347454LL;
	uint16_t x263 = 115U;
	static uint16_t x264 = UINT16_MAX;
	int64_t t57 = 91961LL;

	t57 = (x261/(x262+(x263<=x264)));

	if (t57 != 271689265LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x265 = -6;
	int64_t x266 = INT64_MIN;
	int32_t x267 = INT32_MIN;
	int32_t x268 = INT32_MAX;
	static int64_t t58 = 1702150183LL;

	t58 = (x265/(x266+(x267<=x268)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x269 = INT16_MIN;
	volatile int16_t x270 = INT16_MIN;
	static int16_t x271 = INT16_MAX;
	volatile int64_t x272 = 3LL;
	static int32_t t59 = -15;

	t59 = (x269/(x270+(x271<=x272)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x273 = 47;
	int8_t x274 = 3;
	int8_t x275 = INT8_MIN;
	int64_t x276 = -1LL;
	int32_t t60 = -670478402;

	t60 = (x273/(x274+(x275<=x276)));

	if (t60 != 11) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x277 = UINT32_MAX;
	uint64_t x278 = 83324103544LLU;
	uint8_t x280 = 102U;
	uint64_t t61 = 6152266LLU;

	t61 = (x277/(x278+(x279<=x280)));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x281 = INT64_MIN;
	int32_t x283 = INT32_MIN;
	int8_t x284 = INT8_MIN;
	static volatile int64_t t62 = 3352423913025234612LL;

	t62 = (x281/(x282+(x283<=x284)));

	if (t62 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x285 = 3110727;
	uint64_t x286 = 455999032LLU;
	uint16_t x287 = 1U;
	volatile uint16_t x288 = UINT16_MAX;
	uint64_t t63 = 4341540942783LLU;

	t63 = (x285/(x286+(x287<=x288)));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x289 = -1;
	int8_t x290 = 0;
	volatile int16_t x291 = INT16_MIN;
	uint16_t x292 = UINT16_MAX;
	volatile int32_t t64 = 1;

	t64 = (x289/(x290+(x291<=x292)));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x294 = INT8_MIN;
	uint64_t x295 = 216564877192LLU;
	int64_t x296 = INT64_MIN;
	static volatile uint32_t t65 = 112523391U;

	t65 = (x293/(x294+(x295<=x296)));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x297 = INT16_MIN;
	uint64_t x300 = UINT64_MAX;
	volatile int32_t t66 = -473;

	t66 = (x297/(x298+(x299<=x300)));

	if (t66 != -10922) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x301 = -1;
	int16_t x302 = -15030;
	volatile uint8_t x303 = UINT8_MAX;
	static volatile uint16_t x304 = UINT16_MAX;

	t67 = (x301/(x302+(x303<=x304)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x306 = -29;
	int32_t x307 = -1;
	uint64_t t68 = 4850LLU;

	t68 = (x305/(x306+(x307<=x308)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x309 = INT16_MAX;
	int16_t x310 = -5120;
	volatile int64_t x311 = INT64_MIN;
	uint32_t x312 = 40U;

	t69 = (x309/(x310+(x311<=x312)));

	if (t69 != -6) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x317 = 53U;
	int16_t x318 = -5;
	volatile int32_t x319 = 48914462;
	int32_t x320 = 7533;

	t70 = (x317/(x318+(x319<=x320)));

	if (t70 != -10) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x322 = 34U;
	static volatile int64_t t71 = 126393LL;

	t71 = (x321/(x322+(x323<=x324)));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x330 = UINT8_MAX;
	int16_t x331 = -7984;
	static int16_t x332 = -654;
	int32_t t72 = -8063;

	t72 = (x329/(x330+(x331<=x332)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x334 = INT8_MIN;
	volatile int8_t x335 = INT8_MAX;
	int32_t x336 = INT32_MAX;
	volatile int32_t t73 = 30935027;

	t73 = (x333/(x334+(x335<=x336)));

	if (t73 != 258) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x337 = INT16_MAX;
	int32_t x338 = INT32_MIN;
	int32_t x339 = INT32_MIN;
	volatile int32_t t74 = 100974180;

	t74 = (x337/(x338+(x339<=x340)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x341 = 0U;
	volatile uint32_t x342 = 47762621U;
	static int64_t x343 = 22041889114LL;
	volatile int32_t x344 = INT32_MIN;
	volatile uint32_t t75 = 212322087U;

	t75 = (x341/(x342+(x343<=x344)));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x345 = INT32_MAX;
	int16_t x346 = INT16_MIN;
	volatile int8_t x348 = -1;
	volatile int32_t t76 = -343694353;

	t76 = (x345/(x346+(x347<=x348)));

	if (t76 != -65538) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x349 = INT64_MIN;
	uint64_t x350 = 6239660LLU;
	volatile uint32_t x351 = 3452U;
	static int8_t x352 = 3;

	t77 = (x349/(x350+(x351<=x352)));

	if (t77 != 1478185035219LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x353 = INT64_MIN;
	uint16_t x354 = 80U;
	int16_t x355 = INT16_MAX;
	int64_t x356 = INT64_MIN;
	volatile int64_t t78 = 6LL;

	t78 = (x353/(x354+(x355<=x356)));

	if (t78 != -115292150460684697LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x362 = INT16_MAX;
	static int64_t x363 = INT64_MAX;
	uint8_t x364 = 6U;
	volatile int32_t t79 = -1;

	t79 = (x361/(x362+(x363<=x364)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x365 = INT64_MAX;
	volatile int32_t x366 = INT32_MIN;
	int64_t x367 = INT64_MIN;
	int16_t x368 = INT16_MAX;
	volatile int64_t t80 = 26700427420LL;

	t80 = (x365/(x366+(x367<=x368)));

	if (t80 != -4294967298LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x369 = 8867733506564877005LLU;
	volatile int32_t x370 = 601855260;
	int16_t x371 = 12;
	static uint32_t x372 = UINT32_MAX;
	volatile uint64_t t81 = 3532673661653LLU;

	t81 = (x369/(x370+(x371<=x372)));

	if (t81 != 14733996828LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x373 = UINT64_MAX;
	uint32_t x374 = 74154U;
	int32_t x375 = INT32_MIN;
	int16_t x376 = -47;
	volatile uint64_t t82 = 1LLU;

	t82 = (x373/(x374+(x375<=x376)));

	if (t82 != 248759275486609LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x377 = INT8_MIN;
	uint32_t x378 = UINT32_MAX;
	uint32_t x379 = UINT32_MAX;
	int16_t x380 = INT16_MIN;

	t83 = (x377/(x378+(x379<=x380)));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x381 = 821U;
	static int32_t x382 = INT32_MIN;
	int64_t x383 = INT64_MIN;
	static uint16_t x384 = UINT16_MAX;

	t84 = (x381/(x382+(x383<=x384)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x385 = INT64_MIN;
	volatile int8_t x386 = INT8_MIN;
	uint16_t x387 = 7U;
	uint64_t x388 = UINT64_MAX;
	volatile int64_t t85 = 985344522111642LL;

	t85 = (x385/(x386+(x387<=x388)));

	if (t85 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x389 = -1;
	int32_t x390 = -1;
	int32_t x392 = 7;
	static volatile int32_t t86 = -21725;

	t86 = (x389/(x390+(x391<=x392)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x393 = -1LL;
	int32_t x394 = INT32_MIN;
	uint64_t x396 = UINT64_MAX;
	int64_t t87 = -24250118948LL;

	t87 = (x393/(x394+(x395<=x396)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x397 = 2502984LLU;
	int32_t x399 = -1;
	uint8_t x400 = 0U;
	uint64_t t88 = 2752657020702LLU;

	t88 = (x397/(x398+(x399<=x400)));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x403 = -1;
	volatile uint64_t t89 = 6860752408788333100LLU;

	t89 = (x401/(x402+(x403<=x404)));

	if (t89 != 15319803634141LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x405 = UINT64_MAX;
	int64_t x407 = -1LL;
	int8_t x408 = INT8_MIN;
	static uint64_t t90 = 2405415471279438082LLU;

	t90 = (x405/(x406+(x407<=x408)));

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x409 = -2;
	int64_t x410 = 1981LL;
	int64_t x411 = INT64_MIN;
	static int64_t x412 = INT64_MIN;
	volatile int64_t t91 = 16484535560502674LL;

	t91 = (x409/(x410+(x411<=x412)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x417 = 19;
	int32_t x419 = INT32_MIN;
	uint16_t x420 = 191U;

	t92 = (x417/(x418+(x419<=x420)));

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x421 = -764;
	uint16_t x422 = 21U;
	volatile int64_t x423 = -1LL;
	int8_t x424 = INT8_MIN;

	t93 = (x421/(x422+(x423<=x424)));

	if (t93 != -36) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x425 = -13;
	int8_t x426 = INT8_MAX;
	volatile int64_t x428 = -174836026464656LL;
	volatile int32_t t94 = -395883346;

	t94 = (x425/(x426+(x427<=x428)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x429 = INT64_MIN;
	static uint64_t x432 = 295053960613244776LLU;

	t95 = (x429/(x430+(x431<=x432)));

	if (t95 != -62744027461597114LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x433 = UINT16_MAX;
	int8_t x435 = -7;
	int16_t x436 = -1;

	t96 = (x433/(x434+(x435<=x436)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x438 = 26;
	int64_t x439 = INT64_MIN;
	int64_t x440 = -1LL;
	volatile uint64_t t97 = 349283407LLU;

	t97 = (x437/(x438+(x439<=x440)));

	if (t97 != 35206896LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x441 = -1;
	uint16_t x442 = UINT16_MAX;
	int32_t x443 = INT32_MIN;
	uint64_t x444 = 4390LLU;

	t98 = (x441/(x442+(x443<=x444)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x445 = -1LL;
	int64_t x446 = INT64_MIN;
	static uint64_t x447 = UINT64_MAX;
	int16_t x448 = -12678;

	t99 = (x445/(x446+(x447<=x448)));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

