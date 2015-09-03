#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = -229508582004032237LL;
int32_t t1 = -6;
static volatile uint32_t t2 = 274U;
uint64_t x15 = UINT64_MAX;
volatile int8_t x16 = INT8_MAX;
int64_t x19 = INT64_MAX;
volatile int64_t x24 = INT64_MIN;
static int64_t t5 = INT64_MIN;
static int64_t x28 = INT64_MIN;
volatile int64_t t6 = 6509490266LL;
volatile int32_t t8 = -15;
volatile int8_t x37 = -3;
volatile int64_t x40 = INT64_MAX;
int32_t x43 = INT32_MIN;
int32_t t12 = 36452736;
int32_t t16 = 30;
volatile uint32_t x70 = 231253U;
static uint16_t x73 = 0U;
volatile int32_t t20 = -1162623;
volatile int8_t x85 = -36;
static int8_t x86 = INT8_MIN;
int32_t t21 = -293216969;
uint8_t x89 = UINT8_MAX;
uint32_t x91 = 1026722485U;
static volatile uint64_t t24 = 17830992021361LLU;
static uint64_t x102 = 222454493LLU;
uint32_t x105 = UINT32_MAX;
uint16_t x107 = 151U;
int8_t x114 = 15;
volatile uint64_t x116 = UINT64_MAX;
volatile int32_t t31 = 48150;
int64_t x131 = -1LL;
int32_t x132 = 13;
volatile uint64_t t33 = UINT64_MAX;
uint16_t x140 = 51U;
int32_t t34 = 29617624;
uint64_t x144 = 3116932938204LLU;
static volatile int64_t t35 = -836648568640LL;
uint16_t x145 = UINT16_MAX;
static uint32_t x148 = 7199U;
uint64_t t37 = 4376182805LLU;
static int32_t x168 = INT32_MAX;
int64_t t42 = INT64_MIN;
uint16_t x176 = 1U;
volatile uint64_t t45 = 2708992173LLU;
static uint64_t x186 = 2875928769LLU;
uint16_t x196 = UINT16_MAX;
uint64_t t49 = 31305104LLU;
int8_t x207 = INT8_MAX;
volatile int64_t t52 = -1LL;
static int8_t x217 = -1;
int16_t x219 = INT16_MAX;
int8_t x220 = INT8_MIN;
static int32_t x239 = -301;
int64_t t60 = INT64_MIN;
static uint8_t x246 = 30U;
volatile uint64_t x247 = UINT64_MAX;
volatile int64_t x250 = 2789209919638354759LL;
static int64_t x254 = INT64_MIN;
int32_t x255 = INT32_MIN;
static volatile int32_t x256 = INT32_MAX;
int64_t x260 = -112090697499441380LL;
volatile int64_t t64 = INT64_MIN;
int64_t x277 = INT64_MAX;
static uint64_t x279 = 3LLU;
int16_t x280 = INT16_MAX;
int32_t x282 = -52618773;
int16_t x295 = 229;
uint8_t x300 = 127U;
int32_t t74 = 160;
volatile int8_t x303 = INT8_MIN;
uint32_t x306 = 113027900U;
int32_t x311 = INT32_MIN;
int64_t x314 = INT64_MAX;
int16_t x315 = -7579;
volatile int8_t x316 = INT8_MIN;
int32_t x318 = INT32_MAX;
static int64_t t80 = -411LL;
uint16_t x332 = 0U;
static int32_t x336 = INT32_MIN;
volatile int8_t x342 = -63;
volatile int32_t t85 = 1853;
uint8_t x345 = 108U;
int32_t x349 = INT32_MAX;
int32_t x350 = -48514;
int64_t x351 = INT64_MAX;
volatile uint16_t x354 = 1U;
static int32_t x360 = INT32_MAX;
int32_t t92 = -6;
int64_t x375 = 18128776481810629LL;
volatile int8_t x376 = 1;
static volatile int32_t t93 = 2411;
int32_t x377 = INT32_MIN;
static int16_t x378 = INT16_MAX;
int32_t t95 = -5373;
uint64_t x394 = UINT64_MAX;
int64_t x396 = INT64_MIN;
int64_t t99 = -736255347576LL;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	uint64_t x2 = 1967348LLU;
	volatile int8_t x3 = -1;
	int16_t x4 = -1;
	static int32_t t0 = 1787;

	t0 = (x1|(x2==(x3<x4)));

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = 8U;
	int64_t x7 = INT64_MIN;
	volatile int16_t x8 = -8226;

	t1 = (x5|(x6==(x7<x8)));

	if (t1 != 8) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 6U;
	volatile int16_t x10 = -3;
	int64_t x11 = INT64_MAX;
	static uint8_t x12 = 24U;

	t2 = (x9|(x10==(x11<x12)));

	if (t2 != 6U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int8_t x14 = -1;
	static volatile int64_t t3 = INT64_MIN;

	t3 = (x13|(x14==(x15<x16)));

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 90U;
	int16_t x18 = -818;
	static int64_t x20 = INT64_MAX;
	int32_t t4 = 761;

	t4 = (x17|(x18==(x19<x20)));

	if (t4 != 90) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int16_t x22 = INT16_MIN;
	volatile uint16_t x23 = UINT16_MAX;

	t5 = (x21|(x22==(x23<x24)));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	volatile int16_t x26 = -86;
	static int8_t x27 = INT8_MAX;

	t6 = (x25|(x26==(x27<x28)));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = 6;
	int16_t x30 = 945;
	int8_t x31 = INT8_MIN;
	static uint16_t x32 = 19821U;
	int32_t t7 = 17185;

	t7 = (x29|(x30==(x31<x32)));

	if (t7 != 6) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	volatile uint8_t x34 = 32U;
	int32_t x35 = INT32_MIN;
	static volatile int16_t x36 = -1;

	t8 = (x33|(x34==(x35<x36)));

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = INT32_MIN;
	uint32_t x39 = 11U;
	volatile int32_t t9 = -3;

	t9 = (x37|(x38==(x39<x40)));

	if (t9 != -3) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 2465U;
	int16_t x42 = INT16_MIN;
	int32_t x44 = 394791;
	int32_t t10 = -6;

	t10 = (x41|(x42==(x43<x44)));

	if (t10 != 2465) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = -1;
	volatile int64_t x46 = INT64_MIN;
	static int16_t x47 = INT16_MIN;
	volatile uint8_t x48 = 39U;
	volatile int32_t t11 = -91;

	t11 = (x45|(x46==(x47<x48)));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = 6;
	int32_t x50 = INT32_MIN;
	volatile uint64_t x51 = 1494181419488089067LLU;
	int32_t x52 = 44161;

	t12 = (x49|(x50==(x51<x52)));

	if (t12 != 6) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 297;
	static int32_t x54 = -1917582;
	int32_t x55 = 8448472;
	uint16_t x56 = 1216U;
	int32_t t13 = 0;

	t13 = (x53|(x54==(x55<x56)));

	if (t13 != 297) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = INT64_MAX;
	static uint16_t x58 = UINT16_MAX;
	uint32_t x59 = 20165U;
	int16_t x60 = INT16_MAX;
	volatile int64_t t14 = INT64_MAX;

	t14 = (x57|(x58==(x59<x60)));

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = -515322;
	int8_t x62 = -1;
	int8_t x63 = -1;
	int64_t x64 = 355939800117709LL;
	volatile int32_t t15 = 322299659;

	t15 = (x61|(x62==(x63<x64)));

	if (t15 != -515322) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -2650;
	int64_t x66 = INT64_MIN;
	static uint16_t x67 = 3016U;
	uint8_t x68 = 3U;

	t16 = (x65|(x66==(x67<x68)));

	if (t16 != -2650) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -21;
	int32_t x71 = INT32_MAX;
	int16_t x72 = INT16_MIN;
	volatile int32_t t17 = -1;

	t17 = (x69|(x70==(x71<x72)));

	if (t17 != -21) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = -1;
	int64_t x75 = INT64_MIN;
	int64_t x76 = -1LL;
	volatile int32_t t18 = -3074;

	t18 = (x73|(x74==(x75<x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x77 = INT8_MIN;
	int16_t x78 = 1;
	static int16_t x79 = -1;
	int8_t x80 = 2;
	volatile int32_t t19 = -29493762;

	t19 = (x77|(x78==(x79<x80)));

	if (t19 != -127) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	static int32_t x82 = -1;
	volatile int8_t x83 = -63;
	int16_t x84 = INT16_MIN;

	t20 = (x81|(x82==(x83<x84)));

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x87 = INT32_MIN;
	int32_t x88 = -1;

	t21 = (x85|(x86==(x87<x88)));

	if (t21 != -36) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x90 = 6731172LLU;
	int8_t x92 = -1;
	static int32_t t22 = 835434543;

	t22 = (x89|(x90==(x91<x92)));

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = -15120679;
	static int64_t x94 = INT64_MIN;
	static int16_t x95 = INT16_MAX;
	volatile int64_t x96 = INT64_MIN;
	volatile int32_t t23 = 73720;

	t23 = (x93|(x94==(x95<x96)));

	if (t23 != -15120679) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 27436LLU;
	static uint64_t x98 = UINT64_MAX;
	int64_t x99 = INT64_MAX;
	uint32_t x100 = 11230U;

	t24 = (x97|(x98==(x99<x100)));

	if (t24 != 27436LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -48;
	uint16_t x103 = 7U;
	int8_t x104 = INT8_MIN;
	volatile int32_t t25 = -387971987;

	t25 = (x101|(x102==(x103<x104)));

	if (t25 != -48) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x106 = UINT16_MAX;
	int32_t x108 = 98364771;
	uint32_t t26 = UINT32_MAX;

	t26 = (x105|(x106==(x107<x108)));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = -3;
	uint64_t x110 = 27895450581553LLU;
	static uint16_t x111 = UINT16_MAX;
	volatile int16_t x112 = -1;
	int32_t t27 = 2803268;

	t27 = (x109|(x110==(x111<x112)));

	if (t27 != -3) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = INT8_MAX;
	uint8_t x115 = 1U;
	volatile int32_t t28 = -5417;

	t28 = (x113|(x114==(x115<x116)));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	uint16_t x118 = 8195U;
	int64_t x119 = INT64_MIN;
	uint64_t x120 = 2077164042559466725LLU;
	int32_t t29 = 11601879;

	t29 = (x117|(x118==(x119<x120)));

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = UINT16_MAX;
	static int64_t x122 = INT64_MAX;
	int32_t x123 = -1;
	uint64_t x124 = 1960481675964809936LLU;
	int32_t t30 = 254852238;

	t30 = (x121|(x122==(x123<x124)));

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	static int8_t x126 = 0;
	uint8_t x127 = 30U;
	static int16_t x128 = -7;

	t31 = (x125|(x126==(x127<x128)));

	if (t31 != -2147483647) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	uint32_t x130 = 105968826U;
	int32_t t32 = INT32_MIN;

	t32 = (x129|(x130==(x131<x132)));

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = UINT64_MAX;
	static uint8_t x134 = 6U;
	int8_t x135 = -1;
	static uint8_t x136 = UINT8_MAX;

	t33 = (x133|(x134==(x135<x136)));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;
	int32_t x138 = -123;
	int64_t x139 = INT64_MAX;

	t34 = (x137|(x138==(x139<x140)));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x141 = INT64_MIN;
	uint8_t x142 = 1U;
	int16_t x143 = 83;

	t35 = (x141|(x142==(x143<x144)));

	if (t35 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x146 = INT16_MAX;
	int64_t x147 = INT64_MAX;
	static volatile int32_t t36 = 0;

	t36 = (x145|(x146==(x147<x148)));

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 172LLU;
	static volatile uint8_t x150 = 7U;
	volatile uint16_t x151 = 240U;
	uint64_t x152 = 37150888161LLU;

	t37 = (x149|(x150==(x151<x152)));

	if (t37 != 172LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -1;
	int64_t x154 = 8638691987239577LL;
	int32_t x155 = -1;
	volatile int16_t x156 = INT16_MAX;
	volatile int32_t t38 = 1023;

	t38 = (x153|(x154==(x155<x156)));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 318U;
	volatile int16_t x158 = INT16_MAX;
	int64_t x159 = INT64_MAX;
	int64_t x160 = INT64_MAX;
	int32_t t39 = -6337;

	t39 = (x157|(x158==(x159<x160)));

	if (t39 != 318) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x161 = INT64_MIN;
	volatile int32_t x162 = INT32_MAX;
	int8_t x163 = 1;
	volatile int64_t x164 = INT64_MIN;
	volatile int64_t t40 = INT64_MIN;

	t40 = (x161|(x162==(x163<x164)));

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 8674467U;
	int64_t x166 = -1LL;
	static int8_t x167 = -2;
	uint32_t t41 = 26U;

	t41 = (x165|(x166==(x167<x168)));

	if (t41 != 8674467U) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x169 = INT64_MIN;
	int64_t x170 = -21706857068366LL;
	static int16_t x171 = INT16_MAX;
	int16_t x172 = INT16_MIN;

	t42 = (x169|(x170==(x171<x172)));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = 499;
	uint8_t x174 = 7U;
	static uint64_t x175 = 0LLU;
	int32_t t43 = 6651;

	t43 = (x173|(x174==(x175<x176)));

	if (t43 != 499) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MAX;
	uint32_t x178 = 1257762665U;
	int16_t x179 = -1;
	volatile uint16_t x180 = UINT16_MAX;
	int32_t t44 = 99120;

	t44 = (x177|(x178==(x179<x180)));

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 1003995LLU;
	volatile int16_t x182 = INT16_MIN;
	static int32_t x183 = INT32_MIN;
	volatile int32_t x184 = 225;

	t45 = (x181|(x182==(x183<x184)));

	if (t45 != 1003995LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x185 = -647117564854283612LL;
	volatile int32_t x187 = INT32_MAX;
	int32_t x188 = INT32_MAX;
	static int64_t t46 = 2147194325302LL;

	t46 = (x185|(x186==(x187<x188)));

	if (t46 != -647117564854283612LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = UINT16_MAX;
	volatile int16_t x190 = 283;
	int8_t x191 = INT8_MAX;
	volatile int32_t x192 = -1;
	volatile int32_t t47 = -194711;

	t47 = (x189|(x190==(x191<x192)));

	if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x193 = INT32_MAX;
	int16_t x194 = -1;
	volatile uint8_t x195 = 62U;
	static int32_t t48 = INT32_MAX;

	t48 = (x193|(x194==(x195<x196)));

	if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint64_t x197 = 3102988403757761372LLU;
	int16_t x198 = 13877;
	static uint32_t x199 = UINT32_MAX;
	int32_t x200 = INT32_MIN;

	t49 = (x197|(x198==(x199<x200)));

	if (t49 != 3102988403757761372LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x201 = UINT16_MAX;
	uint16_t x202 = 2U;
	static uint32_t x203 = 1669564U;
	static volatile int32_t x204 = 42399953;
	static volatile int32_t t50 = 817803693;

	t50 = (x201|(x202==(x203<x204)));

	if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	int32_t x206 = INT32_MIN;
	volatile int16_t x208 = INT16_MIN;
	static int64_t t51 = INT64_MIN;

	t51 = (x205|(x206==(x207<x208)));

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -1LL;
	uint64_t x210 = UINT64_MAX;
	int8_t x211 = 2;
	static int8_t x212 = -1;

	t52 = (x209|(x210==(x211<x212)));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MAX;
	static int8_t x214 = INT8_MIN;
	int16_t x215 = INT16_MAX;
	static uint8_t x216 = 2U;
	volatile int32_t t53 = 1;

	t53 = (x213|(x214==(x215<x216)));

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x218 = INT64_MIN;
	int32_t t54 = 1007178965;

	t54 = (x217|(x218==(x219<x220)));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x221 = INT64_MIN;
	uint32_t x222 = UINT32_MAX;
	volatile int32_t x223 = 6438507;
	uint16_t x224 = 3U;
	volatile int64_t t55 = INT64_MIN;

	t55 = (x221|(x222==(x223<x224)));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = UINT16_MAX;
	int8_t x226 = INT8_MAX;
	int8_t x227 = 17;
	volatile uint32_t x228 = 68U;
	int32_t t56 = -1;

	t56 = (x225|(x226==(x227<x228)));

	if (t56 != 65535) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MAX;
	int8_t x230 = INT8_MAX;
	static int32_t x231 = 9007;
	uint16_t x232 = UINT16_MAX;
	volatile int32_t t57 = 39;

	t57 = (x229|(x230==(x231<x232)));

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -1;
	volatile int32_t x234 = INT32_MIN;
	uint8_t x235 = 4U;
	int16_t x236 = INT16_MIN;
	static volatile int32_t t58 = 10;

	t58 = (x233|(x234==(x235<x236)));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = -1;
	volatile int32_t x238 = 1146;
	static int64_t x240 = -373530981LL;
	volatile int32_t t59 = -258917;

	t59 = (x237|(x238==(x239<x240)));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MIN;
	int64_t x242 = INT64_MIN;
	int64_t x243 = INT64_MIN;
	int8_t x244 = 1;

	t60 = (x241|(x242==(x243<x244)));

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = 302806301;
	uint8_t x248 = 2U;
	int32_t t61 = 3755786;

	t61 = (x245|(x246==(x247<x248)));

	if (t61 != 302806301) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = 129;
	volatile int32_t x251 = -1;
	volatile int16_t x252 = INT16_MIN;
	int32_t t62 = -292661;

	t62 = (x249|(x250==(x251<x252)));

	if (t62 != 129) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x253 = INT32_MAX;
	static volatile int32_t t63 = INT32_MAX;

	t63 = (x253|(x254==(x255<x256)));

	if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	volatile int8_t x258 = INT8_MIN;
	static uint64_t x259 = 382176410798584LLU;

	t64 = (x257|(x258==(x259<x260)));

	if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x261 = UINT8_MAX;
	int8_t x262 = 1;
	uint64_t x263 = 256676367071132LLU;
	int32_t x264 = 471;
	int32_t t65 = -47753608;

	t65 = (x261|(x262==(x263<x264)));

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x265 = -1;
	int64_t x266 = -1LL;
	static int32_t x267 = -1;
	int64_t x268 = -1LL;
	int32_t t66 = -114853693;

	t66 = (x265|(x266==(x267<x268)));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x269 = -1;
	static volatile uint8_t x270 = 0U;
	uint8_t x271 = 2U;
	uint16_t x272 = UINT16_MAX;
	volatile int32_t t67 = 50559772;

	t67 = (x269|(x270==(x271<x272)));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MIN;
	uint32_t x274 = 15726124U;
	uint8_t x275 = 104U;
	uint64_t x276 = 127436LLU;
	int32_t t68 = INT32_MIN;

	t68 = (x273|(x274==(x275<x276)));

	if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x278 = -1;
	int64_t t69 = INT64_MAX;

	t69 = (x277|(x278==(x279<x280)));

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -1;
	uint16_t x283 = 7U;
	volatile uint64_t x284 = 48897LLU;
	volatile int32_t t70 = -1;

	t70 = (x281|(x282==(x283<x284)));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = -1;
	uint64_t x286 = 0LLU;
	volatile int64_t x287 = INT64_MAX;
	uint8_t x288 = UINT8_MAX;
	volatile int32_t t71 = 1;

	t71 = (x285|(x286==(x287<x288)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	volatile int16_t x290 = INT16_MIN;
	static volatile int32_t x291 = INT32_MAX;
	uint64_t x292 = 85895308LLU;
	volatile int32_t t72 = -1;

	t72 = (x289|(x290==(x291<x292)));

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = INT64_MAX;
	static volatile int64_t x294 = 66732097840LL;
	uint64_t x296 = 1908269LLU;
	volatile int64_t t73 = INT64_MAX;

	t73 = (x293|(x294==(x295<x296)));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x297 = -440;
	int8_t x298 = INT8_MAX;
	uint16_t x299 = 67U;

	t74 = (x297|(x298==(x299<x300)));

	if (t74 != -440) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x301 = 10133244150LL;
	volatile uint8_t x302 = 21U;
	int64_t x304 = -1LL;
	volatile int64_t t75 = -4142315704044LL;

	t75 = (x301|(x302==(x303<x304)));

	if (t75 != 10133244150LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = UINT8_MAX;
	int32_t x307 = INT32_MIN;
	int8_t x308 = INT8_MAX;
	volatile int32_t t76 = 26;

	t76 = (x305|(x306==(x307<x308)));

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -1;
	uint32_t x310 = 92468888U;
	volatile uint8_t x312 = 31U;
	volatile int32_t t77 = -6363;

	t77 = (x309|(x310==(x311<x312)));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x313 = -2596913;
	static int32_t t78 = 3962264;

	t78 = (x313|(x314==(x315<x316)));

	if (t78 != -2596913) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x317 = 29U;
	int16_t x319 = INT16_MAX;
	volatile int64_t x320 = INT64_MAX;
	int32_t t79 = -10979782;

	t79 = (x317|(x318==(x319<x320)));

	if (t79 != 29) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x321 = -10491285766739871LL;
	static uint8_t x322 = UINT8_MAX;
	static uint8_t x323 = UINT8_MAX;
	int16_t x324 = -1;

	t80 = (x321|(x322==(x323<x324)));

	if (t80 != -10491285766739871LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = -2;
	int8_t x326 = INT8_MAX;
	static int16_t x327 = -1;
	int32_t x328 = -1;
	int32_t t81 = 2290324;

	t81 = (x325|(x326==(x327<x328)));

	if (t81 != -2) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -1;
	uint8_t x330 = UINT8_MAX;
	int32_t x331 = INT32_MIN;
	int32_t t82 = -1025013;

	t82 = (x329|(x330==(x331<x332)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	int16_t x334 = INT16_MIN;
	int8_t x335 = 10;
	int32_t t83 = INT32_MIN;

	t83 = (x333|(x334==(x335<x336)));

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MAX;
	int8_t x338 = INT8_MIN;
	uint16_t x339 = 0U;
	int16_t x340 = INT16_MIN;
	int32_t t84 = INT32_MAX;

	t84 = (x337|(x338==(x339<x340)));

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x341 = INT16_MIN;
	int64_t x343 = -1LL;
	static uint64_t x344 = 62312066319LLU;

	t85 = (x341|(x342==(x343<x344)));

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x346 = 1U;
	int64_t x347 = -1LL;
	uint32_t x348 = 906662U;
	static volatile int32_t t86 = -1221975;

	t86 = (x345|(x346==(x347<x348)));

	if (t86 != 109) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x352 = 1326815422U;
	static int32_t t87 = INT32_MAX;

	t87 = (x349|(x350==(x351<x352)));

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = 0U;
	uint32_t x355 = 907359U;
	uint64_t x356 = 264219392LLU;
	volatile int32_t t88 = -58720884;

	t88 = (x353|(x354==(x355<x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = UINT16_MAX;
	int32_t x358 = INT32_MAX;
	int16_t x359 = INT16_MIN;
	int32_t t89 = -76575762;

	t89 = (x357|(x358==(x359<x360)));

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x361 = 2U;
	static int16_t x362 = -1;
	uint8_t x363 = UINT8_MAX;
	static volatile uint32_t x364 = UINT32_MAX;
	int32_t t90 = 302352477;

	t90 = (x361|(x362==(x363<x364)));

	if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x365 = 1U;
	volatile int64_t x366 = INT64_MIN;
	volatile int16_t x367 = INT16_MIN;
	static int8_t x368 = INT8_MIN;
	int32_t t91 = -52709;

	t91 = (x365|(x366==(x367<x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	int16_t x370 = -1;
	int8_t x371 = -9;
	static int64_t x372 = INT64_MIN;

	t92 = (x369|(x370==(x371<x372)));

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x373 = -1;
	volatile int32_t x374 = -1;

	t93 = (x373|(x374==(x375<x376)));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x379 = INT16_MIN;
	volatile uint64_t x380 = UINT64_MAX;
	volatile int32_t t94 = INT32_MIN;

	t94 = (x377|(x378==(x379<x380)));

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = 3;
	uint32_t x382 = UINT32_MAX;
	static int16_t x383 = -1;
	volatile uint16_t x384 = UINT16_MAX;

	t95 = (x381|(x382==(x383<x384)));

	if (t95 != 3) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = -6478LL;
	int16_t x386 = -14;
	int8_t x387 = -8;
	int8_t x388 = 1;
	int64_t t96 = 1LL;

	t96 = (x385|(x386==(x387<x388)));

	if (t96 != -6478LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x389 = 4397;
	int8_t x390 = -1;
	uint64_t x391 = 437415623695261883LLU;
	uint32_t x392 = 392267255U;
	int32_t t97 = 39363;

	t97 = (x389|(x390==(x391<x392)));

	if (t97 != 4397) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x393 = 801133552252397LLU;
	static int8_t x395 = -31;
	volatile uint64_t t98 = 3LLU;

	t98 = (x393|(x394==(x395<x396)));

	if (t98 != 801133552252397LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x397 = 1730628563LL;
	int8_t x398 = 3;
	volatile int32_t x399 = INT32_MIN;
	int16_t x400 = INT16_MIN;

	t99 = (x397|(x398==(x399<x400)));

	if (t99 != 1730628563LL) { NG(); } else { ; }
	
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

