#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
uint64_t t1 = 280LLU;
int8_t x19 = -5;
volatile int64_t t3 = -2608155329973LL;
uint8_t x27 = UINT8_MAX;
volatile int32_t t5 = -8786;
volatile uint32_t t6 = 590415916U;
static int16_t x37 = INT16_MIN;
uint32_t x47 = 20U;
int64_t t9 = -8664056LL;
static volatile uint64_t t10 = 1779LLU;
int64_t x61 = INT64_MIN;
static volatile int16_t x64 = 3499;
volatile int32_t t12 = 15858275;
int64_t x73 = INT64_MIN;
int8_t x74 = 9;
volatile int16_t x80 = INT16_MAX;
static int16_t x94 = -1;
volatile int64_t x95 = INT64_MAX;
volatile int64_t t16 = 891831006797LL;
uint8_t x97 = UINT8_MAX;
int64_t t18 = -118440896303159LL;
volatile int64_t t19 = -15122713LL;
int8_t x117 = INT8_MIN;
volatile int8_t x120 = INT8_MIN;
uint64_t t21 = 295967441244640LLU;
int64_t t22 = 17811739609LL;
volatile uint64_t t23 = 37129LLU;
volatile int64_t x151 = INT64_MAX;
int16_t x152 = INT16_MAX;
uint64_t t28 = 0LLU;
int64_t t29 = -44677LL;
volatile int32_t x160 = -27481;
volatile int64_t t30 = 167069816815LL;
uint64_t x162 = 120LLU;
uint64_t t31 = 4227083008LLU;
uint32_t x167 = UINT32_MAX;
volatile uint16_t x168 = UINT16_MAX;
volatile int64_t x175 = -1146562302255653395LL;
volatile int64_t x180 = -229600LL;
uint64_t t36 = 4835799LLU;
static uint64_t x190 = 63785LLU;
static volatile int32_t x208 = INT32_MAX;
uint8_t x217 = UINT8_MAX;
volatile uint32_t t43 = 96095783U;
static volatile uint16_t x227 = 573U;
int32_t t45 = 0;
uint16_t x231 = 3U;
int32_t x238 = -1;
int32_t x239 = -1;
int32_t x243 = -64106;
int32_t t48 = 6;
int16_t x245 = INT16_MAX;
uint8_t x246 = UINT8_MAX;
static volatile uint32_t t51 = 457323036U;
static volatile int64_t t52 = -167521LL;
static volatile int32_t x265 = -400;
uint16_t x266 = UINT16_MAX;
int32_t x269 = -1;
int8_t x273 = INT8_MIN;
int16_t x275 = 7864;
static int64_t x277 = INT64_MIN;
static volatile uint32_t x282 = 13271U;
static int64_t x303 = -227668686771440308LL;
int64_t x304 = INT64_MAX;
int16_t x305 = 14427;
int64_t x307 = 20065103803221LL;
int8_t x328 = INT8_MAX;
uint64_t t66 = 90706896384LLU;
int64_t x333 = INT64_MAX;
int64_t x334 = -1LL;
int8_t x346 = INT8_MIN;
int32_t x348 = INT32_MIN;
static uint8_t x353 = 3U;
int32_t x355 = INT32_MAX;
static int8_t x356 = INT8_MAX;
int32_t t72 = 58575;
uint64_t x362 = 12506765663275LLU;
volatile uint64_t t73 = 20906850571334LLU;
volatile uint32_t x375 = UINT32_MAX;
int32_t x376 = -31;
volatile int64_t x385 = -1LL;
int16_t x392 = -1;
uint32_t t79 = 45540033U;
volatile int32_t x396 = 1;
int16_t x399 = INT16_MAX;
volatile uint64_t x403 = 29482094119LLU;
uint16_t x405 = 2U;
uint16_t x411 = UINT16_MAX;
int32_t t84 = 73019790;
uint64_t t85 = 25LLU;
uint16_t x417 = 10U;
volatile int64_t t87 = 3133108368017316695LL;
uint16_t x434 = 1354U;
volatile int8_t x435 = INT8_MIN;
volatile int16_t x437 = INT16_MIN;
int8_t x440 = INT8_MIN;
uint32_t x451 = 167563U;
static int64_t x457 = INT64_MIN;
int16_t x461 = 7;
uint64_t t96 = 235215091154LLU;
int8_t x468 = INT8_MIN;
volatile uint64_t t97 = 13LLU;
int64_t x474 = 4LL;
uint64_t x475 = UINT64_MAX;
int64_t x476 = -1LL;
volatile uint64_t t99 = 2295LLU;


