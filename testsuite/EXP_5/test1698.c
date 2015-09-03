#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t0 = -75538;
int32_t x9 = 8177;
volatile int32_t t2 = 12;
static int32_t t3 = -1;
volatile int32_t t4 = -12;
int8_t x23 = -44;
uint8_t x34 = 1U;
uint8_t x39 = 9U;
uint32_t x46 = UINT32_MAX;
int64_t x48 = -1LL;
volatile int8_t x55 = INT8_MAX;
int32_t x68 = -1;
volatile int32_t t16 = -380;
volatile uint16_t x71 = 4U;
static int64_t x78 = -1LL;
int8_t x79 = -1;
int16_t x80 = INT16_MIN;
uint64_t x94 = 17485834LLU;
uint64_t x101 = 107LLU;
volatile int16_t x103 = INT16_MAX;
int16_t x107 = INT16_MAX;
int32_t x112 = INT32_MIN;
volatile int32_t t28 = 324;
int64_t x126 = INT64_MIN;
int8_t x133 = INT8_MIN;
int8_t x134 = INT8_MAX;
uint32_t x137 = UINT32_MAX;
int8_t x149 = 1;
static uint8_t x150 = 20U;
uint16_t x151 = 1372U;
int32_t x160 = -1;
static int8_t x161 = INT8_MIN;
static int32_t x179 = INT32_MIN;
uint32_t x180 = 240112393U;
static int32_t t41 = -1;
uint64_t x181 = 794372266377LLU;
volatile int64_t x185 = INT64_MAX;
uint64_t x186 = 5843750550179337LLU;
int16_t x187 = INT16_MIN;
int16_t x191 = 5939;
int16_t x198 = -6380;
uint32_t x203 = UINT32_MAX;
int32_t x222 = 97311;
int32_t x226 = INT32_MIN;
static int32_t x231 = -208260521;
int8_t x233 = INT8_MIN;
int32_t x239 = -86;
int8_t x240 = 14;
volatile uint16_t x246 = UINT16_MAX;
uint8_t x251 = 0U;
int8_t x260 = -1;
static int16_t x261 = -1;
static int32_t t60 = 1;
int8_t x270 = INT8_MIN;
int32_t x276 = INT32_MIN;
volatile int64_t x277 = -1921965787537LL;
static int32_t x284 = INT32_MIN;
volatile int32_t t66 = 717415;
volatile int32_t t67 = 159230669;
uint64_t x300 = 59937750912313LLU;
static int64_t x306 = INT64_MIN;
int32_t t71 = 690;
int32_t x317 = -1;
int64_t x318 = INT64_MIN;
uint8_t x321 = 2U;
int8_t x323 = INT8_MAX;
int32_t x329 = -6;
uint16_t x331 = 1354U;
static int8_t x333 = INT8_MIN;
int8_t x334 = INT8_MIN;
int32_t x337 = INT32_MIN;
volatile int32_t t78 = 7386907;
static uint64_t x350 = 74LLU;
int32_t x356 = INT32_MIN;
uint64_t x358 = 136728878357638048LLU;
int16_t x362 = INT16_MIN;
static volatile int32_t t82 = -23;
static volatile int32_t t85 = 1;
uint64_t x383 = 11958716894843899LLU;
int16_t x384 = INT16_MIN;
int32_t t87 = 1;
int64_t x390 = INT64_MIN;
int8_t x391 = 0;
int8_t x400 = 5;
volatile int32_t t90 = 126;
volatile int8_t x401 = -1;
uint8_t x406 = UINT8_MAX;
int32_t x409 = 2409;
int8_t x410 = INT8_MIN;
volatile int64_t x411 = 1323244643392163LL;
int64_t x417 = INT64_MAX;
volatile int16_t x422 = INT16_MAX;
static volatile int32_t t96 = 1206;
static int32_t x425 = -502;
uint16_t x427 = 12U;
int64_t x431 = INT64_MIN;
volatile int8_t x436 = 24;


