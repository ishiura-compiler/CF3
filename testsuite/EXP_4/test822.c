#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MAX;
int8_t x4 = INT8_MIN;
int8_t x6 = 1;
uint32_t x8 = UINT32_MAX;
volatile int32_t t2 = 263;
uint64_t x16 = 27260LLU;
volatile uint64_t t3 = 3930LLU;
int8_t x22 = 41;
int32_t x23 = INT32_MIN;
int64_t x29 = -129379400961252LL;
int64_t x32 = INT64_MAX;
int16_t x40 = INT16_MAX;
uint8_t x41 = 10U;
static int8_t x42 = 40;
int16_t x52 = INT16_MIN;
static int32_t x60 = 64941819;
int8_t x63 = -1;
static uint32_t x67 = UINT32_MAX;
volatile uint32_t t15 = 64U;
volatile int64_t x78 = -6258763372LL;
int64_t t17 = 15032122LL;
int32_t t18 = -31000943;
uint64_t x96 = 209047265749316725LLU;
uint64_t t19 = 14734295756LLU;
int32_t x98 = -1;
int64_t t20 = -395004LL;
uint8_t x102 = 27U;
int32_t x114 = INT32_MIN;
int16_t x122 = INT16_MIN;
uint64_t x123 = 64088663410711LLU;
uint64_t x124 = 231089204861043000LLU;
int64_t x127 = -1229LL;
static uint32_t x128 = 96U;
volatile int8_t x131 = -1;
int32_t t26 = -12614437;
volatile uint64_t t28 = 7LLU;
int16_t x141 = INT16_MIN;
int32_t x147 = -173265;
int16_t x155 = -1;
uint8_t x156 = 1U;
int64_t t31 = -26317912379088260LL;
static volatile int64_t t32 = -231739944LL;
static uint64_t x161 = 42421324460845LLU;
int16_t x168 = 2549;
volatile uint8_t x172 = 26U;
volatile uint32_t t35 = 52482261U;
uint32_t x175 = 881656U;
volatile uint64_t t37 = 43733547093836396LLU;
uint32_t x181 = 385U;
uint32_t x188 = 7885212U;
int16_t x191 = -1;
int16_t x192 = INT16_MIN;
int16_t x193 = INT16_MIN;
volatile int64_t t41 = -24207837976502148LL;
static uint16_t x209 = 6U;
int32_t x214 = -1;
int8_t x227 = 1;
static volatile int32_t t47 = 12;
uint64_t x234 = 188633386LLU;
uint16_t x252 = UINT16_MAX;
volatile int64_t t51 = -1LL;
int64_t x253 = -1LL;
uint32_t x262 = UINT32_MAX;
int64_t t54 = 20LL;
uint16_t x268 = UINT16_MAX;
int32_t x276 = INT32_MAX;
int16_t x278 = INT16_MIN;
volatile uint32_t x281 = UINT32_MAX;
volatile int32_t x284 = -9;
int32_t x286 = -3;
int32_t x298 = -1282345;
int32_t x302 = 1;
volatile uint8_t x306 = UINT8_MAX;
int32_t x308 = -22;
int8_t x313 = INT8_MIN;
uint32_t t67 = 59U;
int16_t x336 = INT16_MIN;
volatile uint32_t t71 = 33389U;
int32_t x344 = INT32_MAX;
volatile int64_t t74 = -770759604LL;
int32_t x355 = -1;
static uint16_t x356 = 15654U;
int64_t t75 = -102436081055511LL;
static uint16_t x358 = UINT16_MAX;
static uint32_t x369 = 119U;
uint8_t x387 = UINT8_MAX;
uint16_t x395 = 104U;
static int8_t x404 = INT8_MIN;
static int16_t x405 = -29;
volatile int16_t x406 = INT16_MIN;
static int16_t x409 = -1;
uint16_t x410 = UINT16_MAX;
uint8_t x416 = UINT8_MAX;
int16_t x417 = INT16_MIN;
uint8_t x419 = 1U;
int16_t x425 = -534;
uint16_t x438 = UINT16_MAX;
uint64_t x439 = UINT64_MAX;
int16_t x440 = INT16_MAX;
int8_t x449 = INT8_MIN;
volatile uint16_t x451 = 4511U;
static uint64_t x459 = 2160767843975867544LLU;
uint32_t x464 = UINT32_MAX;
static int16_t x473 = INT16_MAX;
static int8_t x474 = INT8_MAX;