void f0(void) {
	static volatile uint8_t x1 = 5U;
	int64_t x3 = -1LL;
	uint16_t x4 = UINT16_MAX;
	int64_t t0 = -80067756628273LL;

	t0 = ((x1|(x2-x3))+x4);

	if (t0 != 65412LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MAX;
	int8_t x10 = INT8_MAX;
	volatile uint64_t x11 = UINT64_MAX;
	int32_t x12 = INT32_MIN;

	t1 = ((x9|(x10-x11))+x12);

	if (t1 != 18446744071562100735LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = -41244359941LL;
	volatile uint64_t x18 = 23990415234659LLU;
	uint8_t x20 = 8U;
	static uint64_t t2 = 10071754078307887LLU;

	t2 = ((x17|(x18-x19))+x20);

	if (t2 != 18446744039176640259LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = INT16_MIN;
	int64_t x22 = INT64_MAX;
	static volatile int8_t x23 = 30;
	int32_t x24 = 15532;

	t3 = ((x21|(x22-x23))+x24);

	if (t3 != 15501LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x25 = UINT8_MAX;
	int32_t x26 = -4242706;
	int16_t x28 = INT16_MIN;
	volatile int32_t t4 = -350733;

	t4 = ((x25|(x26-x27))+x28);

	if (t4 != -4275713) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = -3;
	volatile int8_t x30 = -1;
	int32_t x31 = -1936555;
	static uint8_t x32 = 0U;

	t5 = ((x29|(x30-x31))+x32);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint16_t x33 = 34U;
	volatile int8_t x34 = 52;
	uint8_t x35 = 70U;
	uint32_t x36 = 379127U;

	t6 = ((x33|(x34-x35))+x36);

	if (t6 != 379109U) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x38 = 1;
	int8_t x39 = -1;
	volatile int16_t x40 = INT16_MAX;
	int32_t t7 = 642;

	t7 = ((x37|(x38-x39))+x40);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint64_t x45 = 6018535LLU;
	static volatile int32_t x46 = INT32_MIN;
	volatile int32_t x48 = INT32_MIN;
	uint64_t t8 = 27041LLU;

	t8 = ((x45|(x46-x47))+x48);

	if (t8 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x53 = INT16_MIN;
	volatile int64_t x54 = 132872629056241992LL;
	int8_t x55 = 1;
	int16_t x56 = INT16_MIN;

	t9 = ((x53|(x54-x55))+x56);

	if (t9 != -65209LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x57 = 1U;
	uint64_t x58 = 14535765193179251LLU;
	volatile int64_t x59 = INT64_MIN;
	uint8_t x60 = 2U;

	t10 = ((x57|(x58-x59))+x60);

	if (t10 != 9237907802047955061LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x62 = -7;
	volatile uint32_t x63 = UINT32_MAX;
	volatile int64_t t11 = -26820LL;

	t11 = ((x61|(x62-x63))+x64);

	if (t11 != -9223372032559805019LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x65 = 1;
	uint8_t x66 = UINT8_MAX;
	volatile int8_t x67 = -36;
	uint16_t x68 = 378U;

	t12 = ((x65|(x66-x67))+x68);

	if (t12 != 669) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x75 = 34U;
	volatile int16_t x76 = INT16_MAX;
	volatile int64_t t13 = 2340971LL;

	t13 = ((x73|(x74-x75))+x76);

	if (t13 != 32742LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x77 = 32539989163381LLU;
	volatile int8_t x78 = -1;
	int64_t x79 = INT64_MAX;
	uint64_t t14 = 715366461703632LLU;

	t14 = ((x77|(x78-x79))+x80);

	if (t14 != 9223404576843971956LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x85 = INT64_MIN;
	int32_t x86 = INT32_MAX;
	int64_t x87 = 24680297972644LL;
	int16_t x88 = INT16_MIN;
	int64_t t15 = -4882LL;

	t15 = ((x85|(x86-x87))+x88);

	if (t15 != -24678150521765LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x93 = INT8_MIN;
	int32_t x96 = 90404989;

	t16 = ((x93|(x94-x95))+x96);

	if (t16 != 90404861LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x98 = -1LL;
	int32_t x99 = -1;
	static volatile int32_t x100 = -1;
	volatile int64_t t17 = -219255LL;

	t17 = ((x97|(x98-x99))+x100);

	if (t17 != 254LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x101 = INT64_MIN;
	int32_t x102 = INT32_MAX;
	static volatile int32_t x103 = 23;
	int32_t x104 = 75;

	t18 = ((x101|(x102-x103))+x104);

	if (t18 != -9223372034707292109LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x109 = -1LL;
	int32_t x110 = 453390363;
	static volatile int16_t x111 = INT16_MIN;
	int16_t x112 = INT16_MIN;

	t19 = ((x109|(x110-x111))+x112);

	if (t19 != -32769LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x113 = -2;
	uint8_t x114 = UINT8_MAX;
	int32_t x115 = 19;
	volatile int16_t x116 = INT16_MIN;
	volatile int32_t t20 = -1601;

	t20 = ((x113|(x114-x115))+x116);

	if (t20 != -32770) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x118 = UINT64_MAX;
	int64_t x119 = 41LL;

	t21 = ((x117|(x118-x119))+x120);

	if (t21 != 18446744073709551446LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x121 = -1;
	volatile int64_t x122 = INT64_MIN;
	static int8_t x123 = INT8_MIN;
	int32_t x124 = -1;

	t22 = ((x121|(x122-x123))+x124);

	if (t22 != -2LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x125 = UINT64_MAX;
	static int32_t x126 = -52;
	int64_t x127 = -255673316349175LL;
	int16_t x128 = 25;

	t23 = ((x125|(x126-x127))+x128);

	if (t23 != 24LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x129 = 2643585U;
	static uint16_t x130 = 394U;
	int16_t x131 = 809;
	int64_t x132 = INT64_MIN;
	volatile int64_t t24 = 107LL;

	t24 = ((x129|(x130-x131))+x132);

	if (t24 != -9223372032559808799LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x133 = 33738803;
	uint16_t x134 = 8376U;
	volatile int32_t x135 = -11358943;
	static uint32_t x136 = 22U;
	volatile uint32_t t25 = 5957U;

	t25 = ((x133|(x134-x135))+x136);

	if (t25 != 45085645U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x137 = INT16_MIN;
	int32_t x138 = INT32_MIN;
	volatile uint64_t x139 = 153LLU;
	uint32_t x140 = UINT32_MAX;
	volatile uint64_t t26 = 110937957124LLU;

	t26 = ((x137|(x138-x139))+x140);

	if (t26 != 4294967142LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x145 = -12;
	static int32_t x146 = 10325192;
	static int8_t x147 = 0;
	uint16_t x148 = 4U;
	int32_t t27 = 439754262;

	t27 = ((x145|(x146-x147))+x148);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x149 = 0U;
	static uint64_t x150 = UINT64_MAX;

	t28 = ((x149|(x150-x151))+x152);

	if (t28 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x153 = INT64_MIN;
	static int16_t x154 = -9;
	volatile int16_t x155 = INT16_MIN;
	int64_t x156 = -1LL;

	t29 = ((x153|(x154-x155))+x156);

	if (t29 != -9223372036854743050LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x157 = INT16_MAX;
	int32_t x158 = -22404297;
	int64_t x159 = INT64_MIN;

	t30 = ((x157|(x158-x159))+x160);

	if (t30 != 9223372036832367782LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x161 = -41712046;
	int16_t x163 = -1;
	int64_t x164 = 2082LL;

	t31 = ((x161|(x162-x163))+x164);

	if (t31 != 18446744073667841693LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x165 = 102698654926LL;
	volatile uint8_t x166 = 0U;
	volatile int64_t t32 = 63820LL;

	t32 = ((x165|(x166-x167))+x168);

	if (t32 != 102698720462LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x169 = UINT32_MAX;
	static int64_t x170 = -5LL;
	int16_t x171 = -1;
	int8_t x172 = INT8_MIN;
	static volatile int64_t t33 = -445LL;

	t33 = ((x169|(x170-x171))+x172);

	if (t33 != -129LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x173 = 5U;
	static int64_t x174 = INT64_MIN;
	int8_t x176 = INT8_MIN;
	volatile int64_t t34 = 11746910584524LL;

	t34 = ((x173|(x174-x175))+x176);

	if (t34 != -8076809734599122537LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x177 = 2U;
	int8_t x178 = 1;
	int64_t x179 = -1LL;
	static int64_t t35 = 6222LL;

	t35 = ((x177|(x178-x179))+x180);

	if (t35 != -229598LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x181 = 1;
	uint64_t x182 = UINT64_MAX;
	int16_t x183 = -1;
	uint8_t x184 = 14U;

	t36 = ((x181|(x182-x183))+x184);

	if (t36 != 15LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x185 = -1LL;
	int32_t x186 = 0;
	volatile int16_t x187 = INT16_MIN;
	volatile int32_t x188 = INT32_MAX;
	volatile int64_t t37 = 3608424589793LL;

	t37 = ((x185|(x186-x187))+x188);

	if (t37 != 2147483646LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x189 = -1;
	static volatile int8_t x191 = INT8_MIN;
	int8_t x192 = INT8_MAX;
	uint64_t t38 = 2107409333530LLU;

	t38 = ((x189|(x190-x191))+x192);

	if (t38 != 126LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x193 = INT32_MAX;
	volatile int32_t x194 = -1;
	int8_t x195 = INT8_MAX;
	volatile int16_t x196 = INT16_MIN;
	static volatile int32_t t39 = 1;

	t39 = ((x193|(x194-x195))+x196);

	if (t39 != -32769) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x197 = -101;
	volatile uint16_t x198 = UINT16_MAX;
	static int16_t x199 = -232;
	uint8_t x200 = 1U;
	volatile int32_t t40 = 96745956;

	t40 = ((x197|(x198-x199))+x200);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x205 = 8915488LLU;
	static uint64_t x206 = 2840135184553638497LLU;
	volatile int32_t x207 = INT32_MAX;
	static volatile uint64_t t41 = 3LLU;

	t41 = ((x205|(x206-x207))+x208);

	if (t41 != 2840135184562027105LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x209 = -1;
	int8_t x210 = INT8_MIN;
	volatile int16_t x211 = 0;
	uint8_t x212 = 43U;
	int32_t t42 = -428175544;

	t42 = ((x209|(x210-x211))+x212);

	if (t42 != 42) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x218 = 273555482;
	static volatile int8_t x219 = 0;
	uint32_t x220 = UINT32_MAX;

	t43 = ((x217|(x218-x219))+x220);

	if (t43 != 273555710U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x221 = -1LL;
	uint32_t x222 = 7U;
	int32_t x223 = 20440797;
	static int16_t x224 = INT16_MIN;
	int64_t t44 = -22266639LL;

	t44 = ((x221|(x222-x223))+x224);

	if (t44 != -32769LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x225 = -1;
	int16_t x226 = -89;
	static volatile int32_t x228 = -1;

	t45 = ((x225|(x226-x227))+x228);

	if (t45 != -2) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x229 = 4U;
	int64_t x230 = 61909624270376LL;
	uint16_t x232 = UINT16_MAX;
	static int64_t t46 = -14767744003650LL;

	t46 = ((x229|(x230-x231))+x232);

	if (t46 != 61909624335908LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x237 = INT64_MAX;
	static int32_t x240 = -89934;
	int64_t t47 = -1462343988LL;

	t47 = ((x237|(x238-x239))+x240);

	if (t47 != 9223372036854685873LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x241 = UINT16_MAX;
	int32_t x242 = 435817130;
	int8_t x244 = -1;

	t48 = ((x241|(x242-x243))+x244);

	if (t48 != 435945470) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x247 = 482555785LLU;
	int32_t x248 = -1;
	volatile uint64_t t49 = 247608778611449LLU;

	t49 = ((x245|(x246-x247))+x248);

	if (t49 != 18446744073227010046LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x249 = UINT32_MAX;
	int8_t x250 = INT8_MIN;
	int16_t x251 = INT16_MIN;
	uint16_t x252 = UINT16_MAX;
	volatile uint32_t t50 = 330835U;

	t50 = ((x249|(x250-x251))+x252);

	if (t50 != 65534U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x253 = 21240U;
	int16_t x254 = -1;
	uint32_t x255 = UINT32_MAX;
	uint8_t x256 = 1U;

	t51 = ((x253|(x254-x255))+x256);

	if (t51 != 21241U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x257 = INT32_MIN;
	volatile int16_t x258 = -1;
	static volatile int16_t x259 = INT16_MAX;
	static int64_t x260 = -1LL;

	t52 = ((x257|(x258-x259))+x260);

	if (t52 != -32769LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x267 = 31892552LLU;
	int16_t x268 = INT16_MAX;
	uint64_t t53 = 7782155530714LLU;

	t53 = ((x265|(x266-x267))+x268);

	if (t53 != 32758LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x270 = 1LL;
	int16_t x271 = INT16_MAX;
	static int8_t x272 = -3;
	int64_t t54 = 1731230187829LL;

	t54 = ((x269|(x270-x271))+x272);

	if (t54 != -4LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x274 = INT8_MIN;
	static uint8_t x276 = UINT8_MAX;
	static int32_t t55 = 45;

	t55 = ((x273|(x274-x275))+x276);

	if (t55 != 199) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x278 = UINT64_MAX;
	static volatile int16_t x279 = INT16_MAX;
	int32_t x280 = INT32_MAX;
	volatile uint64_t t56 = 27095LLU;

	t56 = ((x277|(x278-x279))+x280);

	if (t56 != 2147450879LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x281 = 44706125;
	static uint16_t x283 = 31U;
	static volatile int16_t x284 = INT16_MAX;
	volatile uint32_t t57 = 1U;

	t57 = ((x281|(x282-x283))+x284);

	if (t57 != 44743676U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x289 = UINT8_MAX;
	uint16_t x290 = 1U;
	volatile int8_t x291 = 1;
	int8_t x292 = -1;
	volatile int32_t t58 = 218907;

	t58 = ((x289|(x290-x291))+x292);

	if (t58 != 254) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x297 = -1LL;
	uint8_t x298 = UINT8_MAX;
	int32_t x299 = -1;
	int64_t x300 = -111554034808715LL;
	volatile int64_t t59 = -4863048266LL;

	t59 = ((x297|(x298-x299))+x300);

	if (t59 != -111554034808716LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x301 = INT64_MIN;
	int32_t x302 = -1;
	int64_t t60 = 77306599LL;

	t60 = ((x301|(x302-x303))+x304);

	if (t60 != 227668686771440306LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x306 = 70U;
	int8_t x308 = INT8_MIN;
	int64_t t61 = -16958769LL;

	t61 = ((x305|(x306-x307))+x308);

	if (t61 != -20065103790981LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x313 = INT8_MIN;
	int16_t x314 = INT16_MAX;
	uint32_t x315 = 7U;
	int16_t x316 = -12340;
	uint32_t t62 = 0U;

	t62 = ((x313|(x314-x315))+x316);

	if (t62 != 4294954948U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x317 = -1;
	int64_t x318 = 191074920867681156LL;
	static int8_t x319 = INT8_MAX;
	int8_t x320 = 0;
	volatile int64_t t63 = 895273574209LL;

	t63 = ((x317|(x318-x319))+x320);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x321 = INT64_MIN;
	uint32_t x322 = 1670U;
	static uint8_t x323 = UINT8_MAX;
	uint8_t x324 = 3U;
	static volatile int64_t t64 = -15LL;

	t64 = ((x321|(x322-x323))+x324);

	if (t64 != -9223372036854774390LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x325 = -384922181053354LL;
	volatile int32_t x326 = INT32_MIN;
	int8_t x327 = -2;
	int64_t t65 = -243718597325LL;

	t65 = ((x325|(x326-x327))+x328);

	if (t65 != -769534763LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x329 = 50243559U;
	static uint64_t x330 = 0LLU;
	int16_t x331 = 1;
	int64_t x332 = INT64_MAX;

	t66 = ((x329|(x330-x331))+x332);

	if (t66 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x335 = 31U;
	int8_t x336 = INT8_MIN;
	int64_t t67 = -12904896044349LL;

	t67 = ((x333|(x334-x335))+x336);

	if (t67 != -129LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x337 = INT16_MIN;
	uint16_t x338 = UINT16_MAX;
	static uint16_t x339 = 0U;
	static volatile int64_t x340 = -47932LL;
	int64_t t68 = -557792LL;

	t68 = ((x337|(x338-x339))+x340);

	if (t68 != -47933LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x341 = 15665;
	uint64_t x342 = 145LLU;
	int64_t x343 = -1LL;
	int16_t x344 = INT16_MIN;
	uint64_t t69 = 851307LLU;

	t69 = ((x341|(x342-x343))+x344);

	if (t69 != 18446744073709534643LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x345 = INT32_MAX;
	uint64_t x347 = 55LLU;
	static volatile uint64_t t70 = 24LLU;

	t70 = ((x345|(x346-x347))+x348);

	if (t70 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x354 = -1;
	static int32_t t71 = 10827233;

	t71 = ((x353|(x354-x355))+x356);

	if (t71 != -2147483518) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x357 = INT32_MIN;
	int16_t x358 = INT16_MIN;
	volatile uint16_t x359 = UINT16_MAX;
	int8_t x360 = 6;

	t72 = ((x357|(x358-x359))+x360);

	if (t72 != -98297) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x361 = 105191052539083LLU;
	int64_t x363 = INT64_MIN;
	static uint16_t x364 = 980U;

	t73 = ((x361|(x362-x363))+x364);

	if (t73 != 9223477589825552575LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x365 = INT8_MAX;
	volatile int32_t x366 = -1;
	uint32_t x367 = 14256U;
	static int16_t x368 = -1;
	static uint32_t t74 = 78202147U;

	t74 = ((x365|(x366-x367))+x368);

	if (t74 != 4294953086U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x369 = 10444874369033212LLU;
	uint64_t x370 = 712247264371655450LLU;
	int16_t x371 = INT16_MIN;
	static int16_t x372 = -1;
	volatile uint64_t t75 = 4059296815LLU;

	t75 = ((x369|(x370-x371))+x372);

	if (t75 != 713674992339870717LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x373 = 1;
	volatile int64_t x374 = -509508393LL;
	static volatile int64_t t76 = 167257575000429127LL;

	t76 = ((x373|(x374-x375))+x376);

	if (t76 != -4804475718LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x377 = 7U;
	int64_t x378 = 21604LL;
	static uint32_t x379 = UINT32_MAX;
	int8_t x380 = -1;
	int64_t t77 = -11826058LL;

	t77 = ((x377|(x378-x379))+x380);

	if (t77 != -4294945690LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x386 = INT16_MIN;
	int64_t x387 = -1LL;
	int8_t x388 = INT8_MIN;
	static volatile int64_t t78 = -3507137506194LL;

	t78 = ((x385|(x386-x387))+x388);

	if (t78 != -129LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x389 = INT16_MIN;
	int8_t x390 = INT8_MAX;
	static uint32_t x391 = UINT32_MAX;

	t79 = ((x389|(x390-x391))+x392);

	if (t79 != 4294934655U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x393 = -91292389;
	static int64_t x394 = -381952LL;
	volatile int16_t x395 = -1;
	volatile int64_t t80 = -219375339185LL;

	t80 = ((x393|(x394-x395))+x396);

	if (t80 != -66276LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x397 = -1;
	static uint32_t x398 = UINT32_MAX;
	int32_t x400 = INT32_MAX;
	volatile uint32_t t81 = 9U;

	t81 = ((x397|(x398-x399))+x400);

	if (t81 != 2147483646U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x401 = INT32_MAX;
	int16_t x402 = INT16_MIN;
	int32_t x404 = INT32_MAX;
	static uint64_t t82 = 4087LLU;

	t82 = ((x401|(x402-x403))+x404);

	if (t82 != 18446744047939747838LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x406 = INT8_MIN;
	uint32_t x407 = UINT32_MAX;
	int32_t x408 = -7;
	volatile uint32_t t83 = 415164312U;

	t83 = ((x405|(x406-x407))+x408);

	if (t83 != 4294967164U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x409 = 0U;
	static int32_t x410 = 56;
	volatile int8_t x412 = -50;

	t84 = ((x409|(x410-x411))+x412);

	if (t84 != -65529) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x413 = 2LLU;
	int8_t x414 = 1;
	static int16_t x415 = INT16_MIN;
	uint8_t x416 = 7U;

	t85 = ((x413|(x414-x415))+x416);

	if (t85 != 32778LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x418 = 95962085;
	uint32_t x419 = 266303691U;
	int64_t x420 = 16065058LL;
	volatile int64_t t86 = 32673838171753LL;

	t86 = ((x417|(x418-x419))+x420);

	if (t86 != 4140690748LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x421 = 6;
	int16_t x422 = INT16_MIN;
	int64_t x423 = 0LL;
	int16_t x424 = INT16_MIN;

	t87 = ((x421|(x422-x423))+x424);

	if (t87 != -65530LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x425 = 21;
	volatile int8_t x426 = -1;
	int64_t x427 = -211383470LL;
	int8_t x428 = -1;
	int64_t t88 = 3727LL;

	t88 = ((x425|(x426-x427))+x428);

	if (t88 != 211383484LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x429 = 1U;
	int32_t x430 = 66157680;
	static uint16_t x431 = UINT16_MAX;
	uint16_t x432 = 0U;
	int32_t t89 = 0;

	t89 = ((x429|(x430-x431))+x432);

	if (t89 != 66092145) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x433 = 226471;
	int8_t x436 = INT8_MIN;
	volatile int32_t t90 = 390;

	t90 = ((x433|(x434-x435))+x436);

	if (t90 != 226671) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x438 = INT8_MAX;
	static uint8_t x439 = UINT8_MAX;
	int32_t t91 = 0;

	t91 = ((x437|(x438-x439))+x440);

	if (t91 != -256) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x441 = -232;
	volatile int16_t x442 = INT16_MIN;
	int16_t x443 = INT16_MIN;
	int16_t x444 = -1549;
	int32_t t92 = -35;

	t92 = ((x441|(x442-x443))+x444);

	if (t92 != -1781) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x445 = UINT32_MAX;
	static int32_t x446 = -1;
	int16_t x447 = INT16_MAX;
	static int64_t x448 = INT64_MIN;
	int64_t t93 = -43192543030LL;

	t93 = ((x445|(x446-x447))+x448);

	if (t93 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x449 = 401975126LL;
	static int64_t x450 = INT64_MAX;
	int8_t x452 = INT8_MAX;
	static int64_t t94 = 7LL;

	t94 = ((x449|(x450-x451))+x452);

	if (t94 != 9223372036854642677LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x458 = -1LL;
	static int32_t x459 = -1;
	static volatile int32_t x460 = 0;
	static volatile int64_t t95 = INT64_MIN;

	t95 = ((x457|(x458-x459))+x460);

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x462 = -1;
	int8_t x463 = -8;
	uint64_t x464 = UINT64_MAX;

	t96 = ((x461|(x462-x463))+x464);

	if (t96 != 6LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x465 = -1;
	static uint64_t x466 = 431416651LLU;
	static uint64_t x467 = 235708389LLU;

	t97 = ((x465|(x466-x467))+x468);

	if (t97 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x469 = 3U;
	int8_t x470 = INT8_MAX;
	int8_t x471 = -1;
	int32_t x472 = INT32_MIN;
	int32_t t98 = -5127857;

	t98 = ((x469|(x470-x471))+x472);

	if (t98 != -2147483517) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x473 = -1;

	t99 = ((x473|(x474-x475))+x476);

	if (t99 != 18446744073709551614LLU) { NG(); } else { ; }
	
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