void f0(void) {
	static int64_t x1 = -1LL;
	static uint64_t x2 = UINT64_MAX;
	uint32_t x3 = 4277535U;
	int64_t x4 = INT64_MIN;

	t0 = (x1==((x2&x3)+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int8_t x6 = 2;
	uint64_t x7 = 127238681611426LLU;
	uint64_t x8 = UINT64_MAX;
	volatile int32_t t1 = 862;

	t1 = (x5==((x6&x7)+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = -13LL;
	static volatile uint64_t x11 = UINT64_MAX;
	volatile int64_t x12 = INT64_MIN;

	t2 = (x9==((x10&x11)+x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	static uint16_t x14 = UINT16_MAX;
	uint8_t x15 = 20U;
	uint8_t x16 = UINT8_MAX;

	t3 = (x13==((x14&x15)+x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	uint32_t x18 = UINT32_MAX;
	uint32_t x19 = 1740U;
	volatile int64_t x20 = -30328196806774LL;

	t4 = (x17==((x18&x19)+x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	volatile int64_t x22 = INT64_MIN;
	uint16_t x24 = 5U;
	volatile int32_t t5 = 13;

	t5 = (x21==((x22&x23)+x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = INT8_MAX;
	int16_t x26 = INT16_MIN;
	int32_t x27 = 4896;
	volatile uint16_t x28 = 1U;
	volatile int32_t t6 = 1;

	t6 = (x25==((x26&x27)+x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	static int64_t x30 = 241142411871LL;
	static int32_t x31 = INT32_MIN;
	int16_t x32 = INT16_MAX;
	int32_t t7 = -16265;

	t7 = (x29==((x30&x31)+x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	int32_t x35 = INT32_MIN;
	int32_t x36 = -1;
	int32_t t8 = -101;

	t8 = (x33==((x34&x35)+x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 4LL;
	int8_t x38 = INT8_MAX;
	volatile uint8_t x40 = 48U;
	volatile int32_t t9 = -210283247;

	t9 = (x37==((x38&x39)+x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = INT64_MIN;
	int16_t x42 = 38;
	volatile int64_t x43 = 9508LL;
	int32_t x44 = 3;
	int32_t t10 = -1;

	t10 = (x41==((x42&x43)+x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 46U;
	static int64_t x47 = -305520989789LL;
	static volatile int32_t t11 = 243897;

	t11 = (x45==((x46&x47)+x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x49 = 10U;
	int16_t x50 = -1;
	int64_t x51 = 893LL;
	int8_t x52 = INT8_MAX;
	int32_t t12 = -219697477;

	t12 = (x49==((x50&x51)+x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = 22805870;
	volatile int8_t x54 = 1;
	int32_t x56 = -1;
	volatile int32_t t13 = 92;

	t13 = (x53==((x54&x55)+x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint64_t x57 = UINT64_MAX;
	uint8_t x58 = UINT8_MAX;
	int16_t x59 = -2;
	int16_t x60 = -1;
	int32_t t14 = 140;

	t14 = (x57==((x58&x59)+x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	static int64_t x62 = INT64_MIN;
	static int8_t x63 = INT8_MIN;
	static uint64_t x64 = 1022191896185896281LLU;
	int32_t t15 = 217050;

	t15 = (x61==((x62&x63)+x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -8202;
	volatile uint32_t x66 = UINT32_MAX;
	int64_t x67 = INT64_MAX;

	t16 = (x65==((x66&x67)+x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = -1;
	int32_t x70 = INT32_MAX;
	volatile uint32_t x72 = UINT32_MAX;
	volatile int32_t t17 = -6;

	t17 = (x69==((x70&x71)+x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = 139;
	int8_t x74 = -1;
	int16_t x75 = 1;
	int32_t x76 = -88;
	volatile int32_t t18 = -3837106;

	t18 = (x73==((x74&x75)+x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x77 = 25450686821LLU;
	static int32_t t19 = -872;

	t19 = (x77==((x78&x79)+x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 16035U;
	static int16_t x82 = -1;
	static volatile uint8_t x83 = 11U;
	int8_t x84 = -1;
	int32_t t20 = 0;

	t20 = (x81==((x82&x83)+x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = 983788;
	static int16_t x90 = 923;
	uint64_t x91 = 2035507699193858LLU;
	volatile uint16_t x92 = 2850U;
	volatile int32_t t21 = -171948851;

	t21 = (x89==((x90&x91)+x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = -361;
	int64_t x95 = INT64_MAX;
	uint16_t x96 = 24046U;
	int32_t t22 = 14;

	t22 = (x93==((x94&x95)+x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x102 = -158639828LL;
	int16_t x104 = INT16_MIN;
	int32_t t23 = 56701752;

	t23 = (x101==((x102&x103)+x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = INT16_MIN;
	static int8_t x106 = INT8_MIN;
	int8_t x108 = 9;
	int32_t t24 = -1440049;

	t24 = (x105==((x106&x107)+x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = 93;
	static uint32_t x110 = 968646U;
	uint16_t x111 = UINT16_MAX;
	volatile int32_t t25 = -100395714;

	t25 = (x109==((x110&x111)+x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = -1LL;
	volatile int16_t x114 = INT16_MIN;
	volatile int16_t x115 = INT16_MIN;
	static int8_t x116 = INT8_MAX;
	volatile int32_t t26 = -4063009;

	t26 = (x113==((x114&x115)+x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = 12427;
	int64_t x118 = INT64_MAX;
	int32_t x119 = INT32_MAX;
	uint16_t x120 = 1800U;
	int32_t t27 = -26100;

	t27 = (x117==((x118&x119)+x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = INT8_MIN;
	int16_t x122 = -1;
	static volatile int8_t x123 = INT8_MIN;
	int16_t x124 = INT16_MAX;

	t28 = (x121==((x122&x123)+x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x125 = UINT8_MAX;
	volatile uint16_t x127 = 23U;
	static int64_t x128 = -1LL;
	int32_t t29 = 3444;

	t29 = (x125==((x126&x127)+x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = INT32_MIN;
	uint32_t x130 = 34198U;
	int8_t x131 = -44;
	int8_t x132 = INT8_MIN;
	volatile int32_t t30 = -234;

	t30 = (x129==((x130&x131)+x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x135 = INT8_MAX;
	uint8_t x136 = UINT8_MAX;
	volatile int32_t t31 = 78960;

	t31 = (x133==((x134&x135)+x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x138 = 14374U;
	uint64_t x139 = UINT64_MAX;
	int64_t x140 = -14758LL;
	volatile int32_t t32 = 0;

	t32 = (x137==((x138&x139)+x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x141 = -1LL;
	int64_t x142 = INT64_MIN;
	uint64_t x143 = 12915587043676685LLU;
	int8_t x144 = INT8_MIN;
	volatile int32_t t33 = 1975;

	t33 = (x141==((x142&x143)+x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = INT16_MIN;
	volatile uint16_t x146 = 30U;
	int32_t x147 = INT32_MIN;
	static int16_t x148 = 687;
	volatile int32_t t34 = -1131;

	t34 = (x145==((x146&x147)+x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x152 = INT16_MAX;
	volatile int32_t t35 = -16983209;

	t35 = (x149==((x150&x151)+x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = -1;
	volatile uint8_t x154 = UINT8_MAX;
	static int32_t x155 = INT32_MIN;
	int32_t x156 = -520223;
	volatile int32_t t36 = 26659407;

	t36 = (x153==((x154&x155)+x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = INT16_MIN;
	volatile int8_t x158 = INT8_MIN;
	volatile uint16_t x159 = UINT16_MAX;
	int32_t t37 = 14733;

	t37 = (x157==((x158&x159)+x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x162 = INT8_MIN;
	static uint64_t x163 = 300900799274125LLU;
	int8_t x164 = INT8_MIN;
	int32_t t38 = -1;

	t38 = (x161==((x162&x163)+x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x169 = INT64_MIN;
	volatile int64_t x170 = INT64_MAX;
	int64_t x171 = -917944355063367LL;
	uint16_t x172 = UINT16_MAX;
	volatile int32_t t39 = -1314550;

	t39 = (x169==((x170&x171)+x172));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = -1LL;
	int8_t x174 = INT8_MIN;
	static uint32_t x175 = 128410U;
	uint32_t x176 = UINT32_MAX;
	volatile int32_t t40 = -12942242;

	t40 = (x173==((x174&x175)+x176));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x177 = -1287LL;
	int32_t x178 = INT32_MIN;

	t41 = (x177==((x178&x179)+x180));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x182 = -20990;
	int16_t x183 = 319;
	uint32_t x184 = 380744U;
	int32_t t42 = -1;

	t42 = (x181==((x182&x183)+x184));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x188 = -475818624771327072LL;
	int32_t t43 = 29;

	t43 = (x185==((x186&x187)+x188));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x189 = 29U;
	static int32_t x190 = INT32_MIN;
	int16_t x192 = 0;
	volatile int32_t t44 = 25;

	t44 = (x189==((x190&x191)+x192));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x193 = INT32_MIN;
	static volatile uint8_t x194 = UINT8_MAX;
	static int8_t x195 = -1;
	int32_t x196 = INT32_MIN;
	volatile int32_t t45 = 22;

	t45 = (x193==((x194&x195)+x196));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x197 = 2590LLU;
	uint32_t x199 = 109377206U;
	uint16_t x200 = UINT16_MAX;
	volatile int32_t t46 = -14679642;

	t46 = (x197==((x198&x199)+x200));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x201 = 218;
	volatile int8_t x202 = 3;
	static int32_t x204 = INT32_MAX;
	int32_t t47 = 15511317;

	t47 = (x201==((x202&x203)+x204));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x205 = 184674;
	volatile int32_t x206 = -1;
	volatile int8_t x207 = 1;
	int8_t x208 = INT8_MIN;
	int32_t t48 = -127265510;

	t48 = (x205==((x206&x207)+x208));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint32_t x217 = 7U;
	static uint64_t x218 = UINT64_MAX;
	int64_t x219 = -419633LL;
	static uint32_t x220 = 3979U;
	int32_t t49 = -6;

	t49 = (x217==((x218&x219)+x220));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x221 = INT16_MIN;
	volatile uint64_t x223 = UINT64_MAX;
	static int16_t x224 = INT16_MIN;
	volatile int32_t t50 = -1;

	t50 = (x221==((x222&x223)+x224));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x225 = INT8_MIN;
	volatile uint64_t x227 = 14490066086807LLU;
	uint16_t x228 = 8U;
	int32_t t51 = -525886;

	t51 = (x225==((x226&x227)+x228));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x229 = 246010928LLU;
	uint64_t x230 = 11LLU;
	volatile uint32_t x232 = 21698075U;
	int32_t t52 = 2918046;

	t52 = (x229==((x230&x231)+x232));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x234 = 161U;
	int32_t x235 = INT32_MIN;
	int16_t x236 = -1;
	int32_t t53 = -2;

	t53 = (x233==((x234&x235)+x236));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x237 = 63023860776567518LLU;
	uint64_t x238 = 77801633593501891LLU;
	volatile int32_t t54 = -199394588;

	t54 = (x237==((x238&x239)+x240));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x241 = -416;
	volatile uint32_t x242 = 475U;
	int8_t x243 = -1;
	static int64_t x244 = -2559770299121757LL;
	int32_t t55 = 468458;

	t55 = (x241==((x242&x243)+x244));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x245 = UINT32_MAX;
	uint16_t x247 = 1U;
	volatile int64_t x248 = 30064LL;
	static int32_t t56 = 839;

	t56 = (x245==((x246&x247)+x248));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x249 = 0;
	int8_t x250 = -1;
	int8_t x252 = -1;
	volatile int32_t t57 = 3191;

	t57 = (x249==((x250&x251)+x252));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x253 = INT32_MIN;
	int32_t x254 = 65;
	uint64_t x255 = UINT64_MAX;
	static volatile int8_t x256 = INT8_MIN;
	volatile int32_t t58 = -311976;

	t58 = (x253==((x254&x255)+x256));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x257 = UINT64_MAX;
	static int8_t x258 = 18;
	uint16_t x259 = 66U;
	volatile int32_t t59 = -30450;

	t59 = (x257==((x258&x259)+x260));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x262 = 23;
	volatile int8_t x263 = INT8_MIN;
	int32_t x264 = -1;

	t60 = (x261==((x262&x263)+x264));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x269 = -25628715494454LL;
	static uint16_t x271 = 1072U;
	uint16_t x272 = 330U;
	static int32_t t61 = -155;

	t61 = (x269==((x270&x271)+x272));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x273 = INT16_MIN;
	uint64_t x274 = 3658113112LLU;
	int8_t x275 = -1;
	static int32_t t62 = -290;

	t62 = (x273==((x274&x275)+x276));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x278 = 528880996056LLU;
	static volatile int8_t x279 = INT8_MIN;
	static int32_t x280 = 61912;
	static volatile int32_t t63 = 70815;

	t63 = (x277==((x278&x279)+x280));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x281 = INT8_MAX;
	static uint8_t x282 = 0U;
	static int16_t x283 = INT16_MIN;
	int32_t t64 = -749;

	t64 = (x281==((x282&x283)+x284));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x285 = -13;
	static uint8_t x286 = UINT8_MAX;
	static uint8_t x287 = UINT8_MAX;
	int64_t x288 = INT64_MIN;
	int32_t t65 = -683852899;

	t65 = (x285==((x286&x287)+x288));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x289 = UINT32_MAX;
	int8_t x290 = 25;
	int8_t x291 = INT8_MAX;
	int64_t x292 = -1LL;

	t66 = (x289==((x290&x291)+x292));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x293 = INT64_MIN;
	int8_t x294 = -1;
	int16_t x295 = INT16_MIN;
	volatile uint32_t x296 = 720U;

	t67 = (x293==((x294&x295)+x296));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x297 = -1;
	uint32_t x298 = 48U;
	uint64_t x299 = 5LLU;
	static volatile int32_t t68 = 10121;

	t68 = (x297==((x298&x299)+x300));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x305 = INT8_MIN;
	int16_t x307 = -1;
	int64_t x308 = 196890527LL;
	volatile int32_t t69 = -6373;

	t69 = (x305==((x306&x307)+x308));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x309 = -1;
	int64_t x310 = INT64_MAX;
	volatile int64_t x311 = INT64_MIN;
	static int16_t x312 = 8804;
	volatile int32_t t70 = 5229352;

	t70 = (x309==((x310&x311)+x312));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x313 = INT8_MIN;
	volatile int32_t x314 = -54941526;
	int16_t x315 = -1;
	uint32_t x316 = 378489041U;

	t71 = (x313==((x314&x315)+x316));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x319 = 79492121LLU;
	int16_t x320 = INT16_MIN;
	volatile int32_t t72 = -1;

	t72 = (x317==((x318&x319)+x320));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x322 = -10195;
	static uint8_t x324 = 1U;
	static int32_t t73 = -10675633;

	t73 = (x321==((x322&x323)+x324));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x330 = INT32_MAX;
	static int8_t x332 = INT8_MIN;
	int32_t t74 = -1;

	t74 = (x329==((x330&x331)+x332));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x335 = 1;
	volatile int64_t x336 = -1LL;
	volatile int32_t t75 = 22414234;

	t75 = (x333==((x334&x335)+x336));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x338 = UINT16_MAX;
	static int32_t x339 = -1;
	volatile uint8_t x340 = 93U;
	int32_t t76 = 221070490;

	t76 = (x337==((x338&x339)+x340));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x341 = -1;
	volatile uint32_t x342 = 0U;
	int8_t x343 = INT8_MIN;
	static volatile int16_t x344 = -141;
	static int32_t t77 = 383;

	t77 = (x341==((x342&x343)+x344));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x345 = -164582447;
	int16_t x346 = INT16_MIN;
	volatile uint16_t x347 = 5570U;
	int64_t x348 = INT64_MAX;

	t78 = (x345==((x346&x347)+x348));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x349 = INT64_MAX;
	static int8_t x351 = INT8_MIN;
	uint16_t x352 = UINT16_MAX;
	volatile int32_t t79 = 0;

	t79 = (x349==((x350&x351)+x352));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x353 = INT16_MIN;
	static int16_t x354 = INT16_MIN;
	int64_t x355 = -1LL;
	volatile int32_t t80 = 28;

	t80 = (x353==((x354&x355)+x356));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x357 = 0U;
	uint16_t x359 = UINT16_MAX;
	int16_t x360 = -1;
	volatile int32_t t81 = 706704332;

	t81 = (x357==((x358&x359)+x360));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x361 = INT8_MAX;
	int32_t x363 = -27;
	int32_t x364 = -1;

	t82 = (x361==((x362&x363)+x364));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x365 = INT64_MIN;
	int32_t x366 = 0;
	uint32_t x367 = 2U;
	int32_t x368 = INT32_MAX;
	static int32_t t83 = -1000916483;

	t83 = (x365==((x366&x367)+x368));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x369 = -50;
	uint8_t x370 = 29U;
	int64_t x371 = 0LL;
	int16_t x372 = INT16_MAX;
	int32_t t84 = -6744;

	t84 = (x369==((x370&x371)+x372));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x373 = 169;
	static int8_t x374 = INT8_MIN;
	int8_t x375 = -1;
	static int64_t x376 = INT64_MAX;

	t85 = (x373==((x374&x375)+x376));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x381 = 14U;
	uint8_t x382 = 0U;
	int32_t t86 = -498607;

	t86 = (x381==((x382&x383)+x384));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x385 = -20;
	int8_t x386 = INT8_MIN;
	static int16_t x387 = INT16_MIN;
	int8_t x388 = -4;

	t87 = (x385==((x386&x387)+x388));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x389 = 3;
	static volatile int32_t x392 = INT32_MIN;
	int32_t t88 = -302927;

	t88 = (x389==((x390&x391)+x392));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x393 = -1568;
	int16_t x394 = -1;
	int8_t x395 = INT8_MAX;
	uint32_t x396 = UINT32_MAX;
	int32_t t89 = 411034275;

	t89 = (x393==((x394&x395)+x396));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x397 = 3585792U;
	static int8_t x398 = INT8_MAX;
	int64_t x399 = -1LL;

	t90 = (x397==((x398&x399)+x400));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x402 = UINT32_MAX;
	uint32_t x403 = UINT32_MAX;
	volatile int32_t x404 = 1944207;
	static volatile int32_t t91 = 15743;

	t91 = (x401==((x402&x403)+x404));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x405 = INT8_MAX;
	static uint64_t x407 = 409LLU;
	volatile int8_t x408 = INT8_MIN;
	int32_t t92 = 58630;

	t92 = (x405==((x406&x407)+x408));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x412 = INT64_MIN;
	volatile int32_t t93 = 545;

	t93 = (x409==((x410&x411)+x412));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x413 = 30166643U;
	int32_t x414 = 40;
	int16_t x415 = INT16_MAX;
	uint8_t x416 = 2U;
	volatile int32_t t94 = 9983;

	t94 = (x413==((x414&x415)+x416));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x418 = 26U;
	int8_t x419 = INT8_MAX;
	static uint32_t x420 = 24913723U;
	volatile int32_t t95 = 5;

	t95 = (x417==((x418&x419)+x420));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x421 = INT16_MIN;
	uint32_t x423 = 106207U;
	uint16_t x424 = 3915U;

	t96 = (x421==((x422&x423)+x424));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x426 = UINT32_MAX;
	int8_t x428 = -1;
	static volatile int32_t t97 = 6;

	t97 = (x425==((x426&x427)+x428));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x429 = INT16_MAX;
	volatile int32_t x430 = INT32_MAX;
	int64_t x432 = -1LL;
	int32_t t98 = 125288870;

	t98 = (x429==((x430&x431)+x432));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x433 = -15042813098095LL;
	volatile int8_t x434 = 0;
	int64_t x435 = INT64_MAX;
	volatile int32_t t99 = -231237;

	t99 = (x433==((x434&x435)+x436));

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

