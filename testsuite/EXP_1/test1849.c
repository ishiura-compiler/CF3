#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = 0U;
volatile int32_t t0 = 10156;
static volatile uint64_t x22 = 2080504187971055425LLU;
int64_t x30 = -1LL;
int32_t x32 = -23;
int8_t x58 = -1;
int8_t x67 = 1;
int8_t x76 = 1;
uint64_t x81 = UINT64_MAX;
static int16_t x82 = INT16_MIN;
uint64_t t12 = 392020035308LLU;
int8_t x86 = -1;
int64_t x87 = 95107888LL;
int32_t x90 = -1;
int8_t x93 = -1;
int8_t x95 = -1;
int64_t x96 = -1LL;
volatile int32_t x99 = 231;
int16_t x100 = INT16_MIN;
int16_t x102 = INT16_MIN;
uint64_t x103 = UINT64_MAX;
static volatile int64_t x107 = INT64_MIN;
int64_t t18 = 3478925090LL;
volatile uint8_t x110 = 21U;
int16_t x111 = 525;
int32_t t19 = -25565;
uint16_t x120 = 522U;
volatile uint8_t x122 = 33U;
volatile int32_t x126 = -6163;
uint8_t x128 = 62U;
int16_t x132 = INT16_MIN;
volatile int32_t t24 = -591763638;
int64_t x139 = INT64_MIN;
uint64_t x146 = 114664LLU;
uint64_t t27 = 232030LLU;
volatile int32_t t30 = 102099;
volatile uint32_t x176 = UINT32_MAX;
uint32_t x177 = UINT32_MAX;
static uint64_t t34 = 3059LLU;
volatile int16_t x183 = INT16_MAX;
int32_t x185 = INT32_MIN;
uint8_t x187 = 18U;
volatile int16_t x189 = -5;
int16_t x191 = INT16_MIN;
static uint32_t x192 = UINT32_MAX;
int8_t x197 = INT8_MIN;
static int16_t x198 = 270;
uint64_t x199 = 3021603997181396LLU;
uint64_t x202 = 29772115LLU;
static int32_t x203 = INT32_MAX;
int8_t x205 = INT8_MAX;
static volatile uint64_t t41 = 825033367361309LLU;
static volatile uint16_t x213 = 0U;
static volatile uint64_t t43 = 43861325LLU;
int32_t x223 = INT32_MAX;
static uint32_t x228 = UINT32_MAX;
int8_t x229 = -15;
static uint64_t x242 = UINT64_MAX;
volatile int16_t x248 = -1;
int8_t x250 = 15;
int32_t x258 = -1;
int16_t x263 = INT16_MAX;
int8_t x264 = INT8_MAX;
uint8_t x266 = 1U;
static int8_t x267 = -6;
int32_t x272 = -1;
static int8_t x283 = -14;
int64_t x284 = -1LL;
uint8_t x285 = 16U;
uint8_t x289 = 93U;
volatile int32_t x294 = INT32_MIN;
int16_t x296 = INT16_MIN;
uint8_t x298 = UINT8_MAX;
int8_t x311 = -1;
uint8_t x312 = UINT8_MAX;
volatile int64_t t66 = 60LL;
uint16_t x332 = 608U;
int64_t x343 = INT64_MIN;
uint16_t x346 = 0U;
int16_t x357 = 119;
uint16_t x359 = 113U;
static volatile int8_t x376 = INT8_MIN;
static uint16_t x382 = 103U;
volatile int16_t x386 = INT16_MIN;
volatile int8_t x396 = INT8_MIN;
volatile int64_t t85 = 125LL;
static volatile uint64_t x408 = 186168559281202160LLU;
volatile int16_t x415 = INT16_MIN;
int8_t x417 = INT8_MIN;
static volatile int8_t x420 = -4;
volatile int32_t t89 = 2;
uint8_t x427 = 47U;
static volatile uint32_t t91 = 0U;
static uint32_t x430 = 46U;
int64_t t94 = 2201544LL;
int8_t x443 = -1;
volatile int32_t x445 = INT32_MIN;
int16_t x449 = 495;
int8_t x450 = -1;
uint16_t x453 = 10889U;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int8_t x2 = 1;
	int32_t x4 = -22778;

	t0 = (((x1&x2)^x3)*x4);

	if (t0 != -22778) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x17 = 11827442369594LLU;
	int16_t x18 = 10;
	int8_t x19 = INT8_MAX;
	int32_t x20 = INT32_MIN;
	volatile uint64_t t1 = 4957LLU;

	t1 = (((x17&x18)^x19)*x20);

	if (t1 != 18446743822453964800LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x21 = INT16_MIN;
	int16_t x23 = INT16_MAX;
	static int8_t x24 = INT8_MAX;
	uint64_t t2 = 49314742671LLU;

	t2 = (((x21&x22)^x23)*x24);

	if (t2 != 5969614840392941441LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x29 = 0;
	static volatile uint32_t x31 = 63U;
	volatile int64_t t3 = 83446781135LL;

	t3 = (((x29&x30)^x31)*x32);

	if (t3 != -1449LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x33 = -3637125261578LL;
	static uint64_t x34 = UINT64_MAX;
	int16_t x35 = 4;
	volatile int64_t x36 = INT64_MAX;
	uint64_t t4 = 106419930613LLU;

	t4 = (((x33&x34)^x35)*x36);

	if (t4 != 3637125261582LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x37 = INT64_MIN;
	uint32_t x38 = UINT32_MAX;
	uint16_t x39 = UINT16_MAX;
	static int32_t x40 = 2;
	int64_t t5 = 5LL;

	t5 = (((x37&x38)^x39)*x40);

	if (t5 != 131070LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x41 = UINT16_MAX;
	volatile int32_t x42 = INT32_MIN;
	int64_t x43 = -1LL;
	static int32_t x44 = INT32_MIN;
	int64_t t6 = -15328LL;

	t6 = (((x41&x42)^x43)*x44);

	if (t6 != 2147483648LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x53 = -3;
	int16_t x54 = -107;
	int16_t x55 = INT16_MAX;
	uint64_t x56 = UINT64_MAX;
	uint64_t t7 = 178700LLU;

	t7 = (((x53&x54)^x55)*x56);

	if (t7 != 32662LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x57 = -3010;
	static int64_t x59 = 2066283656905LL;
	int32_t x60 = -1;
	static volatile int64_t t8 = -1844904810723LL;

	t8 = (((x57&x58)^x59)*x60);

	if (t8 != 2066283658505LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x61 = INT8_MIN;
	static volatile int64_t x62 = 38386509767490LL;
	volatile int32_t x63 = -486817773;
	volatile uint8_t x64 = 34U;
	static volatile int64_t t9 = 7810449823LL;

	t9 = (((x61&x62)^x63)*x64);

	if (t9 != -1305144175253370LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x65 = 41;
	static uint16_t x66 = 27U;
	static int16_t x68 = 1;
	int32_t t10 = 1536;

	t10 = (((x65&x66)^x67)*x68);

	if (t10 != 8) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x73 = 5U;
	int8_t x74 = INT8_MAX;
	int8_t x75 = -1;
	int32_t t11 = -299001808;

	t11 = (((x73&x74)^x75)*x76);

	if (t11 != -6) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x83 = INT8_MAX;
	uint8_t x84 = 1U;

	t12 = (((x81&x82)^x83)*x84);

	if (t12 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x85 = INT32_MAX;
	uint8_t x88 = 18U;
	volatile int64_t t13 = 472693LL;

	t13 = (((x85&x86)^x87)*x88);

	if (t13 != 36942763662LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x89 = INT64_MIN;
	volatile int8_t x91 = INT8_MAX;
	volatile int8_t x92 = 0;
	volatile int64_t t14 = -244638541LL;

	t14 = (((x89&x90)^x91)*x92);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x94 = 0;
	int64_t t15 = -1106908981779583LL;

	t15 = (((x93&x94)^x95)*x96);

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x97 = -1LL;
	uint64_t x98 = 52021LLU;
	volatile uint64_t t16 = 16509616LLU;

	t16 = (((x97&x98)^x99)*x100);

	if (t16 != 18446744071999782912LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x101 = -1838LL;
	volatile int16_t x104 = -1;
	volatile uint64_t t17 = 72133088573065LLU;

	t17 = (((x101&x102)^x103)*x104);

	if (t17 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x105 = 78861912849435LL;
	int8_t x106 = INT8_MIN;
	static int8_t x108 = 1;

	t18 = (((x105&x106)^x107)*x108);

	if (t18 != -9223293174941926400LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x109 = 1;
	int8_t x112 = -1;

	t19 = (((x109&x110)^x111)*x112);

	if (t19 != -524) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x113 = -1;
	uint64_t x114 = UINT64_MAX;
	int64_t x115 = INT64_MIN;
	uint16_t x116 = UINT16_MAX;
	static uint64_t t20 = 67LLU;

	t20 = (((x113&x114)^x115)*x116);

	if (t20 != 9223372036854710273LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x117 = 1137671024660763192LLU;
	static int16_t x118 = -228;
	volatile uint8_t x119 = 3U;
	uint64_t t21 = 431800358LLU;

	t21 = (((x117&x118)^x119)*x120);

	if (t21 != 3568464514212719374LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x121 = 0U;
	uint32_t x123 = UINT32_MAX;
	volatile int8_t x124 = INT8_MIN;
	uint32_t t22 = 3U;

	t22 = (((x121&x122)^x123)*x124);

	if (t22 != 128U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x125 = -2;
	static uint64_t x127 = UINT64_MAX;
	uint64_t t23 = 2029810846887517477LLU;

	t23 = (((x125&x126)^x127)*x128);

	if (t23 != 382106LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x129 = 7155U;
	static int8_t x130 = INT8_MIN;
	uint16_t x131 = 81U;

	t24 = (((x129&x130)^x131)*x132);

	if (t24 != -233340928) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x133 = 381699631593LLU;
	int64_t x134 = -1LL;
	int64_t x135 = INT64_MAX;
	static int32_t x136 = INT32_MIN;
	uint64_t t25 = 158007LLU;

	t25 = (((x133&x134)^x135)*x136);

	if (t25 != 8036978052518903808LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x137 = INT8_MIN;
	int64_t x138 = INT64_MIN;
	volatile int64_t x140 = 37LL;
	static int64_t t26 = -307022256979566LL;

	t26 = (((x137&x138)^x139)*x140);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x145 = -83;
	volatile uint64_t x147 = 790541157084744477LLU;
	int32_t x148 = INT32_MIN;

	t27 = (((x145&x146)^x147)*x148);

	if (t27 != 14398366060799590400LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x149 = 108;
	volatile uint64_t x150 = UINT64_MAX;
	static uint16_t x151 = 57U;
	uint16_t x152 = UINT16_MAX;
	static uint64_t t28 = 108284858768377LLU;

	t28 = (((x149&x150)^x151)*x152);

	if (t28 != 5570475LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x153 = -300;
	int8_t x154 = INT8_MIN;
	int64_t x155 = 4288426450LL;
	int32_t x156 = INT32_MAX;
	static volatile int64_t t29 = 426802894LL;

	t29 = (((x153&x154)^x155)*x156);

	if (t29 != -9209325045672038226LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x157 = -9;
	int16_t x158 = 0;
	volatile int8_t x159 = INT8_MIN;
	static int16_t x160 = 317;

	t30 = (((x157&x158)^x159)*x160);

	if (t30 != -40576) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x165 = 7112304U;
	uint64_t x166 = UINT64_MAX;
	int32_t x167 = INT32_MIN;
	uint8_t x168 = 3U;
	volatile uint64_t t31 = 12272663254LLU;

	t31 = (((x165&x166)^x167)*x168);

	if (t31 != 18446744067288437584LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x169 = -1;
	int16_t x170 = INT16_MIN;
	uint32_t x171 = 845605377U;
	int32_t x172 = 45;
	uint32_t t32 = 25U;

	t32 = (((x169&x170)^x171)*x172);

	if (t32 != 603431469U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x173 = INT16_MIN;
	volatile uint32_t x174 = 26917845U;
	uint64_t x175 = 462484301LLU;
	uint64_t t33 = 181LLU;

	t33 = (((x173&x174)^x175)*x176);

	if (t33 != 1876438968866016435LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x178 = 1649015083663LLU;
	int8_t x179 = INT8_MAX;
	int8_t x180 = INT8_MIN;

	t34 = (((x177&x178)^x179)*x180);

	if (t34 != 18446743556255549440LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x181 = UINT16_MAX;
	uint32_t x182 = 50370U;
	volatile uint16_t x184 = 16546U;
	volatile uint32_t t35 = 1U;

	t35 = (((x181&x182)^x183)*x184);

	if (t35 != 793099418U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x186 = 1LL;
	uint8_t x188 = 27U;
	volatile int64_t t36 = -1LL;

	t36 = (((x185&x186)^x187)*x188);

	if (t36 != 486LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x190 = 217174U;
	uint32_t t37 = 4U;

	t37 = (((x189&x190)^x191)*x192);

	if (t37 != 208814U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x193 = 29U;
	static int16_t x194 = -1;
	static int8_t x195 = INT8_MIN;
	volatile int8_t x196 = -1;
	int32_t t38 = 405025045;

	t38 = (((x193&x194)^x195)*x196);

	if (t38 != 99) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x200 = -1;
	uint64_t t39 = 307414LLU;

	t39 = (((x197&x198)^x199)*x200);

	if (t39 != 18443722469712370476LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x201 = INT64_MAX;
	int16_t x204 = -4;
	uint64_t t40 = 961786711874947LLU;

	t40 = (((x201&x202)^x203)*x204);

	if (t40 != 18446744065238705488LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x206 = -1;
	uint64_t x207 = 1505168LLU;
	int16_t x208 = 7;

	t41 = (((x205&x206)^x207)*x208);

	if (t41 != 10536841LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x214 = 7970U;
	int64_t x215 = -1LL;
	int32_t x216 = -26362446;
	static volatile int64_t t42 = -9487534LL;

	t42 = (((x213&x214)^x215)*x216);

	if (t42 != 26362446LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x217 = 31030U;
	int32_t x218 = -1;
	static volatile int64_t x219 = -1LL;
	static uint64_t x220 = 1898543285850378926LLU;

	t43 = (((x217&x218)^x219)*x220);

	if (t43 != 5203868205199408798LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x221 = 1243U;
	static uint16_t x222 = UINT16_MAX;
	volatile uint64_t x224 = UINT64_MAX;
	uint64_t t44 = 347LLU;

	t44 = (((x221&x222)^x223)*x224);

	if (t44 != 18446744071562069212LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x225 = INT32_MIN;
	uint16_t x226 = 10U;
	static uint64_t x227 = UINT64_MAX;
	uint64_t t45 = 11115LLU;

	t45 = (((x225&x226)^x227)*x228);

	if (t45 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x230 = 7U;
	uint32_t x231 = UINT32_MAX;
	int16_t x232 = INT16_MAX;
	uint32_t t46 = 61148552U;

	t46 = (((x229&x230)^x231)*x232);

	if (t46 != 4294901762U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x233 = -1;
	uint64_t x234 = 1451LLU;
	int16_t x235 = INT16_MIN;
	uint8_t x236 = 2U;
	uint64_t t47 = 831609980348925584LLU;

	t47 = (((x233&x234)^x235)*x236);

	if (t47 != 18446744073709488982LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x237 = -1;
	uint16_t x238 = UINT16_MAX;
	uint8_t x239 = 4U;
	int32_t x240 = 3;
	static int32_t t48 = 6;

	t48 = (((x237&x238)^x239)*x240);

	if (t48 != 196593) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x241 = UINT16_MAX;
	int8_t x243 = INT8_MIN;
	int16_t x244 = -1;
	static volatile uint64_t t49 = 367198LLU;

	t49 = (((x241&x242)^x243)*x244);

	if (t49 != 65409LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x245 = 1958842U;
	int8_t x246 = 8;
	volatile uint16_t x247 = 0U;
	uint32_t t50 = 38171632U;

	t50 = (((x245&x246)^x247)*x248);

	if (t50 != 4294967288U) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x249 = INT64_MIN;
	int16_t x251 = -1;
	volatile uint8_t x252 = 2U;
	int64_t t51 = 4334861735356LL;

	t51 = (((x249&x250)^x251)*x252);

	if (t51 != -2LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x253 = UINT64_MAX;
	int8_t x254 = INT8_MAX;
	volatile int8_t x255 = -1;
	int64_t x256 = 18267661134LL;
	static volatile uint64_t t52 = 875LLU;

	t52 = (((x253&x254)^x255)*x256);

	if (t52 != 18446741735448926464LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x257 = -1;
	static int8_t x259 = -1;
	int32_t x260 = 95873;
	static int32_t t53 = 19;

	t53 = (((x257&x258)^x259)*x260);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x261 = INT8_MIN;
	static uint16_t x262 = 7U;
	static int32_t t54 = -1004;

	t54 = (((x261&x262)^x263)*x264);

	if (t54 != 4161409) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x265 = INT32_MIN;
	uint32_t x268 = 464U;
	uint32_t t55 = 114U;

	t55 = (((x265&x266)^x267)*x268);

	if (t55 != 4294964512U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x269 = INT32_MIN;
	uint32_t x270 = 5U;
	static volatile int8_t x271 = INT8_MAX;
	volatile uint32_t t56 = 42U;

	t56 = (((x269&x270)^x271)*x272);

	if (t56 != 4294967169U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x273 = 800191121LLU;
	int64_t x274 = INT64_MIN;
	uint32_t x275 = UINT32_MAX;
	static uint64_t x276 = 134263LLU;
	static volatile uint64_t t57 = 8448166620911310LLU;

	t57 = (((x273&x274)^x275)*x276);

	if (t57 != 576655193928585LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x277 = INT64_MIN;
	int8_t x278 = INT8_MIN;
	static volatile uint64_t x279 = 8625245602LLU;
	static volatile int32_t x280 = INT32_MAX;
	static uint64_t t58 = 1117LLU;

	t58 = (((x277&x278)^x279)*x280);

	if (t58 != 9299201844798894686LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x281 = INT8_MAX;
	int32_t x282 = INT32_MIN;
	static int64_t t59 = -44LL;

	t59 = (((x281&x282)^x283)*x284);

	if (t59 != 14LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x286 = 874917LLU;
	static int64_t x287 = INT64_MIN;
	int32_t x288 = INT32_MIN;
	static volatile uint64_t t60 = 3181066411190LLU;

	t60 = (((x285&x286)^x287)*x288);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x290 = INT32_MAX;
	int64_t x291 = 81140116712LL;
	static volatile int8_t x292 = -1;
	volatile int64_t t61 = -1038515836653912045LL;

	t61 = (((x289&x290)^x291)*x292);

	if (t61 != -81140116661LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x293 = 5U;
	int8_t x295 = INT8_MAX;
	int32_t t62 = 1609;

	t62 = (((x293&x294)^x295)*x296);

	if (t62 != -4161536) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x297 = 14164802155625LLU;
	static volatile uint8_t x299 = 1U;
	int64_t x300 = 136519379748LL;
	uint64_t t63 = 3953916LLU;

	t63 = (((x297&x298)^x299)*x300);

	if (t63 != 14198015493792LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x301 = 454030;
	uint64_t x302 = UINT64_MAX;
	static volatile uint64_t x303 = 24700439543LLU;
	static uint32_t x304 = 7U;
	volatile uint64_t t64 = 95253077112493038LLU;

	t64 = (((x301&x302)^x303)*x304);

	if (t64 != 172903697743LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x309 = 0;
	int64_t x310 = -1LL;
	int64_t t65 = 1LL;

	t65 = (((x309&x310)^x311)*x312);

	if (t65 != -255LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x313 = INT64_MIN;
	uint16_t x314 = UINT16_MAX;
	int8_t x315 = -1;
	int16_t x316 = INT16_MIN;

	t66 = (((x313&x314)^x315)*x316);

	if (t66 != 32768LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x317 = INT16_MIN;
	int8_t x318 = INT8_MIN;
	volatile int32_t x319 = -63689411;
	int32_t x320 = -1;
	int32_t t67 = -239334715;

	t67 = (((x317&x318)^x319)*x320);

	if (t67 != -63679805) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x329 = 4320683347815431LLU;
	volatile uint64_t x330 = 3912157186988626907LLU;
	int16_t x331 = INT16_MIN;
	volatile uint64_t t68 = 224699562510352LLU;

	t68 = (((x329&x330)^x331)*x332);

	if (t68 != 16692499559713081120LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x333 = 90251708711LLU;
	static uint16_t x334 = 21100U;
	uint32_t x335 = 77104U;
	uint32_t x336 = 11U;
	volatile uint64_t t69 = 524LLU;

	t69 = (((x333&x334)^x335)*x336);

	if (t69 != 1028060LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x337 = 2U;
	volatile int8_t x338 = -1;
	int64_t x339 = -1LL;
	uint8_t x340 = 3U;
	static volatile int64_t t70 = 1974LL;

	t70 = (((x337&x338)^x339)*x340);

	if (t70 != -9LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x341 = 15364610;
	volatile uint16_t x342 = UINT16_MAX;
	int32_t x344 = -1;
	static int64_t t71 = 19259158136912283LL;

	t71 = (((x341&x342)^x343)*x344);

	if (t71 != 9223372036854746622LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint16_t x345 = 1U;
	uint16_t x347 = 86U;
	int64_t x348 = -1LL;
	static volatile int64_t t72 = 2144497470LL;

	t72 = (((x345&x346)^x347)*x348);

	if (t72 != -86LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x353 = 98U;
	int16_t x354 = INT16_MIN;
	static int8_t x355 = INT8_MIN;
	static uint64_t x356 = 1439481061553LLU;
	volatile uint64_t t73 = 6469LLU;

	t73 = (((x353&x354)^x355)*x356);

	if (t73 != 18446559820133672832LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x358 = UINT8_MAX;
	volatile int64_t x360 = 1LL;
	volatile int64_t t74 = 3974910519167113LL;

	t74 = (((x357&x358)^x359)*x360);

	if (t74 != 6LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x361 = -2977;
	volatile uint8_t x362 = 13U;
	int16_t x363 = -1;
	int8_t x364 = -1;
	volatile int32_t t75 = -98339897;

	t75 = (((x361&x362)^x363)*x364);

	if (t75 != 14) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x365 = 1;
	static volatile int16_t x366 = -1;
	int32_t x367 = INT32_MAX;
	uint64_t x368 = UINT64_MAX;
	uint64_t t76 = 10664LLU;

	t76 = (((x365&x366)^x367)*x368);

	if (t76 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x369 = 4U;
	volatile uint64_t x370 = 5117539508482LLU;
	uint8_t x371 = 1U;
	int8_t x372 = INT8_MAX;
	static volatile uint64_t t77 = 108508507122200054LLU;

	t77 = (((x369&x370)^x371)*x372);

	if (t77 != 127LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x373 = 3;
	int16_t x374 = -9;
	volatile int64_t x375 = 1177LL;
	volatile int64_t t78 = 14228LL;

	t78 = (((x373&x374)^x375)*x376);

	if (t78 != -150784LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x377 = UINT64_MAX;
	volatile int8_t x378 = INT8_MIN;
	volatile uint64_t x379 = UINT64_MAX;
	uint8_t x380 = 3U;
	static volatile uint64_t t79 = 376175988376LLU;

	t79 = (((x377&x378)^x379)*x380);

	if (t79 != 381LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x381 = -1;
	int64_t x383 = -1LL;
	int64_t x384 = -1LL;
	int64_t t80 = -105577LL;

	t80 = (((x381&x382)^x383)*x384);

	if (t80 != 104LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x385 = INT8_MIN;
	uint8_t x387 = 30U;
	int16_t x388 = -15;
	int32_t t81 = -7340218;

	t81 = (((x385&x386)^x387)*x388);

	if (t81 != 491070) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x389 = -1;
	uint16_t x390 = 177U;
	int64_t x391 = INT64_MIN;
	int64_t x392 = -1LL;
	volatile int64_t t82 = 4315168499592LL;

	t82 = (((x389&x390)^x391)*x392);

	if (t82 != 9223372036854775631LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x393 = 36U;
	int16_t x394 = INT16_MIN;
	uint32_t x395 = 113U;
	volatile uint32_t t83 = 18U;

	t83 = (((x393&x394)^x395)*x396);

	if (t83 != 4294952832U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x397 = 45;
	int16_t x398 = 1;
	volatile int16_t x399 = -1;
	uint64_t x400 = 125824415LLU;
	volatile uint64_t t84 = 1LLU;

	t84 = (((x397&x398)^x399)*x400);

	if (t84 != 18446744073457902786LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x401 = 23339LL;
	uint8_t x402 = 5U;
	uint32_t x403 = 40265015U;
	int16_t x404 = INT16_MIN;

	t85 = (((x401&x402)^x403)*x404);

	if (t85 != -1319403978752LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x405 = INT32_MIN;
	static volatile int32_t x406 = 13751910;
	uint64_t x407 = 257317082344197070LLU;
	uint64_t t86 = 1081106242066372LLU;

	t86 = (((x405&x406)^x407)*x408);

	if (t86 != 15094042881449638688LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x409 = 3180U;
	int32_t x410 = INT32_MIN;
	int8_t x411 = INT8_MIN;
	volatile int32_t x412 = INT32_MIN;
	uint32_t t87 = 22353U;

	t87 = (((x409&x410)^x411)*x412);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x413 = INT64_MIN;
	volatile int8_t x414 = INT8_MIN;
	static int64_t x416 = -1LL;
	volatile int64_t t88 = -16096233LL;

	t88 = (((x413&x414)^x415)*x416);

	if (t88 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x418 = -1;
	volatile uint8_t x419 = UINT8_MAX;

	t89 = (((x417&x418)^x419)*x420);

	if (t89 != 516) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x421 = INT8_MAX;
	int16_t x422 = INT16_MAX;
	int64_t x423 = 99480843007067LL;
	int16_t x424 = 11522;
	int64_t t90 = 1097167978945284060LL;

	t90 = (((x421&x422)^x423)*x424);

	if (t90 != 1146218273126792264LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x425 = 893U;
	static int8_t x426 = INT8_MIN;
	volatile int8_t x428 = INT8_MIN;

	t91 = (((x425&x426)^x427)*x428);

	if (t91 != 4294862976U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x429 = 0;
	int16_t x431 = 416;
	volatile uint64_t x432 = UINT64_MAX;
	volatile uint64_t t92 = 59719929976LLU;

	t92 = (((x429&x430)^x431)*x432);

	if (t92 != 18446744073709551200LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x433 = -47;
	int8_t x434 = -63;
	volatile uint16_t x435 = 2012U;
	int8_t x436 = INT8_MIN;
	volatile int32_t t93 = 570307;

	t93 = (((x433&x434)^x435)*x436);

	if (t93 != 258432) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x437 = INT64_MIN;
	int64_t x438 = 122643607952LL;
	int16_t x439 = 1720;
	int8_t x440 = 0;

	t94 = (((x437&x438)^x439)*x440);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x441 = -59;
	int64_t x442 = -1LL;
	uint32_t x444 = 16019654U;
	volatile int64_t t95 = -250667293284LL;

	t95 = (((x441&x442)^x443)*x444);

	if (t95 != 929139932LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x446 = 7717848LLU;
	uint8_t x447 = UINT8_MAX;
	int64_t x448 = INT64_MIN;
	uint64_t t96 = 2344802763366861LLU;

	t96 = (((x445&x446)^x447)*x448);

	if (t96 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x451 = INT8_MAX;
	volatile int8_t x452 = INT8_MIN;
	volatile int32_t t97 = 967;

	t97 = (((x449&x450)^x451)*x452);

	if (t97 != -51200) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x454 = 24LLU;
	int8_t x455 = INT8_MIN;
	volatile uint32_t x456 = 44906358U;
	volatile uint64_t t98 = 5483706513476153533LLU;

	t98 = (((x453&x454)^x455)*x456);

	if (t98 != 18446744068320788656LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x457 = INT64_MAX;
	volatile int64_t x458 = INT64_MIN;
	int16_t x459 = -1;
	int8_t x460 = -1;
	volatile int64_t t99 = 8720LL;

	t99 = (((x457&x458)^x459)*x460);

	if (t99 != 1LL) { NG(); } else { ; }
	
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

