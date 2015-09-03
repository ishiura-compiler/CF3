#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -1909885916987437LL;
static int64_t x5 = INT64_MAX;
static volatile int64_t x6 = INT64_MIN;
volatile uint64_t x17 = 24LLU;
uint32_t t5 = 16U;
static int32_t x28 = -209;
int64_t t6 = 87710728LL;
static uint32_t x35 = 37U;
int8_t x38 = INT8_MIN;
static volatile uint64_t t11 = 25299LLU;
uint32_t x51 = 198559035U;
volatile uint64_t x56 = 544210306590016LLU;
int64_t x60 = INT64_MIN;
int64_t t14 = 3777783012563989LL;
uint8_t x61 = 2U;
uint32_t t15 = 280244766U;
static volatile int8_t x71 = 11;
uint16_t x72 = 0U;
int32_t t17 = -1;
volatile int32_t x79 = INT32_MAX;
uint64_t t18 = 27828591658949779LLU;
uint16_t x90 = 26171U;
uint64_t x97 = 59717871189LLU;
uint32_t x102 = UINT32_MAX;
uint8_t x104 = 78U;
volatile int32_t x106 = 1;
uint64_t x109 = UINT64_MAX;
int16_t x126 = INT16_MAX;
int32_t x138 = INT32_MIN;
uint32_t x147 = UINT32_MAX;
int64_t x153 = -35125101299129LL;
int8_t x154 = -1;
int16_t x157 = -1612;
static volatile int32_t x165 = INT32_MAX;
volatile int16_t x166 = 1;
uint16_t x180 = 6U;
int64_t t38 = -143LL;
volatile int64_t t39 = -123629LL;
uint64_t x185 = UINT64_MAX;
int32_t t41 = -290;
uint64_t t42 = 0LLU;
int8_t x213 = -1;
int8_t x216 = 1;
int32_t x218 = INT32_MAX;
int64_t x224 = -59151913953LL;
volatile int64_t t48 = -1875733718321LL;
volatile uint64_t t51 = 3042806LLU;
int32_t x240 = -156949;
static int16_t x243 = INT16_MIN;
uint64_t t54 = UINT64_MAX;
int64_t t55 = -99966300754LL;
static volatile uint32_t x253 = 1U;
int16_t x256 = -1;
int16_t x258 = -3;
volatile int64_t t57 = 357822142874840LL;
volatile int32_t x261 = INT32_MIN;
volatile int64_t t58 = -1LL;
volatile uint8_t x267 = UINT8_MAX;
static int64_t x276 = INT64_MIN;
int64_t t60 = -6085552211593LL;
static int16_t x278 = -1767;
uint8_t x279 = 0U;
int8_t x282 = -1;
static int32_t x284 = 1504;
uint16_t x288 = UINT16_MAX;
uint8_t x289 = 11U;
int16_t x299 = -9;
volatile int16_t x316 = INT16_MAX;
volatile int64_t t67 = 8177263LL;
int64_t x322 = INT64_MIN;
int8_t x326 = 1;
int32_t x330 = INT32_MIN;
uint32_t t73 = 37U;
int16_t x341 = INT16_MIN;
static uint64_t x342 = 323546LLU;
volatile uint64_t t74 = 1004092LLU;
uint16_t x349 = 189U;
int8_t x352 = INT8_MAX;
int32_t t75 = 4603;
uint64_t t77 = 30616810171470079LLU;
int32_t x365 = 2399906;
static int8_t x370 = 12;
int64_t x372 = -1LL;
static int8_t x373 = 0;
int16_t x377 = INT16_MIN;
int16_t x388 = INT16_MIN;
int64_t x389 = INT64_MIN;
int8_t x391 = -60;
static int32_t x392 = INT32_MAX;
uint16_t x399 = UINT16_MAX;
int64_t x400 = -8LL;
volatile int64_t t87 = -53209863205765803LL;
volatile int32_t x401 = INT32_MAX;
int16_t x404 = INT16_MIN;
int8_t x411 = INT8_MAX;
static int64_t x423 = -106LL;
int64_t t92 = 464233193591600215LL;
uint16_t x430 = 7217U;
uint16_t x439 = 29085U;
int8_t x449 = INT8_MIN;
volatile uint32_t x454 = 10084U;
int64_t x456 = 13796LL;


