#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t2 = -710649938;
uint64_t t4 = 5LLU;
int32_t t5 = -144076829;
int8_t x31 = INT8_MIN;
static int32_t x32 = 478876;
static volatile uint64_t t8 = 166949672234LLU;
static int64_t t9 = -622942332164820LL;
uint64_t x42 = 179599940343LLU;
uint16_t x48 = 359U;
volatile int64_t x51 = -1LL;
volatile int32_t t14 = 3343635;
int64_t x66 = 428541367LL;
static int64_t x71 = 11967874888892976LL;
int16_t x84 = -1;
uint8_t x86 = 7U;
uint16_t x98 = 3925U;
int16_t x104 = INT16_MIN;
uint16_t x106 = UINT16_MAX;
volatile int8_t x111 = 1;
int16_t x114 = -20;
static uint16_t x119 = 2U;
int32_t t29 = 7370179;
uint16_t x121 = UINT16_MAX;
static uint16_t x123 = UINT16_MAX;
int8_t x127 = -12;
uint64_t x129 = 19171994783083129LLU;
int8_t x138 = -1;
static int16_t x140 = 5044;
int64_t x141 = -268016687087737LL;
int64_t t35 = -380711083025567LL;
static int64_t x147 = INT64_MAX;
uint16_t x148 = 0U;
uint16_t x166 = UINT16_MAX;
int8_t x168 = INT8_MIN;
int8_t x170 = -62;
int32_t x171 = -1;
volatile uint8_t x174 = UINT8_MAX;
uint8_t x183 = 18U;
uint64_t t45 = 86650368198LLU;
volatile uint64_t x192 = 75623005180845LLU;
static volatile uint64_t t47 = UINT64_MAX;
int64_t x193 = 8LL;
int8_t x195 = -1;
int32_t x200 = INT32_MIN;
volatile int64_t t50 = -4675169LL;
static uint16_t x207 = 655U;
static int16_t x220 = INT16_MIN;
static int8_t x222 = -1;
static uint32_t x224 = 13879U;
volatile uint32_t t55 = UINT32_MAX;
uint8_t x230 = 1U;
volatile uint64_t x232 = 4840LLU;
volatile int64_t x234 = INT64_MAX;
static int64_t t58 = -1486192LL;
static volatile uint32_t t59 = 51180790U;
volatile int64_t x242 = -9780LL;
int64_t x244 = INT64_MIN;
int16_t x250 = INT16_MAX;
uint16_t x261 = UINT16_MAX;
int8_t x263 = INT8_MIN;
int64_t x264 = INT64_MIN;
int64_t x270 = INT64_MIN;
static volatile int64_t x277 = INT64_MAX;
int16_t x282 = INT16_MIN;
uint64_t x287 = 14507669579LLU;
uint8_t x288 = UINT8_MAX;
static uint16_t x291 = 6109U;
int32_t t72 = -6943;
uint16_t x296 = 8U;
uint16_t x300 = 39U;
int16_t x302 = -1;
uint32_t x304 = 31652175U;
uint32_t x305 = 31430752U;
uint8_t x309 = 26U;
static int64_t t77 = 40008439039270437LL;
int16_t x315 = INT16_MIN;
static int32_t x320 = -1;
volatile int16_t x322 = -1;
volatile int32_t t82 = 20708;
uint64_t x334 = UINT64_MAX;
int32_t x336 = 1142;
uint64_t t85 = 4376LLU;
int16_t x348 = 1;
static int64_t x351 = INT64_MIN;
volatile int64_t t87 = 1LL;
uint64_t x356 = 6834LLU;
uint16_t x357 = 3795U;
int64_t x359 = INT64_MIN;
int8_t x365 = -1;
int16_t x366 = -7261;
int8_t x370 = INT8_MAX;
volatile int8_t x371 = INT8_MIN;
int32_t x380 = INT32_MAX;
uint8_t x392 = UINT8_MAX;
int8_t x397 = -1;


