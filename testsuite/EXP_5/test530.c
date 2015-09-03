#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -1;
volatile int8_t x5 = INT8_MIN;
uint32_t x9 = 0U;
static int64_t x11 = -13441LL;
volatile int32_t t2 = -13506907;
int8_t x14 = INT8_MIN;
int32_t t3 = -1984;
int8_t x17 = -1;
int32_t x20 = INT32_MAX;
int32_t t5 = -32587;
uint64_t x31 = 184837426840LLU;
int8_t x49 = 0;
volatile int32_t t12 = 143;
int32_t x55 = -1;
static volatile uint8_t x56 = 0U;
int32_t t15 = -663041;
int32_t t16 = 3373839;
int16_t x73 = INT16_MAX;
volatile int32_t x80 = 3506;
int32_t t19 = -20;
static int16_t x81 = INT16_MIN;
static int64_t x98 = -1LL;
static volatile uint64_t x104 = UINT64_MAX;
volatile uint16_t x107 = UINT16_MAX;
int16_t x124 = INT16_MIN;
int8_t x130 = INT8_MIN;
int8_t x141 = -1;
int8_t x142 = INT8_MIN;
int32_t x149 = INT32_MAX;
volatile int64_t x150 = -1LL;
uint32_t x155 = 829U;
uint64_t x158 = 4LLU;
volatile int16_t x162 = INT16_MIN;
int32_t x163 = -48;
int8_t x164 = INT8_MIN;
int16_t x168 = 14;
int32_t t40 = 7;
int32_t x169 = INT32_MIN;
int8_t x177 = -4;
static int8_t x179 = INT8_MIN;
volatile int32_t x184 = 59675130;
volatile uint32_t x188 = UINT32_MAX;
volatile int32_t t44 = -14622;
int32_t x190 = -1;
uint8_t x192 = 14U;
uint32_t x196 = 87761190U;
volatile int8_t x197 = INT8_MIN;
volatile int16_t x199 = -430;
volatile int8_t x202 = -1;
static int32_t x206 = -1;
int64_t x210 = 656LL;
uint32_t x211 = 16146U;
uint16_t x212 = UINT16_MAX;
uint64_t x215 = 20LLU;
static volatile uint64_t x219 = 792754519626490LLU;
uint32_t x236 = 1720545U;
uint16_t x239 = 30U;
uint32_t x241 = 2817850U;
uint64_t x242 = 23294242530LLU;
volatile int8_t x243 = 7;
static volatile int32_t t60 = 679389016;
int32_t t61 = -126889387;
int64_t x270 = INT64_MIN;
uint32_t x271 = UINT32_MAX;
uint64_t x274 = 0LLU;
int16_t x275 = INT16_MIN;
int32_t t63 = -2802439;
volatile uint16_t x282 = 5321U;
static int32_t t65 = 1;
volatile int32_t t66 = 193759515;
int16_t x291 = INT16_MIN;
int32_t t67 = -8133;
int16_t x293 = 336;
int32_t t68 = -209214244;
static uint16_t x299 = 7U;
int16_t x300 = INT16_MAX;
volatile int16_t x302 = -34;
int16_t x313 = INT16_MIN;
volatile uint64_t x314 = 29719711872LLU;
int8_t x316 = -1;
uint16_t x321 = 29U;
int64_t x327 = INT64_MIN;
volatile int64_t x339 = INT64_MIN;
static volatile int32_t t80 = 13;
int32_t x350 = -27637258;
int16_t x355 = -1;
volatile int32_t t83 = -1;
static uint32_t x364 = UINT32_MAX;
static uint64_t x371 = 4249869686LLU;
static int32_t t85 = 886768;
volatile uint8_t x386 = 31U;
int32_t t88 = -3610107;
static int16_t x390 = 2;
int8_t x392 = INT8_MIN;
static volatile uint16_t x410 = 36U;
static int8_t x414 = INT8_MAX;
int16_t x417 = INT16_MAX;
uint8_t x426 = 17U;
int16_t x431 = -1;
int32_t t97 = 25606679;
volatile int32_t t98 = 169;


