#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = INT8_MAX;
int16_t x7 = -1;
int32_t t1 = 16179;
int64_t x13 = -2025864LL;
volatile int64_t x19 = -267359LL;
volatile int32_t x21 = -1;
static uint32_t x28 = UINT32_MAX;
volatile int64_t t7 = 930295600LL;
uint16_t x40 = 4433U;
int16_t x43 = -8;
volatile uint32_t x68 = 265U;
uint16_t x78 = UINT16_MAX;
static int16_t x79 = -1;
uint64_t x90 = UINT64_MAX;
volatile uint64_t t15 = 80838473833961LLU;
int8_t x110 = 3;
int16_t x114 = INT16_MIN;
int8_t x121 = -3;
uint16_t x122 = 0U;
uint16_t x140 = 30U;
volatile int32_t x142 = -1;
volatile uint32_t t28 = 92734U;
static int64_t x146 = INT64_MIN;
int8_t x158 = INT8_MIN;
static int32_t t32 = -7717845;
uint16_t x162 = UINT16_MAX;
static uint8_t x165 = 1U;
uint64_t x176 = 1663077109LLU;
static int16_t x184 = INT16_MAX;
int8_t x187 = -1;
static int8_t x188 = INT8_MIN;
uint64_t x190 = 11435LLU;
static int16_t x206 = INT16_MAX;
uint64_t x209 = 1038554086246655750LLU;
static int8_t x212 = 0;
uint64_t t43 = 1420298128386LLU;
static uint16_t x216 = 192U;
volatile uint64_t x220 = UINT64_MAX;
static uint8_t x225 = 4U;
static int64_t x226 = INT64_MIN;
static volatile int64_t x233 = -5LL;
volatile int8_t x247 = -1;
int32_t x248 = INT32_MIN;
int16_t x264 = 1;
static uint16_t x272 = 1711U;
static int32_t t59 = -2;
volatile uint32_t t60 = 27835971U;
volatile uint32_t x287 = UINT32_MAX;
volatile uint16_t x299 = 1057U;
static int8_t x301 = INT8_MIN;
static uint16_t x302 = UINT16_MAX;
int8_t x311 = INT8_MIN;
int64_t x318 = INT64_MIN;
uint64_t x328 = 7878720951448580LLU;
uint64_t x329 = UINT64_MAX;
volatile int64_t x330 = INT64_MAX;
int64_t x332 = -1LL;
static int8_t x333 = INT8_MAX;
int32_t x336 = -1;
int16_t x346 = -6;
int64_t x347 = -305LL;
int8_t x353 = INT8_MIN;
int32_t x359 = INT32_MIN;
int32_t x368 = -1;
volatile int32_t t79 = 2059700;
int8_t x377 = 0;
int8_t x380 = 5;
volatile uint32_t t82 = 1837660492U;
static int8_t x384 = INT8_MIN;
int32_t x389 = INT32_MIN;
static uint64_t t85 = 3830LLU;
int8_t x408 = -1;
int64_t x411 = -1LL;
volatile int16_t x414 = -1;
static volatile int32_t t89 = 17311;
int16_t x417 = 3;
static volatile int16_t x422 = -3614;
int8_t x431 = 3;
int64_t t95 = -2579964979668LL;
static int16_t x441 = INT16_MIN;
uint64_t t96 = 639873704672LLU;
int32_t x452 = INT32_MIN;


