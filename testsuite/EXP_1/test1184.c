#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x8 = 75U;
uint64_t x11 = 4111928002252219104LLU;
volatile uint64_t t2 = 314430371409078558LLU;
static int64_t x13 = INT64_MAX;
static volatile int16_t x18 = INT16_MAX;
int16_t x21 = -1;
int32_t t6 = -35862;
int8_t x35 = INT8_MIN;
volatile int32_t x37 = INT32_MIN;
uint64_t x38 = 488887804300747820LLU;
int16_t x42 = -1;
int16_t x43 = INT16_MAX;
uint8_t x44 = 24U;
int32_t x70 = INT32_MAX;
int8_t x88 = -1;
int16_t x91 = INT16_MIN;
uint32_t x93 = UINT32_MAX;
int64_t x95 = INT64_MIN;
int16_t x103 = INT16_MAX;
static uint64_t x107 = UINT64_MAX;
int8_t x114 = -15;
int8_t x116 = INT8_MIN;
uint8_t x122 = 19U;
volatile uint32_t x130 = 4760292U;
uint8_t x134 = 0U;
static int32_t x136 = -1;
static int8_t x141 = 1;
static uint16_t x146 = UINT16_MAX;
static volatile int32_t x153 = -1;
uint8_t x163 = 1U;
uint32_t t33 = 1U;
int16_t x168 = INT16_MIN;
int16_t x171 = -1;
int8_t x174 = -1;
static volatile uint8_t x176 = UINT8_MAX;
int64_t x180 = INT64_MIN;
int64_t t37 = 155LL;
int64_t x186 = -6243141264LL;
int32_t x187 = INT32_MIN;
volatile uint32_t x190 = 7U;
int32_t t39 = -70677205;
static int32_t x203 = 174338;
int16_t x209 = INT16_MIN;
int8_t x212 = 7;
static volatile int64_t t42 = -64LL;
int64_t x217 = -138020LL;
int32_t t46 = -259309497;
volatile int64_t x229 = INT64_MAX;
uint64_t x244 = 1LLU;
volatile int16_t x247 = 4;
static uint64_t x249 = UINT64_MAX;
int32_t x250 = INT32_MAX;
static uint64_t x265 = 61801407078121LLU;
int32_t x270 = INT32_MIN;
int8_t x274 = 1;
volatile int32_t x277 = INT32_MAX;
static volatile int32_t t61 = 53;
int8_t x297 = -55;
static int64_t x300 = INT64_MIN;
static int64_t t62 = 5341LL;
int16_t x317 = INT16_MIN;
static uint16_t x318 = 9738U;
int32_t t66 = 9285;
volatile int32_t x322 = INT32_MAX;
volatile int64_t t67 = -11244666LL;
static int32_t x331 = -1;
int16_t x339 = INT16_MIN;
static int8_t x342 = -1;
static int32_t x344 = -1;
int16_t x345 = INT16_MIN;
uint8_t x357 = 84U;
uint64_t t75 = 120LLU;
int32_t x361 = -1;
int64_t x362 = INT64_MAX;
int32_t t76 = 7;
static uint32_t x381 = 1499782055U;
uint8_t x382 = 11U;
int64_t x390 = -1LL;
uint8_t x395 = UINT8_MAX;
static int32_t x397 = INT32_MAX;
volatile int64_t x400 = INT64_MIN;
static int64_t t83 = 11634869928475382LL;
uint64_t t84 = 5293576712375LLU;
uint32_t x405 = 1U;
volatile int16_t x408 = INT16_MIN;
int32_t t85 = -502;
static volatile uint64_t x409 = 275992033162916LLU;
uint32_t x412 = 482299U;
int32_t x414 = 15181;
static int64_t x415 = 49165LL;
static int64_t t87 = -1080226907LL;
static int64_t x430 = -788904504531785201LL;
uint32_t x431 = UINT32_MAX;
int16_t x432 = INT16_MIN;
volatile uint32_t t90 = 4U;
int64_t x436 = -1LL;
volatile int64_t t91 = -101860660458542348LL;
int8_t x437 = 4;
static volatile int8_t x447 = INT8_MAX;
volatile uint8_t x448 = 10U;
int64_t x453 = INT64_MIN;
int32_t t95 = 130817;
uint32_t x464 = 0U;
int64_t x467 = 30LL;
volatile uint16_t x474 = 71U;
uint8_t x475 = UINT8_MAX;


