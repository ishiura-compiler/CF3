#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = INT8_MIN;
int16_t x6 = 29;
static uint32_t t1 = 919U;
volatile int8_t x24 = -29;
int16_t x30 = -45;
int64_t t7 = 1501643705884921LL;
int32_t x40 = INT32_MIN;
uint32_t x52 = 1767904140U;
uint32_t x64 = UINT32_MAX;
volatile int8_t x68 = -1;
int32_t x73 = -1388;
int32_t x76 = -4;
int32_t x93 = INT32_MIN;
int8_t x106 = INT8_MAX;
volatile int8_t x112 = 22;
static volatile uint32_t t22 = 45U;
int8_t x113 = 0;
int8_t x115 = INT8_MIN;
uint64_t t24 = 941LLU;
int8_t x133 = -9;
volatile int16_t x144 = INT16_MAX;
static int16_t x146 = -219;
volatile int64_t x149 = INT64_MIN;
int64_t x173 = INT64_MAX;
uint64_t t38 = 2277235138450658LLU;
int32_t x194 = -1;
int32_t x195 = -58;
volatile uint64_t x199 = UINT64_MAX;
static volatile int16_t x204 = 9893;
uint32_t x210 = 332938U;
int16_t x211 = INT16_MIN;
int16_t x219 = 277;
static volatile int8_t x223 = INT8_MIN;
int8_t x224 = INT8_MAX;
uint32_t x238 = UINT32_MAX;
int8_t x248 = -4;
uint32_t x256 = UINT32_MAX;
volatile uint64_t t52 = 3705751836439537LLU;
int8_t x262 = -48;
volatile int64_t x271 = INT64_MAX;
volatile int8_t x272 = -1;
static int8_t x284 = -6;
uint8_t x290 = UINT8_MAX;
int32_t x291 = -1;
int8_t x292 = 13;
static int16_t x296 = -2;
uint16_t x297 = 698U;
uint32_t x299 = UINT32_MAX;
volatile uint32_t t61 = 7U;
uint16_t x302 = UINT16_MAX;
volatile uint64_t t63 = 1605139944268930LLU;
volatile uint8_t x311 = 8U;
int16_t x317 = -1;
static uint64_t t66 = 224687058LLU;
static volatile uint64_t t69 = 1846628977063LLU;
int64_t x352 = INT64_MIN;
int64_t t73 = 1040811095LL;
static int64_t x372 = -1LL;
uint64_t t75 = 93279446249246LLU;
volatile int8_t x382 = INT8_MIN;
int64_t x383 = -1LL;
int8_t x384 = INT8_MIN;
int32_t x391 = 135;
int16_t x395 = -608;
volatile int64_t x401 = 51LL;
int16_t x402 = -1;
uint16_t x406 = 2028U;
volatile int32_t t84 = 4;
static volatile int16_t x417 = -1;
int8_t x420 = -1;
uint32_t x422 = 1U;
uint64_t x426 = UINT64_MAX;
static int64_t x433 = INT64_MIN;
int64_t x441 = -1LL;
static int32_t x443 = INT32_MAX;
static int16_t x446 = INT16_MIN;
int32_t x447 = INT32_MAX;
uint16_t x462 = 12316U;
int32_t t94 = 598263;
uint16_t x467 = 0U;
uint64_t x473 = 1967422272295409LLU;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int8_t x2 = -1;
	int16_t x4 = -1;
	volatile int32_t t0 = 587278;

	t0 = (x1*(x2|(x3/x4)));

	if (t0 != 128) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int32_t x7 = -1;
	uint32_t x8 = 7962382U;

	t1 = (x5*(x6|(x7/x8)));

	if (t1 != 4294966753U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	int32_t x10 = INT32_MAX;
	int32_t x11 = INT32_MIN;
	uint8_t x12 = UINT8_MAX;
	volatile uint64_t t2 = 42863496033LLU;

	t2 = (x9*(x10|(x11/x12)));

	if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	uint64_t x14 = 21LLU;
	static int32_t x15 = INT32_MIN;
	volatile int64_t x16 = INT64_MIN;
	volatile uint64_t t3 = 949946567375358182LLU;

	t3 = (x13*(x14|(x15/x16)));

	if (t3 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = INT64_MIN;
	volatile uint64_t x18 = UINT64_MAX;
	int16_t x19 = INT16_MIN;
	int32_t x20 = INT32_MIN;
	volatile uint64_t t4 = 2102LLU;

	t4 = (x17*(x18|(x19/x20)));

	if (t4 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	volatile int8_t x22 = -10;
	int64_t x23 = INT64_MIN;
	static int64_t t5 = -1928LL;

	t5 = (x21*(x22|(x23/x24)));

	if (t5 != 10LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MIN;
	int16_t x26 = -1;
	uint64_t x27 = UINT64_MAX;
	int64_t x28 = INT64_MAX;
	static volatile uint64_t t6 = 3043597859787151LLU;

	t6 = (x25*(x26|(x27/x28)));

	if (t6 != 128LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -10119439527475130LL;
	uint8_t x31 = 3U;
	int16_t x32 = INT16_MAX;

	t7 = (x29*(x30|(x31/x32)));

	if (t7 != 455374778736380850LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	int8_t x34 = INT8_MAX;
	int8_t x35 = INT8_MIN;
	static int32_t x36 = -7;
	static volatile int32_t t8 = -4073;

	t8 = (x33*(x34|(x35/x36)));

	if (t8 != -127) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 2U;
	uint16_t x38 = 1738U;
	int16_t x39 = -2;
	volatile int32_t t9 = 28214934;

	t9 = (x37*(x38|(x39/x40)));

	if (t9 != 3476) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	static uint64_t x42 = 67326353828LLU;
	uint8_t x43 = 1U;
	int8_t x44 = -1;
	volatile uint64_t t10 = 569651860508073681LLU;

	t10 = (x41*(x42|(x43/x44)));

	if (t10 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = 59U;
	int8_t x50 = INT8_MIN;
	uint32_t x51 = UINT32_MAX;
	volatile uint32_t t11 = 0U;

	t11 = (x49*(x50|(x51/x52)));

	if (t11 != 4294959862U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = -482293406;
	uint16_t x58 = 122U;
	int64_t x59 = INT64_MIN;
	uint64_t x60 = 774474178823696182LLU;
	static volatile uint64_t t12 = 244019159244LLU;

	t12 = (x57*(x58|(x59/x60)));

	if (t12 != 18446744014387462678LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = INT16_MIN;
	uint16_t x62 = 2U;
	int32_t x63 = INT32_MIN;
	uint32_t t13 = 101U;

	t13 = (x61*(x62|(x63/x64)));

	if (t13 != 4294901760U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x65 = 27U;
	static int64_t x66 = -1LL;
	uint64_t x67 = 361011655483371LLU;
	volatile uint64_t t14 = 1680037146023270LLU;

	t14 = (x65*(x66|(x67/x68)));

	if (t14 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x74 = 1938229275242975LLU;
	uint16_t x75 = UINT16_MAX;
	static volatile uint64_t t15 = 581315LLU;

	t15 = (x73*(x74|(x75/x76)));

	if (t15 != 5020396LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x77 = 13U;
	uint8_t x78 = UINT8_MAX;
	volatile int8_t x79 = INT8_MAX;
	static volatile uint8_t x80 = UINT8_MAX;
	static int32_t t16 = 800480144;

	t16 = (x77*(x78|(x79/x80)));

	if (t16 != 3315) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x89 = -44;
	static int64_t x90 = 98LL;
	volatile uint8_t x91 = UINT8_MAX;
	int8_t x92 = -1;
	static int64_t t17 = 172288091512LL;

	t17 = (x89*(x90|(x91/x92)));

	if (t17 != 6908LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x94 = INT32_MIN;
	uint64_t x95 = 60679LLU;
	int16_t x96 = INT16_MIN;
	volatile uint64_t t18 = 535469816098LLU;

	t18 = (x93*(x94|(x95/x96)));

	if (t18 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x97 = UINT16_MAX;
	uint8_t x98 = 2U;
	uint64_t x99 = 9330573805LLU;
	volatile int8_t x100 = INT8_MIN;
	volatile uint64_t t19 = 424508892758LLU;

	t19 = (x97*(x98|(x99/x100)));

	if (t19 != 131070LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x101 = 31U;
	static uint16_t x102 = 2U;
	uint8_t x103 = 9U;
	int8_t x104 = -7;
	volatile int32_t t20 = -87;

	t20 = (x101*(x102|(x103/x104)));

	if (t20 != -31) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x105 = 55420038956LLU;
	volatile int8_t x107 = INT8_MIN;
	int8_t x108 = -1;
	uint64_t t21 = 2083684813405129LLU;

	t21 = (x105*(x106|(x107/x108)));

	if (t21 != 14132109933780LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x109 = 7U;
	static volatile uint32_t x110 = 305780853U;
	volatile int32_t x111 = -1;

	t22 = (x109*(x110|(x111/x112)));

	if (t22 != 2140465971U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x114 = INT8_MIN;
	int32_t x116 = INT32_MIN;
	int32_t t23 = -286508;

	t23 = (x113*(x114|(x115/x116)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x125 = -59149;
	uint64_t x126 = 27046358900243270LLU;
	int32_t x127 = -1;
	uint16_t x128 = 63U;

	t24 = (x125*(x126|(x127/x128)));

	if (t24 != 5101651822241813362LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x129 = 2299;
	volatile uint8_t x130 = 1U;
	uint64_t x131 = 5191904034268613654LLU;
	volatile uint8_t x132 = 2U;
	uint64_t t25 = 1127LLU;

	t25 = (x129*(x130|(x131/x132)));

	if (t25 != 9795351583586223305LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x134 = -1;
	int32_t x135 = -1;
	int64_t x136 = INT64_MAX;
	volatile int64_t t26 = 186887LL;

	t26 = (x133*(x134|(x135/x136)));

	if (t26 != 9LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x137 = -85;
	uint64_t x138 = 5LLU;
	volatile int64_t x139 = 5341878308155052LL;
	int16_t x140 = 8;
	static uint64_t t27 = 60543105351692463LLU;

	t27 = (x137*(x138|(x139/x140)));

	if (t27 != 18389986616685404231LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x141 = 232057310295LL;
	int16_t x142 = INT16_MIN;
	int8_t x143 = INT8_MAX;
	int64_t t28 = -8315946987LL;

	t28 = (x141*(x142|(x143/x144)));

	if (t28 != -7604053943746560LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x145 = 11U;
	int64_t x147 = INT64_MAX;
	uint8_t x148 = 79U;
	int64_t t29 = -3533788LL;

	t29 = (x145*(x146|(x147/x148)));

	if (t29 != -825LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x150 = INT32_MAX;
	uint64_t x151 = 1064335384503481169LLU;
	uint64_t x152 = UINT64_MAX;
	uint64_t t30 = 103464LLU;

	t30 = (x149*(x150|(x151/x152)));

	if (t30 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x157 = 4217691419196LL;
	static volatile int8_t x158 = 13;
	uint16_t x159 = UINT16_MAX;
	volatile int32_t x160 = -1;
	int64_t t31 = 31987650299684LL;

	t31 = (x157*(x158|(x159/x160)));

	if (t31 != -276355794859979508LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x161 = UINT16_MAX;
	int64_t x162 = 17LL;
	int16_t x163 = INT16_MIN;
	uint64_t x164 = 76606554914124LLU;
	volatile uint64_t t32 = 4373238770LLU;

	t32 = (x161*(x162|(x163/x164)));

	if (t32 != 15780762465LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x165 = 132LLU;
	static int64_t x166 = 13097090266199LL;
	uint16_t x167 = 27676U;
	int32_t x168 = INT32_MIN;
	static uint64_t t33 = 9231041916053LLU;

	t33 = (x165*(x166|(x167/x168)));

	if (t33 != 1728815915138268LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x169 = 6448914214LL;
	static int64_t x170 = INT64_MAX;
	int32_t x171 = 87423801;
	int32_t x172 = -504943;
	volatile int64_t t34 = 4336LL;

	t34 = (x169*(x170|(x171/x172)));

	if (t34 != -6448914214LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x174 = -1;
	static uint64_t x175 = UINT64_MAX;
	int32_t x176 = -1;
	uint64_t t35 = 334362LLU;

	t35 = (x173*(x174|(x175/x176)));

	if (t35 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x181 = -1;
	int32_t x182 = -103438373;
	int16_t x183 = INT16_MIN;
	uint8_t x184 = 92U;
	volatile int32_t t36 = -3660;

	t36 = (x181*(x182|(x183/x184)));

	if (t36 != 33) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x185 = 229LL;
	int32_t x186 = INT32_MAX;
	int8_t x187 = 45;
	int16_t x188 = -1;
	static int64_t t37 = -29789960129724052LL;

	t37 = (x185*(x186|(x187/x188)));

	if (t37 != -229LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x189 = -47;
	volatile uint64_t x190 = 288165227524LLU;
	uint16_t x191 = UINT16_MAX;
	static uint8_t x192 = 74U;

	t38 = (x189*(x190|(x191/x192)));

	if (t38 != 18446730529943816581LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x193 = -57734022689217LL;
	uint64_t x196 = 1645LLU;
	uint64_t t39 = 2106765047340LLU;

	t39 = (x193*(x194|(x195/x196)));

	if (t39 != 57734022689217LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x197 = 224;
	uint32_t x198 = 19420436U;
	volatile int64_t x200 = 13306374562610LL;
	static volatile uint64_t t40 = 549397297325212686LLU;

	t40 = (x197*(x198|(x199/x200)));

	if (t40 != 4660423040LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x201 = 8U;
	int8_t x202 = INT8_MIN;
	uint32_t x203 = 172943U;
	volatile uint32_t t41 = 80025U;

	t41 = (x201*(x202|(x203/x204)));

	if (t41 != 4294966408U) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x209 = 3;
	int8_t x212 = 22;
	volatile uint32_t t42 = 2076392577U;

	t42 = (x209*(x210|(x211/x212)));

	if (t42 != 4294966285U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x217 = -5789;
	int8_t x218 = INT8_MIN;
	int8_t x220 = -1;
	int32_t t43 = 843053577;

	t43 = (x217*(x218|(x219/x220)));

	if (t43 != 121569) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x221 = 16229;
	int32_t x222 = 2676;
	volatile int32_t t44 = 500;

	t44 = (x221*(x222|(x223/x224)));

	if (t44 != -16229) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x225 = -1LL;
	static int32_t x226 = INT32_MAX;
	int16_t x227 = 14536;
	int16_t x228 = INT16_MIN;
	volatile int64_t t45 = -1LL;

	t45 = (x225*(x226|(x227/x228)));

	if (t45 != -2147483647LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x229 = 39811U;
	int8_t x230 = INT8_MAX;
	uint32_t x231 = 41634583U;
	int8_t x232 = -1;
	volatile uint32_t t46 = 87U;

	t46 = (x229*(x230|(x231/x232)));

	if (t46 != 5055997U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x233 = -1;
	static uint64_t x234 = UINT64_MAX;
	static uint32_t x235 = UINT32_MAX;
	int16_t x236 = INT16_MIN;
	volatile uint64_t t47 = 0LLU;

	t47 = (x233*(x234|(x235/x236)));

	if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x237 = 12;
	int8_t x239 = INT8_MIN;
	int8_t x240 = -1;
	uint32_t t48 = 98306U;

	t48 = (x237*(x238|(x239/x240)));

	if (t48 != 4294967284U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x241 = UINT64_MAX;
	static volatile int8_t x242 = INT8_MAX;
	int64_t x243 = INT64_MIN;
	static int32_t x244 = INT32_MIN;
	volatile uint64_t t49 = 54387172715861758LLU;

	t49 = (x241*(x242|(x243/x244)));

	if (t49 != 18446744069414584193LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x245 = 16222U;
	uint64_t x246 = UINT64_MAX;
	static uint8_t x247 = 8U;
	static uint64_t t50 = 141776015846036LLU;

	t50 = (x245*(x246|(x247/x248)));

	if (t50 != 18446744073709535394LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x249 = INT16_MIN;
	uint64_t x250 = 973547LLU;
	uint8_t x251 = UINT8_MAX;
	volatile int64_t x252 = 47867847584659LL;
	volatile uint64_t t51 = 325807196094016398LLU;

	t51 = (x249*(x250|(x251/x252)));

	if (t51 != 18446744041808363520LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x253 = UINT32_MAX;
	uint64_t x254 = 13593042062LLU;
	int32_t x255 = INT32_MIN;

	t52 = (x253*(x254|(x255/x256)));

	if (t52 != 3041438874720707442LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x261 = INT16_MIN;
	static uint16_t x263 = 1U;
	int32_t x264 = 6153356;
	volatile int32_t t53 = -58847;

	t53 = (x261*(x262|(x263/x264)));

	if (t53 != 1572864) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x265 = 1195267701696800LLU;
	static int8_t x266 = INT8_MIN;
	int64_t x267 = INT64_MIN;
	int32_t x268 = INT32_MAX;
	volatile uint64_t t54 = 0LLU;

	t54 = (x265*(x266|(x267/x268)));

	if (t54 != 18444353538306158016LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x269 = INT32_MIN;
	int32_t x270 = INT32_MIN;
	volatile int64_t t55 = 15LL;

	t55 = (x269*(x270|(x271/x272)));

	if (t55 != 4611686016279904256LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x273 = -1;
	volatile int32_t x274 = INT32_MIN;
	uint8_t x275 = 126U;
	uint64_t x276 = UINT64_MAX;
	volatile uint64_t t56 = 51503361800637562LLU;

	t56 = (x273*(x274|(x275/x276)));

	if (t56 != 2147483648LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x281 = -243;
	static int16_t x282 = -2;
	volatile int8_t x283 = -1;
	int32_t t57 = -4;

	t57 = (x281*(x282|(x283/x284)));

	if (t57 != 486) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x285 = 0;
	static int8_t x286 = INT8_MIN;
	int16_t x287 = INT16_MIN;
	int32_t x288 = INT32_MAX;
	volatile int32_t t58 = -1095;

	t58 = (x285*(x286|(x287/x288)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x289 = 329487U;
	volatile uint32_t t59 = 582792U;

	t59 = (x289*(x290|(x291/x292)));

	if (t59 != 84019185U) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x293 = INT32_MIN;
	int16_t x294 = INT16_MAX;
	uint32_t x295 = 60006U;
	volatile uint32_t t60 = 0U;

	t60 = (x293*(x294|(x295/x296)));

	if (t60 != 2147483648U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x298 = -1;
	volatile int8_t x300 = INT8_MIN;

	t61 = (x297*(x298|(x299/x300)));

	if (t61 != 4294966598U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x301 = 0;
	int64_t x303 = -1LL;
	uint32_t x304 = 50683176U;
	volatile int64_t t62 = 1LL;

	t62 = (x301*(x302|(x303/x304)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x305 = UINT16_MAX;
	uint64_t x306 = 33886933582809766LLU;
	static int16_t x307 = -1;
	uint8_t x308 = 44U;

	t63 = (x305*(x306|(x307/x308)));

	if (t63 != 7170903504291820890LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x309 = UINT8_MAX;
	static int64_t x310 = 421LL;
	static int32_t x312 = -1;
	int64_t t64 = -1162LL;

	t64 = (x309*(x310|(x311/x312)));

	if (t64 != -765LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x318 = INT16_MIN;
	volatile int64_t x319 = INT64_MIN;
	int8_t x320 = INT8_MIN;
	int64_t t65 = 60284237226509LL;

	t65 = (x317*(x318|(x319/x320)));

	if (t65 != 32768LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x321 = 1485430867344LLU;
	int16_t x322 = INT16_MIN;
	static int8_t x323 = INT8_MIN;
	uint64_t x324 = 4714944976214357LLU;

	t66 = (x321*(x322|(x323/x324)));

	if (t66 != 18403880480601473152LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x329 = UINT64_MAX;
	volatile int64_t x330 = 134115015707824LL;
	static uint64_t x331 = 396591938LLU;
	static volatile int32_t x332 = INT32_MIN;
	volatile uint64_t t67 = 56040716968406409LLU;

	t67 = (x329*(x330|(x331/x332)));

	if (t67 != 18446609958693843792LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x333 = 1;
	int32_t x334 = INT32_MAX;
	int8_t x335 = INT8_MAX;
	int64_t x336 = INT64_MIN;
	static int64_t t68 = -49297445827LL;

	t68 = (x333*(x334|(x335/x336)));

	if (t68 != 2147483647LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x337 = INT64_MAX;
	uint16_t x338 = 1U;
	uint32_t x339 = 444565U;
	uint64_t x340 = 2105635148148814813LLU;

	t69 = (x337*(x338|(x339/x340)));

	if (t69 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x341 = INT32_MIN;
	uint64_t x342 = 23987989389773LLU;
	int64_t x343 = INT64_MIN;
	volatile int32_t x344 = 6;
	static volatile uint64_t t70 = 1LLU;

	t70 = (x341*(x342|(x343/x344)));

	if (t70 != 3035613102331658240LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x349 = 13644601LLU;
	uint64_t x350 = 4160116057LLU;
	int8_t x351 = INT8_MIN;
	volatile uint64_t t71 = 1588092806LLU;

	t71 = (x349*(x350|(x351/x352)));

	if (t71 != 56763123711458257LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x357 = 1;
	int64_t x358 = 138503246845504109LL;
	int8_t x359 = INT8_MAX;
	static int8_t x360 = INT8_MAX;
	volatile int64_t t72 = -1LL;

	t72 = (x357*(x358|(x359/x360)));

	if (t72 != 138503246845504109LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x361 = 429;
	int64_t x362 = INT64_MIN;
	int16_t x363 = -1;
	int32_t x364 = 1;

	t73 = (x361*(x362|(x363/x364)));

	if (t73 != -429LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x365 = 2;
	int16_t x366 = INT16_MIN;
	static volatile int8_t x367 = INT8_MAX;
	static volatile uint16_t x368 = UINT16_MAX;
	static int32_t t74 = 1;

	t74 = (x365*(x366|(x367/x368)));

	if (t74 != -65536) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x369 = 2518212;
	int32_t x370 = -156;
	uint64_t x371 = UINT64_MAX;

	t75 = (x369*(x370|(x371/x372)));

	if (t75 != 18446744073319228756LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x373 = 906;
	volatile int32_t x374 = INT32_MIN;
	uint32_t x375 = 5U;
	volatile int32_t x376 = INT32_MAX;
	volatile uint32_t t76 = 40319355U;

	t76 = (x373*(x374|(x375/x376)));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x377 = 1U;
	int64_t x378 = INT64_MIN;
	int32_t x379 = INT32_MAX;
	volatile uint32_t x380 = 816U;
	int64_t t77 = 416456060LL;

	t77 = (x377*(x378|(x379/x380)));

	if (t77 != -9223372036852144088LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x381 = 460U;
	static int64_t t78 = -222084786129080LL;

	t78 = (x381*(x382|(x383/x384)));

	if (t78 != -58880LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x389 = INT16_MIN;
	volatile int32_t x390 = -295335;
	int64_t x392 = -413039152166883793LL;
	volatile int64_t t79 = -31LL;

	t79 = (x389*(x390|(x391/x392)));

	if (t79 != 9677537280LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x393 = -12;
	int64_t x394 = -64401LL;
	int8_t x396 = INT8_MIN;
	int64_t t80 = 4213477213LL;

	t80 = (x393*(x394|(x395/x396)));

	if (t80 != 772812LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x397 = UINT8_MAX;
	int32_t x398 = 27684;
	static uint64_t x399 = UINT64_MAX;
	int8_t x400 = INT8_MIN;
	volatile uint64_t t81 = 11LLU;

	t81 = (x397*(x398|(x399/x400)));

	if (t81 != 7059675LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x403 = INT8_MIN;
	static volatile uint16_t x404 = UINT16_MAX;
	volatile int64_t t82 = -15902507LL;

	t82 = (x401*(x402|(x403/x404)));

	if (t82 != -51LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x405 = INT8_MIN;
	uint8_t x407 = 60U;
	int32_t x408 = -63;
	volatile int32_t t83 = 355085;

	t83 = (x405*(x406|(x407/x408)));

	if (t83 != -259584) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x409 = -3;
	uint8_t x410 = UINT8_MAX;
	volatile uint8_t x411 = UINT8_MAX;
	int16_t x412 = INT16_MAX;

	t84 = (x409*(x410|(x411/x412)));

	if (t84 != -765) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x418 = 198598U;
	uint8_t x419 = UINT8_MAX;
	volatile uint32_t t85 = 44147U;

	t85 = (x417*(x418|(x419/x420)));

	if (t85 != 57U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x421 = 27788U;
	int32_t x423 = INT32_MAX;
	int8_t x424 = INT8_MIN;
	volatile uint32_t t86 = 93U;

	t86 = (x421*(x422|(x423/x424)));

	if (t86 != 1946184844U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x425 = INT32_MIN;
	static uint64_t x427 = UINT64_MAX;
	int16_t x428 = INT16_MIN;
	volatile uint64_t t87 = 5967705893LLU;

	t87 = (x425*(x426|(x427/x428)));

	if (t87 != 2147483648LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x429 = 8U;
	int32_t x430 = -109;
	int64_t x431 = INT64_MIN;
	int8_t x432 = INT8_MIN;
	int64_t t88 = -94468328LL;

	t88 = (x429*(x430|(x431/x432)));

	if (t88 != -872LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x434 = INT64_MAX;
	uint8_t x435 = 1U;
	uint64_t x436 = 178656163268460641LLU;
	volatile uint64_t t89 = 85625LLU;

	t89 = (x433*(x434|(x435/x436)));

	if (t89 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x437 = INT64_MIN;
	int32_t x438 = INT32_MIN;
	uint64_t x439 = 363535245157916LLU;
	static int64_t x440 = -1LL;
	uint64_t t90 = 3LLU;

	t90 = (x437*(x438|(x439/x440)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x442 = -1LL;
	int8_t x444 = 4;
	static int64_t t91 = -193809LL;

	t91 = (x441*(x442|(x443/x444)));

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x445 = 1535;
	int32_t x448 = INT32_MAX;
	volatile int32_t t92 = -190;

	t92 = (x445*(x446|(x447/x448)));

	if (t92 != -50297345) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x453 = -1;
	int64_t x454 = -1LL;
	uint32_t x455 = 12250U;
	int32_t x456 = INT32_MIN;
	int64_t t93 = -6743844282295869LL;

	t93 = (x453*(x454|(x455/x456)));

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x461 = 19U;
	int16_t x463 = 2792;
	uint8_t x464 = 4U;

	t94 = (x461*(x462|(x463/x464)));

	if (t94 != 246810) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x465 = UINT32_MAX;
	int32_t x466 = INT32_MAX;
	int32_t x468 = INT32_MAX;
	static volatile uint32_t t95 = 78939512U;

	t95 = (x465*(x466|(x467/x468)));

	if (t95 != 2147483649U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x474 = -3;
	uint8_t x475 = UINT8_MAX;
	volatile uint8_t x476 = 41U;
	volatile uint64_t t96 = 53111334501916684LLU;

	t96 = (x473*(x474|(x475/x476)));

	if (t96 != 18444776651437256207LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x477 = INT32_MAX;
	static uint8_t x478 = 12U;
	int8_t x479 = INT8_MAX;
	uint64_t x480 = UINT64_MAX;
	volatile uint64_t t97 = 22127440274LLU;

	t97 = (x477*(x478|(x479/x480)));

	if (t97 != 25769803764LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x481 = -1;
	volatile int16_t x482 = INT16_MIN;
	int8_t x483 = 4;
	uint8_t x484 = 2U;
	int32_t t98 = -1;

	t98 = (x481*(x482|(x483/x484)));

	if (t98 != 32766) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x485 = 1U;
	static uint32_t x486 = UINT32_MAX;
	volatile int32_t x487 = INT32_MAX;
	int32_t x488 = INT32_MIN;
	volatile uint32_t t99 = UINT32_MAX;

	t99 = (x485*(x486|(x487/x488)));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