void f0(void) {
	volatile uint32_t x2 = 7388376U;
	volatile uint32_t x3 = 1155399U;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = -35227;

	t0 = (x1<=((x2/x3)-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = -1;
	int8_t x7 = -31;
	volatile int16_t x8 = -5;
	int32_t t1 = 6245;

	t1 = (x5<=((x6/x7)-x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = 302899527620561LL;
	int8_t x12 = 16;

	t2 = (x9<=((x10/x11)-x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	int16_t x15 = INT16_MIN;
	static int8_t x16 = 0;

	t3 = (x13<=((x14/x15)-x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x18 = -774LL;
	static int64_t x19 = -72178690LL;
	volatile int32_t t4 = 33092489;

	t4 = (x17<=((x18/x19)-x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	static uint32_t x22 = 2U;
	volatile int16_t x23 = -1;
	int16_t x24 = INT16_MIN;

	t5 = (x21<=((x22/x23)-x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = -4;
	uint8_t x26 = UINT8_MAX;
	static volatile int64_t x27 = INT64_MIN;
	int8_t x28 = INT8_MIN;
	int32_t t6 = 88304;

	t6 = (x25<=((x26/x27)-x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = 0LL;
	volatile uint16_t x30 = UINT16_MAX;
	volatile int8_t x32 = INT8_MAX;
	static volatile int32_t t7 = -56;

	t7 = (x29<=((x30/x31)-x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = 147U;
	int8_t x34 = INT8_MAX;
	int8_t x35 = 7;
	static int64_t x36 = 107172663100LL;
	int32_t t8 = -253;

	t8 = (x33<=((x34/x35)-x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 116U;
	static int64_t x38 = 350521LL;
	int32_t x39 = -1;
	volatile int64_t x40 = INT64_MIN;
	static int32_t t9 = 26559;

	t9 = (x37<=((x38/x39)-x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	static int32_t x42 = INT32_MIN;
	int64_t x43 = INT64_MIN;
	volatile int32_t x44 = INT32_MIN;
	volatile int32_t t10 = -7101843;

	t10 = (x41<=((x42/x43)-x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	volatile int32_t x46 = -1;
	uint64_t x47 = 296LLU;
	static int32_t x48 = -7;
	static int32_t t11 = 1;

	t11 = (x45<=((x46/x47)-x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x50 = INT64_MAX;
	uint64_t x51 = 1554227285060LLU;
	int32_t x52 = -31;

	t12 = (x49<=((x50/x51)-x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x53 = 1535U;
	int16_t x54 = INT16_MIN;
	int32_t t13 = 0;

	t13 = (x53<=((x54/x55)-x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x57 = 609257U;
	static int32_t x58 = INT32_MIN;
	volatile int16_t x59 = INT16_MIN;
	static volatile uint64_t x60 = 160430LLU;
	int32_t t14 = -3539;

	t14 = (x57<=((x58/x59)-x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x61 = 9426099U;
	int32_t x62 = INT32_MIN;
	uint64_t x63 = UINT64_MAX;
	int8_t x64 = -21;

	t15 = (x61<=((x62/x63)-x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = INT16_MIN;
	int16_t x66 = 9;
	int8_t x67 = INT8_MIN;
	int8_t x68 = INT8_MIN;

	t16 = (x65<=((x66/x67)-x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	uint8_t x70 = 48U;
	uint32_t x71 = 1720373U;
	int32_t x72 = INT32_MIN;
	static int32_t t17 = 14;

	t17 = (x69<=((x70/x71)-x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x74 = 193881828753LLU;
	uint8_t x75 = 12U;
	volatile int8_t x76 = INT8_MIN;
	static int32_t t18 = 4811612;

	t18 = (x73<=((x74/x75)-x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 559LLU;
	int64_t x78 = -1LL;
	static volatile uint8_t x79 = UINT8_MAX;

	t19 = (x77<=((x78/x79)-x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x82 = INT16_MIN;
	int16_t x83 = INT16_MIN;
	static volatile int32_t x84 = INT32_MAX;
	static int32_t t20 = 0;

	t20 = (x81<=((x82/x83)-x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -2;
	uint64_t x86 = UINT64_MAX;
	int32_t x87 = 265363777;
	int8_t x88 = INT8_MIN;
	static int32_t t21 = -903188;

	t21 = (x85<=((x86/x87)-x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = INT8_MIN;
	uint16_t x90 = 21534U;
	uint64_t x91 = 27LLU;
	uint32_t x92 = UINT32_MAX;
	int32_t t22 = 1;

	t22 = (x89<=((x90/x91)-x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = 253;
	int64_t x94 = -1LL;
	int8_t x95 = INT8_MIN;
	volatile int32_t x96 = -1;
	static int32_t t23 = 71324857;

	t23 = (x93<=((x94/x95)-x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -7777;
	static uint64_t x99 = 17561555269LLU;
	static uint32_t x100 = UINT32_MAX;
	volatile int32_t t24 = -1;

	t24 = (x97<=((x98/x99)-x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x101 = 1;
	static int32_t x102 = INT32_MIN;
	volatile int64_t x103 = INT64_MIN;
	volatile int32_t t25 = 713;

	t25 = (x101<=((x102/x103)-x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1;
	int64_t x106 = INT64_MIN;
	int64_t x108 = INT64_MIN;
	static volatile int32_t t26 = -120552;

	t26 = (x105<=((x106/x107)-x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = INT16_MIN;
	uint64_t x110 = 1361756576LLU;
	volatile int16_t x111 = -6010;
	int64_t x112 = INT64_MAX;
	volatile int32_t t27 = -2118281;

	t27 = (x109<=((x110/x111)-x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x117 = 38632775LLU;
	volatile int16_t x118 = INT16_MIN;
	int64_t x119 = -1186908457641LL;
	int16_t x120 = INT16_MIN;
	volatile int32_t t28 = -86;

	t28 = (x117<=((x118/x119)-x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x121 = 3;
	int64_t x122 = INT64_MIN;
	int8_t x123 = -3;
	static int32_t t29 = 248;

	t29 = (x121<=((x122/x123)-x124));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x125 = 0;
	int64_t x126 = INT64_MIN;
	static int64_t x127 = INT64_MIN;
	volatile int16_t x128 = -1;
	int32_t t30 = -375900;

	t30 = (x125<=((x126/x127)-x128));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x129 = -309572LL;
	static int64_t x131 = 803125454173LL;
	uint16_t x132 = 34U;
	volatile int32_t t31 = 118155069;

	t31 = (x129<=((x130/x131)-x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x133 = -13865LL;
	static uint64_t x134 = 1405583LLU;
	uint64_t x135 = UINT64_MAX;
	int64_t x136 = INT64_MIN;
	int32_t t32 = 1898;

	t32 = (x133<=((x134/x135)-x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = INT8_MAX;
	int64_t x138 = INT64_MIN;
	volatile uint64_t x139 = 303783952794128464LLU;
	uint32_t x140 = 1991570936U;
	static int32_t t33 = 141297;

	t33 = (x137<=((x138/x139)-x140));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x143 = 1;
	volatile int32_t x144 = INT32_MIN;
	static int32_t t34 = -68900547;

	t34 = (x141<=((x142/x143)-x144));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x145 = INT8_MAX;
	volatile uint32_t x146 = UINT32_MAX;
	volatile uint64_t x147 = UINT64_MAX;
	int8_t x148 = INT8_MIN;
	int32_t t35 = 365;

	t35 = (x145<=((x146/x147)-x148));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x151 = UINT32_MAX;
	static uint32_t x152 = 10045219U;
	volatile int32_t t36 = -784400;

	t36 = (x149<=((x150/x151)-x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x153 = UINT8_MAX;
	int32_t x154 = -1;
	int8_t x156 = -40;
	static volatile int32_t t37 = 885;

	t37 = (x153<=((x154/x155)-x156));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x157 = INT32_MIN;
	static uint32_t x159 = 1999U;
	int16_t x160 = INT16_MIN;
	int32_t t38 = 840;

	t38 = (x157<=((x158/x159)-x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x161 = -1;
	static volatile int32_t t39 = 15050463;

	t39 = (x161<=((x162/x163)-x164));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x165 = INT32_MIN;
	int64_t x166 = -1LL;
	static volatile int16_t x167 = -1;

	t40 = (x165<=((x166/x167)-x168));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x170 = 0U;
	int32_t x171 = INT32_MAX;
	int32_t x172 = INT32_MAX;
	static volatile int32_t t41 = -1;

	t41 = (x169<=((x170/x171)-x172));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x178 = 490LLU;
	static uint64_t x180 = UINT64_MAX;
	int32_t t42 = -747;

	t42 = (x177<=((x178/x179)-x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x181 = INT32_MIN;
	int32_t x182 = -1;
	int64_t x183 = INT64_MAX;
	volatile int32_t t43 = -53;

	t43 = (x181<=((x182/x183)-x184));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x185 = INT32_MIN;
	int32_t x186 = INT32_MAX;
	volatile int64_t x187 = -16330215867997762LL;

	t44 = (x185<=((x186/x187)-x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x189 = 4U;
	int64_t x191 = -7864LL;
	static volatile int32_t t45 = -3;

	t45 = (x189<=((x190/x191)-x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x193 = 6U;
	int8_t x194 = INT8_MAX;
	int64_t x195 = -1LL;
	int32_t t46 = 9902931;

	t46 = (x193<=((x194/x195)-x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x198 = 58511U;
	uint64_t x200 = UINT64_MAX;
	int32_t t47 = 19997237;

	t47 = (x197<=((x198/x199)-x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x201 = 84U;
	int8_t x203 = INT8_MIN;
	int16_t x204 = 11;
	int32_t t48 = 21213749;

	t48 = (x201<=((x202/x203)-x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x205 = 73;
	int32_t x207 = -1;
	uint32_t x208 = UINT32_MAX;
	volatile int32_t t49 = 789098710;

	t49 = (x205<=((x206/x207)-x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x209 = 62U;
	int32_t t50 = 1;

	t50 = (x209<=((x210/x211)-x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x213 = 1873721;
	static int8_t x214 = 26;
	int32_t x216 = INT32_MIN;
	volatile int32_t t51 = 1;

	t51 = (x213<=((x214/x215)-x216));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x217 = -40482395252LL;
	int32_t x218 = INT32_MIN;
	int32_t x220 = 2022225;
	int32_t t52 = 559642411;

	t52 = (x217<=((x218/x219)-x220));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x225 = 138U;
	volatile uint32_t x226 = 1736092U;
	uint32_t x227 = 41314171U;
	int32_t x228 = -28791292;
	static volatile int32_t t53 = -457863;

	t53 = (x225<=((x226/x227)-x228));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x229 = INT32_MIN;
	static volatile int8_t x230 = -1;
	int64_t x231 = -1LL;
	int16_t x232 = INT16_MIN;
	volatile int32_t t54 = -1565814;

	t54 = (x229<=((x230/x231)-x232));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x233 = 1U;
	uint8_t x234 = UINT8_MAX;
	volatile int16_t x235 = INT16_MIN;
	int32_t t55 = -160;

	t55 = (x233<=((x234/x235)-x236));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x237 = -41001LL;
	int64_t x238 = -1LL;
	static uint16_t x240 = 4U;
	int32_t t56 = -18;

	t56 = (x237<=((x238/x239)-x240));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x244 = INT64_MIN;
	volatile int32_t t57 = 3;

	t57 = (x241<=((x242/x243)-x244));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x253 = INT16_MIN;
	volatile int16_t x254 = -8;
	volatile uint16_t x255 = 88U;
	uint8_t x256 = UINT8_MAX;
	volatile int32_t t58 = -1612;

	t58 = (x253<=((x254/x255)-x256));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x257 = INT8_MAX;
	int16_t x258 = INT16_MIN;
	int8_t x259 = -1;
	int8_t x260 = INT8_MIN;
	volatile int32_t t59 = 1327122;

	t59 = (x257<=((x258/x259)-x260));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x261 = INT16_MIN;
	static int64_t x262 = INT64_MIN;
	volatile int64_t x263 = 831960LL;
	static volatile int16_t x264 = -106;

	t60 = (x261<=((x262/x263)-x264));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x265 = 8335121705621538LL;
	volatile int32_t x266 = -1;
	volatile int32_t x267 = 303532;
	uint32_t x268 = 7948206U;

	t61 = (x265<=((x266/x267)-x268));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint8_t x269 = 1U;
	static int8_t x272 = INT8_MAX;
	int32_t t62 = -61518117;

	t62 = (x269<=((x270/x271)-x272));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x273 = -1;
	int16_t x276 = INT16_MIN;

	t63 = (x273<=((x274/x275)-x276));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x277 = -1;
	int8_t x278 = -1;
	volatile int64_t x279 = -1LL;
	static volatile int16_t x280 = INT16_MIN;
	volatile int32_t t64 = 684887411;

	t64 = (x277<=((x278/x279)-x280));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x281 = INT16_MIN;
	int64_t x283 = 129LL;
	int64_t x284 = -1LL;

	t65 = (x281<=((x282/x283)-x284));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x285 = -752;
	int64_t x286 = -1301498241592284LL;
	uint16_t x287 = UINT16_MAX;
	volatile int8_t x288 = -1;

	t66 = (x285<=((x286/x287)-x288));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x289 = INT64_MIN;
	static uint16_t x290 = UINT16_MAX;
	int16_t x292 = 0;

	t67 = (x289<=((x290/x291)-x292));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x294 = INT32_MIN;
	uint8_t x295 = UINT8_MAX;
	uint16_t x296 = 2U;

	t68 = (x293<=((x294/x295)-x296));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x297 = INT8_MIN;
	uint16_t x298 = UINT16_MAX;
	int32_t t69 = -1294;

	t69 = (x297<=((x298/x299)-x300));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x301 = -314;
	int32_t x303 = 3;
	int16_t x304 = INT16_MIN;
	static int32_t t70 = -49580;

	t70 = (x301<=((x302/x303)-x304));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x305 = 1906935LL;
	uint16_t x306 = 246U;
	static uint64_t x307 = 5458008018LLU;
	volatile uint8_t x308 = UINT8_MAX;
	int32_t t71 = -4;

	t71 = (x305<=((x306/x307)-x308));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x309 = INT16_MIN;
	int16_t x310 = INT16_MAX;
	int16_t x311 = -11;
	int8_t x312 = INT8_MIN;
	int32_t t72 = 8052;

	t72 = (x309<=((x310/x311)-x312));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint32_t x315 = 8U;
	volatile int32_t t73 = -656;

	t73 = (x313<=((x314/x315)-x316));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x317 = -181269924790LL;
	volatile uint32_t x318 = 92165165U;
	uint64_t x319 = 3376025210208993LLU;
	int8_t x320 = -1;
	int32_t t74 = -2;

	t74 = (x317<=((x318/x319)-x320));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x322 = 21268402LLU;
	static int16_t x323 = -403;
	static int16_t x324 = INT16_MAX;
	int32_t t75 = 48282;

	t75 = (x321<=((x322/x323)-x324));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x325 = -1;
	uint64_t x326 = 2810052LLU;
	static volatile int32_t x328 = -331;
	static volatile int32_t t76 = -411;

	t76 = (x325<=((x326/x327)-x328));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x329 = UINT8_MAX;
	uint32_t x330 = 15613248U;
	uint16_t x331 = 3U;
	int8_t x332 = -1;
	static volatile int32_t t77 = -266;

	t77 = (x329<=((x330/x331)-x332));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x337 = -177370;
	uint16_t x338 = 2U;
	int8_t x340 = 1;
	volatile int32_t t78 = 1;

	t78 = (x337<=((x338/x339)-x340));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x341 = -383LL;
	static uint8_t x342 = 55U;
	int16_t x343 = INT16_MIN;
	int16_t x344 = INT16_MAX;
	volatile int32_t t79 = 241441;

	t79 = (x341<=((x342/x343)-x344));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x345 = INT32_MIN;
	uint32_t x346 = UINT32_MAX;
	volatile uint32_t x347 = UINT32_MAX;
	uint64_t x348 = 66409692171LLU;

	t80 = (x345<=((x346/x347)-x348));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x349 = INT64_MIN;
	static int16_t x351 = -1;
	int32_t x352 = INT32_MAX;
	static int32_t t81 = 4179516;

	t81 = (x349<=((x350/x351)-x352));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x353 = 1311069954610753377LLU;
	int64_t x354 = -1LL;
	static uint16_t x356 = 884U;
	volatile int32_t t82 = 6;

	t82 = (x353<=((x354/x355)-x356));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x357 = 27818910254029147LLU;
	uint16_t x358 = 17U;
	uint16_t x359 = 68U;
	volatile int32_t x360 = -1;

	t83 = (x357<=((x358/x359)-x360));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x361 = 1;
	static uint16_t x362 = 2056U;
	uint16_t x363 = 637U;
	volatile int32_t t84 = 151419299;

	t84 = (x361<=((x362/x363)-x364));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x369 = 28140634517LL;
	static uint8_t x370 = UINT8_MAX;
	int32_t x372 = -112678;

	t85 = (x369<=((x370/x371)-x372));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x373 = UINT64_MAX;
	static int32_t x374 = 370;
	int8_t x375 = INT8_MIN;
	int16_t x376 = INT16_MIN;
	int32_t t86 = 3;

	t86 = (x373<=((x374/x375)-x376));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x381 = UINT8_MAX;
	static int8_t x382 = -1;
	int64_t x383 = -1LL;
	volatile int64_t x384 = INT64_MAX;
	int32_t t87 = -165066351;

	t87 = (x381<=((x382/x383)-x384));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x385 = INT16_MIN;
	int32_t x387 = -13499;
	uint32_t x388 = 14036U;

	t88 = (x385<=((x386/x387)-x388));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x389 = -1LL;
	static uint32_t x391 = UINT32_MAX;
	int32_t t89 = 39545225;

	t89 = (x389<=((x390/x391)-x392));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x393 = -1;
	int32_t x394 = INT32_MIN;
	volatile int8_t x395 = INT8_MIN;
	uint32_t x396 = 428U;
	static volatile int32_t t90 = -1;

	t90 = (x393<=((x394/x395)-x396));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x397 = 1;
	static uint8_t x398 = UINT8_MAX;
	static int8_t x399 = -9;
	int16_t x400 = 2199;
	int32_t t91 = 3624467;

	t91 = (x397<=((x398/x399)-x400));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x409 = 27958LLU;
	volatile int16_t x411 = -1;
	volatile int16_t x412 = INT16_MIN;
	volatile int32_t t92 = -39;

	t92 = (x409<=((x410/x411)-x412));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x413 = INT32_MIN;
	int64_t x415 = INT64_MIN;
	static uint64_t x416 = 8LLU;
	int32_t t93 = -172818606;

	t93 = (x413<=((x414/x415)-x416));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x418 = -1;
	static volatile int32_t x419 = 28836624;
	int64_t x420 = -16713LL;
	int32_t t94 = 47650443;

	t94 = (x417<=((x418/x419)-x420));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x421 = INT64_MAX;
	uint16_t x422 = 3867U;
	static int64_t x423 = INT64_MIN;
	int8_t x424 = INT8_MAX;
	volatile int32_t t95 = 14949790;

	t95 = (x421<=((x422/x423)-x424));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x425 = 113527339;
	int64_t x427 = -1LL;
	uint32_t x428 = 1955745U;
	int32_t t96 = 385;

	t96 = (x425<=((x426/x427)-x428));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x429 = INT8_MIN;
	int8_t x430 = -1;
	int8_t x432 = INT8_MIN;

	t97 = (x429<=((x430/x431)-x432));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x433 = 7U;
	volatile uint32_t x434 = 34U;
	static volatile int16_t x435 = INT16_MAX;
	int32_t x436 = INT32_MIN;

	t98 = (x433<=((x434/x435)-x436));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x437 = UINT64_MAX;
	static uint8_t x438 = UINT8_MAX;
	uint8_t x439 = 41U;
	uint16_t x440 = 31284U;
	int32_t t99 = 887;

	t99 = (x437<=((x438/x439)-x440));

	if (t99 != 0) { NG(); } else { ; }
	
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