void f0(void) {
	static int16_t x1 = 111;
	int64_t x2 = -1LL;
	uint16_t x3 = 181U;
	int16_t x4 = INT16_MAX;
	int32_t t0 = -55905254;

	t0 = (((x1==x2)+x3)+x4);

	if (t0 != 32948) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = 1U;
	volatile uint8_t x6 = 2U;
	volatile int8_t x7 = -1;
	static int32_t t1 = 415674;

	t1 = (((x5==x6)+x7)+x8);

	if (t1 != 74) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 24LL;
	volatile int8_t x10 = 21;
	static uint8_t x12 = 5U;

	t2 = (((x9==x10)+x11)+x12);

	if (t2 != 4111928002252219109LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x14 = INT8_MIN;
	uint64_t x15 = 16388LLU;
	int16_t x16 = 7;
	volatile uint64_t t3 = 125134LLU;

	t3 = (((x13==x14)+x15)+x16);

	if (t3 != 16395LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = INT32_MAX;
	static uint16_t x19 = 111U;
	static int8_t x20 = -1;
	volatile int32_t t4 = -1;

	t4 = (((x17==x18)+x19)+x20);

	if (t4 != 110) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x22 = INT32_MIN;
	int64_t x23 = -7251422LL;
	int32_t x24 = INT32_MIN;
	volatile int64_t t5 = -38235163457105LL;

	t5 = (((x21==x22)+x23)+x24);

	if (t5 != -2154735070LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 2479U;
	static uint32_t x26 = UINT32_MAX;
	volatile int8_t x27 = 2;
	static int16_t x28 = INT16_MAX;

	t6 = (((x25==x26)+x27)+x28);

	if (t6 != 32769) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	int16_t x30 = INT16_MIN;
	static int32_t x31 = -1;
	int16_t x32 = INT16_MAX;
	static int32_t t7 = -73732428;

	t7 = (((x29==x30)+x31)+x32);

	if (t7 != 32766) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	static volatile uint8_t x34 = UINT8_MAX;
	int32_t x36 = -352197582;
	volatile int32_t t8 = -13159;

	t8 = (((x33==x34)+x35)+x36);

	if (t8 != -352197710) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x39 = 8U;
	static int8_t x40 = 0;
	int32_t t9 = 31;

	t9 = (((x37==x38)+x39)+x40);

	if (t9 != 8) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 12;
	volatile int32_t t10 = 115;

	t10 = (((x41==x42)+x43)+x44);

	if (t10 != 32791) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = INT8_MIN;
	int8_t x46 = 0;
	static int8_t x47 = 24;
	int64_t x48 = INT64_MIN;
	static int64_t t11 = -16125493298428LL;

	t11 = (((x45==x46)+x47)+x48);

	if (t11 != -9223372036854775784LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = INT8_MAX;
	static int32_t x50 = -376660803;
	volatile uint8_t x51 = 37U;
	int16_t x52 = INT16_MAX;
	int32_t t12 = -3;

	t12 = (((x49==x50)+x51)+x52);

	if (t12 != 32804) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = 1678806676846LL;
	volatile uint8_t x62 = 3U;
	static volatile int64_t x63 = -1LL;
	int8_t x64 = INT8_MIN;
	int64_t t13 = 1374985103527LL;

	t13 = (((x61==x62)+x63)+x64);

	if (t13 != -129LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = INT16_MIN;
	uint64_t x71 = UINT64_MAX;
	volatile int32_t x72 = -1;
	volatile uint64_t t14 = 81336418407396LLU;

	t14 = (((x69==x70)+x71)+x72);

	if (t14 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x73 = 3589U;
	static volatile uint8_t x74 = UINT8_MAX;
	int16_t x75 = INT16_MAX;
	static int64_t x76 = INT64_MIN;
	int64_t t15 = -176108508600400763LL;

	t15 = (((x73==x74)+x75)+x76);

	if (t15 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x81 = -1;
	int8_t x82 = -1;
	uint64_t x83 = 720LLU;
	volatile int32_t x84 = -1;
	uint64_t t16 = 1742LLU;

	t16 = (((x81==x82)+x83)+x84);

	if (t16 != 720LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x85 = INT16_MIN;
	int64_t x86 = INT64_MIN;
	volatile int32_t x87 = -1537712;
	volatile int32_t t17 = 83;

	t17 = (((x85==x86)+x87)+x88);

	if (t17 != -1537713) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x89 = 6U;
	uint8_t x90 = UINT8_MAX;
	volatile uint64_t x92 = 1LLU;
	volatile uint64_t t18 = 8877458773958207LLU;

	t18 = (((x89==x90)+x91)+x92);

	if (t18 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x94 = 8188LLU;
	int64_t x96 = INT64_MAX;
	int64_t t19 = 17840LL;

	t19 = (((x93==x94)+x95)+x96);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x101 = 14641U;
	int16_t x102 = INT16_MAX;
	uint32_t x104 = 95305184U;
	volatile uint32_t t20 = 75533U;

	t20 = (((x101==x102)+x103)+x104);

	if (t20 != 95337951U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x105 = INT8_MIN;
	int8_t x106 = INT8_MIN;
	int64_t x108 = -1585868579446692LL;
	volatile uint64_t t21 = 15578659951068LLU;

	t21 = (((x105==x106)+x107)+x108);

	if (t21 != 18445158205130104924LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x109 = 386U;
	int64_t x110 = INT64_MAX;
	uint8_t x111 = UINT8_MAX;
	int8_t x112 = -1;
	static int32_t t22 = -1;

	t22 = (((x109==x110)+x111)+x112);

	if (t22 != 254) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x113 = UINT32_MAX;
	static volatile int64_t x115 = -675547761392064426LL;
	volatile int64_t t23 = 1034172524186113LL;

	t23 = (((x113==x114)+x115)+x116);

	if (t23 != -675547761392064554LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x117 = -1;
	static volatile int16_t x118 = -1;
	int64_t x119 = -1LL;
	int64_t x120 = -1LL;
	int64_t t24 = 36621333685LL;

	t24 = (((x117==x118)+x119)+x120);

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x121 = 1122U;
	int32_t x123 = INT32_MIN;
	static int32_t x124 = 1;
	volatile int32_t t25 = -35;

	t25 = (((x121==x122)+x123)+x124);

	if (t25 != -2147483647) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x125 = 28U;
	int64_t x126 = 58835134525LL;
	uint32_t x127 = UINT32_MAX;
	int64_t x128 = INT64_MIN;
	volatile int64_t t26 = -69297500LL;

	t26 = (((x125==x126)+x127)+x128);

	if (t26 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x129 = 15U;
	static int16_t x131 = INT16_MIN;
	static volatile uint8_t x132 = 7U;
	static volatile int32_t t27 = -45676;

	t27 = (((x129==x130)+x131)+x132);

	if (t27 != -32761) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x133 = INT16_MIN;
	uint16_t x135 = 1702U;
	volatile int32_t t28 = 11003152;

	t28 = (((x133==x134)+x135)+x136);

	if (t28 != 1701) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x137 = -1;
	int64_t x138 = -1LL;
	int64_t x139 = 6LL;
	int64_t x140 = -1LL;
	int64_t t29 = -9766547787965681LL;

	t29 = (((x137==x138)+x139)+x140);

	if (t29 != 6LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x142 = 25449LLU;
	int32_t x143 = INT32_MIN;
	int64_t x144 = -1LL;
	volatile int64_t t30 = -3LL;

	t30 = (((x141==x142)+x143)+x144);

	if (t30 != -2147483649LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x145 = INT16_MIN;
	static volatile uint64_t x147 = 63191678074793LLU;
	uint16_t x148 = 6U;
	static volatile uint64_t t31 = 1679775215737LLU;

	t31 = (((x145==x146)+x147)+x148);

	if (t31 != 63191678074799LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x154 = 296;
	static uint16_t x155 = UINT16_MAX;
	volatile int8_t x156 = INT8_MAX;
	int32_t t32 = -1;

	t32 = (((x153==x154)+x155)+x156);

	if (t32 != 65662) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x161 = INT64_MIN;
	volatile uint8_t x162 = 13U;
	static uint32_t x164 = 87109108U;

	t33 = (((x161==x162)+x163)+x164);

	if (t33 != 87109109U) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x165 = -1;
	uint16_t x166 = 11U;
	volatile uint8_t x167 = 1U;
	volatile int32_t t34 = -48808003;

	t34 = (((x165==x166)+x167)+x168);

	if (t34 != -32767) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x169 = 12;
	int16_t x170 = INT16_MIN;
	int8_t x172 = 1;
	int32_t t35 = 1;

	t35 = (((x169==x170)+x171)+x172);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x173 = UINT16_MAX;
	uint8_t x175 = 35U;
	int32_t t36 = -19298575;

	t36 = (((x173==x174)+x175)+x176);

	if (t36 != 290) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x177 = UINT16_MAX;
	static volatile int8_t x178 = INT8_MIN;
	uint8_t x179 = 60U;

	t37 = (((x177==x178)+x179)+x180);

	if (t37 != -9223372036854775748LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x185 = INT32_MIN;
	int16_t x188 = 2;
	volatile int32_t t38 = -5378;

	t38 = (((x185==x186)+x187)+x188);

	if (t38 != -2147483646) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x189 = 38864117U;
	int8_t x191 = INT8_MIN;
	int32_t x192 = -1;

	t39 = (((x189==x190)+x191)+x192);

	if (t39 != -129) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x197 = -267980923LL;
	int16_t x198 = INT16_MAX;
	static int32_t x199 = INT32_MIN;
	static int32_t x200 = INT32_MAX;
	static int32_t t40 = -22979951;

	t40 = (((x197==x198)+x199)+x200);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x201 = 3945;
	static uint8_t x202 = UINT8_MAX;
	static volatile uint32_t x204 = UINT32_MAX;
	volatile uint32_t t41 = 508741U;

	t41 = (((x201==x202)+x203)+x204);

	if (t41 != 174337U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x210 = -1;
	int64_t x211 = -1LL;

	t42 = (((x209==x210)+x211)+x212);

	if (t42 != 6LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x213 = 313217512317682785LLU;
	uint32_t x214 = 60U;
	volatile int8_t x215 = -1;
	static int8_t x216 = INT8_MIN;
	volatile int32_t t43 = 4576845;

	t43 = (((x213==x214)+x215)+x216);

	if (t43 != -129) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x218 = INT8_MIN;
	volatile uint16_t x219 = 2846U;
	volatile int8_t x220 = -2;
	static int32_t t44 = -993;

	t44 = (((x217==x218)+x219)+x220);

	if (t44 != 2844) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x221 = -1LL;
	int32_t x222 = -4;
	static int8_t x223 = INT8_MIN;
	uint8_t x224 = 0U;
	static int32_t t45 = 0;

	t45 = (((x221==x222)+x223)+x224);

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x225 = UINT8_MAX;
	static volatile int8_t x226 = INT8_MIN;
	static int16_t x227 = -1;
	int16_t x228 = -1;

	t46 = (((x225==x226)+x227)+x228);

	if (t46 != -2) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x230 = -1;
	int32_t x231 = 68;
	static int8_t x232 = INT8_MIN;
	int32_t t47 = -14;

	t47 = (((x229==x230)+x231)+x232);

	if (t47 != -60) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x233 = INT32_MIN;
	uint16_t x234 = 6U;
	uint16_t x235 = 371U;
	static uint32_t x236 = UINT32_MAX;
	uint32_t t48 = 5068U;

	t48 = (((x233==x234)+x235)+x236);

	if (t48 != 370U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x237 = 12;
	int8_t x238 = INT8_MAX;
	volatile int32_t x239 = INT32_MIN;
	static uint32_t x240 = 73704423U;
	uint32_t t49 = 189U;

	t49 = (((x237==x238)+x239)+x240);

	if (t49 != 2221188071U) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x241 = INT32_MIN;
	int8_t x242 = INT8_MIN;
	static uint64_t x243 = 172220768261707308LLU;
	volatile uint64_t t50 = 322119637348097803LLU;

	t50 = (((x241==x242)+x243)+x244);

	if (t50 != 172220768261707309LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x245 = 116275LL;
	int16_t x246 = 2692;
	volatile int16_t x248 = -77;
	int32_t t51 = -1;

	t51 = (((x245==x246)+x247)+x248);

	if (t51 != -73) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x251 = 81667971U;
	int64_t x252 = INT64_MIN;
	static volatile int64_t t52 = -112974504790733034LL;

	t52 = (((x249==x250)+x251)+x252);

	if (t52 != -9223372036773107837LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x253 = UINT16_MAX;
	static int32_t x254 = INT32_MIN;
	int64_t x255 = -4189497235LL;
	int8_t x256 = -15;
	static volatile int64_t t53 = 1916LL;

	t53 = (((x253==x254)+x255)+x256);

	if (t53 != -4189497250LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x257 = INT32_MIN;
	static uint32_t x258 = UINT32_MAX;
	volatile int64_t x259 = 9749936512571LL;
	int8_t x260 = INT8_MIN;
	static int64_t t54 = 2098363002LL;

	t54 = (((x257==x258)+x259)+x260);

	if (t54 != 9749936512443LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x266 = INT16_MIN;
	uint32_t x267 = 719U;
	uint32_t x268 = 209U;
	static uint32_t t55 = 1U;

	t55 = (((x265==x266)+x267)+x268);

	if (t55 != 928U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x269 = -1LL;
	int8_t x271 = INT8_MIN;
	static int8_t x272 = INT8_MIN;
	static volatile int32_t t56 = -24;

	t56 = (((x269==x270)+x271)+x272);

	if (t56 != -256) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x273 = INT8_MIN;
	static uint32_t x275 = 58U;
	uint16_t x276 = UINT16_MAX;
	uint32_t t57 = 225330682U;

	t57 = (((x273==x274)+x275)+x276);

	if (t57 != 65593U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x278 = INT16_MAX;
	int64_t x279 = -90956LL;
	int32_t x280 = 8193255;
	int64_t t58 = 5970161LL;

	t58 = (((x277==x278)+x279)+x280);

	if (t58 != 8102299LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x281 = 244U;
	int16_t x282 = 1;
	int64_t x283 = INT64_MAX;
	int8_t x284 = INT8_MIN;
	volatile int64_t t59 = -23045157543117LL;

	t59 = (((x281==x282)+x283)+x284);

	if (t59 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x285 = -35;
	int32_t x286 = INT32_MIN;
	uint32_t x287 = UINT32_MAX;
	static int32_t x288 = 44;
	volatile uint32_t t60 = 55U;

	t60 = (((x285==x286)+x287)+x288);

	if (t60 != 43U) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x293 = 210510388U;
	volatile int8_t x294 = INT8_MAX;
	int16_t x295 = INT16_MIN;
	int8_t x296 = INT8_MAX;

	t61 = (((x293==x294)+x295)+x296);

	if (t61 != -32641) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x298 = 3U;
	volatile int64_t x299 = 8203947493686LL;

	t62 = (((x297==x298)+x299)+x300);

	if (t62 != -9223363832907282122LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x305 = -21;
	static int32_t x306 = INT32_MIN;
	int16_t x307 = 1;
	int32_t x308 = -6587;
	int32_t t63 = 3440120;

	t63 = (((x305==x306)+x307)+x308);

	if (t63 != -6586) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x309 = INT32_MIN;
	volatile int32_t x310 = -588048;
	uint32_t x311 = 13525309U;
	uint64_t x312 = UINT64_MAX;
	uint64_t t64 = 29391972LLU;

	t64 = (((x309==x310)+x311)+x312);

	if (t64 != 13525308LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x313 = -1;
	int8_t x314 = INT8_MIN;
	int16_t x315 = -1;
	int16_t x316 = 59;
	int32_t t65 = 81813804;

	t65 = (((x313==x314)+x315)+x316);

	if (t65 != 58) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x319 = INT16_MIN;
	uint16_t x320 = 0U;

	t66 = (((x317==x318)+x319)+x320);

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x321 = -10753;
	int64_t x323 = -1LL;
	static int64_t x324 = INT64_MAX;

	t67 = (((x321==x322)+x323)+x324);

	if (t67 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x325 = -1;
	int16_t x326 = -13642;
	static uint16_t x327 = UINT16_MAX;
	volatile int64_t x328 = INT64_MIN;
	volatile int64_t t68 = -6005965LL;

	t68 = (((x325==x326)+x327)+x328);

	if (t68 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x329 = UINT16_MAX;
	uint32_t x330 = 0U;
	int8_t x332 = INT8_MAX;
	int32_t t69 = 40473;

	t69 = (((x329==x330)+x331)+x332);

	if (t69 != 126) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x333 = INT32_MIN;
	static int64_t x334 = INT64_MIN;
	int64_t x335 = -1LL;
	int64_t x336 = 6LL;
	int64_t t70 = 8008986492LL;

	t70 = (((x333==x334)+x335)+x336);

	if (t70 != 5LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x337 = 1058U;
	volatile int32_t x338 = INT32_MAX;
	static int8_t x340 = INT8_MIN;
	static volatile int32_t t71 = 0;

	t71 = (((x337==x338)+x339)+x340);

	if (t71 != -32896) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x341 = 229711901LLU;
	uint8_t x343 = 0U;
	int32_t t72 = 0;

	t72 = (((x341==x342)+x343)+x344);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x346 = 28739U;
	static volatile uint64_t x347 = 529338136885705LLU;
	static uint16_t x348 = 0U;
	volatile uint64_t t73 = 124366617553568LLU;

	t73 = (((x345==x346)+x347)+x348);

	if (t73 != 529338136885705LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x349 = INT64_MIN;
	int64_t x350 = INT64_MAX;
	volatile uint64_t x351 = UINT64_MAX;
	static uint16_t x352 = 21576U;
	uint64_t t74 = 179613280117LLU;

	t74 = (((x349==x350)+x351)+x352);

	if (t74 != 21575LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x358 = INT32_MIN;
	uint16_t x359 = UINT16_MAX;
	uint64_t x360 = 30574253917656LLU;

	t75 = (((x357==x358)+x359)+x360);

	if (t75 != 30574253983191LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x363 = 470617655;
	volatile int32_t x364 = -1040;

	t76 = (((x361==x362)+x363)+x364);

	if (t76 != 470616615) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x365 = 5042;
	int8_t x366 = 30;
	uint64_t x367 = 1115600LLU;
	uint8_t x368 = UINT8_MAX;
	volatile uint64_t t77 = 37635006018416LLU;

	t77 = (((x365==x366)+x367)+x368);

	if (t77 != 1115855LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x369 = UINT32_MAX;
	static int16_t x370 = -116;
	int16_t x371 = INT16_MIN;
	int16_t x372 = INT16_MAX;
	int32_t t78 = -14000680;

	t78 = (((x369==x370)+x371)+x372);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x377 = 3U;
	static int16_t x378 = INT16_MIN;
	static volatile int32_t x379 = 422924;
	static volatile int32_t x380 = INT32_MIN;
	int32_t t79 = 10897804;

	t79 = (((x377==x378)+x379)+x380);

	if (t79 != -2147060724) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x383 = INT64_MIN;
	int32_t x384 = INT32_MAX;
	int64_t t80 = 187095509280LL;

	t80 = (((x381==x382)+x383)+x384);

	if (t80 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x389 = 1LL;
	uint32_t x391 = 3902534U;
	int32_t x392 = INT32_MIN;
	static volatile uint32_t t81 = 6U;

	t81 = (((x389==x390)+x391)+x392);

	if (t81 != 2151386182U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x393 = INT32_MAX;
	static volatile int16_t x394 = INT16_MAX;
	static volatile int32_t x396 = -1854534;
	volatile int32_t t82 = -1;

	t82 = (((x393==x394)+x395)+x396);

	if (t82 != -1854279) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x398 = INT32_MIN;
	int32_t x399 = 248706941;

	t83 = (((x397==x398)+x399)+x400);

	if (t83 != -9223372036606068867LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x401 = 24;
	int32_t x402 = INT32_MIN;
	uint16_t x403 = UINT16_MAX;
	uint64_t x404 = UINT64_MAX;

	t84 = (((x401==x402)+x403)+x404);

	if (t84 != 65534LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x406 = 34U;
	uint16_t x407 = UINT16_MAX;

	t85 = (((x405==x406)+x407)+x408);

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x410 = UINT16_MAX;
	uint16_t x411 = 17572U;
	volatile uint32_t t86 = 13855429U;

	t86 = (((x409==x410)+x411)+x412);

	if (t86 != 499871U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x413 = 10471265389220241LLU;
	uint16_t x416 = 164U;

	t87 = (((x413==x414)+x415)+x416);

	if (t87 != 49329LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x421 = UINT64_MAX;
	volatile int16_t x422 = -1;
	static int64_t x423 = -113992092007566LL;
	uint32_t x424 = UINT32_MAX;
	volatile int64_t t88 = -20LL;

	t88 = (((x421==x422)+x423)+x424);

	if (t88 != -113987797040270LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x425 = INT8_MAX;
	volatile int32_t x426 = INT32_MAX;
	uint32_t x427 = 1052U;
	int32_t x428 = INT32_MIN;
	volatile uint32_t t89 = 31U;

	t89 = (((x425==x426)+x427)+x428);

	if (t89 != 2147484700U) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x429 = 10;

	t90 = (((x429==x430)+x431)+x432);

	if (t90 != 4294934527U) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x433 = INT16_MIN;
	volatile int64_t x434 = -1LL;
	uint32_t x435 = UINT32_MAX;

	t91 = (((x433==x434)+x435)+x436);

	if (t91 != 4294967294LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x438 = 0;
	volatile int32_t x439 = -4;
	int64_t x440 = 109867071LL;
	static volatile int64_t t92 = 1517LL;

	t92 = (((x437==x438)+x439)+x440);

	if (t92 != 109867067LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x441 = 1U;
	int8_t x442 = INT8_MIN;
	static uint64_t x443 = 256282531LLU;
	volatile int32_t x444 = -2;
	volatile uint64_t t93 = 1020579LLU;

	t93 = (((x441==x442)+x443)+x444);

	if (t93 != 256282529LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x445 = INT32_MIN;
	static int8_t x446 = INT8_MIN;
	int32_t t94 = 6834008;

	t94 = (((x445==x446)+x447)+x448);

	if (t94 != 137) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x454 = -1LL;
	int16_t x455 = INT16_MIN;
	int32_t x456 = 1;

	t95 = (((x453==x454)+x455)+x456);

	if (t95 != -32767) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x461 = 488;
	uint32_t x462 = 2384U;
	int8_t x463 = INT8_MIN;
	uint32_t t96 = 4335329U;

	t96 = (((x461==x462)+x463)+x464);

	if (t96 != 4294967168U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x465 = 37995254U;
	uint16_t x466 = UINT16_MAX;
	uint8_t x468 = 21U;
	volatile int64_t t97 = 18494747188243LL;

	t97 = (((x465==x466)+x467)+x468);

	if (t97 != 51LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x473 = INT8_MIN;
	static volatile uint32_t x476 = 687793U;
	volatile uint32_t t98 = 391146U;

	t98 = (((x473==x474)+x475)+x476);

	if (t98 != 688048U) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x477 = -1;
	volatile int64_t x478 = -3387313811556227663LL;
	int16_t x479 = INT16_MAX;
	int32_t x480 = 198;
	volatile int32_t t99 = 3;

	t99 = (((x477==x478)+x479)+x480);

	if (t99 != 32965) { NG(); } else { ; }
	
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