void f0(void) {
	int16_t x1 = INT16_MIN;
	volatile uint64_t x2 = 25305LLU;
	static uint32_t x3 = UINT32_MAX;
	static int32_t x4 = INT32_MAX;
	static volatile uint64_t t0 = UINT64_MAX;

	t0 = (x1|(x2|(x3&x4)));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	uint8_t x6 = 2U;
	int64_t x7 = -235LL;
	volatile int16_t x8 = -1;
	volatile int64_t t1 = 30LL;

	t1 = (x5|(x6|(x7&x8)));

	if (t1 != -105LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = 58;
	uint8_t x10 = 2U;
	uint16_t x11 = 529U;
	volatile int32_t x12 = INT32_MAX;

	t2 = (x9|(x10|(x11&x12)));

	if (t2 != 571) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 728671292U;
	static int8_t x14 = INT8_MAX;
	int16_t x15 = INT16_MIN;
	volatile int8_t x16 = INT8_MIN;
	volatile uint32_t t3 = 19951939U;

	t3 = (x13|(x14|(x15&x16)));

	if (t3 != 4294943871U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 15546249507537214LLU;
	volatile int16_t x18 = -2177;
	volatile int64_t x19 = INT64_MIN;
	static int16_t x20 = INT16_MIN;

	t4 = (x17|(x18|(x19&x20)));

	if (t4 != 18446744073709549439LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	int8_t x22 = -15;
	int8_t x23 = 26;
	static volatile uint16_t x24 = 73U;

	t5 = (x21|(x22|(x23&x24)));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int64_t x26 = 667624763LL;
	volatile int64_t x27 = -113073LL;
	int16_t x28 = -1;
	static volatile int64_t t6 = -3913044942297LL;

	t6 = (x25|(x26|(x27&x28)));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 16U;
	uint8_t x30 = 3U;
	volatile int32_t t7 = 54;

	t7 = (x29|(x30|(x31&x32)));

	if (t7 != 478867) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MAX;
	static volatile uint64_t x34 = 2726996466198952LLU;
	volatile uint8_t x35 = 1U;
	volatile int64_t x36 = INT64_MIN;

	t8 = (x33|(x34|(x35&x36)));

	if (t8 != 2726996466204671LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	volatile int32_t x38 = -1;
	uint32_t x39 = UINT32_MAX;
	int64_t x40 = 2873511LL;

	t9 = (x37|(x38|(x39&x40)));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	volatile int8_t x43 = -21;
	static int8_t x44 = INT8_MAX;
	uint64_t t10 = 43331731LLU;

	t10 = (x41|(x42|(x43&x44)));

	if (t10 != 18446744073709525759LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -38329515LL;
	int16_t x46 = INT16_MIN;
	uint64_t x47 = UINT64_MAX;
	static volatile uint64_t t11 = 1542441065LLU;

	t11 = (x45|(x46|(x47&x48)));

	if (t11 != 18446744073709527927LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	volatile uint32_t x50 = 2U;
	volatile int8_t x52 = 1;
	volatile int64_t t12 = -741373783LL;

	t12 = (x49|(x50|(x51&x52)));

	if (t12 != -2147483645LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 1U;
	static int64_t x54 = INT64_MIN;
	int8_t x55 = INT8_MIN;
	int16_t x56 = 14730;
	volatile int64_t t13 = -945LL;

	t13 = (x53|(x54|(x55&x56)));

	if (t13 != -9223372036854761087LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = UINT16_MAX;
	int32_t x58 = 13;
	int8_t x59 = -3;
	uint16_t x60 = UINT16_MAX;

	t14 = (x57|(x58|(x59&x60)));

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	static int64_t x62 = INT64_MIN;
	int32_t x63 = INT32_MIN;
	uint32_t x64 = UINT32_MAX;
	static volatile int64_t t15 = -153617954LL;

	t15 = (x61|(x62|(x63&x64)));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	int32_t x67 = 936;
	static int32_t x68 = INT32_MAX;
	int64_t t16 = 2947LL;

	t16 = (x65|(x66|(x67&x68)));

	if (t16 != -65LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 23476U;
	static int16_t x70 = -201;
	volatile int8_t x72 = INT8_MIN;
	int64_t t17 = 606708191LL;

	t17 = (x69|(x70|(x71&x72)));

	if (t17 != -73LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -2;
	uint32_t x74 = UINT32_MAX;
	volatile int16_t x75 = 3;
	int8_t x76 = INT8_MIN;
	uint32_t t18 = UINT32_MAX;

	t18 = (x73|(x74|(x75&x76)));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -1;
	uint64_t x78 = UINT64_MAX;
	volatile int16_t x79 = -86;
	uint16_t x80 = 3U;
	static uint64_t t19 = UINT64_MAX;

	t19 = (x77|(x78|(x79&x80)));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x81 = UINT8_MAX;
	int64_t x82 = -1LL;
	uint8_t x83 = 53U;
	volatile int64_t t20 = -5957603414682831LL;

	t20 = (x81|(x82|(x83&x84)));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 2U;
	static volatile int16_t x87 = INT16_MIN;
	int32_t x88 = -6841;
	volatile int32_t t21 = -10959;

	t21 = (x85|(x86|(x87&x88)));

	if (t21 != -32761) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	int32_t x90 = INT32_MAX;
	int64_t x91 = -9362LL;
	int8_t x92 = INT8_MIN;
	int64_t t22 = -8948LL;

	t22 = (x89|(x90|(x91&x92)));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 183492424U;
	static int16_t x94 = -255;
	volatile uint32_t x95 = 1637225U;
	static uint32_t x96 = UINT32_MAX;
	uint32_t t23 = 284U;

	t23 = (x93|(x94|(x95&x96)));

	if (t23 != 4294967145U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = UINT64_MAX;
	int8_t x99 = INT8_MAX;
	static int16_t x100 = INT16_MAX;
	uint64_t t24 = UINT64_MAX;

	t24 = (x97|(x98|(x99&x100)));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x101 = UINT16_MAX;
	int16_t x102 = -1;
	int8_t x103 = -1;
	int32_t t25 = -27465112;

	t25 = (x101|(x102|(x103&x104)));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = 1;
	int32_t x107 = INT32_MAX;
	int64_t x108 = INT64_MIN;
	volatile int64_t t26 = -54135872365858379LL;

	t26 = (x105|(x106|(x107&x108)));

	if (t26 != 65535LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = -1LL;
	volatile uint64_t x110 = 8512692052LLU;
	int8_t x112 = 0;
	uint64_t t27 = UINT64_MAX;

	t27 = (x109|(x110|(x111&x112)));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	static volatile int64_t x115 = -69413373960124847LL;
	int16_t x116 = -2897;
	int64_t t28 = 110430LL;

	t28 = (x113|(x114|(x115&x116)));

	if (t28 != -19LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = INT32_MIN;
	static int8_t x118 = INT8_MIN;
	int8_t x120 = INT8_MIN;

	t29 = (x117|(x118|(x119&x120)));

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x122 = -1;
	volatile int8_t x124 = 4;
	volatile int32_t t30 = 163302934;

	t30 = (x121|(x122|(x123&x124)));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 1U;
	uint16_t x126 = 0U;
	int32_t x128 = 144853;
	int32_t t31 = 3648552;

	t31 = (x125|(x126|(x127&x128)));

	if (t31 != 144853) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x130 = INT8_MIN;
	volatile uint32_t x131 = 305980907U;
	int8_t x132 = INT8_MIN;
	uint64_t t32 = 8194461LLU;

	t32 = (x129|(x130|(x131&x132)));

	if (t32 != 19171995274969081LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	int8_t x134 = 1;
	static int64_t x135 = -2551308630778913LL;
	int16_t x136 = -1;
	volatile int64_t t33 = 2141600719013440LL;

	t33 = (x133|(x134|(x135&x136)));

	if (t33 != -1420190753LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -53;
	int8_t x139 = INT8_MAX;
	volatile int32_t t34 = 1942;

	t34 = (x137|(x138|(x139&x140)));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x142 = INT32_MAX;
	volatile int32_t x143 = -1;
	static int8_t x144 = INT8_MIN;

	t35 = (x141|(x142|(x143&x144)));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x145 = 1015;
	uint16_t x146 = 2671U;
	volatile int64_t t36 = 3475LL;

	t36 = (x145|(x146|(x147&x148)));

	if (t36 != 3071LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -1;
	static int32_t x150 = INT32_MIN;
	int64_t x151 = INT64_MIN;
	volatile int32_t x152 = -1;
	static int64_t t37 = 5717518LL;

	t37 = (x149|(x150|(x151&x152)));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x153 = 121U;
	uint8_t x154 = UINT8_MAX;
	int16_t x155 = INT16_MIN;
	int8_t x156 = INT8_MIN;
	volatile int32_t t38 = 9161255;

	t38 = (x153|(x154|(x155&x156)));

	if (t38 != -32513) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 218752040U;
	volatile int32_t x158 = -1;
	int32_t x159 = INT32_MIN;
	uint8_t x160 = 0U;
	volatile uint32_t t39 = UINT32_MAX;

	t39 = (x157|(x158|(x159&x160)));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = UINT64_MAX;
	int64_t x162 = -1LL;
	int8_t x163 = INT8_MIN;
	volatile int64_t x164 = -1LL;
	volatile uint64_t t40 = UINT64_MAX;

	t40 = (x161|(x162|(x163&x164)));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x165 = 12U;
	int32_t x167 = -163897272;
	int32_t t41 = 40134318;

	t41 = (x165|(x166|(x167&x168)));

	if (t41 != -163840001) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -3455;
	int32_t x172 = INT32_MIN;
	static volatile int32_t t42 = -694;

	t42 = (x169|(x170|(x171&x172)));

	if (t42 != -61) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x173 = INT8_MIN;
	int64_t x175 = INT64_MIN;
	int16_t x176 = -1;
	static volatile int64_t t43 = 30LL;

	t43 = (x173|(x174|(x175&x176)));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x177 = UINT32_MAX;
	uint16_t x178 = 5181U;
	static int32_t x179 = -711321567;
	volatile int32_t x180 = INT32_MIN;
	volatile uint32_t t44 = UINT32_MAX;

	t44 = (x177|(x178|(x179&x180)));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x181 = INT64_MAX;
	static uint64_t x182 = 249600LLU;
	static int64_t x184 = -8682747626LL;

	t45 = (x181|(x182|(x183&x184)));

	if (t45 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = 284132895;
	int32_t x186 = 92611;
	int64_t x187 = -1LL;
	volatile uint16_t x188 = 187U;
	int64_t t46 = 1006166780742203166LL;

	t46 = (x185|(x186|(x187&x188)));

	if (t46 != 284159999LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -1959;
	int64_t x190 = INT64_MAX;
	uint8_t x191 = 1U;

	t47 = (x189|(x190|(x191&x192)));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x194 = 26505197U;
	volatile int8_t x196 = -1;
	static int64_t t48 = -49130702251687531LL;

	t48 = (x193|(x194|(x195&x196)));

	if (t48 != 4294967295LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x197 = INT16_MIN;
	static int64_t x198 = INT64_MIN;
	int16_t x199 = INT16_MIN;
	int64_t t49 = 109LL;

	t49 = (x197|(x198|(x199&x200)));

	if (t49 != -32768LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = -1LL;
	int8_t x202 = 0;
	volatile int64_t x203 = -1LL;
	volatile int64_t x204 = INT64_MIN;

	t50 = (x201|(x202|(x203&x204)));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x205 = -1;
	int64_t x206 = -1LL;
	static volatile int16_t x208 = -1;
	int64_t t51 = -543385292066622LL;

	t51 = (x205|(x206|(x207&x208)));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = UINT16_MAX;
	static int16_t x210 = INT16_MIN;
	int16_t x211 = -20;
	uint32_t x212 = 148525U;
	uint32_t t52 = UINT32_MAX;

	t52 = (x209|(x210|(x211&x212)));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MAX;
	int32_t x214 = INT32_MAX;
	volatile uint32_t x215 = UINT32_MAX;
	int64_t x216 = 311LL;
	volatile int64_t t53 = INT64_MAX;

	t53 = (x213|(x214|(x215&x216)));

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint16_t x217 = 1335U;
	int8_t x218 = -1;
	static volatile int32_t x219 = INT32_MAX;
	int32_t t54 = 67;

	t54 = (x217|(x218|(x219&x220)));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1;
	int32_t x223 = -1;

	t55 = (x221|(x222|(x223&x224)));

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = 15;
	uint64_t x226 = 457960294078073497LLU;
	uint32_t x227 = 1557114U;
	uint16_t x228 = 10436U;
	volatile uint64_t t56 = 70421588307996856LLU;

	t56 = (x225|(x226|(x227&x228)));

	if (t56 != 457960294078073567LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x229 = -1LL;
	static int64_t x231 = INT64_MIN;
	uint64_t t57 = UINT64_MAX;

	t57 = (x229|(x230|(x231&x232)));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	volatile int32_t x235 = -546;
	int64_t x236 = INT64_MIN;

	t58 = (x233|(x234|(x235&x236)));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x237 = UINT8_MAX;
	uint32_t x238 = 104716U;
	int16_t x239 = -31;
	uint16_t x240 = UINT16_MAX;

	t59 = (x237|(x238|(x239&x240)));

	if (t59 != 131071U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MAX;
	static uint8_t x243 = 64U;
	int64_t t60 = 1LL;

	t60 = (x241|(x242|(x243&x244)));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	int16_t x246 = INT16_MAX;
	uint8_t x247 = 12U;
	int8_t x248 = -1;
	int32_t t61 = -41;

	t61 = (x245|(x246|(x247&x248)));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = -431165245LL;
	int16_t x251 = -12;
	uint16_t x252 = 10234U;
	int64_t t62 = 0LL;

	t62 = (x249|(x250|(x251&x252)));

	if (t62 != -431161345LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MAX;
	int8_t x254 = -1;
	uint64_t x255 = 29492LLU;
	int16_t x256 = -766;
	uint64_t t63 = UINT64_MAX;

	t63 = (x253|(x254|(x255&x256)));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MAX;
	volatile uint64_t x258 = UINT64_MAX;
	uint16_t x259 = UINT16_MAX;
	volatile int16_t x260 = INT16_MAX;
	uint64_t t64 = UINT64_MAX;

	t64 = (x257|(x258|(x259&x260)));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x262 = INT32_MAX;
	volatile int64_t t65 = 55880751164972LL;

	t65 = (x261|(x262|(x263&x264)));

	if (t65 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 167LLU;
	static int64_t x266 = INT64_MIN;
	volatile uint32_t x267 = 1U;
	static volatile uint16_t x268 = 4996U;
	uint64_t t66 = 118611LLU;

	t66 = (x265|(x266|(x267&x268)));

	if (t66 != 9223372036854775975LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = 9U;
	int16_t x271 = -2342;
	uint8_t x272 = UINT8_MAX;
	int64_t t67 = -364589144781LL;

	t67 = (x269|(x270|(x271&x272)));

	if (t67 != -9223372036854775589LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MAX;
	int16_t x274 = -5484;
	static int16_t x275 = -13631;
	int8_t x276 = INT8_MIN;
	volatile int32_t t68 = -128;

	t68 = (x273|(x274|(x275&x276)));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x278 = INT32_MIN;
	int32_t x279 = INT32_MAX;
	int8_t x280 = INT8_MIN;
	volatile int64_t t69 = 117889890694438803LL;

	t69 = (x277|(x278|(x279&x280)));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MIN;
	int64_t x283 = -1LL;
	uint16_t x284 = UINT16_MAX;
	volatile int64_t t70 = 0LL;

	t70 = (x281|(x282|(x283&x284)));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = -1;
	int64_t x286 = -1LL;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = (x285|(x286|(x287&x288)));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x289 = -1;
	static int16_t x290 = -7944;
	int8_t x292 = 37;

	t72 = (x289|(x290|(x291&x292)));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x293 = INT8_MIN;
	uint16_t x294 = UINT16_MAX;
	static int16_t x295 = 16;
	int32_t t73 = 227085;

	t73 = (x293|(x294|(x295&x296)));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 1U;
	volatile uint16_t x298 = UINT16_MAX;
	static uint32_t x299 = 1U;
	volatile uint32_t t74 = 1U;

	t74 = (x297|(x298|(x299&x300)));

	if (t74 != 65535U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -16;
	uint8_t x303 = 0U;
	uint32_t t75 = UINT32_MAX;

	t75 = (x301|(x302|(x303&x304)));

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x306 = -42209LL;
	static int64_t x307 = -1LL;
	uint64_t x308 = 447313LLU;
	static uint64_t t76 = 116251LLU;

	t76 = (x305|(x306|(x307&x308)));

	if (t76 != 18446744073709542271LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x310 = INT64_MIN;
	int16_t x311 = -1;
	static int32_t x312 = INT32_MAX;

	t77 = (x309|(x310|(x311&x312)));

	if (t77 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	int32_t x314 = INT32_MAX;
	int8_t x316 = INT8_MAX;
	int32_t t78 = -201347;

	t78 = (x313|(x314|(x315&x316)));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x317 = 392142470671LL;
	int32_t x318 = INT32_MIN;
	uint32_t x319 = UINT32_MAX;
	static int64_t t79 = 2537173914025146953LL;

	t79 = (x317|(x318|(x319&x320)));

	if (t79 != 395136991231LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = INT8_MIN;
	int32_t x323 = INT32_MIN;
	uint32_t x324 = UINT32_MAX;
	static uint32_t t80 = UINT32_MAX;

	t80 = (x321|(x322|(x323&x324)));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -49;
	int32_t x326 = 8478;
	static int64_t x327 = -1LL;
	static uint64_t x328 = 36184163894462623LLU;
	volatile uint64_t t81 = 4366LLU;

	t81 = (x325|(x326|(x327&x328)));

	if (t81 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x329 = UINT8_MAX;
	static int32_t x330 = -787523;
	volatile uint8_t x331 = 7U;
	int32_t x332 = -366056;

	t82 = (x329|(x330|(x331&x332)));

	if (t82 != -787457) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MIN;
	static int64_t x335 = INT64_MIN;
	static volatile uint64_t t83 = UINT64_MAX;

	t83 = (x333|(x334|(x335&x336)));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x337 = INT16_MIN;
	static uint64_t x338 = 12683LLU;
	int8_t x339 = INT8_MAX;
	static int8_t x340 = INT8_MAX;
	static volatile uint64_t t84 = 27877972LLU;

	t84 = (x337|(x338|(x339&x340)));

	if (t84 != 18446744073709531647LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x341 = 394666443802LLU;
	int64_t x342 = 1773356816LL;
	uint16_t x343 = UINT16_MAX;
	uint32_t x344 = UINT32_MAX;

	t85 = (x341|(x342|(x343&x344)));

	if (t85 != 394800922623LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = UINT8_MAX;
	int32_t x346 = -1;
	volatile int16_t x347 = 26;
	volatile int32_t t86 = -17145;

	t86 = (x345|(x346|(x347&x348)));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x349 = 6;
	uint32_t x350 = 32749U;
	int16_t x352 = 990;

	t87 = (x349|(x350|(x351&x352)));

	if (t87 != 32751LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = 30;
	int16_t x354 = -1998;
	int64_t x355 = 216366823708LL;
	uint64_t t88 = 159089324303LLU;

	t88 = (x353|(x354|(x355&x356)));

	if (t88 != 18446744073709549630LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x358 = 20U;
	volatile int8_t x360 = INT8_MAX;
	volatile int64_t t89 = 1LL;

	t89 = (x357|(x358|(x359&x360)));

	if (t89 != 3799LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -28;
	volatile uint8_t x362 = 30U;
	volatile uint16_t x363 = 5U;
	static volatile int8_t x364 = INT8_MAX;
	volatile int32_t t90 = -65559506;

	t90 = (x361|(x362|(x363&x364)));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x367 = -445004983LL;
	int8_t x368 = INT8_MAX;
	static volatile int64_t t91 = -2309858352876011LL;

	t91 = (x365|(x366|(x367&x368)));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x369 = INT16_MIN;
	int16_t x372 = INT16_MIN;
	int32_t t92 = -181;

	t92 = (x369|(x370|(x371&x372)));

	if (t92 != -32641) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	volatile int8_t x374 = INT8_MIN;
	static int32_t x375 = INT32_MAX;
	int64_t x376 = 32735355050380LL;
	volatile int64_t t93 = 12LL;

	t93 = (x373|(x374|(x375&x376)));

	if (t93 != -116LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = INT8_MAX;
	uint8_t x378 = 6U;
	int8_t x379 = INT8_MIN;
	volatile int32_t t94 = INT32_MAX;

	t94 = (x377|(x378|(x379&x380)));

	if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x381 = 574187U;
	uint8_t x382 = 1U;
	uint16_t x383 = UINT16_MAX;
	int32_t x384 = INT32_MIN;
	uint32_t t95 = 334552663U;

	t95 = (x381|(x382|(x383&x384)));

	if (t95 != 574187U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = 52813218386LL;
	volatile uint16_t x386 = 30039U;
	int8_t x387 = 0;
	volatile uint64_t x388 = 4108793190101943LLU;
	uint64_t t96 = 332819LLU;

	t96 = (x385|(x386|(x387&x388)));

	if (t96 != 52813231959LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x389 = INT64_MIN;
	int16_t x390 = INT16_MIN;
	volatile int64_t x391 = -1955685247299665LL;
	volatile int64_t t97 = -807883LL;

	t97 = (x389|(x390|(x391&x392)));

	if (t97 != -32593LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x393 = 52018128U;
	volatile int32_t x394 = INT32_MIN;
	int8_t x395 = -1;
	int16_t x396 = INT16_MAX;
	uint32_t t98 = 284544394U;

	t98 = (x393|(x394|(x395&x396)));

	if (t98 != 2199519231U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x398 = UINT32_MAX;
	volatile uint8_t x399 = 4U;
	int64_t x400 = INT64_MAX;
	volatile int64_t t99 = -63LL;

	t99 = (x397|(x398|(x399&x400)));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