void f0(void) {
	uint64_t x2 = 3422LLU;
	int64_t x3 = 116421252LL;
	volatile uint64_t t0 = 32369LLU;

	t0 = (x1*(x2|(x3%x4)));

	if (t0 != 7348689040034LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	volatile int16_t x7 = -1;
	int64_t t1 = INT64_MAX;

	t1 = (x5*(x6|(x7%x8)));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 0U;
	int16_t x10 = -1;
	static int16_t x11 = -27;
	int32_t x12 = -1160;

	t2 = (x9*(x10|(x11%x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 14;
	uint64_t x14 = 2772308480024045LLU;
	uint16_t x15 = 7302U;

	t3 = (x13*(x14|(x15%x16)));

	if (t3 != 38812318720336658LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = INT8_MAX;
	int32_t x18 = 7;
	int8_t x19 = INT8_MIN;
	static volatile int16_t x20 = INT16_MIN;
	int32_t t4 = 321648;

	t4 = (x17*(x18|(x19%x20)));

	if (t4 != -15367) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = 3U;
	int32_t x24 = INT32_MIN;
	static int32_t t5 = 1798;

	t5 = (x21*(x22|(x23%x24)));

	if (t5 != 123) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x30 = INT64_MIN;
	static int64_t x31 = INT64_MIN;
	int64_t t6 = -11LL;

	t6 = (x29*(x30|(x31%x32)));

	if (t6 != 129379400961252LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = UINT32_MAX;
	int64_t x34 = -1LL;
	static int64_t x35 = INT64_MIN;
	uint32_t x36 = 41U;
	int64_t t7 = -163889561992562438LL;

	t7 = (x33*(x34|(x35%x36)));

	if (t7 != -4294967295LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = UINT32_MAX;
	static uint64_t x38 = 61642LLU;
	volatile uint16_t x39 = 1U;
	uint64_t t8 = 6759227173655LLU;

	t8 = (x37*(x38|(x39%x40)));

	if (t8 != 264754668965685LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x43 = INT16_MAX;
	int32_t x44 = 1788;
	volatile int32_t t9 = -2332;

	t9 = (x41*(x42|(x43%x44)));

	if (t9 != 6230) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x45 = 15650;
	int8_t x46 = 1;
	static int16_t x47 = -124;
	uint64_t x48 = UINT64_MAX;
	static uint64_t t10 = 20979906984LLU;

	t10 = (x45*(x46|(x47%x48)));

	if (t10 != 18446744073707626666LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = -1;
	static volatile int16_t x50 = 0;
	int16_t x51 = INT16_MIN;
	int32_t t11 = 1;

	t11 = (x49*(x50|(x51%x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MIN;
	static int64_t x54 = INT64_MIN;
	uint64_t x55 = UINT64_MAX;
	static int16_t x56 = -1;
	volatile uint64_t t12 = 20993121822LLU;

	t12 = (x53*(x54|(x55%x56)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = -1;
	static int8_t x58 = INT8_MAX;
	int16_t x59 = INT16_MAX;
	int32_t t13 = 344;

	t13 = (x57*(x58|(x59%x60)));

	if (t13 != -32767) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = 955U;
	static volatile int16_t x62 = -8;
	int32_t x64 = -1;
	static volatile int32_t t14 = -5;

	t14 = (x61*(x62|(x63%x64)));

	if (t14 != -7640) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x65 = INT8_MAX;
	int8_t x66 = INT8_MAX;
	static volatile int32_t x68 = INT32_MAX;

	t15 = (x65*(x66|(x67%x68)));

	if (t15 != 16129U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = -3LL;
	uint64_t x70 = UINT64_MAX;
	int32_t x71 = -267562342;
	static int16_t x72 = -1;
	volatile uint64_t t16 = 612LLU;

	t16 = (x69*(x70|(x71%x72)));

	if (t16 != 3LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x77 = -1LL;
	int32_t x79 = -3350613;
	uint32_t x80 = 35U;

	t17 = (x77*(x78|(x79%x80)));

	if (t17 != 6258763370LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x89 = 2;
	uint8_t x90 = UINT8_MAX;
	int16_t x91 = 2;
	volatile int8_t x92 = -1;

	t18 = (x89*(x90|(x91%x92)));

	if (t18 != 510) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x93 = -10939;
	static int64_t x94 = -1LL;
	volatile uint16_t x95 = 5U;

	t19 = (x93*(x94|(x95%x96)));

	if (t19 != 10939LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x97 = 5;
	uint8_t x99 = 25U;
	int64_t x100 = INT64_MAX;

	t20 = (x97*(x98|(x99%x100)));

	if (t20 != -5LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x101 = -15730318;
	volatile int16_t x103 = INT16_MAX;
	int8_t x104 = 1;
	volatile int32_t t21 = -13922;

	t21 = (x101*(x102|(x103%x104)));

	if (t21 != -424718586) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x105 = 30929875819203892LLU;
	int64_t x106 = INT64_MAX;
	int16_t x107 = INT16_MAX;
	static volatile int32_t x108 = -1;
	volatile uint64_t t22 = 803733272213337513LLU;

	t22 = (x105*(x106|(x107%x108)));

	if (t22 != 18415814197890347724LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x113 = -1;
	int8_t x115 = -1;
	uint64_t x116 = 19347878LLU;
	static volatile uint64_t t23 = 1276308LLU;

	t23 = (x113*(x114|(x115%x116)));

	if (t23 != 2135903735LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x121 = INT8_MAX;
	volatile uint64_t t24 = 194LLU;

	t24 = (x121*(x122|(x123%x124)));

	if (t24 != 18446744073707733865LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x125 = 29U;
	uint64_t x126 = 73442LLU;
	volatile uint64_t t25 = 12125263421LLU;

	t25 = (x125*(x126|(x127%x128)));

	if (t25 != 18446744073709551239LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x129 = 2U;
	static int32_t x130 = -5959;
	static uint16_t x132 = UINT16_MAX;

	t26 = (x129*(x130|(x131%x132)));

	if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x133 = -233668197252984LL;
	int64_t x134 = -1LL;
	uint8_t x135 = UINT8_MAX;
	int8_t x136 = -11;
	volatile int64_t t27 = 21897858382037373LL;

	t27 = (x133*(x134|(x135%x136)));

	if (t27 != 233668197252984LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x137 = UINT64_MAX;
	int16_t x138 = INT16_MIN;
	static int16_t x139 = INT16_MIN;
	volatile int8_t x140 = INT8_MIN;

	t28 = (x137*(x138|(x139%x140)));

	if (t28 != 32768LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x142 = 0U;
	int8_t x143 = INT8_MAX;
	int64_t x144 = INT64_MIN;
	volatile int64_t t29 = 2933661291125412641LL;

	t29 = (x141*(x142|(x143%x144)));

	if (t29 != -4161536LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x145 = 188645855LLU;
	int16_t x146 = -1;
	int64_t x148 = INT64_MAX;
	uint64_t t30 = 8LLU;

	t30 = (x145*(x146|(x147%x148)));

	if (t30 != 18446744073520905761LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x153 = UINT16_MAX;
	int64_t x154 = 2LL;

	t31 = (x153*(x154|(x155%x156)));

	if (t31 != 131070LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x157 = INT32_MIN;
	int16_t x158 = 294;
	int8_t x159 = INT8_MIN;
	int64_t x160 = -28934LL;

	t32 = (x157*(x158|(x159%x160)));

	if (t32 != 193273528320LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x162 = INT32_MAX;
	volatile uint8_t x163 = 6U;
	static int64_t x164 = 313993922531137557LL;
	volatile uint64_t t33 = 1282847369LLU;

	t33 = (x161*(x162|(x163%x164)));

	if (t33 != 9078327767963421907LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x165 = UINT64_MAX;
	int16_t x166 = INT16_MAX;
	uint8_t x167 = UINT8_MAX;
	volatile uint64_t t34 = 963389LLU;

	t34 = (x165*(x166|(x167%x168)));

	if (t34 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x169 = INT32_MIN;
	static volatile uint32_t x170 = UINT32_MAX;
	int32_t x171 = INT32_MIN;

	t35 = (x169*(x170|(x171%x172)));

	if (t35 != 2147483648U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x173 = UINT64_MAX;
	uint8_t x174 = 5U;
	volatile int64_t x176 = -24LL;
	uint64_t t36 = 88489LLU;

	t36 = (x173*(x174|(x175%x176)));

	if (t36 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint64_t x177 = UINT64_MAX;
	int32_t x178 = INT32_MIN;
	volatile int64_t x179 = INT64_MIN;
	uint16_t x180 = 42U;

	t37 = (x177*(x178|(x179%x180)));

	if (t37 != 8LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x182 = 1;
	int64_t x183 = INT64_MIN;
	int16_t x184 = 6;
	int64_t t38 = -1LL;

	t38 = (x181*(x182|(x183%x184)));

	if (t38 != -385LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x185 = INT8_MAX;
	int64_t x186 = -30612693578LL;
	uint16_t x187 = UINT16_MAX;
	static int64_t t39 = -2324136398382279588LL;

	t39 = (x185*(x186|(x187%x188)));

	if (t39 != -3887806808191LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x189 = UINT64_MAX;
	int8_t x190 = 4;
	volatile uint64_t t40 = 1050857472LLU;

	t40 = (x189*(x190|(x191%x192)));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x194 = -8;
	int64_t x195 = -1LL;
	int32_t x196 = -1;

	t41 = (x193*(x194|(x195%x196)));

	if (t41 != 262144LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x201 = 63859133664282LL;
	int8_t x202 = 11;
	int8_t x203 = INT8_MAX;
	int16_t x204 = INT16_MIN;
	volatile int64_t t42 = 97611920107319446LL;

	t42 = (x201*(x202|(x203%x204)));

	if (t42 != 8110109975363814LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x210 = INT8_MIN;
	static volatile uint16_t x211 = 3320U;
	static int8_t x212 = INT8_MAX;
	volatile int32_t t43 = 575;

	t43 = (x209*(x210|(x211%x212)));

	if (t43 != -660) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x213 = -16070;
	static int16_t x215 = INT16_MAX;
	int64_t x216 = -1LL;
	int64_t t44 = -2320433324LL;

	t44 = (x213*(x214|(x215%x216)));

	if (t44 != 16070LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x217 = 1U;
	int64_t x218 = INT64_MAX;
	static uint16_t x219 = 11531U;
	static int64_t x220 = INT64_MAX;
	static volatile int64_t t45 = INT64_MAX;

	t45 = (x217*(x218|(x219%x220)));

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x225 = 552303U;
	static volatile uint16_t x226 = 4U;
	static volatile uint32_t x228 = 597U;
	uint32_t t46 = 0U;

	t46 = (x225*(x226|(x227%x228)));

	if (t46 != 2761515U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x229 = -1;
	int8_t x230 = INT8_MIN;
	uint16_t x231 = 0U;
	int32_t x232 = INT32_MIN;

	t47 = (x229*(x230|(x231%x232)));

	if (t47 != 128) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x233 = -1;
	static int32_t x235 = INT32_MAX;
	int64_t x236 = INT64_MAX;
	uint64_t t48 = 13854449733932LLU;

	t48 = (x233*(x234|(x235%x236)));

	if (t48 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x237 = -184280784;
	static uint16_t x238 = 21U;
	volatile int16_t x239 = -1;
	int16_t x240 = -749;
	volatile int32_t t49 = 29;

	t49 = (x237*(x238|(x239%x240)));

	if (t49 != 184280784) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x245 = INT32_MIN;
	int8_t x246 = INT8_MAX;
	int64_t x247 = INT64_MIN;
	int64_t x248 = -1LL;
	volatile int64_t t50 = -34271642LL;

	t50 = (x245*(x246|(x247%x248)));

	if (t50 != -272730423296LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x249 = -14972792807137567LL;
	uint8_t x250 = 97U;
	int32_t x251 = 5;

	t51 = (x249*(x250|(x251%x252)));

	if (t51 != -1512252073520894267LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x254 = -1;
	int32_t x255 = 44413780;
	int32_t x256 = INT32_MIN;
	volatile int64_t t52 = -6537431LL;

	t52 = (x253*(x254|(x255%x256)));

	if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x257 = 1693U;
	volatile uint32_t x258 = 237U;
	volatile int64_t x259 = INT64_MIN;
	int32_t x260 = -7;
	int64_t t53 = -1LL;

	t53 = (x257*(x258|(x259%x260)));

	if (t53 != -1693LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x261 = INT64_MAX;
	int8_t x263 = -2;
	int64_t x264 = -191LL;

	t54 = (x261*(x262|(x263%x264)));

	if (t54 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x265 = UINT16_MAX;
	uint16_t x266 = 1U;
	int64_t x267 = -229864895LL;
	int64_t t55 = 1146LL;

	t55 = (x265*(x266|(x267%x268)));

	if (t55 != -2205187215LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x273 = -29;
	int8_t x274 = INT8_MIN;
	int16_t x275 = -1;
	int32_t t56 = -3946;

	t56 = (x273*(x274|(x275%x276)));

	if (t56 != 29) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x277 = UINT8_MAX;
	volatile int32_t x279 = INT32_MIN;
	int32_t x280 = 7;
	volatile int32_t t57 = -60245950;

	t57 = (x277*(x278|(x279%x280)));

	if (t57 != -510) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x282 = 55608324603543939LLU;
	int64_t x283 = -1LL;
	volatile uint64_t t58 = 6906LLU;

	t58 = (x281*(x282|(x283%x284)));

	if (t58 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x285 = 344U;
	int8_t x287 = INT8_MAX;
	static int64_t x288 = INT64_MIN;
	static int64_t t59 = 6889LL;

	t59 = (x285*(x286|(x287%x288)));

	if (t59 != -344LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x289 = 166;
	uint64_t x290 = UINT64_MAX;
	uint64_t x291 = 114608LLU;
	static volatile int64_t x292 = -1LL;
	uint64_t t60 = 6182152785384244125LLU;

	t60 = (x289*(x290|(x291%x292)));

	if (t60 != 18446744073709551450LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x293 = INT8_MIN;
	uint64_t x294 = UINT64_MAX;
	volatile int32_t x295 = INT32_MAX;
	volatile uint8_t x296 = 41U;
	uint64_t t61 = 6LLU;

	t61 = (x293*(x294|(x295%x296)));

	if (t61 != 128LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x297 = 1U;
	volatile int8_t x299 = 0;
	int64_t x300 = -2528979430162806825LL;
	volatile int64_t t62 = -28406614LL;

	t62 = (x297*(x298|(x299%x300)));

	if (t62 != -1282345LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x301 = INT64_MAX;
	volatile int32_t x303 = INT32_MIN;
	int16_t x304 = INT16_MIN;
	static int64_t t63 = INT64_MAX;

	t63 = (x301*(x302|(x303%x304)));

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x305 = -103487649;
	int64_t x307 = 1737961361114LL;
	static int64_t t64 = 714LL;

	t64 = (x305*(x306|(x307%x308)));

	if (t64 != -26389350495LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x309 = INT16_MIN;
	uint32_t x310 = 658U;
	int64_t x311 = INT64_MIN;
	volatile int8_t x312 = INT8_MAX;
	volatile int64_t t65 = 24LL;

	t65 = (x309*(x310|(x311%x312)));

	if (t65 != 32768LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x314 = -1;
	int8_t x315 = -4;
	int16_t x316 = INT16_MAX;
	int32_t t66 = -304183;

	t66 = (x313*(x314|(x315%x316)));

	if (t66 != 128) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x317 = 3561U;
	volatile uint16_t x318 = UINT16_MAX;
	int8_t x319 = -1;
	int8_t x320 = INT8_MAX;

	t67 = (x317*(x318|(x319%x320)));

	if (t67 != 4294963735U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x325 = INT8_MIN;
	static int64_t x326 = 4072066285946LL;
	int32_t x327 = INT32_MIN;
	int32_t x328 = INT32_MIN;
	int64_t t68 = 68191133353926LL;

	t68 = (x325*(x326|(x327%x328)));

	if (t68 != -521224484601088LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x329 = UINT16_MAX;
	volatile int64_t x330 = INT64_MIN;
	int8_t x331 = -1;
	int32_t x332 = INT32_MIN;
	volatile int64_t t69 = -578533206302384218LL;

	t69 = (x329*(x330|(x331%x332)));

	if (t69 != -65535LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x333 = 3U;
	int64_t x334 = 7LL;
	volatile uint32_t x335 = 66U;
	volatile int64_t t70 = -966LL;

	t70 = (x333*(x334|(x335%x336)));

	if (t70 != 213LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x337 = 0U;
	int16_t x338 = -3;
	volatile uint16_t x339 = UINT16_MAX;
	volatile uint32_t x340 = UINT32_MAX;

	t71 = (x337*(x338|(x339%x340)));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x341 = INT16_MIN;
	uint16_t x342 = UINT16_MAX;
	static uint16_t x343 = UINT16_MAX;
	volatile int32_t t72 = 225;

	t72 = (x341*(x342|(x343%x344)));

	if (t72 != -2147450880) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x345 = -1;
	uint16_t x346 = 698U;
	int16_t x347 = INT16_MIN;
	int64_t x348 = INT64_MIN;
	int64_t t73 = 260038186615073354LL;

	t73 = (x345*(x346|(x347%x348)));

	if (t73 != 32070LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int64_t x349 = 62175108LL;
	static int8_t x350 = -1;
	int16_t x351 = INT16_MIN;
	int32_t x352 = -219;

	t74 = (x349*(x350|(x351%x352)));

	if (t74 != -62175108LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x353 = 3LL;
	int8_t x354 = 39;

	t75 = (x353*(x354|(x355%x356)));

	if (t75 != -3LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x357 = -1;
	int16_t x359 = 1785;
	uint16_t x360 = UINT16_MAX;
	volatile int32_t t76 = -62902236;

	t76 = (x357*(x358|(x359%x360)));

	if (t76 != -65535) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x365 = 3;
	int16_t x366 = -1;
	uint32_t x367 = 0U;
	static int16_t x368 = INT16_MIN;
	volatile uint32_t t77 = 80222182U;

	t77 = (x365*(x366|(x367%x368)));

	if (t77 != 4294967293U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x370 = 234;
	uint64_t x371 = 50LLU;
	int8_t x372 = -1;
	volatile uint64_t t78 = 10898LLU;

	t78 = (x369*(x370|(x371%x372)));

	if (t78 != 29750LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x373 = 1U;
	volatile int64_t x374 = -1LL;
	int64_t x375 = 3LL;
	int16_t x376 = INT16_MIN;
	volatile int64_t t79 = -912829644214078316LL;

	t79 = (x373*(x374|(x375%x376)));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x377 = INT64_MAX;
	int32_t x378 = INT32_MAX;
	uint64_t x379 = 474925711LLU;
	int64_t x380 = INT64_MIN;
	volatile uint64_t t80 = 496624870044521836LLU;

	t80 = (x377*(x378|(x379%x380)));

	if (t80 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x381 = 98U;
	int16_t x382 = INT16_MIN;
	static uint16_t x383 = UINT16_MAX;
	int16_t x384 = 1283;
	static uint32_t t81 = 46158U;

	t81 = (x381*(x382|(x383%x384)));

	if (t81 != 4291766028U) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x385 = -1;
	int8_t x386 = INT8_MAX;
	int16_t x388 = -11;
	int32_t t82 = -21;

	t82 = (x385*(x386|(x387%x388)));

	if (t82 != -127) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x393 = INT16_MIN;
	int8_t x394 = -1;
	int8_t x396 = -1;
	static int32_t t83 = -26964225;

	t83 = (x393*(x394|(x395%x396)));

	if (t83 != 32768) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x397 = INT32_MIN;
	uint64_t x398 = UINT64_MAX;
	int64_t x399 = 14168815669LL;
	int16_t x400 = INT16_MIN;
	static uint64_t t84 = 1019606523067LLU;

	t84 = (x397*(x398|(x399%x400)));

	if (t84 != 2147483648LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x401 = 108U;
	volatile int8_t x402 = INT8_MIN;
	static uint64_t x403 = 3642450789368567LLU;
	uint64_t t85 = 258840338410530LLU;

	t85 = (x401*(x402|(x403%x404)));

	if (t85 != 18446744073709550644LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x407 = INT8_MIN;
	uint8_t x408 = UINT8_MAX;
	static volatile int32_t t86 = -939;

	t86 = (x405*(x406|(x407%x408)));

	if (t86 != 3712) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x411 = 2U;
	int64_t x412 = INT64_MIN;
	int64_t t87 = -112758152834375LL;

	t87 = (x409*(x410|(x411%x412)));

	if (t87 != -65535LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x413 = 22;
	uint32_t x414 = 908641104U;
	volatile int16_t x415 = INT16_MIN;
	volatile uint32_t t88 = 6948U;

	t88 = (x413*(x414|(x415%x416)));

	if (t88 != 4294966240U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x418 = -1;
	int32_t x420 = -1;
	int32_t t89 = 1677051;

	t89 = (x417*(x418|(x419%x420)));

	if (t89 != 32768) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x426 = UINT16_MAX;
	int32_t x427 = INT32_MAX;
	static uint16_t x428 = UINT16_MAX;
	volatile int32_t t90 = 24;

	t90 = (x425*(x426|(x427%x428)));

	if (t90 != -34995690) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x433 = UINT64_MAX;
	static uint8_t x434 = UINT8_MAX;
	static int32_t x435 = -450378;
	uint8_t x436 = UINT8_MAX;
	static volatile uint64_t t91 = 399371097111430LLU;

	t91 = (x433*(x434|(x435%x436)));

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x437 = 93U;
	volatile uint64_t t92 = 490547244530464LLU;

	t92 = (x437*(x438|(x439%x440)));

	if (t92 != 6094755LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x445 = UINT8_MAX;
	uint16_t x446 = UINT16_MAX;
	uint32_t x447 = 3U;
	int16_t x448 = INT16_MIN;
	uint32_t t93 = 11244050U;

	t93 = (x445*(x446|(x447%x448)));

	if (t93 != 16711425U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x450 = UINT64_MAX;
	volatile uint16_t x452 = 1874U;
	static uint64_t t94 = 2797206657628LLU;

	t94 = (x449*(x450|(x451%x452)));

	if (t94 != 128LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x457 = -1;
	uint16_t x458 = 27165U;
	int8_t x460 = 2;
	uint64_t t95 = 861859199564LLU;

	t95 = (x457*(x458|(x459%x460)));

	if (t95 != 18446744073709524451LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x461 = INT16_MAX;
	static uint8_t x462 = 92U;
	uint64_t x463 = 26908290379667861LLU;
	volatile uint64_t t96 = 3058283090982305LLU;

	t96 = (x461*(x462|(x463%x464)));

	if (t96 != 80243536170273LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x465 = -1;
	static int64_t x466 = INT64_MAX;
	uint16_t x467 = 3U;
	uint16_t x468 = 88U;
	volatile int64_t t97 = 3LL;

	t97 = (x465*(x466|(x467%x468)));

	if (t97 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x469 = -42637LL;
	uint32_t x470 = 425U;
	uint16_t x471 = 14051U;
	volatile uint8_t x472 = UINT8_MAX;
	volatile int64_t t98 = -65441574949710227LL;

	t98 = (x469*(x470|(x471%x472)));

	if (t98 != -18888191LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x475 = UINT32_MAX;
	static int32_t x476 = INT32_MAX;
	volatile uint32_t t99 = 60211798U;

	t99 = (x473*(x474|(x475%x476)));

	if (t99 != 4161409U) { NG(); } else { ; }
	
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