void f0(void) {
	int16_t x1 = -1013;
	volatile uint32_t x3 = UINT32_MAX;
	volatile int8_t x4 = INT8_MIN;
	static volatile int64_t t0 = 1LL;

	t0 = (x1&(x2|(x3+x4)));

	if (t0 != -1909881762218997LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x7 = INT8_MIN;
	int16_t x8 = INT16_MIN;
	int64_t t1 = 97684LL;

	t1 = (x5&(x6|(x7+x8)));

	if (t1 != 9223372036854742912LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MAX;
	volatile uint8_t x10 = UINT8_MAX;
	int64_t x11 = 4432989204371787024LL;
	volatile int64_t x12 = INT64_MIN;
	volatile int64_t t2 = 115528847LL;

	t2 = (x9&(x10|(x11+x12)));

	if (t2 != 127LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	int8_t x14 = INT8_MIN;
	uint64_t x15 = 1007059LLU;
	int8_t x16 = INT8_MAX;
	static volatile uint64_t t3 = 1848981553376263LLU;

	t3 = (x13&(x14|(x15+x16)));

	if (t3 != 4294967250LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x18 = 13U;
	static int8_t x19 = INT8_MIN;
	static int16_t x20 = INT16_MIN;
	volatile uint64_t t4 = 13621253116LLU;

	t4 = (x17&(x18|(x19+x20)));

	if (t4 != 8LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 5215U;
	uint32_t x22 = 588067U;
	volatile int16_t x23 = -1;
	static int8_t x24 = INT8_MAX;

	t5 = (x21&(x22|(x23+x24)));

	if (t5 != 4191U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = UINT8_MAX;
	int64_t x26 = INT64_MIN;
	int8_t x27 = INT8_MIN;

	t6 = (x25&(x26|(x27+x28)));

	if (t6 != 175LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	volatile int16_t x30 = 0;
	int16_t x31 = INT16_MIN;
	uint16_t x32 = 0U;
	int32_t t7 = -171;

	t7 = (x29&(x30|(x31+x32)));

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = INT8_MIN;
	uint16_t x34 = UINT16_MAX;
	int64_t x36 = -1LL;
	volatile int64_t t8 = 7483736291131972LL;

	t8 = (x33&(x34|(x35+x36)));

	if (t8 != 65408LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	static int32_t x39 = 1045525751;
	int16_t x40 = 1;
	static volatile int32_t t9 = 110031;

	t9 = (x37&(x38|(x39+x40)));

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = INT64_MAX;
	int32_t x42 = INT32_MIN;
	uint64_t x43 = 4079387604567LLU;
	int8_t x44 = INT8_MAX;
	volatile uint64_t t10 = 11LLU;

	t10 = (x41&(x42|(x43+x44)));

	if (t10 != 9223372036023449302LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x45 = UINT64_MAX;
	static volatile int8_t x46 = INT8_MAX;
	static uint8_t x47 = UINT8_MAX;
	uint16_t x48 = UINT16_MAX;

	t11 = (x45&(x46|(x47+x48)));

	if (t11 != 65791LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = -1;
	uint16_t x50 = 18U;
	int8_t x52 = INT8_MIN;
	uint32_t t12 = 26U;

	t12 = (x49&(x50|(x51+x52)));

	if (t12 != 198558907U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x53 = 148U;
	int32_t x54 = -1;
	uint64_t x55 = 2199722339840867LLU;
	static uint64_t t13 = 2133232571443195408LLU;

	t13 = (x53&(x54|(x55+x56)));

	if (t13 != 148LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MAX;
	int8_t x58 = INT8_MIN;
	uint16_t x59 = 1U;

	t14 = (x57&(x58|(x59+x60)));

	if (t14 != 32641LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x62 = INT32_MAX;
	uint32_t x63 = 33U;
	static uint32_t x64 = UINT32_MAX;

	t15 = (x61&(x62|(x63+x64)));

	if (t15 != 2U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MAX;
	volatile int32_t x66 = INT32_MIN;
	static int16_t x67 = -1;
	uint16_t x68 = 478U;
	int64_t t16 = -4040490390172LL;

	t16 = (x65&(x66|(x67+x68)));

	if (t16 != 9223372034707292637LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 1U;
	volatile int32_t x70 = -1;

	t17 = (x69&(x70|(x71+x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x77 = UINT16_MAX;
	int8_t x78 = INT8_MIN;
	uint64_t x80 = 2LLU;

	t18 = (x77&(x78|(x79+x80)));

	if (t18 != 65409LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x89 = -1;
	uint8_t x91 = UINT8_MAX;
	static uint64_t x92 = 6447823LLU;
	volatile uint64_t t19 = 3LLU;

	t19 = (x89&(x90|(x91+x92)));

	if (t19 != 6449151LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x93 = INT32_MIN;
	uint32_t x94 = UINT32_MAX;
	uint32_t x95 = 35752U;
	uint64_t x96 = 1946638823346486386LLU;
	uint64_t t20 = 2190LLU;

	t20 = (x93&(x94|(x95+x96)));

	if (t20 != 1946638824629075968LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x98 = -1LL;
	volatile int8_t x99 = -1;
	uint64_t x100 = 664380257LLU;
	uint64_t t21 = 23828125712577300LLU;

	t21 = (x97&(x98|(x99+x100)));

	if (t21 != 59717871189LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x101 = UINT16_MAX;
	int64_t x103 = 16466043420227LL;
	int64_t t22 = 5773304LL;

	t22 = (x101&(x102|(x103+x104)));

	if (t22 != 65535LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x105 = INT64_MIN;
	int8_t x107 = INT8_MIN;
	static int32_t x108 = -1;
	static int64_t t23 = INT64_MIN;

	t23 = (x105&(x106|(x107+x108)));

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x110 = -11;
	uint16_t x111 = 239U;
	int8_t x112 = INT8_MIN;
	uint64_t t24 = UINT64_MAX;

	t24 = (x109&(x110|(x111+x112)));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = INT32_MIN;
	static uint8_t x114 = UINT8_MAX;
	int32_t x115 = 4546667;
	uint8_t x116 = UINT8_MAX;
	int32_t t25 = -492013466;

	t25 = (x113&(x114|(x115+x116)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x125 = INT16_MIN;
	volatile uint16_t x127 = UINT16_MAX;
	int8_t x128 = -1;
	volatile int32_t t26 = -19738;

	t26 = (x125&(x126|(x127+x128)));

	if (t26 != 32768) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x129 = INT8_MIN;
	int64_t x130 = 1LL;
	int32_t x131 = -1;
	int64_t x132 = 30588639048LL;
	int64_t t27 = 25402405LL;

	t27 = (x129&(x130|(x131+x132)));

	if (t27 != 30588638976LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x133 = -1;
	int16_t x134 = INT16_MIN;
	int64_t x135 = 424LL;
	static int8_t x136 = INT8_MIN;
	static volatile int64_t t28 = -15713LL;

	t28 = (x133&(x134|(x135+x136)));

	if (t28 != -32472LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x137 = 115U;
	uint32_t x139 = 31533534U;
	uint32_t x140 = 398792U;
	static uint32_t t29 = 37U;

	t29 = (x137&(x138|(x139+x140)));

	if (t29 != 34U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x141 = 0;
	int16_t x142 = INT16_MAX;
	int32_t x143 = -130823572;
	int32_t x144 = 6;
	int32_t t30 = 899435;

	t30 = (x141&(x142|(x143+x144)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x145 = INT32_MIN;
	static int64_t x146 = 15LL;
	static volatile int8_t x148 = 5;
	static volatile int64_t t31 = -199708346338138258LL;

	t31 = (x145&(x146|(x147+x148)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x149 = INT32_MIN;
	int32_t x150 = 7682;
	int32_t x151 = 1155524;
	int16_t x152 = INT16_MIN;
	volatile int32_t t32 = 1734;

	t32 = (x149&(x150|(x151+x152)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x155 = 14292;
	volatile int32_t x156 = INT32_MIN;
	volatile int64_t t33 = 6040557434613LL;

	t33 = (x153&(x154|(x155+x156)));

	if (t33 != -35125101299129LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x158 = 206486054U;
	volatile int64_t x159 = INT64_MIN;
	volatile int32_t x160 = INT32_MAX;
	int64_t t34 = 93294LL;

	t34 = (x157&(x158|(x159+x160)));

	if (t34 != -9223372034707293772LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x161 = -1;
	static int8_t x162 = INT8_MIN;
	static int64_t x163 = INT64_MIN;
	uint16_t x164 = 31546U;
	volatile int64_t t35 = 122796140943357LL;

	t35 = (x161&(x162|(x163+x164)));

	if (t35 != -70LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x167 = INT64_MIN;
	volatile uint64_t x168 = 1510883970LLU;
	uint64_t t36 = 18LLU;

	t36 = (x165&(x166|(x167+x168)));

	if (t36 != 1510883971LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x169 = -3160265318LL;
	static uint8_t x170 = 14U;
	int32_t x171 = INT32_MIN;
	int64_t x172 = 225458539391LL;
	static int64_t t37 = -12711LL;

	t37 = (x169&(x170|(x171+x172)));

	if (t37 != 220152727834LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x177 = INT32_MIN;
	volatile int32_t x178 = -1;
	volatile int64_t x179 = -4047124609254LL;

	t38 = (x177&(x178|(x179+x180)));

	if (t38 != -2147483648LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x181 = INT64_MIN;
	static uint32_t x182 = 173676040U;
	static uint16_t x183 = UINT16_MAX;
	static uint16_t x184 = 15U;

	t39 = (x181&(x182|(x183+x184)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x186 = -1;
	int16_t x187 = 63;
	static volatile uint32_t x188 = 456809071U;
	uint64_t t40 = 768884842LLU;

	t40 = (x185&(x186|(x187+x188)));

	if (t40 != 4294967295LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x193 = 1U;
	int16_t x194 = INT16_MIN;
	int16_t x195 = INT16_MIN;
	static int8_t x196 = -15;

	t41 = (x193&(x194|(x195+x196)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x197 = 13LLU;
	int64_t x198 = -1LL;
	int32_t x199 = INT32_MAX;
	int64_t x200 = -1LL;

	t42 = (x197&(x198|(x199+x200)));

	if (t42 != 13LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x201 = INT8_MAX;
	int8_t x202 = INT8_MAX;
	static volatile int8_t x203 = -2;
	uint64_t x204 = 16672LLU;
	volatile uint64_t t43 = 117LLU;

	t43 = (x201&(x202|(x203+x204)));

	if (t43 != 127LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x205 = 1U;
	int32_t x206 = -1;
	int16_t x207 = 126;
	static uint8_t x208 = UINT8_MAX;
	static int32_t t44 = 1596;

	t44 = (x205&(x206|(x207+x208)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x209 = INT64_MIN;
	volatile int16_t x210 = INT16_MAX;
	volatile int32_t x211 = INT32_MIN;
	uint32_t x212 = 258502417U;
	int64_t t45 = 26229LL;

	t45 = (x209&(x210|(x211+x212)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x214 = 2U;
	volatile uint8_t x215 = UINT8_MAX;
	volatile int32_t t46 = 328;

	t46 = (x213&(x214|(x215+x216)));

	if (t46 != 258) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x217 = 1262;
	volatile int8_t x219 = -1;
	static int16_t x220 = INT16_MIN;
	int32_t t47 = 16;

	t47 = (x217&(x218|(x219+x220)));

	if (t47 != 1262) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x221 = 32U;
	int16_t x222 = -1;
	uint8_t x223 = 0U;

	t48 = (x221&(x222|(x223+x224)));

	if (t48 != 32LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x225 = INT64_MAX;
	int8_t x226 = -1;
	static uint64_t x227 = 260723650LLU;
	int8_t x228 = -1;
	volatile uint64_t t49 = 865LLU;

	t49 = (x225&(x226|(x227+x228)));

	if (t49 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x229 = INT16_MIN;
	uint16_t x230 = 935U;
	int16_t x231 = 5766;
	int8_t x232 = INT8_MAX;
	volatile int32_t t50 = 31193421;

	t50 = (x229&(x230|(x231+x232)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x233 = 5;
	uint64_t x234 = 52134269243LLU;
	int32_t x235 = -1;
	static int8_t x236 = 2;

	t51 = (x233&(x234|(x235+x236)));

	if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x237 = 1329U;
	int32_t x238 = INT32_MIN;
	uint64_t x239 = 3746LLU;
	uint64_t t52 = 9073781649247723LLU;

	t52 = (x237&(x238|(x239+x240)));

	if (t52 != 257LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x241 = 4063U;
	volatile uint8_t x242 = 0U;
	int8_t x244 = -12;
	static volatile int32_t t53 = 35212;

	t53 = (x241&(x242|(x243+x244)));

	if (t53 != 4052) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x245 = -1;
	volatile uint64_t x246 = UINT64_MAX;
	uint8_t x247 = UINT8_MAX;
	static uint64_t x248 = 1306520336688LLU;

	t54 = (x245&(x246|(x247+x248)));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x249 = INT8_MAX;
	int64_t x250 = INT64_MIN;
	int64_t x251 = -419019LL;
	int16_t x252 = -110;

	t55 = (x249&(x250|(x251+x252)));

	if (t55 != 71LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x254 = UINT16_MAX;
	int8_t x255 = INT8_MIN;
	uint32_t t56 = 207U;

	t56 = (x253&(x254|(x255+x256)));

	if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x257 = -1LL;
	uint16_t x259 = UINT16_MAX;
	static volatile int8_t x260 = -1;

	t57 = (x257&(x258|(x259+x260)));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x262 = -604908;
	int64_t x263 = 11778372034LL;
	uint16_t x264 = 0U;

	t58 = (x261&(x262|(x263+x264)));

	if (t58 != -2147483648LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x265 = INT16_MAX;
	static int32_t x266 = -1;
	uint64_t x268 = 4121802191385270098LLU;
	volatile uint64_t t59 = 61LLU;

	t59 = (x265&(x266|(x267+x268)));

	if (t59 != 32767LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x273 = INT16_MAX;
	uint32_t x274 = UINT32_MAX;
	static uint8_t x275 = 5U;

	t60 = (x273&(x274|(x275+x276)));

	if (t60 != 32767LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x277 = INT32_MIN;
	int32_t x280 = INT32_MIN;
	int32_t t61 = INT32_MIN;

	t61 = (x277&(x278|(x279+x280)));

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x281 = UINT8_MAX;
	int64_t x283 = INT64_MIN;
	int64_t t62 = 204LL;

	t62 = (x281&(x282|(x283+x284)));

	if (t62 != 255LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x285 = 1;
	int8_t x286 = 1;
	static int16_t x287 = -1;
	int32_t t63 = -2;

	t63 = (x285&(x286|(x287+x288)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x290 = INT16_MIN;
	static uint64_t x291 = 1368587435857397664LLU;
	static volatile int16_t x292 = INT16_MAX;
	uint64_t t64 = 25359643752629LLU;

	t64 = (x289&(x290|(x291+x292)));

	if (t64 != 11LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x297 = INT16_MAX;
	int8_t x298 = INT8_MIN;
	volatile uint64_t x300 = UINT64_MAX;
	volatile uint64_t t65 = 214064077331382LLU;

	t65 = (x297&(x298|(x299+x300)));

	if (t65 != 32758LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x309 = UINT16_MAX;
	static uint64_t x310 = UINT64_MAX;
	static int32_t x311 = -1;
	volatile int16_t x312 = INT16_MIN;
	volatile uint64_t t66 = 62079310016989246LLU;

	t66 = (x309&(x310|(x311+x312)));

	if (t66 != 65535LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x313 = INT64_MAX;
	volatile int64_t x314 = INT64_MIN;
	uint32_t x315 = 73U;

	t67 = (x313&(x314|(x315+x316)));

	if (t67 != 32840LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x317 = UINT32_MAX;
	uint64_t x318 = UINT64_MAX;
	int16_t x319 = 2248;
	uint64_t x320 = 11041198483678502LLU;
	volatile uint64_t t68 = 61LLU;

	t68 = (x317&(x318|(x319+x320)));

	if (t68 != 4294967295LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x321 = UINT64_MAX;
	static int64_t x323 = -2LL;
	static volatile int32_t x324 = INT32_MAX;
	volatile uint64_t t69 = 504620434LLU;

	t69 = (x321&(x322|(x323+x324)));

	if (t69 != 9223372039002259453LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x325 = -8;
	uint32_t x327 = 14371U;
	int8_t x328 = -37;
	volatile uint32_t t70 = 345765583U;

	t70 = (x325&(x326|(x327+x328)));

	if (t70 != 14328U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x329 = -4691;
	volatile int32_t x331 = -1;
	static int16_t x332 = INT16_MIN;
	volatile int32_t t71 = -225;

	t71 = (x329&(x330|(x331+x332)));

	if (t71 != -37459) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x333 = UINT16_MAX;
	static int64_t x334 = INT64_MAX;
	uint64_t x335 = 4849014790LLU;
	volatile uint32_t x336 = 26403U;
	uint64_t t72 = 241LLU;

	t72 = (x333&(x334|(x335+x336)));

	if (t72 != 65535LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x337 = INT32_MIN;
	volatile uint32_t x338 = 1020009149U;
	volatile uint16_t x339 = 30970U;
	static int32_t x340 = 6360601;

	t73 = (x337&(x338|(x339+x340)));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x343 = INT16_MIN;
	int8_t x344 = INT8_MAX;

	t74 = (x341&(x342|(x343+x344)));

	if (t74 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x350 = INT32_MAX;
	static int32_t x351 = -1;

	t75 = (x349&(x350|(x351+x352)));

	if (t75 != 189) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x353 = INT64_MIN;
	uint64_t x354 = 3190452918LLU;
	int8_t x355 = -1;
	int64_t x356 = 3750LL;
	volatile uint64_t t76 = 2112525363258738706LLU;

	t76 = (x353&(x354|(x355+x356)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x357 = UINT8_MAX;
	uint64_t x358 = UINT64_MAX;
	uint16_t x359 = 328U;
	int8_t x360 = INT8_MIN;

	t77 = (x357&(x358|(x359+x360)));

	if (t77 != 255LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x361 = INT64_MAX;
	static uint32_t x362 = 209U;
	volatile int16_t x363 = INT16_MIN;
	uint8_t x364 = 3U;
	volatile int64_t t78 = 410704964LL;

	t78 = (x361&(x362|(x363+x364)));

	if (t78 != 4294934739LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x366 = 0U;
	int16_t x367 = 2;
	volatile int64_t x368 = -1LL;
	static int64_t t79 = 55240LL;

	t79 = (x365&(x366|(x367+x368)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x369 = INT32_MIN;
	volatile uint8_t x371 = 2U;
	volatile int64_t t80 = 918210LL;

	t80 = (x369&(x370|(x371+x372)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x374 = UINT8_MAX;
	int32_t x375 = 48;
	int8_t x376 = 14;
	volatile int32_t t81 = -78;

	t81 = (x373&(x374|(x375+x376)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x378 = 6201;
	int64_t x379 = 428506283951797716LL;
	static volatile int32_t x380 = INT32_MIN;
	volatile int64_t t82 = 5256LL;

	t82 = (x377&(x378|(x379+x380)));

	if (t82 != 428506281804300288LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x381 = 27;
	volatile uint32_t x382 = 1989U;
	int64_t x383 = -1LL;
	volatile uint64_t x384 = 189LLU;
	volatile uint64_t t83 = 280906179947850588LLU;

	t83 = (x381&(x382|(x383+x384)));

	if (t83 != 25LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x385 = INT8_MAX;
	volatile int16_t x386 = INT16_MAX;
	static uint16_t x387 = UINT16_MAX;
	int32_t t84 = 650;

	t84 = (x385&(x386|(x387+x388)));

	if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x390 = INT32_MAX;
	volatile int64_t t85 = -1478LL;

	t85 = (x389&(x390|(x391+x392)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x393 = -1;
	int32_t x394 = 132494608;
	static volatile uint32_t x395 = 6U;
	int8_t x396 = INT8_MIN;
	static uint32_t t86 = 1U;

	t86 = (x393&(x394|(x395+x396)));

	if (t86 != 4294967190U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x397 = 84168U;
	static uint32_t x398 = 21587094U;

	t87 = (x397&(x398|(x399+x400)));

	if (t87 != 84160LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x402 = INT8_MIN;
	int16_t x403 = -1;
	int32_t t88 = INT32_MAX;

	t88 = (x401&(x402|(x403+x404)));

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x409 = 7LLU;
	volatile uint64_t x410 = UINT64_MAX;
	volatile uint64_t x412 = 16753667647855LLU;
	volatile uint64_t t89 = 38378245970LLU;

	t89 = (x409&(x410|(x411+x412)));

	if (t89 != 7LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x413 = INT64_MIN;
	int64_t x414 = -1LL;
	uint16_t x415 = 69U;
	static uint16_t x416 = UINT16_MAX;
	volatile int64_t t90 = INT64_MIN;

	t90 = (x413&(x414|(x415+x416)));

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x417 = -1;
	static uint64_t x418 = 1LLU;
	volatile uint16_t x419 = 20U;
	volatile int64_t x420 = -1LL;
	uint64_t t91 = 117791693LLU;

	t91 = (x417&(x418|(x419+x420)));

	if (t91 != 19LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x421 = -864LL;
	int64_t x422 = 444LL;
	int16_t x424 = -3418;

	t92 = (x421&(x422|(x423+x424)));

	if (t92 != -3936LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x429 = INT32_MIN;
	static uint32_t x431 = UINT32_MAX;
	uint32_t x432 = 4070661U;
	static uint32_t t93 = 12743226U;

	t93 = (x429&(x430|(x431+x432)));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x433 = -15;
	volatile int16_t x434 = INT16_MAX;
	uint8_t x435 = 6U;
	volatile int64_t x436 = 436328LL;
	int64_t t94 = 1801173031602LL;

	t94 = (x433&(x434|(x435+x436)));

	if (t94 != 458737LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x437 = INT16_MAX;
	static volatile int8_t x438 = 1;
	int8_t x440 = -1;
	volatile int32_t t95 = -15;

	t95 = (x437&(x438|(x439+x440)));

	if (t95 != 29085) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x445 = INT32_MIN;
	static int8_t x446 = INT8_MAX;
	int32_t x447 = -138659;
	int32_t x448 = INT32_MAX;
	int32_t t96 = 321876193;

	t96 = (x445&(x446|(x447+x448)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x450 = INT64_MIN;
	static int8_t x451 = -1;
	int16_t x452 = -761;
	volatile int64_t t97 = 237LL;

	t97 = (x449&(x450|(x451+x452)));

	if (t97 != -768LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x453 = UINT32_MAX;
	uint16_t x455 = UINT16_MAX;
	volatile int64_t t98 = -1LL;

	t98 = (x453&(x454|(x455+x456)));

	if (t98 != 79847LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x457 = INT32_MAX;
	int8_t x458 = 0;
	int64_t x459 = INT64_MAX;
	int64_t x460 = INT64_MIN;
	int64_t t99 = -66910164036525LL;

	t99 = (x457&(x458|(x459+x460)));

	if (t99 != 2147483647LL) { NG(); } else { ; }
	
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

