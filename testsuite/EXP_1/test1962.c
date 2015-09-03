#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x8 = 17U;
uint64_t t2 = UINT64_MAX;
uint8_t x18 = 8U;
uint64_t x20 = 1692723978153LLU;
uint8_t x23 = 0U;
uint32_t x26 = 47U;
uint64_t t7 = UINT64_MAX;
int16_t x35 = INT16_MAX;
int64_t x44 = -3973237915484490LL;
volatile int64_t t10 = 235697LL;
int16_t x49 = INT16_MIN;
static int32_t t13 = -2841;
static uint64_t x66 = 228LLU;
uint32_t x70 = UINT32_MAX;
int16_t x71 = 1;
volatile int32_t x74 = INT32_MAX;
uint64_t x75 = 504926103517430LLU;
int64_t x76 = -84470317115010269LL;
static int16_t x77 = INT16_MIN;
int16_t x79 = 147;
uint64_t x85 = 575205526LLU;
int8_t x102 = INT8_MAX;
volatile int64_t t26 = 286478151668418LL;
uint32_t x110 = 25U;
uint8_t x113 = UINT8_MAX;
static int64_t x122 = -10LL;
int8_t x123 = 2;
int64_t x126 = INT64_MIN;
volatile int32_t x130 = INT32_MIN;
int64_t x134 = -168LL;
uint16_t x136 = 0U;
int8_t x137 = INT8_MAX;
int64_t x142 = 1013635294001LL;
static uint16_t x146 = 3U;
uint64_t x147 = 129434LLU;
int64_t x152 = INT64_MAX;
static volatile uint8_t x167 = UINT8_MAX;
int32_t x168 = -1;
int8_t x175 = 14;
uint32_t x182 = 21730715U;
uint8_t x183 = UINT8_MAX;
int32_t t45 = 212694019;
int8_t x190 = INT8_MAX;
static int32_t t47 = 0;
static int64_t x196 = INT64_MIN;
volatile int64_t t48 = INT64_MIN;
volatile uint64_t x198 = UINT64_MAX;
volatile int64_t t49 = INT64_MIN;
int8_t x206 = -3;
volatile int32_t t51 = -124;
volatile int32_t x209 = -6;
int8_t x215 = -61;
static uint8_t x219 = 52U;
volatile int32_t x220 = INT32_MAX;
int32_t x221 = INT32_MIN;
int8_t x222 = INT8_MIN;
uint32_t x223 = 24U;
uint8_t x224 = 1U;
int16_t x228 = -1;
int32_t t56 = 155;
uint8_t x240 = 1U;
int32_t x242 = 5152;
int32_t x243 = INT32_MAX;
static int16_t x254 = INT16_MAX;
uint32_t x257 = UINT32_MAX;
uint32_t x262 = UINT32_MAX;
int16_t x269 = -2412;
uint16_t x275 = UINT16_MAX;
int32_t t69 = -34611;
volatile int64_t t71 = INT64_MAX;
static int64_t x293 = INT64_MAX;
uint8_t x299 = 78U;
static int32_t x300 = -238913;
int32_t x305 = 63362548;
int16_t x306 = INT16_MIN;
int32_t x307 = -418;
volatile int32_t t76 = -33;
volatile uint64_t t78 = 57702764453003LLU;
volatile int8_t x317 = -1;
static int32_t x319 = INT32_MIN;
uint32_t x327 = 11800417U;
int8_t x343 = -1;
int64_t x346 = INT64_MIN;
volatile int64_t x347 = -378465386366835LL;
uint64_t x351 = 4273578890367LLU;
volatile int64_t t87 = 70559742652708704LL;
int32_t t89 = 56720280;
int16_t x363 = INT16_MIN;
int64_t x364 = -1LL;
int32_t x376 = INT32_MIN;
uint64_t x382 = 3662008560293171728LLU;
uint8_t x388 = 3U;
static uint64_t x391 = 900LLU;


