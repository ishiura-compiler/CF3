#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x7 = 1;
volatile uint32_t x8 = 1225870264U;
uint64_t x9 = 237LLU;
int16_t x10 = -1;
int16_t x11 = 1;
int32_t t2 = 629;
int16_t x16 = INT16_MIN;
static uint16_t x19 = 388U;
static int32_t t5 = 0;
int8_t x33 = INT8_MAX;
int32_t t7 = -3347;
static uint8_t x38 = 32U;
int32_t t9 = -11220;
static int32_t x48 = INT32_MIN;
static volatile int64_t x58 = INT64_MIN;
int8_t x61 = INT8_MIN;
int16_t x65 = -4655;
int16_t x68 = INT16_MIN;
int8_t x73 = 0;
static volatile int32_t t20 = -1;
volatile int32_t t22 = 2;
int32_t x116 = INT32_MAX;
static int32_t t26 = -48;
uint32_t x125 = 6374177U;
int16_t x131 = INT16_MIN;
static volatile int32_t t29 = -7113591;
int32_t x137 = INT32_MAX;
volatile int32_t x139 = INT32_MIN;
int64_t x140 = -1LL;
volatile int32_t t31 = -664630831;
uint64_t x145 = UINT64_MAX;
int16_t x151 = -1;
static int8_t x158 = 2;
uint32_t x172 = 1023300U;
volatile int64_t x176 = -1162603714176717145LL;
uint64_t x182 = UINT64_MAX;
int32_t x184 = -441739;
volatile int32_t t43 = 1;
volatile uint8_t x193 = 12U;
uint8_t x195 = 41U;
uint8_t x201 = 2U;
int8_t x203 = INT8_MIN;
int8_t x204 = -2;
volatile int32_t t46 = 11922112;
static int8_t x209 = INT8_MIN;
volatile int64_t x223 = 9127056LL;
uint32_t x224 = 10479U;
int32_t x229 = -1;
int64_t x230 = INT64_MIN;
int32_t x243 = -21;
volatile int64_t x244 = INT64_MIN;
int64_t x248 = INT64_MIN;
static uint8_t x256 = 32U;
static int32_t t58 = -73304;
uint64_t x260 = 878972LLU;
static int64_t x261 = INT64_MIN;
static int8_t x272 = 1;
int8_t x286 = -1;
static uint16_t x296 = UINT16_MAX;
static int16_t x297 = INT16_MAX;
static uint64_t x301 = 2503750835276668557LLU;
static int32_t t70 = 72489;
static int16_t x305 = -1;
static uint8_t x313 = UINT8_MAX;
int8_t x316 = INT8_MAX;
int32_t x317 = 21340;
static int64_t x321 = 289LL;
volatile uint64_t x325 = 390273LLU;
uint8_t x329 = UINT8_MAX;
uint8_t x339 = 1U;
volatile int32_t t82 = 160947;
volatile int32_t t83 = 101;
int32_t t84 = 2;
int32_t x364 = INT32_MAX;
int16_t x368 = INT16_MAX;
int16_t x370 = INT16_MIN;
static int8_t x380 = INT8_MIN;
int32_t t89 = -921154;
volatile int16_t x381 = INT16_MIN;
int16_t x387 = -1;
int64_t x388 = 8031LL;
uint16_t x392 = 1290U;
static volatile int32_t t92 = 315730;
int16_t x393 = -2;
int16_t x396 = -1;
uint64_t x401 = 3570478405203530960LLU;
static volatile uint16_t x409 = UINT16_MAX;
volatile int64_t x410 = -818506995LL;
volatile int32_t x413 = INT32_MAX;
uint8_t x415 = 119U;
int64_t x418 = -1LL;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	int8_t x2 = -4;
	uint64_t x3 = UINT64_MAX;
	uint64_t x4 = UINT64_MAX;
	volatile int32_t t0 = 3;

	t0 = ((x1&(x2/x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 4055490335090871LL;
	int16_t x6 = INT16_MIN;
	int32_t t1 = -11;

	t1 = ((x5&(x6/x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x12 = UINT32_MAX;

	t2 = ((x9&(x10/x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = -55;
	int32_t x14 = -1;
	int8_t x15 = INT8_MAX;
	int32_t t3 = 193;

	t3 = ((x13&(x14/x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	static int16_t x18 = -1;
	static int32_t x20 = INT32_MIN;
	volatile int32_t t4 = -7;

	t4 = ((x17&(x18/x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = -1;
	int16_t x26 = -1;
	volatile uint32_t x27 = 1978061U;
	int16_t x28 = INT16_MAX;

	t5 = ((x25&(x26/x27))<=x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 2U;
	int16_t x30 = INT16_MIN;
	volatile int32_t x31 = -2282;
	static int64_t x32 = INT64_MIN;
	volatile int32_t t6 = -94;

	t6 = ((x29&(x30/x31))<=x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x34 = 56U;
	static int32_t x35 = -2048989;
	int32_t x36 = -1;

	t7 = ((x33&(x34/x35))<=x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x37 = -1;
	int64_t x39 = INT64_MIN;
	uint32_t x40 = UINT32_MAX;
	volatile int32_t t8 = -3;

	t8 = ((x37&(x38/x39))<=x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MAX;
	uint8_t x42 = 72U;
	int32_t x43 = INT32_MIN;
	int16_t x44 = -115;

	t9 = ((x41&(x42/x43))<=x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MIN;
	int8_t x46 = -1;
	int8_t x47 = INT8_MIN;
	volatile int32_t t10 = 1753;

	t10 = ((x45&(x46/x47))<=x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = INT32_MIN;
	volatile int8_t x54 = 28;
	static int16_t x55 = 782;
	static volatile int64_t x56 = -16698167LL;
	int32_t t11 = 4367895;

	t11 = ((x53&(x54/x55))<=x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = INT64_MAX;
	int8_t x59 = INT8_MIN;
	int64_t x60 = INT64_MAX;
	static int32_t t12 = 0;

	t12 = ((x57&(x58/x59))<=x60);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x62 = -1;
	int32_t x63 = -1;
	uint32_t x64 = 98U;
	int32_t t13 = -26371;

	t13 = ((x61&(x62/x63))<=x64);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x66 = UINT16_MAX;
	uint32_t x67 = UINT32_MAX;
	static int32_t t14 = -171;

	t14 = ((x65&(x66/x67))<=x68);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = INT8_MAX;
	uint32_t x70 = 55842724U;
	volatile int16_t x71 = -1493;
	volatile int64_t x72 = INT64_MIN;
	static int32_t t15 = 4874995;

	t15 = ((x69&(x70/x71))<=x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x74 = -1;
	uint8_t x75 = 6U;
	uint32_t x76 = UINT32_MAX;
	static int32_t t16 = -1;

	t16 = ((x73&(x74/x75))<=x76);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = -1LL;
	int64_t x78 = 2685351963233278LL;
	int64_t x79 = -394922382327LL;
	static int8_t x80 = INT8_MAX;
	volatile int32_t t17 = 2721;

	t17 = ((x77&(x78/x79))<=x80);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = INT32_MAX;
	int16_t x82 = 39;
	int32_t x83 = -3;
	int8_t x84 = INT8_MIN;
	volatile int32_t t18 = 1;

	t18 = ((x81&(x82/x83))<=x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x85 = 0U;
	int32_t x86 = INT32_MIN;
	uint8_t x87 = UINT8_MAX;
	static int32_t x88 = INT32_MAX;
	volatile int32_t t19 = -5739;

	t19 = ((x85&(x86/x87))<=x88);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = INT32_MIN;
	int8_t x90 = -1;
	int32_t x91 = INT32_MIN;
	uint8_t x92 = UINT8_MAX;

	t20 = ((x89&(x90/x91))<=x92);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x101 = 4273783018394703222LLU;
	static int64_t x102 = -126341409891480152LL;
	static uint16_t x103 = 406U;
	int64_t x104 = INT64_MIN;
	int32_t t21 = 220115;

	t21 = ((x101&(x102/x103))<=x104);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = -1;
	int32_t x106 = -1;
	volatile int32_t x107 = 238529;
	volatile int16_t x108 = 15;

	t22 = ((x105&(x106/x107))<=x108);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x109 = -19;
	int8_t x110 = INT8_MIN;
	static int16_t x111 = INT16_MIN;
	static uint32_t x112 = 208U;
	static int32_t t23 = -13977620;

	t23 = ((x109&(x110/x111))<=x112);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x113 = UINT32_MAX;
	int64_t x114 = INT64_MIN;
	int16_t x115 = 1284;
	volatile int32_t t24 = 9592200;

	t24 = ((x113&(x114/x115))<=x116);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x117 = INT32_MIN;
	volatile int16_t x118 = INT16_MAX;
	int32_t x119 = INT32_MIN;
	volatile int64_t x120 = 7LL;
	int32_t t25 = -491;

	t25 = ((x117&(x118/x119))<=x120);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = INT64_MIN;
	int32_t x122 = -240897;
	static int32_t x123 = INT32_MAX;
	int16_t x124 = -110;

	t26 = ((x121&(x122/x123))<=x124);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x126 = 0;
	uint16_t x127 = UINT16_MAX;
	volatile uint8_t x128 = 1U;
	int32_t t27 = -3118795;

	t27 = ((x125&(x126/x127))<=x128);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = -952;
	int32_t x130 = INT32_MIN;
	uint16_t x132 = UINT16_MAX;
	int32_t t28 = 7832426;

	t28 = ((x129&(x130/x131))<=x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = -1;
	uint32_t x134 = 283U;
	int8_t x135 = 14;
	int8_t x136 = INT8_MIN;

	t29 = ((x133&(x134/x135))<=x136);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x138 = 228291015747842LLU;
	volatile int32_t t30 = 12265;

	t30 = ((x137&(x138/x139))<=x140);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x141 = UINT16_MAX;
	volatile int8_t x142 = INT8_MIN;
	int32_t x143 = INT32_MIN;
	static uint8_t x144 = UINT8_MAX;

	t31 = ((x141&(x142/x143))<=x144);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x146 = 0;
	static int32_t x147 = INT32_MAX;
	static uint32_t x148 = 37511246U;
	static int32_t t32 = -25;

	t32 = ((x145&(x146/x147))<=x148);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x149 = 7279U;
	static uint8_t x150 = 2U;
	int64_t x152 = 113669705022050666LL;
	int32_t t33 = -1;

	t33 = ((x149&(x150/x151))<=x152);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x153 = UINT64_MAX;
	static volatile uint32_t x154 = UINT32_MAX;
	static int16_t x155 = INT16_MIN;
	uint8_t x156 = UINT8_MAX;
	volatile int32_t t34 = -673007;

	t34 = ((x153&(x154/x155))<=x156);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x157 = 1876587;
	int16_t x159 = INT16_MIN;
	volatile int16_t x160 = INT16_MIN;
	int32_t t35 = 1204255;

	t35 = ((x157&(x158/x159))<=x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x161 = INT8_MIN;
	uint16_t x162 = UINT16_MAX;
	uint16_t x163 = 43U;
	uint8_t x164 = UINT8_MAX;
	volatile int32_t t36 = -550;

	t36 = ((x161&(x162/x163))<=x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x165 = 808530690101LL;
	uint8_t x166 = UINT8_MAX;
	int64_t x167 = -144627174810LL;
	uint16_t x168 = 23U;
	int32_t t37 = 947863;

	t37 = ((x165&(x166/x167))<=x168);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x169 = -16;
	static int16_t x170 = INT16_MIN;
	int64_t x171 = -1LL;
	int32_t t38 = -54006328;

	t38 = ((x169&(x170/x171))<=x172);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x173 = INT64_MIN;
	int8_t x174 = -1;
	int16_t x175 = INT16_MIN;
	int32_t t39 = -253813254;

	t39 = ((x173&(x174/x175))<=x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x177 = 171436441416887LL;
	static int8_t x178 = -1;
	volatile uint64_t x179 = UINT64_MAX;
	volatile uint16_t x180 = UINT16_MAX;
	static volatile int32_t t40 = -1;

	t40 = ((x177&(x178/x179))<=x180);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x181 = -1;
	volatile int32_t x183 = -1;
	int32_t t41 = 68;

	t41 = ((x181&(x182/x183))<=x184);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x185 = 1U;
	volatile int16_t x186 = -1;
	int16_t x187 = -1;
	int64_t x188 = INT64_MAX;
	int32_t t42 = 36504;

	t42 = ((x185&(x186/x187))<=x188);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x189 = 220U;
	static int8_t x190 = 1;
	int64_t x191 = INT64_MIN;
	int32_t x192 = 80605082;

	t43 = ((x189&(x190/x191))<=x192);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x194 = 5107934U;
	int32_t x196 = -1;
	volatile int32_t t44 = -122168;

	t44 = ((x193&(x194/x195))<=x196);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x202 = INT16_MAX;
	volatile int32_t t45 = -1921;

	t45 = ((x201&(x202/x203))<=x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x205 = INT32_MIN;
	static int32_t x206 = -71084604;
	volatile int64_t x207 = 47919868320451165LL;
	uint16_t x208 = UINT16_MAX;

	t46 = ((x205&(x206/x207))<=x208);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x210 = -31801;
	static uint8_t x211 = 15U;
	uint16_t x212 = 668U;
	volatile int32_t t47 = -2129563;

	t47 = ((x209&(x210/x211))<=x212);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x213 = 2U;
	volatile uint8_t x214 = 69U;
	int16_t x215 = 31;
	static int16_t x216 = 3;
	volatile int32_t t48 = 191001;

	t48 = ((x213&(x214/x215))<=x216);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x217 = 48959735137LLU;
	uint32_t x218 = 1728228U;
	int16_t x219 = 15;
	uint8_t x220 = UINT8_MAX;
	static volatile int32_t t49 = 982569;

	t49 = ((x217&(x218/x219))<=x220);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x221 = 9548U;
	int8_t x222 = -1;
	int32_t t50 = 43393;

	t50 = ((x221&(x222/x223))<=x224);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x225 = 16U;
	int32_t x226 = INT32_MIN;
	int64_t x227 = -1LL;
	volatile uint64_t x228 = 5943783333703147386LLU;
	volatile int32_t t51 = 3;

	t51 = ((x225&(x226/x227))<=x228);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x231 = UINT8_MAX;
	uint16_t x232 = 68U;
	int32_t t52 = 0;

	t52 = ((x229&(x230/x231))<=x232);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x233 = INT32_MAX;
	int8_t x234 = INT8_MIN;
	int64_t x235 = INT64_MAX;
	volatile uint8_t x236 = UINT8_MAX;
	volatile int32_t t53 = -1071041054;

	t53 = ((x233&(x234/x235))<=x236);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x237 = INT8_MIN;
	static int64_t x238 = INT64_MIN;
	int64_t x239 = -3860511LL;
	int32_t x240 = -466;
	volatile int32_t t54 = 1825;

	t54 = ((x237&(x238/x239))<=x240);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x241 = -3;
	int8_t x242 = INT8_MAX;
	int32_t t55 = -2373806;

	t55 = ((x241&(x242/x243))<=x244);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x245 = -1973;
	static uint16_t x246 = UINT16_MAX;
	uint32_t x247 = 204603U;
	int32_t t56 = -107203551;

	t56 = ((x245&(x246/x247))<=x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x249 = -15356;
	int32_t x250 = INT32_MAX;
	int8_t x251 = INT8_MAX;
	int32_t x252 = INT32_MAX;
	volatile int32_t t57 = -4161904;

	t57 = ((x249&(x250/x251))<=x252);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x253 = 798207U;
	volatile int8_t x254 = INT8_MAX;
	int16_t x255 = INT16_MIN;

	t58 = ((x253&(x254/x255))<=x256);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x257 = 882U;
	int16_t x258 = INT16_MIN;
	uint16_t x259 = 11U;
	volatile int32_t t59 = 7964595;

	t59 = ((x257&(x258/x259))<=x260);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x262 = 139418LLU;
	int32_t x263 = INT32_MIN;
	static int32_t x264 = INT32_MAX;
	int32_t t60 = 25994;

	t60 = ((x261&(x262/x263))<=x264);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = 210;
	static uint8_t x266 = 5U;
	volatile int16_t x267 = -1;
	int8_t x268 = -9;
	volatile int32_t t61 = -650828;

	t61 = ((x265&(x266/x267))<=x268);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x269 = 2U;
	uint8_t x270 = 0U;
	int64_t x271 = -1LL;
	volatile int32_t t62 = -21242751;

	t62 = ((x269&(x270/x271))<=x272);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x273 = INT16_MAX;
	uint16_t x274 = 108U;
	int64_t x275 = 46250959645LL;
	int8_t x276 = INT8_MIN;
	volatile int32_t t63 = 0;

	t63 = ((x273&(x274/x275))<=x276);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x277 = INT64_MIN;
	static uint8_t x278 = 71U;
	uint16_t x279 = UINT16_MAX;
	uint64_t x280 = 59068167988164LLU;
	int32_t t64 = -1;

	t64 = ((x277&(x278/x279))<=x280);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x281 = INT32_MAX;
	uint64_t x282 = 81123798893523LLU;
	uint16_t x283 = UINT16_MAX;
	uint32_t x284 = UINT32_MAX;
	int32_t t65 = 16946090;

	t65 = ((x281&(x282/x283))<=x284);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x285 = 434LL;
	int64_t x287 = 582359134LL;
	int32_t x288 = -8346314;
	volatile int32_t t66 = -3027611;

	t66 = ((x285&(x286/x287))<=x288);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x289 = -45;
	static int64_t x290 = INT64_MIN;
	int8_t x291 = INT8_MIN;
	static int8_t x292 = INT8_MAX;
	int32_t t67 = -75;

	t67 = ((x289&(x290/x291))<=x292);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x293 = -1;
	uint8_t x294 = UINT8_MAX;
	int16_t x295 = -1;
	volatile int32_t t68 = 6;

	t68 = ((x293&(x294/x295))<=x296);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x298 = -64792763;
	uint64_t x299 = 124833LLU;
	volatile int8_t x300 = INT8_MAX;
	int32_t t69 = -17016421;

	t69 = ((x297&(x298/x299))<=x300);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x302 = INT32_MIN;
	static int8_t x303 = -31;
	uint32_t x304 = 1U;

	t70 = ((x301&(x302/x303))<=x304);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x306 = INT8_MIN;
	uint64_t x307 = 39506063LLU;
	int64_t x308 = -888060202246336LL;
	static int32_t t71 = -4049;

	t71 = ((x305&(x306/x307))<=x308);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x309 = INT8_MIN;
	int32_t x310 = -1;
	uint64_t x311 = UINT64_MAX;
	int8_t x312 = -1;
	volatile int32_t t72 = 51;

	t72 = ((x309&(x310/x311))<=x312);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x314 = INT64_MAX;
	int32_t x315 = -1697061;
	volatile int32_t t73 = 696082710;

	t73 = ((x313&(x314/x315))<=x316);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x318 = UINT32_MAX;
	uint16_t x319 = 3445U;
	uint8_t x320 = UINT8_MAX;
	int32_t t74 = -47279802;

	t74 = ((x317&(x318/x319))<=x320);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x322 = -1;
	int32_t x323 = -5078;
	int64_t x324 = -27925LL;
	static volatile int32_t t75 = 489;

	t75 = ((x321&(x322/x323))<=x324);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x326 = INT16_MIN;
	volatile uint32_t x327 = 1584U;
	volatile uint16_t x328 = 6515U;
	volatile int32_t t76 = -152837;

	t76 = ((x325&(x326/x327))<=x328);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x330 = INT16_MIN;
	uint8_t x331 = 1U;
	int64_t x332 = 1794LL;
	int32_t t77 = -478;

	t77 = ((x329&(x330/x331))<=x332);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x333 = INT64_MIN;
	int8_t x334 = 3;
	uint16_t x335 = 1740U;
	uint32_t x336 = 353U;
	volatile int32_t t78 = 1;

	t78 = ((x333&(x334/x335))<=x336);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x337 = INT8_MIN;
	static uint16_t x338 = 23047U;
	static uint16_t x340 = 1516U;
	int32_t t79 = -2533117;

	t79 = ((x337&(x338/x339))<=x340);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x341 = 2U;
	int16_t x342 = INT16_MAX;
	volatile int16_t x343 = -1;
	static volatile uint64_t x344 = 48353131179246881LLU;
	volatile int32_t t80 = 817470;

	t80 = ((x341&(x342/x343))<=x344);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x345 = 7U;
	int16_t x346 = INT16_MIN;
	volatile int32_t x347 = INT32_MAX;
	static volatile int8_t x348 = INT8_MIN;
	volatile int32_t t81 = -51;

	t81 = ((x345&(x346/x347))<=x348);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x349 = UINT16_MAX;
	static int16_t x350 = INT16_MIN;
	static int16_t x351 = INT16_MAX;
	int8_t x352 = INT8_MAX;

	t82 = ((x349&(x350/x351))<=x352);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x353 = 26U;
	int8_t x354 = INT8_MIN;
	int32_t x355 = INT32_MIN;
	volatile int64_t x356 = -380373919238480LL;

	t83 = ((x353&(x354/x355))<=x356);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x357 = 159;
	int64_t x358 = -1LL;
	int32_t x359 = -1;
	int16_t x360 = INT16_MAX;

	t84 = ((x357&(x358/x359))<=x360);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint32_t x361 = 4U;
	int8_t x362 = INT8_MAX;
	static int64_t x363 = -1LL;
	volatile int32_t t85 = -617;

	t85 = ((x361&(x362/x363))<=x364);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x365 = 7657625336160LL;
	uint16_t x366 = UINT16_MAX;
	int8_t x367 = INT8_MAX;
	volatile int32_t t86 = 1;

	t86 = ((x365&(x366/x367))<=x368);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x369 = -1LL;
	volatile int64_t x371 = INT64_MAX;
	int8_t x372 = -14;
	int32_t t87 = 57335250;

	t87 = ((x369&(x370/x371))<=x372);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x373 = 172829744LLU;
	volatile uint32_t x374 = 26029636U;
	int16_t x375 = INT16_MIN;
	volatile uint16_t x376 = 3U;
	static int32_t t88 = 56809;

	t88 = ((x373&(x374/x375))<=x376);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x377 = -1;
	static volatile int8_t x378 = INT8_MIN;
	int64_t x379 = INT64_MAX;

	t89 = ((x377&(x378/x379))<=x380);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x382 = INT32_MAX;
	int8_t x383 = -1;
	static volatile int8_t x384 = INT8_MAX;
	static volatile int32_t t90 = 439558;

	t90 = ((x381&(x382/x383))<=x384);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x385 = 0;
	int32_t x386 = 2268131;
	volatile int32_t t91 = 1;

	t91 = ((x385&(x386/x387))<=x388);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x389 = 5;
	volatile uint32_t x390 = 59477U;
	uint32_t x391 = UINT32_MAX;

	t92 = ((x389&(x390/x391))<=x392);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x394 = -1;
	volatile int8_t x395 = -1;
	static int32_t t93 = 220;

	t93 = ((x393&(x394/x395))<=x396);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x397 = INT16_MIN;
	uint32_t x398 = 110973712U;
	uint32_t x399 = 11670405U;
	uint32_t x400 = 15729594U;
	static volatile int32_t t94 = -2648;

	t94 = ((x397&(x398/x399))<=x400);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x402 = -1;
	int32_t x403 = INT32_MIN;
	uint64_t x404 = 22766896463454619LLU;
	volatile int32_t t95 = 4980650;

	t95 = ((x401&(x402/x403))<=x404);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x411 = INT32_MIN;
	static int16_t x412 = -15;
	static int32_t t96 = 489505524;

	t96 = ((x409&(x410/x411))<=x412);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x414 = -24;
	volatile int64_t x416 = -1LL;
	int32_t t97 = -16017;

	t97 = ((x413&(x414/x415))<=x416);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x417 = -1LL;
	uint32_t x419 = 895U;
	int16_t x420 = 26;
	int32_t t98 = -2553249;

	t98 = ((x417&(x418/x419))<=x420);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x421 = INT16_MIN;
	int64_t x422 = INT64_MAX;
	int32_t x423 = 117;
	volatile int32_t x424 = INT32_MIN;
	volatile int32_t t99 = -1;

	t99 = ((x421&(x422/x423))<=x424);

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

