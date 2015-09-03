#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = INT32_MIN;
uint16_t x5 = 17U;
volatile int16_t x11 = INT16_MIN;
uint32_t x12 = 148831U;
int16_t x16 = 24;
int8_t x18 = INT8_MIN;
int16_t x19 = 118;
volatile int16_t x20 = INT16_MIN;
uint16_t x25 = UINT16_MAX;
int32_t x27 = INT32_MIN;
volatile int32_t x35 = INT32_MIN;
volatile uint32_t t8 = UINT32_MAX;
int32_t x43 = -28917;
static int64_t x44 = -13851311686883964LL;
static uint32_t x45 = 787U;
volatile int64_t t12 = -978578209801LL;
int16_t x53 = -1;
static int32_t x57 = -1;
uint8_t x60 = UINT8_MAX;
int16_t x65 = INT16_MAX;
static volatile int32_t x72 = -87;
int16_t x74 = -1;
volatile uint64_t t19 = 38568862981LLU;
volatile int64_t x81 = INT64_MIN;
volatile int16_t x90 = INT16_MAX;
int64_t t23 = -934833954LL;
static int64_t x97 = INT64_MIN;
int64_t x101 = -1LL;
volatile int32_t x115 = 393;
static volatile int64_t t28 = -5716705737563179LL;
static int32_t x117 = INT32_MIN;
int32_t x125 = INT32_MIN;
int64_t x131 = INT64_MAX;
volatile int32_t t33 = 124;
static int16_t x144 = INT16_MIN;
volatile uint64_t t36 = 1047650063481332LLU;
int8_t x155 = 2;
int64_t x156 = INT64_MIN;
int8_t x159 = 0;
static uint8_t x167 = UINT8_MAX;
volatile int32_t t43 = 1;
static volatile int32_t x179 = INT32_MIN;
int16_t x180 = INT16_MAX;
int32_t t45 = -33941;
uint8_t x186 = 49U;
volatile int16_t x187 = 1926;
uint64_t x188 = 3572387063945LLU;
int16_t x195 = -7;
static uint16_t x201 = 5978U;
static volatile uint64_t x202 = 259310940476820907LLU;
int8_t x203 = -1;
volatile int16_t x211 = -1;
int8_t x213 = INT8_MAX;
int16_t x214 = INT16_MIN;
volatile uint64_t x215 = UINT64_MAX;
static volatile uint32_t t55 = 447U;
static uint32_t x228 = 3U;
volatile int32_t t56 = 572755670;
uint32_t x238 = 38U;
int8_t x239 = INT8_MIN;
static uint8_t x241 = UINT8_MAX;
static uint8_t x250 = 40U;
static volatile int16_t x266 = -1;
uint16_t x268 = 37U;
int64_t x270 = 341LL;
int8_t x272 = -20;
uint32_t x284 = 1337333905U;
int16_t x287 = -175;
int64_t x297 = INT64_MIN;
uint16_t x298 = UINT16_MAX;
int32_t x299 = INT32_MIN;
int32_t x309 = INT32_MIN;
int16_t x315 = INT16_MIN;
int8_t x317 = INT8_MIN;
volatile int32_t x318 = -94011321;
volatile int16_t x321 = INT16_MAX;
int16_t x324 = INT16_MIN;
int32_t t80 = -3;
uint8_t x335 = 0U;
static volatile uint16_t x336 = UINT16_MAX;
volatile int8_t x348 = -1;
static volatile int16_t x352 = INT16_MAX;
int8_t x355 = INT8_MIN;
int64_t t89 = -6042341366564LL;
static int64_t t90 = -224271692944311LL;
volatile int64_t t91 = -4981841555669LL;
static int32_t x385 = 31285;
static int64_t x386 = -30036117958LL;
volatile int64_t t96 = 2425158225LL;
int8_t x393 = -1;
volatile int32_t t98 = -7;