void f0(void) {
	static volatile int8_t x1 = -1;
	uint8_t x2 = 35U;
	uint16_t x3 = 14799U;
	int32_t t0 = 11;

	t0 = ((x1*(x2|x3))&x4);

	if (t0 != 17) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	uint8_t x6 = UINT8_MAX;
	int8_t x8 = -1;

	t1 = ((x5*(x6|x7))&x8);

	if (t1 != 32768) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x14 = INT16_MIN;
	int8_t x15 = 18;
	volatile uint8_t x16 = 2U;
	int64_t t2 = 13776LL;

	t2 = ((x13*(x14|x15))&x16);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x17 = INT64_MIN;
	uint64_t x18 = 7LLU;
	volatile uint16_t x20 = 13U;
	uint64_t t3 = 41023811992LLU;

	t3 = ((x17*(x18|x19))&x20);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x22 = 1;
	volatile int32_t x23 = -1;
	volatile int32_t x24 = -1;
	volatile int32_t t4 = 388710220;

	t4 = ((x21*(x22|x23))&x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -1LL;
	volatile int8_t x26 = 1;
	int16_t x27 = 1;
	volatile int64_t t5 = 1307211982288196LL;

	t5 = ((x25*(x26|x27))&x28);

	if (t5 != 4294967295LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = 38;
	int32_t x30 = INT32_MAX;
	volatile int32_t x31 = INT32_MIN;
	int8_t x32 = -18;
	volatile int32_t t6 = -165516;

	t6 = ((x29*(x30|x31))&x32);

	if (t6 != -54) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint8_t x33 = 3U;
	int64_t x34 = -187946440525LL;
	int8_t x35 = -1;
	int16_t x36 = INT16_MAX;

	t7 = ((x33*(x34|x35))&x36);

	if (t7 != 32765LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = 0U;
	volatile int16_t x38 = INT16_MIN;
	static volatile uint32_t x39 = 1733U;
	volatile uint32_t t8 = 25U;

	t8 = ((x37*(x38|x39))&x40);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = 0U;
	int64_t x42 = INT64_MAX;
	uint32_t x44 = 5071U;
	static volatile int64_t t9 = -49368583LL;

	t9 = ((x41*(x42|x43))&x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x57 = -2;
	int16_t x58 = -898;
	volatile uint32_t x59 = 540050939U;
	int32_t x60 = -1;
	volatile uint32_t t10 = 6701U;

	t10 = ((x57*(x58|x59))&x60);

	if (t10 != 1026U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x65 = INT8_MIN;
	int32_t x66 = -3211086;
	uint16_t x67 = 8U;
	uint32_t t11 = 1703142U;

	t11 = ((x65*(x66|x67))&x68);

	if (t11 != 256U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x69 = -1;
	int32_t x70 = INT32_MIN;
	static uint16_t x71 = 462U;
	volatile uint64_t x72 = 83701LLU;
	static uint64_t t12 = 179414820LLU;

	t12 = ((x69*(x70|x71))&x72);

	if (t12 != 83504LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x73 = -1;
	int16_t x74 = INT16_MIN;
	int16_t x75 = -1;
	volatile int8_t x76 = INT8_MAX;
	volatile int32_t t13 = 7455;

	t13 = ((x73*(x74|x75))&x76);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x77 = 0U;
	int64_t x80 = INT64_MIN;
	volatile int64_t t14 = -367802LL;

	t14 = ((x77*(x78|x79))&x80);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x89 = -2;
	volatile uint32_t x91 = 413U;
	int32_t x92 = INT32_MIN;

	t15 = ((x89*(x90|x91))&x92);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x93 = INT32_MIN;
	static volatile int16_t x94 = -1;
	uint64_t x95 = 2796881067303LLU;
	uint16_t x96 = UINT16_MAX;
	static volatile uint64_t t16 = 394LLU;

	t16 = ((x93*(x94|x95))&x96);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x97 = -1;
	int16_t x98 = -1;
	uint8_t x99 = UINT8_MAX;
	int64_t x100 = -3771132276454137LL;
	volatile int64_t t17 = -118386509896399932LL;

	t17 = ((x97*(x98|x99))&x100);

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x101 = 504068;
	uint16_t x102 = UINT16_MAX;
	volatile uint64_t x103 = 36272555816458001LLU;
	uint8_t x104 = UINT8_MAX;
	uint64_t t18 = 26862216LLU;

	t18 = ((x101*(x102|x103))&x104);

	if (t18 != 252LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x105 = 6028U;
	int8_t x106 = 7;
	uint16_t x107 = UINT16_MAX;
	int64_t x108 = INT64_MIN;
	volatile int64_t t19 = 0LL;

	t19 = ((x105*(x106|x107))&x108);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x109 = INT16_MAX;
	volatile uint16_t x111 = 430U;
	int8_t x112 = INT8_MIN;
	volatile int32_t t20 = 5961;

	t20 = ((x109*(x110|x111))&x112);

	if (t20 != 14122496) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x113 = UINT64_MAX;
	uint8_t x115 = UINT8_MAX;
	static int32_t x116 = -1;
	volatile uint64_t t21 = 17575033333599LLU;

	t21 = ((x113*(x114|x115))&x116);

	if (t21 != 32513LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x117 = 0;
	int32_t x118 = -1035059;
	volatile int32_t x119 = -1;
	static uint32_t x120 = 0U;
	static volatile uint32_t t22 = 3U;

	t22 = ((x117*(x118|x119))&x120);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x123 = -1;
	volatile int32_t x124 = 10224889;
	volatile int32_t t23 = -13861903;

	t23 = ((x121*(x122|x123))&x124);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x125 = 4951U;
	int8_t x126 = -1;
	int64_t x127 = 504041000914LL;
	int64_t x128 = INT64_MIN;
	int64_t t24 = INT64_MIN;

	t24 = ((x125*(x126|x127))&x128);

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x129 = UINT8_MAX;
	static uint32_t x130 = 749U;
	static volatile uint16_t x131 = UINT16_MAX;
	int64_t x132 = INT64_MIN;
	int64_t t25 = -25374LL;

	t25 = ((x129*(x130|x131))&x132);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x133 = 65903633155450LLU;
	int8_t x134 = INT8_MAX;
	uint8_t x135 = 106U;
	uint64_t x136 = UINT64_MAX;
	uint64_t t26 = 4647046622760LLU;

	t26 = ((x133*(x134|x135))&x136);

	if (t26 != 8369761410742150LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x137 = -2;
	int8_t x138 = INT8_MIN;
	int16_t x139 = INT16_MAX;
	int32_t t27 = 2909;

	t27 = ((x137*(x138|x139))&x140);

	if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x141 = -1;
	int8_t x143 = 51;
	uint32_t x144 = 80525U;

	t28 = ((x141*(x142|x143))&x144);

	if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x145 = -475;
	uint64_t x147 = 43LLU;
	uint16_t x148 = 4069U;
	uint64_t t29 = 1596362166971LLU;

	t29 = ((x145*(x146|x147))&x148);

	if (t29 != 37LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x149 = INT8_MIN;
	uint8_t x150 = UINT8_MAX;
	static uint32_t x151 = UINT32_MAX;
	volatile int8_t x152 = INT8_MAX;
	volatile uint32_t t30 = 15U;

	t30 = ((x149*(x150|x151))&x152);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x153 = INT16_MIN;
	int8_t x154 = -1;
	static int16_t x155 = -1;
	uint32_t x156 = 9418882U;
	uint32_t t31 = 3742348U;

	t31 = ((x153*(x154|x155))&x156);

	if (t31 != 32768U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x157 = -14;
	int16_t x159 = INT16_MIN;
	uint8_t x160 = 88U;

	t32 = ((x157*(x158|x159))&x160);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x161 = INT16_MIN;
	int8_t x163 = INT8_MIN;
	int64_t x164 = INT64_MAX;
	volatile int64_t t33 = -2026087732637951LL;

	t33 = ((x161*(x162|x163))&x164);

	if (t33 != 32768LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x166 = INT64_MIN;
	static uint64_t x167 = 25594749838930LLU;
	volatile int64_t x168 = INT64_MAX;
	uint64_t t34 = 973524948LLU;

	t34 = ((x165*(x166|x167))&x168);

	if (t34 != 25594749838930LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x173 = 3972690LLU;
	uint64_t x174 = 976569720211134078LLU;
	int64_t x175 = INT64_MIN;
	uint64_t t35 = 414LLU;

	t35 = ((x173*(x174|x175))&x176);

	if (t35 != 1627392084LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x177 = INT16_MAX;
	volatile int8_t x178 = 0;
	int8_t x179 = 13;
	int8_t x180 = INT8_MIN;
	volatile int32_t t36 = -726;

	t36 = ((x177*(x178|x179))&x180);

	if (t36 != 425856) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x181 = 56927674876LL;
	uint8_t x182 = 7U;
	static int8_t x183 = INT8_MIN;
	volatile int64_t t37 = -485675315707LL;

	t37 = ((x181*(x182|x183))&x184);

	if (t37 != 12260LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x185 = 237U;
	static int64_t x186 = INT64_MIN;
	static int64_t t38 = 5422903LL;

	t38 = ((x185*(x186|x187))&x188);

	if (t38 != -256LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x189 = UINT16_MAX;
	int8_t x191 = 1;
	volatile int16_t x192 = 27;
	volatile uint64_t t39 = 46679079LLU;

	t39 = ((x189*(x190|x191))&x192);

	if (t39 != 17LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x197 = INT8_MAX;
	int64_t x198 = -2012765256655783LL;
	int16_t x199 = INT16_MIN;
	uint8_t x200 = 5U;
	int64_t t40 = 656307LL;

	t40 = ((x197*(x198|x199))&x200);

	if (t40 != 5LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x201 = UINT32_MAX;
	int64_t x202 = INT64_MAX;
	int16_t x203 = INT16_MIN;
	int16_t x204 = -1;
	int64_t t41 = -8483535588102LL;

	t41 = ((x201*(x202|x203))&x204);

	if (t41 != -4294967295LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x205 = 60U;
	int8_t x207 = INT8_MAX;
	int64_t x208 = INT64_MIN;
	int64_t t42 = 328805137886116618LL;

	t42 = ((x205*(x206|x207))&x208);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x210 = -1LL;
	int64_t x211 = INT64_MIN;

	t43 = ((x209*(x210|x211))&x212);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x213 = INT16_MAX;
	int64_t x214 = 78523LL;
	int32_t x215 = INT32_MIN;
	static int64_t t44 = 35261305050513097LL;

	t44 = ((x213*(x214|x215))&x216);

	if (t44 != 64LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x217 = -1;
	static int16_t x218 = 3;
	int8_t x219 = -2;
	static uint64_t t45 = 583844LLU;

	t45 = ((x217*(x218|x219))&x220);

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x221 = INT32_MAX;
	static int8_t x222 = INT8_MIN;
	uint64_t x223 = 1904295685783550LLU;
	uint8_t x224 = 5U;
	static volatile uint64_t t46 = 675451LLU;

	t46 = ((x221*(x222|x223))&x224);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x227 = INT32_MIN;
	int32_t x228 = INT32_MIN;
	volatile int64_t t47 = 2389559160767LL;

	t47 = ((x225*(x226|x227))&x228);

	if (t47 != -8589934592LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x229 = 22;
	static uint16_t x230 = UINT16_MAX;
	volatile uint32_t x231 = 59752U;
	int16_t x232 = -1;
	uint32_t t48 = 31U;

	t48 = ((x229*(x230|x231))&x232);

	if (t48 != 1441770U) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x234 = -15;
	int64_t x235 = INT64_MIN;
	int16_t x236 = INT16_MIN;
	volatile int64_t t49 = 3210261120193873346LL;

	t49 = ((x233*(x234|x235))&x236);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x237 = 94464291581440637LL;
	int64_t x238 = -1LL;
	uint8_t x239 = 1U;
	uint32_t x240 = UINT32_MAX;
	volatile int64_t t50 = 2585LL;

	t50 = ((x237*(x238|x239))&x240);

	if (t50 != 810831235LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x241 = INT8_MIN;
	volatile int16_t x242 = INT16_MIN;
	uint64_t x243 = 37690436436LLU;
	uint32_t x244 = 10U;
	volatile uint64_t t51 = 98659848798502LLU;

	t51 = ((x241*(x242|x243))&x244);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x245 = INT8_MIN;
	static int64_t x246 = 135117650956402LL;
	volatile int64_t t52 = 789362593753LL;

	t52 = ((x245*(x246|x247))&x248);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x249 = UINT64_MAX;
	int32_t x250 = -21;
	int32_t x251 = INT32_MAX;
	int16_t x252 = 83;
	volatile uint64_t t53 = 262141212LLU;

	t53 = ((x249*(x250|x251))&x252);

	if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x253 = -1LL;
	int64_t x254 = INT64_MAX;
	volatile int64_t x255 = -33237089LL;
	int64_t x256 = 803600533661050LL;
	int64_t t54 = -115869124332615788LL;

	t54 = ((x253*(x254|x255))&x256);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x257 = UINT64_MAX;
	uint64_t x258 = UINT64_MAX;
	uint8_t x259 = 2U;
	static int64_t x260 = 1877LL;
	volatile uint64_t t55 = 54964LLU;

	t55 = ((x257*(x258|x259))&x260);

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x261 = -1;
	int8_t x262 = -1;
	uint8_t x263 = UINT8_MAX;
	volatile int32_t t56 = -25;

	t56 = ((x261*(x262|x263))&x264);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x269 = 2072U;
	uint8_t x270 = UINT8_MAX;
	int64_t x271 = 169037205569414LL;
	static volatile int64_t t57 = -3488LL;

	t57 = ((x269*(x270|x271))&x272);

	if (t57 != 1704LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x273 = 9645;
	static uint8_t x274 = 3U;
	volatile uint32_t x275 = 23U;
	static uint64_t x276 = 4LLU;
	volatile uint64_t t58 = 2744862484634LLU;

	t58 = ((x273*(x274|x275))&x276);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint8_t x277 = 1U;
	int8_t x278 = -32;
	volatile int8_t x279 = INT8_MIN;
	uint8_t x280 = 21U;

	t59 = ((x277*(x278|x279))&x280);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x281 = INT16_MAX;
	int16_t x282 = 1;
	int16_t x283 = -7871;
	uint32_t x284 = 438U;

	t60 = ((x281*(x282|x283))&x284);

	if (t60 != 182U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x285 = -1;
	static volatile int8_t x286 = 0;
	static int8_t x288 = 2;
	uint32_t t61 = 149354908U;

	t61 = ((x285*(x286|x287))&x288);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x289 = INT8_MAX;
	int8_t x290 = INT8_MIN;
	int16_t x291 = -1;
	int8_t x292 = -1;
	volatile int32_t t62 = 14;

	t62 = ((x289*(x290|x291))&x292);

	if (t62 != -127) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x293 = INT64_MIN;
	int32_t x294 = -1;
	static uint64_t x295 = UINT64_MAX;
	int16_t x296 = -161;
	volatile uint64_t t63 = 0LLU;

	t63 = ((x293*(x294|x295))&x296);

	if (t63 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x297 = INT8_MAX;
	int16_t x298 = INT16_MIN;
	static uint32_t x300 = UINT32_MAX;
	static volatile uint32_t t64 = 14738148U;

	t64 = ((x297*(x298|x299))&x300);

	if (t64 != 4290939999U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x303 = -1;
	volatile uint32_t x304 = 30253228U;
	volatile uint32_t t65 = 25294234U;

	t65 = ((x301*(x302|x303))&x304);

	if (t65 != 128U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x305 = UINT8_MAX;
	int64_t x306 = INT64_MIN;
	uint64_t x307 = 583LLU;
	static int32_t x308 = INT32_MAX;
	volatile uint64_t t66 = 7193606664LLU;

	t66 = ((x305*(x306|x307))&x308);

	if (t66 != 148665LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x309 = UINT64_MAX;
	volatile uint64_t x310 = UINT64_MAX;
	uint32_t x312 = UINT32_MAX;
	volatile uint64_t t67 = 916155649500LLU;

	t67 = ((x309*(x310|x311))&x312);

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x313 = UINT16_MAX;
	int32_t x314 = -30;
	int16_t x315 = INT16_MIN;
	volatile int16_t x316 = -16;
	volatile int32_t t68 = 1745;

	t68 = ((x313*(x314|x315))&x316);

	if (t68 != -1966064) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x317 = 72U;
	static int32_t x319 = -1;
	static volatile int8_t x320 = INT8_MIN;
	int64_t t69 = -291872760LL;

	t69 = ((x317*(x318|x319))&x320);

	if (t69 != -128LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x321 = 1491898623495LLU;
	volatile uint32_t x322 = 446362U;
	int32_t x323 = INT32_MIN;
	volatile int64_t x324 = INT64_MIN;
	volatile uint64_t t70 = 18416052370203LLU;

	t70 = ((x321*(x322|x323))&x324);

	if (t70 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x325 = -1LL;
	int32_t x326 = 1540;
	int64_t x327 = -390055257218088429LL;
	static uint64_t t71 = 4510239742388LLU;

	t71 = ((x325*(x326|x327))&x328);

	if (t71 != 2745620272017408LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x331 = -2866;
	static volatile uint64_t t72 = 544581296778608952LLU;

	t72 = ((x329*(x330|x331))&x332);

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x334 = 1;
	uint64_t x335 = 59LLU;
	uint64_t t73 = 52574034LLU;

	t73 = ((x333*(x334|x335))&x336);

	if (t73 != 7493LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint32_t x337 = 15U;
	uint64_t x338 = 944459478LLU;
	static int16_t x339 = INT16_MAX;
	static int32_t x340 = INT32_MIN;
	uint64_t t74 = 3168865470725LLU;

	t74 = ((x337*(x338|x339))&x340);

	if (t74 != 12884901888LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x345 = UINT8_MAX;
	int32_t x348 = -12898810;
	int64_t t75 = -11961192LL;

	t75 = ((x345*(x346|x347))&x348);

	if (t75 != -12898816LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x354 = 49352391LLU;
	static int32_t x355 = 16548735;
	static volatile int64_t x356 = -13156079LL;
	static uint64_t t76 = 100439LLU;

	t76 = ((x353*(x354|x355))&x356);

	if (t76 != 18446744067287023616LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x357 = 39321797016545759LL;
	int32_t x358 = INT32_MAX;
	static uint32_t x360 = 42486490U;
	volatile int64_t t77 = -7LL;

	t77 = ((x357*(x358|x359))&x360);

	if (t77 != 8389120LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint32_t x361 = 89U;
	int64_t x362 = 207112373722086645LL;
	int32_t x363 = INT32_MIN;
	int16_t x364 = -59;
	int64_t t78 = 145520777807LL;

	t78 = ((x361*(x362|x363))&x364);

	if (t78 != -83180261115LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x365 = INT8_MIN;
	int8_t x366 = INT8_MIN;
	int32_t x367 = INT32_MIN;

	t79 = ((x365*(x366|x367))&x368);

	if (t79 != 16384) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x369 = 2122U;
	volatile uint8_t x370 = 7U;
	static uint16_t x371 = 993U;
	int32_t x372 = -1;
	uint32_t t80 = 769496797U;

	t80 = ((x369*(x370|x371))&x372);

	if (t80 != 2119878U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x373 = 1044728297LLU;
	static int8_t x374 = -1;
	uint8_t x375 = 3U;
	static int64_t x376 = INT64_MIN;
	uint64_t t81 = 3274121LLU;

	t81 = ((x373*(x374|x375))&x376);

	if (t81 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x378 = UINT8_MAX;
	static uint32_t x379 = 157773306U;

	t82 = ((x377*(x378|x379))&x380);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x381 = 21U;
	static int64_t x382 = -1LL;
	uint64_t x383 = 1LLU;
	uint64_t t83 = 100212725031719LLU;

	t83 = ((x381*(x382|x383))&x384);

	if (t83 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x385 = INT16_MIN;
	int8_t x386 = INT8_MAX;
	uint8_t x387 = UINT8_MAX;
	int32_t x388 = 88;
	volatile int32_t t84 = -5089;

	t84 = ((x385*(x386|x387))&x388);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x390 = -6;
	uint64_t x391 = 785714LLU;
	volatile uint8_t x392 = 42U;

	t85 = ((x389*(x390|x391))&x392);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x401 = 31LL;
	uint8_t x402 = UINT8_MAX;
	volatile int32_t x403 = 901;
	int32_t x404 = INT32_MAX;
	volatile int64_t t86 = 32382425LL;

	t86 = ((x401*(x402|x403))&x404);

	if (t86 != 31713LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x405 = -1;
	static uint32_t x406 = 2451U;
	static volatile uint16_t x407 = 16U;
	volatile uint32_t t87 = 2978875U;

	t87 = ((x405*(x406|x407))&x408);

	if (t87 != 4294964845U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x409 = INT16_MAX;
	static uint16_t x410 = 620U;
	uint16_t x412 = 14U;
	static int64_t t88 = -954407924766185LL;

	t88 = ((x409*(x410|x411))&x412);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x413 = 55U;
	int16_t x415 = -52;
	int16_t x416 = 13;

	t89 = ((x413*(x414|x415))&x416);

	if (t89 != 9) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x418 = UINT64_MAX;
	int8_t x419 = INT8_MAX;
	int64_t x420 = 10956537LL;
	volatile uint64_t t90 = 1010933618691419LLU;

	t90 = ((x417*(x418|x419))&x420);

	if (t90 != 10956537LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x421 = -1;
	int32_t x423 = INT32_MIN;
	volatile int16_t x424 = INT16_MIN;
	int32_t t91 = 2910392;

	t91 = ((x421*(x422|x423))&x424);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x425 = 51U;
	int8_t x426 = 5;
	uint64_t x427 = 86LLU;
	int16_t x428 = 4580;
	volatile uint64_t t92 = 2379023420562312091LLU;

	t92 = ((x425*(x426|x427))&x428);

	if (t92 != 4420LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x429 = 1737736108LLU;
	volatile uint8_t x430 = 18U;
	volatile int8_t x432 = INT8_MAX;
	uint64_t t93 = 217LLU;

	t93 = ((x429*(x430|x431))&x432);

	if (t93 != 68LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x433 = INT16_MAX;
	volatile uint32_t x434 = UINT32_MAX;
	volatile uint64_t x435 = UINT64_MAX;
	int8_t x436 = INT8_MAX;
	uint64_t t94 = 117428069161LLU;

	t94 = ((x433*(x434|x435))&x436);

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x437 = -1LL;
	int64_t x438 = -63380323LL;
	int8_t x439 = -1;
	volatile int64_t x440 = -2052849207LL;

	t95 = ((x437*(x438|x439))&x440);

	if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x442 = -1;
	volatile int16_t x443 = -1;
	uint64_t x444 = 4144264549148354376LLU;

	t96 = ((x441*(x442|x443))&x444);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x445 = 3;
	static int16_t x446 = INT16_MIN;
	volatile int8_t x447 = -1;
	int16_t x448 = -1;
	static volatile int32_t t97 = 72358;

	t97 = ((x445*(x446|x447))&x448);

	if (t97 != -3) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x449 = 22U;
	uint64_t x450 = 9562456094432LLU;
	uint64_t x451 = UINT64_MAX;
	uint64_t t98 = 4209066763716170LLU;

	t98 = ((x449*(x450|x451))&x452);

	if (t98 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x453 = INT8_MAX;
	int8_t x454 = 0;
	int8_t x455 = -1;
	volatile uint32_t x456 = 0U;
	volatile uint32_t t99 = 46069605U;

	t99 = ((x453*(x454|x455))&x456);

	if (t99 != 0U) { NG(); } else { ; }
	
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