void f0(void) {
	int8_t x1 = -1;
	static uint8_t x2 = 4U;
	uint32_t x3 = 1691U;
	static volatile int32_t x4 = INT32_MAX;
	int32_t t0 = INT32_MAX;

	t0 = (((x1|x2)==x3)|x4);

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	volatile int32_t x6 = -843096042;
	uint16_t x7 = 1497U;
	int32_t t1 = 14;

	t1 = (((x5|x6)==x7)|x8);

	if (t1 != 17) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = -1;
	volatile uint16_t x10 = 13U;
	static int8_t x11 = INT8_MIN;
	uint64_t x12 = UINT64_MAX;

	t2 = (((x9|x10)==x11)|x12);

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	int32_t x14 = -1;
	volatile int32_t x15 = INT32_MIN;
	uint8_t x16 = UINT8_MAX;
	int32_t t3 = -13496;

	t3 = (((x13|x14)==x15)|x16);

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	volatile uint16_t x19 = 814U;
	volatile uint64_t t4 = 570LLU;

	t4 = (((x17|x18)==x19)|x20);

	if (t4 != 1692723978153LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = UINT64_MAX;
	static volatile uint64_t x22 = 47LLU;
	uint8_t x24 = 108U;
	int32_t t5 = -1;

	t5 = (((x21|x22)==x23)|x24);

	if (t5 != 108) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	int16_t x27 = INT16_MIN;
	int64_t x28 = INT64_MAX;
	static volatile int64_t t6 = INT64_MAX;

	t6 = (((x25|x26)==x27)|x28);

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 681570LLU;
	static uint32_t x30 = 71108641U;
	volatile uint64_t x31 = 59LLU;
	uint64_t x32 = UINT64_MAX;

	t7 = (((x29|x30)==x31)|x32);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 20;
	static volatile int32_t x34 = -1;
	static int16_t x36 = -1;
	int32_t t8 = -40;

	t8 = (((x33|x34)==x35)|x36);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = INT16_MIN;
	uint64_t x38 = 58789535318LLU;
	uint8_t x39 = 0U;
	int8_t x40 = INT8_MIN;
	int32_t t9 = -242217;

	t9 = (((x37|x38)==x39)|x40);

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	int64_t x42 = -1539187290438577LL;
	volatile uint32_t x43 = 3U;

	t10 = (((x41|x42)==x43)|x44);

	if (t10 != -3973237915484490LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 18194U;
	static uint64_t x46 = 3709697236898337LLU;
	static int8_t x47 = -1;
	static volatile int8_t x48 = -1;
	static volatile int32_t t11 = -59145;

	t11 = (((x45|x46)==x47)|x48);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x50 = 3450U;
	int16_t x51 = -1;
	static volatile uint64_t x52 = 226670LLU;
	static uint64_t t12 = 50155792LLU;

	t12 = (((x49|x50)==x51)|x52);

	if (t12 != 226670LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	int32_t x54 = -65116221;
	int8_t x55 = 0;
	uint16_t x56 = UINT16_MAX;

	t13 = (((x53|x54)==x55)|x56);

	if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	int64_t x58 = INT64_MAX;
	int32_t x59 = INT32_MIN;
	uint32_t x60 = 249U;
	volatile uint32_t t14 = 12406U;

	t14 = (((x57|x58)==x59)|x60);

	if (t14 != 249U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	int64_t x62 = INT64_MAX;
	int16_t x63 = INT16_MAX;
	int16_t x64 = INT16_MIN;
	int32_t t15 = -413668249;

	t15 = (((x61|x62)==x63)|x64);

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MAX;
	static int8_t x67 = 7;
	int8_t x68 = 1;
	volatile int32_t t16 = -13480;

	t16 = (((x65|x66)==x67)|x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint16_t x69 = UINT16_MAX;
	uint32_t x72 = 437728U;
	uint32_t t17 = 47560U;

	t17 = (((x69|x70)==x71)|x72);

	if (t17 != 437728U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MAX;
	volatile int64_t t18 = 8983362198837517LL;

	t18 = (((x73|x74)==x75)|x76);

	if (t18 != -84470317115010269LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x78 = 7;
	volatile uint8_t x80 = 15U;
	volatile int32_t t19 = 25;

	t19 = (((x77|x78)==x79)|x80);

	if (t19 != 15) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	int8_t x82 = INT8_MAX;
	int32_t x83 = INT32_MIN;
	uint16_t x84 = 87U;
	int32_t t20 = -139395;

	t20 = (((x81|x82)==x83)|x84);

	if (t20 != 87) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = INT32_MIN;
	int64_t x87 = -2692067LL;
	int8_t x88 = -1;
	int32_t t21 = 779516912;

	t21 = (((x85|x86)==x87)|x88);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -2011399374LL;
	int64_t x90 = INT64_MIN;
	uint16_t x91 = 318U;
	int8_t x92 = INT8_MAX;
	static int32_t t22 = -244292486;

	t22 = (((x89|x90)==x91)|x92);

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	static int8_t x94 = INT8_MIN;
	static int16_t x95 = -30;
	static volatile int32_t x96 = INT32_MAX;
	static int32_t t23 = INT32_MAX;

	t23 = (((x93|x94)==x95)|x96);

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 3449784U;
	int8_t x98 = -61;
	int64_t x99 = INT64_MIN;
	uint64_t x100 = 1983961957026145868LLU;
	volatile uint64_t t24 = 16084030707402LLU;

	t24 = (((x97|x98)==x99)|x100);

	if (t24 != 1983961957026145868LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x101 = 3U;
	static int8_t x103 = INT8_MIN;
	volatile int64_t x104 = 5334559LL;
	volatile int64_t t25 = -107169906LL;

	t25 = (((x101|x102)==x103)|x104);

	if (t25 != 5334559LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 0U;
	static int64_t x106 = INT64_MAX;
	volatile int64_t x107 = -548804623516867417LL;
	int64_t x108 = -1LL;

	t26 = (((x105|x106)==x107)|x108);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MAX;
	uint32_t x111 = 3612803U;
	int8_t x112 = INT8_MAX;
	int32_t t27 = -4285;

	t27 = (((x109|x110)==x111)|x112);

	if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x114 = INT8_MIN;
	static int64_t x115 = 2084402LL;
	static int16_t x116 = INT16_MIN;
	int32_t t28 = -1;

	t28 = (((x113|x114)==x115)|x116);

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 0LLU;
	uint32_t x118 = 241538826U;
	static volatile int8_t x119 = -6;
	static int16_t x120 = INT16_MIN;
	volatile int32_t t29 = 422196008;

	t29 = (((x117|x118)==x119)|x120);

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 103327U;
	static int8_t x124 = INT8_MAX;
	volatile int32_t t30 = 18;

	t30 = (((x121|x122)==x123)|x124);

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 364988614356401477LLU;
	int32_t x127 = INT32_MAX;
	static int32_t x128 = INT32_MAX;
	volatile int32_t t31 = INT32_MAX;

	t31 = (((x125|x126)==x127)|x128);

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x129 = INT16_MAX;
	uint64_t x131 = 355LLU;
	int64_t x132 = INT64_MIN;
	static int64_t t32 = INT64_MIN;

	t32 = (((x129|x130)==x131)|x132);

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = 7;
	int16_t x135 = -1;
	int32_t t33 = 9424;

	t33 = (((x133|x134)==x135)|x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x138 = 14520U;
	static int32_t x139 = -51959403;
	static uint64_t x140 = UINT64_MAX;
	volatile uint64_t t34 = UINT64_MAX;

	t34 = (((x137|x138)==x139)|x140);

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 8U;
	volatile int16_t x143 = INT16_MIN;
	uint16_t x144 = 4800U;
	volatile int32_t t35 = -54056;

	t35 = (((x141|x142)==x143)|x144);

	if (t35 != 4800) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MAX;
	uint32_t x148 = 6U;
	volatile uint32_t t36 = 95020122U;

	t36 = (((x145|x146)==x147)|x148);

	if (t36 != 6U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 645U;
	volatile uint64_t x150 = 957031413421095LLU;
	volatile int16_t x151 = INT16_MIN;
	static volatile int64_t t37 = INT64_MAX;

	t37 = (((x149|x150)==x151)|x152);

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = INT32_MAX;
	static volatile int32_t x154 = -1;
	static uint32_t x155 = 444773488U;
	uint16_t x156 = 30164U;
	int32_t t38 = -146511;

	t38 = (((x153|x154)==x155)|x156);

	if (t38 != 30164) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = -1LL;
	static uint64_t x158 = UINT64_MAX;
	volatile int64_t x159 = INT64_MIN;
	int8_t x160 = 1;
	static int32_t t39 = 119362;

	t39 = (((x157|x158)==x159)|x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -1;
	int8_t x162 = 1;
	int16_t x163 = -1;
	int64_t x164 = -1LL;
	int64_t t40 = 5092122LL;

	t40 = (((x161|x162)==x163)|x164);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x165 = INT64_MIN;
	uint16_t x166 = UINT16_MAX;
	volatile int32_t t41 = 98676;

	t41 = (((x165|x166)==x167)|x168);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = UINT16_MAX;
	int64_t x170 = 3699218712293430579LL;
	uint8_t x171 = 27U;
	uint16_t x172 = 0U;
	volatile int32_t t42 = 212140390;

	t42 = (((x169|x170)==x171)|x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 21009491U;
	uint32_t x174 = 2068263290U;
	volatile uint8_t x176 = UINT8_MAX;
	int32_t t43 = -86634413;

	t43 = (((x173|x174)==x175)|x176);

	if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x177 = UINT16_MAX;
	static volatile int16_t x178 = 9;
	volatile int32_t x179 = -1;
	int64_t x180 = -1LL;
	int64_t t44 = 5585854835891LL;

	t44 = (((x177|x178)==x179)|x180);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	int32_t x184 = -330;

	t45 = (((x181|x182)==x183)|x184);

	if (t45 != -330) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -1LL;
	int8_t x186 = INT8_MIN;
	int64_t x187 = INT64_MAX;
	static int32_t x188 = -5860537;
	volatile int32_t t46 = -2;

	t46 = (((x185|x186)==x187)|x188);

	if (t46 != -5860537) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 418775514U;
	int32_t x191 = -47224;
	int32_t x192 = -248369;

	t47 = (((x189|x190)==x191)|x192);

	if (t47 != -248369) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = 28;
	uint8_t x194 = 93U;
	int32_t x195 = INT32_MAX;

	t48 = (((x193|x194)==x195)|x196);

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x197 = 0;
	uint64_t x199 = 7717983LLU;
	volatile int64_t x200 = INT64_MIN;

	t49 = (((x197|x198)==x199)|x200);

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MAX;
	uint16_t x202 = 60U;
	static uint32_t x203 = UINT32_MAX;
	volatile int16_t x204 = 1;
	int32_t t50 = 17;

	t50 = (((x201|x202)==x203)|x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 6250U;
	uint16_t x207 = 2940U;
	int16_t x208 = INT16_MIN;

	t51 = (((x205|x206)==x207)|x208);

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x210 = UINT32_MAX;
	volatile uint32_t x211 = UINT32_MAX;
	int8_t x212 = 51;
	int32_t t52 = 3;

	t52 = (((x209|x210)==x211)|x212);

	if (t52 != 51) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 558279551053589LLU;
	static int16_t x214 = INT16_MIN;
	static int8_t x216 = -9;
	volatile int32_t t53 = -611;

	t53 = (((x213|x214)==x215)|x216);

	if (t53 != -9) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint16_t x217 = UINT16_MAX;
	int32_t x218 = -1;
	int32_t t54 = INT32_MAX;

	t54 = (((x217|x218)==x219)|x220);

	if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t t55 = 14926774;

	t55 = (((x221|x222)==x223)|x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = UINT8_MAX;
	uint64_t x226 = UINT64_MAX;
	int64_t x227 = INT64_MIN;

	t56 = (((x225|x226)==x227)|x228);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 1212208860952LLU;
	int8_t x230 = INT8_MIN;
	uint32_t x231 = 1843448440U;
	volatile int16_t x232 = -5;
	int32_t t57 = -94455;

	t57 = (((x229|x230)==x231)|x232);

	if (t57 != -5) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = 2953420097LL;
	volatile int16_t x234 = -16257;
	static int16_t x235 = -1740;
	int64_t x236 = 33856786551032LL;
	volatile int64_t t58 = -371940LL;

	t58 = (((x233|x234)==x235)|x236);

	if (t58 != 33856786551032LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -1;
	int16_t x238 = INT16_MAX;
	int16_t x239 = INT16_MIN;
	int32_t t59 = -317255;

	t59 = (((x237|x238)==x239)|x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 29U;
	int32_t x244 = INT32_MIN;
	int32_t t60 = INT32_MIN;

	t60 = (((x241|x242)==x243)|x244);

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MAX;
	int64_t x246 = INT64_MIN;
	uint16_t x247 = 281U;
	int32_t x248 = 48;
	int32_t t61 = -55484815;

	t61 = (((x245|x246)==x247)|x248);

	if (t61 != 48) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x249 = -1;
	volatile int32_t x250 = 76;
	volatile int16_t x251 = INT16_MAX;
	static int16_t x252 = INT16_MIN;
	volatile int32_t t62 = -59123;

	t62 = (((x249|x250)==x251)|x252);

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -1;
	static int32_t x255 = -1;
	int32_t x256 = -1;
	static volatile int32_t t63 = 17415;

	t63 = (((x253|x254)==x255)|x256);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x258 = INT64_MIN;
	int64_t x259 = -203LL;
	static int16_t x260 = INT16_MIN;
	int32_t t64 = -379;

	t64 = (((x257|x258)==x259)|x260);

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 6093064LLU;
	int16_t x263 = INT16_MAX;
	int32_t x264 = INT32_MAX;
	int32_t t65 = INT32_MAX;

	t65 = (((x261|x262)==x263)|x264);

	if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = 1;
	uint64_t x266 = 40899546053592LLU;
	volatile int16_t x267 = INT16_MIN;
	int64_t x268 = -1982312913566627LL;
	int64_t t66 = -3051422404079LL;

	t66 = (((x265|x266)==x267)|x268);

	if (t66 != -1982312913566627LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x270 = UINT32_MAX;
	int64_t x271 = -13741534LL;
	int8_t x272 = INT8_MAX;
	int32_t t67 = -346978547;

	t67 = (((x269|x270)==x271)|x272);

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 7206623489753LLU;
	int32_t x274 = INT32_MAX;
	volatile int16_t x276 = INT16_MIN;
	int32_t t68 = -606022;

	t68 = (((x273|x274)==x275)|x276);

	if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x277 = UINT16_MAX;
	int64_t x278 = -1LL;
	int8_t x279 = INT8_MIN;
	int8_t x280 = INT8_MIN;

	t69 = (((x277|x278)==x279)|x280);

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MIN;
	uint8_t x282 = 1U;
	int64_t x283 = 164699537239LL;
	uint8_t x284 = 64U;
	static volatile int32_t t70 = -78;

	t70 = (((x281|x282)==x283)|x284);

	if (t70 != 64) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x285 = UINT8_MAX;
	volatile int64_t x286 = 3871259418275263LL;
	uint16_t x287 = 0U;
	static int64_t x288 = INT64_MAX;

	t71 = (((x285|x286)==x287)|x288);

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = UINT16_MAX;
	static int32_t x290 = -1;
	static int16_t x291 = -1;
	uint16_t x292 = UINT16_MAX;
	volatile int32_t t72 = 87;

	t72 = (((x289|x290)==x291)|x292);

	if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x294 = INT16_MIN;
	int32_t x295 = 7066220;
	static uint8_t x296 = 24U;
	int32_t t73 = -7;

	t73 = (((x293|x294)==x295)|x296);

	if (t73 != 24) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 396311LLU;
	uint16_t x298 = 2393U;
	int32_t t74 = 5;

	t74 = (((x297|x298)==x299)|x300);

	if (t74 != -238913) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = UINT8_MAX;
	uint16_t x302 = 98U;
	uint32_t x303 = 745576U;
	uint16_t x304 = UINT16_MAX;
	int32_t t75 = 461;

	t75 = (((x301|x302)==x303)|x304);

	if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x308 = -1;

	t76 = (((x305|x306)==x307)|x308);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x309 = INT32_MIN;
	volatile int8_t x310 = 0;
	volatile int8_t x311 = -9;
	uint32_t x312 = 0U;
	uint32_t t77 = 18252U;

	t77 = (((x309|x310)==x311)|x312);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MAX;
	int8_t x314 = 1;
	int64_t x315 = INT64_MAX;
	volatile uint64_t x316 = 7204LLU;

	t78 = (((x313|x314)==x315)|x316);

	if (t78 != 7204LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x318 = INT8_MIN;
	static uint16_t x320 = 255U;
	int32_t t79 = 49325337;

	t79 = (((x317|x318)==x319)|x320);

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x321 = -1;
	int16_t x322 = 19;
	int16_t x323 = -960;
	volatile uint64_t x324 = 397939731LLU;
	uint64_t t80 = 2191925255723LLU;

	t80 = (((x321|x322)==x323)|x324);

	if (t80 != 397939731LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x325 = 52U;
	static uint32_t x326 = UINT32_MAX;
	int32_t x328 = INT32_MIN;
	volatile int32_t t81 = INT32_MIN;

	t81 = (((x325|x326)==x327)|x328);

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x329 = -1;
	int16_t x330 = -1;
	int32_t x331 = INT32_MIN;
	int8_t x332 = INT8_MAX;
	volatile int32_t t82 = -3073990;

	t82 = (((x329|x330)==x331)|x332);

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x333 = INT16_MIN;
	volatile uint16_t x334 = 184U;
	static volatile int8_t x335 = INT8_MIN;
	static int32_t x336 = INT32_MIN;
	static int32_t t83 = INT32_MIN;

	t83 = (((x333|x334)==x335)|x336);

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = 66668887;
	uint64_t x338 = 8368625947802247154LLU;
	uint16_t x339 = 9691U;
	int32_t x340 = -1;
	int32_t t84 = -28235;

	t84 = (((x337|x338)==x339)|x340);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MIN;
	volatile int8_t x342 = INT8_MAX;
	int8_t x344 = INT8_MIN;
	volatile int32_t t85 = 27;

	t85 = (((x341|x342)==x343)|x344);

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x345 = INT32_MIN;
	int32_t x348 = 7616926;
	volatile int32_t t86 = -12;

	t86 = (((x345|x346)==x347)|x348);

	if (t86 != 7616926) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = -1;
	volatile int16_t x350 = -54;
	int64_t x352 = -8834LL;

	t87 = (((x349|x350)==x351)|x352);

	if (t87 != -8834LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	volatile int64_t x354 = INT64_MIN;
	volatile uint8_t x355 = UINT8_MAX;
	int16_t x356 = -50;
	volatile int32_t t88 = 100;

	t88 = (((x353|x354)==x355)|x356);

	if (t88 != -50) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x357 = UINT32_MAX;
	static uint16_t x358 = 2567U;
	int8_t x359 = INT8_MIN;
	volatile int16_t x360 = -298;

	t89 = (((x357|x358)==x359)|x360);

	if (t89 != -298) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x361 = INT32_MIN;
	int32_t x362 = INT32_MAX;
	int64_t t90 = -570027LL;

	t90 = (((x361|x362)==x363)|x364);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -1;
	int16_t x366 = INT16_MAX;
	int64_t x367 = INT64_MIN;
	volatile int64_t x368 = INT64_MAX;
	static volatile int64_t t91 = INT64_MAX;

	t91 = (((x365|x366)==x367)|x368);

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x369 = INT8_MAX;
	int32_t x370 = INT32_MIN;
	int16_t x371 = 20;
	volatile int16_t x372 = -1108;
	static volatile int32_t t92 = 119470;

	t92 = (((x369|x370)==x371)|x372);

	if (t92 != -1108) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = UINT16_MAX;
	uint64_t x374 = 18789LLU;
	static int64_t x375 = INT64_MIN;
	volatile int32_t t93 = INT32_MIN;

	t93 = (((x373|x374)==x375)|x376);

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = 4178499764102697798LLU;
	int32_t x378 = INT32_MAX;
	uint8_t x379 = UINT8_MAX;
	volatile int8_t x380 = INT8_MIN;
	int32_t t94 = -121;

	t94 = (((x377|x378)==x379)|x380);

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x381 = 731736LLU;
	int8_t x383 = -42;
	static int64_t x384 = -116159LL;
	static volatile int64_t t95 = -1366639LL;

	t95 = (((x381|x382)==x383)|x384);

	if (t95 != -116159LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = 27;
	uint32_t x386 = 6U;
	uint16_t x387 = 1918U;
	volatile int32_t t96 = -331;

	t96 = (((x385|x386)==x387)|x388);

	if (t96 != 3) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 50582U;
	int16_t x390 = -1484;
	int32_t x392 = INT32_MIN;
	volatile int32_t t97 = INT32_MIN;

	t97 = (((x389|x390)==x391)|x392);

	if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 80233891483217LLU;
	uint16_t x394 = UINT16_MAX;
	int32_t x395 = INT32_MIN;
	static uint8_t x396 = UINT8_MAX;
	int32_t t98 = -30;

	t98 = (((x393|x394)==x395)|x396);

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = -4;
	uint64_t x398 = UINT64_MAX;
	int8_t x399 = -1;
	uint16_t x400 = 50U;
	int32_t t99 = -45265;

	t99 = (((x397|x398)==x399)|x400);

	if (t99 != 51) { NG(); } else { ; }
	
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