void f0(void) {
	int16_t x2 = INT16_MIN;
	volatile int8_t x3 = INT8_MIN;
	uint64_t x4 = 75730708LLU;
	volatile int32_t t0 = INT32_MIN;

	t0 = (x1|(x2*(x3<=x4)));

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x6 = -5;
	int32_t x7 = -1;
	int16_t x8 = INT16_MIN;
	static int32_t t1 = -10;

	t1 = (x5|(x6*(x7<=x8)));

	if (t1 != 17) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	uint8_t x10 = 6U;
	static volatile int32_t t2 = -11639042;

	t2 = (x9|(x10*(x11<=x12)));

	if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MIN;
	int64_t x14 = INT64_MAX;
	int8_t x15 = -1;
	int64_t t3 = 221619981007617LL;

	t3 = (x13|(x14*(x15<=x16)));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 1U;
	int32_t t4 = -91607322;

	t4 = (x17|(x18*(x19<=x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	volatile int16_t x22 = INT16_MIN;
	volatile uint64_t x23 = UINT64_MAX;
	int32_t x24 = -1;
	volatile int64_t t5 = -83391100183291LL;

	t5 = (x21|(x22*(x23<=x24)));

	if (t5 != -32768LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = -14249394618391LL;
	int32_t x28 = INT32_MAX;
	volatile int64_t t6 = -97LL;

	t6 = (x25|(x26*(x27<=x28)));

	if (t6 != -14249394569217LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	volatile int8_t x30 = -1;
	int32_t x31 = 1;
	static volatile int8_t x32 = INT8_MIN;
	volatile int32_t t7 = -940613429;

	t7 = (x29|(x30*(x31<=x32)));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -3;
	volatile uint32_t x34 = UINT32_MAX;
	uint32_t x36 = UINT32_MAX;

	t8 = (x33|(x34*(x35<=x36)));

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MAX;
	int32_t x38 = INT32_MIN;
	volatile uint8_t x39 = 0U;
	volatile uint16_t x40 = UINT16_MAX;
	int32_t t9 = -245;

	t9 = (x37|(x38*(x39<=x40)));

	if (t9 != -2147450881) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	int64_t x42 = -222790345960340LL;
	int64_t t10 = 234LL;

	t10 = (x41|(x42*(x43<=x44)));

	if (t10 != -2147483648LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x46 = 36U;
	uint8_t x47 = 14U;
	volatile int16_t x48 = -4;
	uint32_t t11 = 9932746U;

	t11 = (x45|(x46*(x47<=x48)));

	if (t11 != 787U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -240;
	int64_t x50 = 394684365654LL;
	int16_t x51 = 175;
	int64_t x52 = -1LL;

	t12 = (x49|(x50*(x51<=x52)));

	if (t12 != -240LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = INT16_MIN;
	volatile uint32_t x55 = 58U;
	int32_t x56 = 10313;
	int32_t t13 = -24;

	t13 = (x53|(x54*(x55<=x56)));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x58 = 1U;
	int16_t x59 = -176;
	int32_t t14 = -50035;

	t14 = (x57|(x58*(x59<=x60)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = 41815LL;
	int8_t x62 = INT8_MAX;
	static volatile int32_t x63 = INT32_MIN;
	int32_t x64 = INT32_MAX;
	volatile int64_t t15 = -731187450983363LL;

	t15 = (x61|(x62*(x63<=x64)));

	if (t15 != 41855LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = -11957539390681LL;
	uint64_t x67 = UINT64_MAX;
	int32_t x68 = INT32_MAX;
	volatile int64_t t16 = -5689479739660861LL;

	t16 = (x65|(x66*(x67<=x68)));

	if (t16 != 32767LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	uint64_t x70 = UINT64_MAX;
	volatile uint16_t x71 = UINT16_MAX;
	uint64_t t17 = 7424585758100211LLU;

	t17 = (x69|(x70*(x71<=x72)));

	if (t17 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MAX;
	static int8_t x75 = INT8_MIN;
	uint64_t x76 = 3003LLU;
	volatile int64_t t18 = INT64_MAX;

	t18 = (x73|(x74*(x75<=x76)));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	uint64_t x78 = UINT64_MAX;
	static uint32_t x79 = 204U;
	int8_t x80 = INT8_MAX;

	t19 = (x77|(x78*(x79<=x80)));

	if (t19 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x82 = INT8_MAX;
	static int32_t x83 = -24;
	static volatile int8_t x84 = -1;
	static int64_t t20 = -558515102915467LL;

	t20 = (x81|(x82*(x83<=x84)));

	if (t20 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x85 = 1U;
	uint32_t x86 = 0U;
	int16_t x87 = -1432;
	int64_t x88 = INT64_MAX;
	uint32_t t21 = 73633995U;

	t21 = (x85|(x86*(x87<=x88)));

	if (t21 != 1U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MAX;
	int8_t x91 = INT8_MIN;
	int64_t x92 = -1LL;
	volatile int32_t t22 = INT32_MAX;

	t22 = (x89|(x90*(x91<=x92)));

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = INT64_MIN;
	int8_t x94 = INT8_MIN;
	volatile int8_t x95 = INT8_MIN;
	volatile int32_t x96 = -1;

	t23 = (x93|(x94*(x95<=x96)));

	if (t23 != -128LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x98 = UINT8_MAX;
	int8_t x99 = 6;
	int64_t x100 = -1LL;
	volatile int64_t t24 = INT64_MIN;

	t24 = (x97|(x98*(x99<=x100)));

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x102 = INT64_MAX;
	uint32_t x103 = UINT32_MAX;
	uint16_t x104 = UINT16_MAX;
	volatile int64_t t25 = -466525710216023LL;

	t25 = (x101|(x102*(x103<=x104)));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MAX;
	uint16_t x106 = 1076U;
	uint64_t x107 = 507196020407LLU;
	int64_t x108 = 439167546LL;
	static volatile int32_t t26 = 26874050;

	t26 = (x105|(x106*(x107<=x108)));

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x109 = 574U;
	int64_t x110 = INT64_MIN;
	int64_t x111 = INT64_MAX;
	uint64_t x112 = UINT64_MAX;
	volatile int64_t t27 = 692718751LL;

	t27 = (x109|(x110*(x111<=x112)));

	if (t27 != -9223372036854775234LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = 5;
	int64_t x114 = INT64_MIN;
	uint8_t x116 = 47U;

	t28 = (x113|(x114*(x115<=x116)));

	if (t28 != 5LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x118 = INT32_MIN;
	uint8_t x119 = UINT8_MAX;
	volatile int16_t x120 = INT16_MIN;
	int32_t t29 = INT32_MIN;

	t29 = (x117|(x118*(x119<=x120)));

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = 694191759LL;
	static int32_t x122 = 0;
	int8_t x123 = INT8_MIN;
	static int8_t x124 = -34;
	volatile int64_t t30 = 1LL;

	t30 = (x121|(x122*(x123<=x124)));

	if (t30 != 694191759LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = 587331075;
	static int64_t x127 = 13727464498071453LL;
	int8_t x128 = 1;
	volatile int32_t t31 = INT32_MIN;

	t31 = (x125|(x126*(x127<=x128)));

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x129 = 56604709U;
	int32_t x130 = INT32_MIN;
	static volatile int64_t x132 = INT64_MAX;
	uint32_t t32 = 10976292U;

	t32 = (x129|(x130*(x131<=x132)));

	if (t32 != 2204088357U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	int32_t x134 = 1956;
	uint16_t x135 = UINT16_MAX;
	volatile int8_t x136 = 0;

	t33 = (x133|(x134*(x135<=x136)));

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 959908U;
	int16_t x138 = INT16_MAX;
	volatile uint32_t x139 = UINT32_MAX;
	uint8_t x140 = UINT8_MAX;
	static volatile uint32_t t34 = 240512409U;

	t34 = (x137|(x138*(x139<=x140)));

	if (t34 != 959908U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -6;
	int16_t x142 = INT16_MAX;
	int16_t x143 = INT16_MIN;
	int32_t t35 = -65964;

	t35 = (x141|(x142*(x143<=x144)));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x145 = INT64_MIN;
	uint64_t x146 = 891153580LLU;
	int16_t x147 = -1;
	static volatile uint8_t x148 = UINT8_MAX;

	t36 = (x145|(x146*(x147<=x148)));

	if (t36 != 9223372037745929388LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -1;
	static int64_t x150 = INT64_MIN;
	uint64_t x151 = 2943985575024LLU;
	int64_t x152 = INT64_MAX;
	static volatile int64_t t37 = 111897410LL;

	t37 = (x149|(x150*(x151<=x152)));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 27827U;
	int16_t x154 = INT16_MAX;
	int32_t t38 = -85037;

	t38 = (x153|(x154*(x155<=x156)));

	if (t38 != 27827) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x157 = 22632U;
	int16_t x158 = -1;
	int16_t x160 = 5117;
	int32_t t39 = 11;

	t39 = (x157|(x158*(x159<=x160)));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	int64_t x162 = INT64_MIN;
	uint8_t x163 = 5U;
	uint64_t x164 = UINT64_MAX;
	int64_t t40 = INT64_MIN;

	t40 = (x161|(x162*(x163<=x164)));

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 2U;
	int32_t x166 = -1;
	int16_t x168 = -1;
	static volatile uint32_t t41 = 3U;

	t41 = (x165|(x166*(x167<=x168)));

	if (t41 != 2U) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x169 = -1;
	static int64_t x170 = 46705LL;
	uint16_t x171 = 573U;
	int16_t x172 = 7;
	int64_t t42 = 119863941LL;

	t42 = (x169|(x170*(x171<=x172)));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MAX;
	int32_t x174 = -2873546;
	volatile int32_t x175 = 304963288;
	int64_t x176 = INT64_MIN;

	t43 = (x173|(x174*(x175<=x176)));

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	uint16_t x178 = UINT16_MAX;
	int32_t t44 = -524956;

	t44 = (x177|(x178*(x179<=x180)));

	if (t44 != -2147418113) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x181 = INT16_MIN;
	static volatile int16_t x182 = -326;
	int64_t x183 = INT64_MAX;
	int8_t x184 = INT8_MIN;

	t45 = (x181|(x182*(x183<=x184)));

	if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = 6;
	volatile int32_t t46 = 163081069;

	t46 = (x185|(x186*(x187<=x188)));

	if (t46 != 55) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = INT64_MAX;
	int8_t x190 = 0;
	int32_t x191 = INT32_MAX;
	static uint32_t x192 = 48313970U;
	volatile int64_t t47 = INT64_MAX;

	t47 = (x189|(x190*(x191<=x192)));

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = UINT64_MAX;
	int8_t x194 = INT8_MIN;
	uint8_t x196 = 52U;
	uint64_t t48 = UINT64_MAX;

	t48 = (x193|(x194*(x195<=x196)));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 76608U;
	int64_t x198 = -1LL;
	int8_t x199 = -1;
	int8_t x200 = INT8_MAX;
	static volatile int64_t t49 = -26818038844940827LL;

	t49 = (x197|(x198*(x199<=x200)));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x204 = 1U;
	uint64_t t50 = 2217535LLU;

	t50 = (x201|(x202*(x203<=x204)));

	if (t50 != 259310940476825595LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -1;
	uint16_t x206 = UINT16_MAX;
	int64_t x207 = INT64_MIN;
	uint8_t x208 = 21U;
	volatile int32_t t51 = 1;

	t51 = (x205|(x206*(x207<=x208)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 8U;
	volatile int32_t x210 = INT32_MIN;
	int8_t x212 = -3;
	int32_t t52 = 1206;

	t52 = (x209|(x210*(x211<=x212)));

	if (t52 != 8) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x216 = 2814;
	volatile int32_t t53 = 1;

	t53 = (x213|(x214*(x215<=x216)));

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = UINT32_MAX;
	uint64_t x218 = 90076252021566LLU;
	int8_t x219 = -2;
	uint8_t x220 = UINT8_MAX;
	uint64_t t54 = 1106412213341949800LLU;

	t54 = (x217|(x218*(x219<=x220)));

	if (t54 != 90078349099007LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = INT32_MAX;
	volatile uint32_t x222 = 6676U;
	volatile int32_t x223 = INT32_MAX;
	uint8_t x224 = 34U;

	t55 = (x221|(x222*(x223<=x224)));

	if (t55 != 2147483647U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	uint16_t x226 = 356U;
	volatile int32_t x227 = -1;

	t56 = (x225|(x226*(x227<=x228)));

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = UINT8_MAX;
	int8_t x230 = INT8_MIN;
	uint16_t x231 = 623U;
	static int16_t x232 = 0;
	int32_t t57 = 2303;

	t57 = (x229|(x230*(x231<=x232)));

	if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x233 = -2;
	int32_t x234 = 332185;
	volatile int8_t x235 = 6;
	uint64_t x236 = 76092586024744LLU;
	volatile int32_t t58 = 1;

	t58 = (x233|(x234*(x235<=x236)));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 124U;
	int32_t x240 = INT32_MAX;
	volatile uint32_t t59 = 1615U;

	t59 = (x237|(x238*(x239<=x240)));

	if (t59 != 126U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x242 = 1959;
	int8_t x243 = INT8_MIN;
	uint16_t x244 = UINT16_MAX;
	int32_t t60 = 0;

	t60 = (x241|(x242*(x243<=x244)));

	if (t60 != 2047) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x245 = 5839088241930LLU;
	volatile int32_t x246 = INT32_MIN;
	volatile uint8_t x247 = 1U;
	static int32_t x248 = INT32_MIN;
	uint64_t t61 = 4162784LLU;

	t61 = (x245|(x246*(x247<=x248)));

	if (t61 != 5839088241930LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MIN;
	uint64_t x251 = UINT64_MAX;
	int16_t x252 = -3;
	int64_t t62 = INT64_MIN;

	t62 = (x249|(x250*(x251<=x252)));

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x253 = 0U;
	int8_t x254 = 28;
	volatile int8_t x255 = 25;
	int16_t x256 = -1;
	volatile int32_t t63 = -2901293;

	t63 = (x253|(x254*(x255<=x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x257 = 11U;
	uint8_t x258 = 98U;
	int8_t x259 = -3;
	static volatile uint8_t x260 = UINT8_MAX;
	int32_t t64 = -141548114;

	t64 = (x257|(x258*(x259<=x260)));

	if (t64 != 107) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	uint8_t x262 = UINT8_MAX;
	int32_t x263 = -5389;
	int32_t x264 = 6018;
	int32_t t65 = -30354;

	t65 = (x261|(x262*(x263<=x264)));

	if (t65 != -32513) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x265 = 243472472922092LLU;
	int32_t x267 = INT32_MIN;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = (x265|(x266*(x267<=x268)));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -94670;
	volatile int8_t x271 = 7;
	int64_t t67 = 19388122775799507LL;

	t67 = (x269|(x270*(x271<=x272)));

	if (t67 != -94670LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x273 = -1;
	int32_t x274 = INT32_MIN;
	static int32_t x275 = INT32_MIN;
	uint16_t x276 = UINT16_MAX;
	int32_t t68 = 2;

	t68 = (x273|(x274*(x275<=x276)));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MAX;
	uint16_t x278 = 353U;
	uint64_t x279 = 34678526800740LLU;
	volatile int16_t x280 = -1;
	volatile int64_t t69 = INT64_MAX;

	t69 = (x277|(x278*(x279<=x280)));

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 99U;
	uint32_t x282 = 6520U;
	static uint32_t x283 = 244565694U;
	volatile uint32_t t70 = 1560U;

	t70 = (x281|(x282*(x283<=x284)));

	if (t70 != 6523U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MAX;
	volatile uint64_t x286 = 2699084LLU;
	int64_t x288 = INT64_MAX;
	uint64_t t71 = 60LLU;

	t71 = (x285|(x286*(x287<=x288)));

	if (t71 != 2147483647LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MAX;
	static volatile uint64_t x290 = 106632664274115LLU;
	int64_t x291 = INT64_MAX;
	static volatile int32_t x292 = INT32_MIN;
	uint64_t t72 = 1745404814LLU;

	t72 = (x289|(x290*(x291<=x292)));

	if (t72 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = 1;
	int64_t x294 = -1LL;
	volatile int16_t x295 = INT16_MIN;
	int16_t x296 = INT16_MIN;
	volatile int64_t t73 = 9769731615943LL;

	t73 = (x293|(x294*(x295<=x296)));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x300 = 5334LLU;
	static int64_t t74 = INT64_MIN;

	t74 = (x297|(x298*(x299<=x300)));

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 0LLU;
	volatile int64_t x302 = -840958000LL;
	static volatile int16_t x303 = INT16_MIN;
	volatile int64_t x304 = INT64_MAX;
	uint64_t t75 = 11598LLU;

	t75 = (x301|(x302*(x303<=x304)));

	if (t75 != 18446744072868593616LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = -4;
	volatile uint8_t x306 = UINT8_MAX;
	int64_t x307 = INT64_MAX;
	int32_t x308 = -1;
	static int32_t t76 = 11;

	t76 = (x305|(x306*(x307<=x308)));

	if (t76 != -4) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x310 = INT64_MIN;
	volatile int16_t x311 = -1;
	uint16_t x312 = UINT16_MAX;
	volatile int64_t t77 = -1720628380351231LL;

	t77 = (x309|(x310*(x311<=x312)));

	if (t77 != -2147483648LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = -1;
	volatile int64_t x314 = 64LL;
	volatile int64_t x316 = 17917579007575079LL;
	int64_t t78 = -7LL;

	t78 = (x313|(x314*(x315<=x316)));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x319 = -13001;
	int32_t x320 = -123915;
	volatile int32_t t79 = -49724775;

	t79 = (x317|(x318*(x319<=x320)));

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x322 = 2;
	int16_t x323 = -55;

	t80 = (x321|(x322*(x323<=x324)));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x325 = -1;
	int32_t x326 = INT32_MIN;
	uint64_t x327 = UINT64_MAX;
	static int32_t x328 = INT32_MAX;
	static volatile int32_t t81 = -24965;

	t81 = (x325|(x326*(x327<=x328)));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -90484531LL;
	int64_t x330 = INT64_MAX;
	int16_t x331 = INT16_MIN;
	volatile int8_t x332 = INT8_MAX;
	volatile int64_t t82 = -87LL;

	t82 = (x329|(x330*(x331<=x332)));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = 181574;
	int32_t x334 = 4027146;
	volatile int32_t t83 = 682451;

	t83 = (x333|(x334*(x335<=x336)));

	if (t83 != 4192078) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = -1;
	volatile int32_t x338 = INT32_MAX;
	int16_t x339 = INT16_MIN;
	static uint32_t x340 = 236580721U;
	int32_t t84 = -5040689;

	t84 = (x337|(x338*(x339<=x340)));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MAX;
	int16_t x342 = INT16_MIN;
	uint8_t x343 = 37U;
	static int16_t x344 = INT16_MAX;
	static int32_t t85 = 49762588;

	t85 = (x341|(x342*(x343<=x344)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x345 = 106274250050LLU;
	uint8_t x346 = 116U;
	uint8_t x347 = UINT8_MAX;
	static volatile uint64_t t86 = 4788519310798LLU;

	t86 = (x345|(x346*(x347<=x348)));

	if (t86 != 106274250050LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x349 = 280U;
	volatile int64_t x350 = -1LL;
	uint16_t x351 = 2U;
	static int64_t t87 = 32363899337561175LL;

	t87 = (x349|(x350*(x351<=x352)));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x353 = INT16_MIN;
	volatile int16_t x354 = INT16_MIN;
	volatile uint64_t x356 = 2086973996LLU;
	static volatile int32_t t88 = -56896932;

	t88 = (x353|(x354*(x355<=x356)));

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x357 = -1LL;
	volatile uint32_t x358 = UINT32_MAX;
	static int8_t x359 = -1;
	uint32_t x360 = UINT32_MAX;

	t89 = (x357|(x358*(x359<=x360)));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	volatile int64_t x362 = -1LL;
	int32_t x363 = 27474105;
	uint64_t x364 = UINT64_MAX;

	t90 = (x361|(x362*(x363<=x364)));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MAX;
	static int32_t x366 = -1;
	static int32_t x367 = 5610510;
	static int32_t x368 = INT32_MAX;

	t91 = (x365|(x366*(x367<=x368)));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = UINT64_MAX;
	int8_t x370 = -1;
	volatile int64_t x371 = -1LL;
	uint16_t x372 = UINT16_MAX;
	uint64_t t92 = UINT64_MAX;

	t92 = (x369|(x370*(x371<=x372)));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MAX;
	int8_t x374 = INT8_MIN;
	uint8_t x375 = 1U;
	static int64_t x376 = INT64_MIN;
	volatile int32_t t93 = INT32_MAX;

	t93 = (x373|(x374*(x375<=x376)));

	if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x377 = -17737LL;
	static uint8_t x378 = 2U;
	static uint16_t x379 = 28801U;
	uint8_t x380 = 53U;
	static volatile int64_t t94 = -13961521LL;

	t94 = (x377|(x378*(x379<=x380)));

	if (t94 != -17737LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = -1;
	volatile int8_t x382 = INT8_MAX;
	int32_t x383 = INT32_MAX;
	static int64_t x384 = -1LL;
	volatile int32_t t95 = -7407294;

	t95 = (x381|(x382*(x383<=x384)));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x387 = INT32_MIN;
	uint8_t x388 = UINT8_MAX;

	t96 = (x385|(x386*(x387<=x388)));

	if (t96 != -30036099521LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MIN;
	volatile int16_t x390 = -94;
	static int8_t x391 = INT8_MAX;
	uint32_t x392 = 926U;
	volatile int32_t t97 = 2401;

	t97 = (x389|(x390*(x391<=x392)));

	if (t97 != -94) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x394 = 25691U;
	int16_t x395 = 3017;
	static int64_t x396 = -1LL;

	t98 = (x393|(x394*(x395<=x396)));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x397 = 1;
	volatile uint16_t x398 = UINT16_MAX;
	int16_t x399 = INT16_MIN;
	static uint64_t x400 = 529LLU;
	int32_t t99 = -651545;

	t99 = (x397|(x398*(x399<=x400)));

	if (t99 != 1) { NG(); } else { ; }
	
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

