#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MAX;
uint64_t x11 = 258823080905LLU;
int16_t x15 = INT16_MIN;
int16_t x19 = 1;
volatile int32_t x24 = INT32_MIN;
volatile int32_t t5 = 825;
static volatile uint64_t x26 = 50455995380780976LLU;
uint32_t x32 = 18U;
int16_t x35 = INT16_MAX;
volatile int64_t x39 = 5232407LL;
int64_t t12 = INT64_MIN;
volatile int32_t x58 = 298101992;
static uint32_t x59 = 10567U;
int32_t x60 = 122235;
volatile int32_t t13 = 911654;
int8_t x64 = INT8_MAX;
volatile int32_t t14 = -9536069;
uint16_t x68 = 18310U;
volatile int64_t t15 = INT64_MAX;
volatile int32_t t17 = 0;
int16_t x84 = -1;
uint16_t x88 = UINT16_MAX;
uint64_t x92 = 13668LLU;
int32_t x96 = INT32_MAX;
volatile int64_t x97 = INT64_MIN;
volatile int32_t x98 = INT32_MIN;
volatile int32_t x99 = INT32_MIN;
int32_t x101 = -142388183;
volatile int32_t t26 = 232571472;
uint16_t x116 = 442U;
uint32_t x117 = 2774U;
int16_t x118 = 10;
volatile uint32_t t28 = 1U;
uint64_t x126 = 23306LLU;
int32_t t30 = INT32_MIN;
static int16_t x129 = 46;
uint32_t t32 = UINT32_MAX;
volatile int32_t x141 = INT32_MAX;
int32_t t41 = 1;
int16_t x175 = INT16_MIN;
int16_t x178 = 618;
int16_t x180 = INT16_MIN;
int64_t x189 = INT64_MIN;
int16_t x202 = INT16_MIN;
int8_t x211 = INT8_MIN;
volatile int32_t x212 = INT32_MIN;
volatile uint64_t x230 = 73359633LLU;
int64_t x238 = -1LL;
int8_t x243 = INT8_MIN;
static volatile int32_t t59 = 562610;
volatile int32_t t60 = 243033386;
volatile int16_t x254 = INT16_MIN;
uint8_t x256 = 67U;
volatile int32_t t62 = 3011100;
int16_t x258 = INT16_MAX;
int64_t x261 = INT64_MAX;
uint16_t x262 = UINT16_MAX;
static int64_t t64 = INT64_MAX;
volatile uint32_t x265 = UINT32_MAX;
volatile int64_t x269 = INT64_MIN;
volatile int64_t t66 = INT64_MIN;
int8_t x273 = INT8_MAX;
uint8_t x279 = 8U;
int64_t x282 = 54098610279921952LL;
volatile int64_t x290 = INT64_MIN;
static int64_t x292 = INT64_MIN;
uint16_t x294 = 105U;
int64_t x295 = 1306292927LL;
uint8_t x296 = 4U;
volatile int8_t x302 = INT8_MIN;
uint8_t x304 = UINT8_MAX;
int32_t x307 = -1;
int32_t x313 = INT32_MIN;
int32_t t78 = -47423;
int8_t x327 = 43;
int32_t x350 = -1;
uint8_t x352 = UINT8_MAX;
volatile int32_t t87 = -129457;
static uint32_t x357 = 563578U;
volatile int32_t t89 = INT32_MIN;
uint32_t t91 = UINT32_MAX;
int64_t x375 = INT64_MAX;
int64_t t94 = INT64_MIN;
static int8_t x386 = INT8_MIN;
volatile int32_t t96 = -9333;
int64_t x398 = 68386478925LL;
volatile int32_t x401 = 4485;


void f0(void) {
	int32_t x1 = 5195228;
	int32_t x2 = INT32_MIN;
	int8_t x4 = -1;
	int32_t t0 = 1503;

	t0 = (x1-(x2==(x3^x4)));

	if (t0 != 5195228) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = UINT64_MAX;
	int32_t x6 = 55;
	volatile int32_t x7 = -419;
	volatile int64_t x8 = 166876556145175047LL;
	volatile uint64_t t1 = UINT64_MAX;

	t1 = (x5-(x6==(x7^x8)));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -372747;
	uint64_t x10 = UINT64_MAX;
	uint16_t x12 = 2321U;
	static volatile int32_t t2 = -5;

	t2 = (x9-(x10==(x11^x12)));

	if (t2 != -372747) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = INT32_MAX;
	uint64_t x14 = 298091668711960LLU;
	int64_t x16 = INT64_MIN;
	int32_t t3 = INT32_MAX;

	t3 = (x13-(x14==(x15^x16)));

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int32_t x18 = INT32_MIN;
	volatile int32_t x20 = INT32_MIN;
	int32_t t4 = -2305;

	t4 = (x17-(x18==(x19^x20)));

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x21 = -1;
	int16_t x22 = 1;
	uint32_t x23 = UINT32_MAX;

	t5 = (x21-(x22==(x23^x24)));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = -1;
	volatile uint32_t x27 = UINT32_MAX;
	uint32_t x28 = 2U;
	int32_t t6 = -478952;

	t6 = (x25-(x26==(x27^x28)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	uint32_t x30 = 12023080U;
	int8_t x31 = INT8_MAX;
	int32_t t7 = -56;

	t7 = (x29-(x30==(x31^x32)));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = 74;
	uint8_t x34 = UINT8_MAX;
	static uint16_t x36 = 1U;
	int32_t t8 = 0;

	t8 = (x33-(x34==(x35^x36)));

	if (t8 != 74) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	static int32_t x38 = INT32_MIN;
	volatile int8_t x40 = -1;
	static volatile int32_t t9 = -4;

	t9 = (x37-(x38==(x39^x40)));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = -1;
	int32_t x46 = INT32_MIN;
	uint64_t x47 = 240929703LLU;
	int16_t x48 = INT16_MAX;
	int32_t t10 = 1;

	t10 = (x45-(x46==(x47^x48)));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x49 = 1U;
	volatile uint16_t x50 = 3658U;
	uint32_t x51 = 19749655U;
	int8_t x52 = -11;
	volatile uint32_t t11 = 103572U;

	t11 = (x49-(x50==(x51^x52)));

	if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = INT64_MIN;
	uint64_t x54 = 498LLU;
	int8_t x55 = INT8_MAX;
	static int64_t x56 = INT64_MIN;

	t12 = (x53-(x54==(x55^x56)));

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = UINT16_MAX;

	t13 = (x57-(x58==(x59^x60)));

	if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = -1;
	int8_t x62 = INT8_MIN;
	int8_t x63 = INT8_MIN;

	t14 = (x61-(x62==(x63^x64)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MAX;
	uint16_t x66 = 1623U;
	int16_t x67 = INT16_MAX;

	t15 = (x65-(x66==(x67^x68)));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x69 = -840592;
	int16_t x70 = -49;
	static int32_t x71 = INT32_MIN;
	volatile uint16_t x72 = 16850U;
	int32_t t16 = -357;

	t16 = (x69-(x70==(x71^x72)));

	if (t16 != -840592) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x73 = -7056;
	volatile int32_t x74 = INT32_MAX;
	int32_t x75 = 4;
	uint16_t x76 = 107U;

	t17 = (x73-(x74==(x75^x76)));

	if (t17 != -7056) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = 51521888;
	static int64_t x78 = -1066312657LL;
	volatile int8_t x79 = -1;
	int32_t x80 = INT32_MIN;
	int32_t t18 = 65244;

	t18 = (x77-(x78==(x79^x80)));

	if (t18 != 51521888) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x81 = INT8_MIN;
	volatile int8_t x82 = INT8_MIN;
	int64_t x83 = INT64_MIN;
	static int32_t t19 = 26332335;

	t19 = (x81-(x82==(x83^x84)));

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x85 = INT32_MIN;
	int8_t x86 = 1;
	volatile uint32_t x87 = 1560063451U;
	volatile int32_t t20 = INT32_MIN;

	t20 = (x85-(x86==(x87^x88)));

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x89 = 362061105LLU;
	volatile int8_t x90 = 30;
	uint32_t x91 = UINT32_MAX;
	volatile uint64_t t21 = 675635649101495562LLU;

	t21 = (x89-(x90==(x91^x92)));

	if (t21 != 362061105LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x93 = -32039077543LL;
	int8_t x94 = -13;
	static uint16_t x95 = 1U;
	int64_t t22 = -460738322506273LL;

	t22 = (x93-(x94==(x95^x96)));

	if (t22 != -32039077543LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x100 = 4LLU;
	int64_t t23 = INT64_MIN;

	t23 = (x97-(x98==(x99^x100)));

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x102 = 2641071609731046425LLU;
	int8_t x103 = -16;
	int32_t x104 = INT32_MAX;
	volatile int32_t t24 = -23;

	t24 = (x101-(x102==(x103^x104)));

	if (t24 != -142388183) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = INT64_MIN;
	volatile int8_t x106 = INT8_MIN;
	volatile uint32_t x107 = UINT32_MAX;
	int8_t x108 = -25;
	int64_t t25 = INT64_MIN;

	t25 = (x105-(x106==(x107^x108)));

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = 1184;
	int8_t x110 = -1;
	uint16_t x111 = 1U;
	static int64_t x112 = 4LL;

	t26 = (x109-(x110==(x111^x112)));

	if (t26 != 1184) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x113 = 1524;
	int16_t x114 = -1;
	uint32_t x115 = 123110U;
	int32_t t27 = 0;

	t27 = (x113-(x114==(x115^x116)));

	if (t27 != 1524) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x119 = -1LL;
	int32_t x120 = INT32_MIN;

	t28 = (x117-(x118==(x119^x120)));

	if (t28 != 2774U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x121 = INT64_MIN;
	uint32_t x122 = 599U;
	static volatile int32_t x123 = -1;
	int32_t x124 = -1;
	int64_t t29 = INT64_MIN;

	t29 = (x121-(x122==(x123^x124)));

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = INT32_MIN;
	uint64_t x127 = UINT64_MAX;
	uint8_t x128 = 1U;

	t30 = (x125-(x126==(x127^x128)));

	if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x130 = INT8_MAX;
	int16_t x131 = INT16_MIN;
	int16_t x132 = -1;
	volatile int32_t t31 = 590795967;

	t31 = (x129-(x130==(x131^x132)));

	if (t31 != 46) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x133 = UINT32_MAX;
	volatile int16_t x134 = INT16_MAX;
	int16_t x135 = -1;
	int32_t x136 = -2;

	t32 = (x133-(x134==(x135^x136)));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x137 = UINT16_MAX;
	volatile uint8_t x138 = UINT8_MAX;
	int16_t x139 = INT16_MAX;
	static int32_t x140 = -11108657;
	int32_t t33 = 3;

	t33 = (x137-(x138==(x139^x140)));

	if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x142 = UINT64_MAX;
	int32_t x143 = 4900;
	volatile int8_t x144 = -1;
	int32_t t34 = INT32_MAX;

	t34 = (x141-(x142==(x143^x144)));

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x145 = 2U;
	uint16_t x146 = UINT16_MAX;
	uint8_t x147 = UINT8_MAX;
	static volatile int16_t x148 = -1246;
	int32_t t35 = 410802;

	t35 = (x145-(x146==(x147^x148)));

	if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = INT64_MAX;
	uint8_t x150 = UINT8_MAX;
	int8_t x151 = -3;
	static int32_t x152 = INT32_MIN;
	volatile int64_t t36 = INT64_MAX;

	t36 = (x149-(x150==(x151^x152)));

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = -6176156LL;
	volatile int16_t x154 = INT16_MAX;
	int8_t x155 = -3;
	static int64_t x156 = INT64_MAX;
	int64_t t37 = -1LL;

	t37 = (x153-(x154==(x155^x156)));

	if (t37 != -6176156LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = INT64_MIN;
	static int16_t x158 = -127;
	uint32_t x159 = 1044576006U;
	uint64_t x160 = UINT64_MAX;
	static int64_t t38 = INT64_MIN;

	t38 = (x157-(x158==(x159^x160)));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x161 = INT8_MIN;
	uint16_t x162 = UINT16_MAX;
	int32_t x163 = -5884807;
	int64_t x164 = INT64_MAX;
	volatile int32_t t39 = 9183997;

	t39 = (x161-(x162==(x163^x164)));

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x165 = INT16_MAX;
	int8_t x166 = -1;
	uint8_t x167 = 0U;
	int32_t x168 = 13698;
	int32_t t40 = 16;

	t40 = (x165-(x166==(x167^x168)));

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x169 = 99U;
	int8_t x170 = INT8_MIN;
	int64_t x171 = INT64_MIN;
	int16_t x172 = -1;

	t41 = (x169-(x170==(x171^x172)));

	if (t41 != 99) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = -1;
	int32_t x174 = INT32_MAX;
	int16_t x176 = INT16_MIN;
	volatile int32_t t42 = 5777;

	t42 = (x173-(x174==(x175^x176)));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint8_t x177 = 13U;
	int8_t x179 = INT8_MAX;
	volatile int32_t t43 = 2726187;

	t43 = (x177-(x178==(x179^x180)));

	if (t43 != 13) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = -1;
	int16_t x182 = INT16_MIN;
	static int8_t x183 = -1;
	volatile uint64_t x184 = UINT64_MAX;
	int32_t t44 = -445135;

	t44 = (x181-(x182==(x183^x184)));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x185 = 9LLU;
	uint32_t x186 = 126146636U;
	int16_t x187 = 0;
	static uint8_t x188 = 36U;
	uint64_t t45 = 235LLU;

	t45 = (x185-(x186==(x187^x188)));

	if (t45 != 9LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint64_t x190 = 254370097090128296LLU;
	volatile int16_t x191 = INT16_MIN;
	uint32_t x192 = 48325U;
	volatile int64_t t46 = INT64_MIN;

	t46 = (x189-(x190==(x191^x192)));

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = -1335;
	volatile int8_t x194 = INT8_MAX;
	volatile uint16_t x195 = 12232U;
	int64_t x196 = -36378128LL;
	volatile int32_t t47 = -3;

	t47 = (x193-(x194==(x195^x196)));

	if (t47 != -1335) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = INT8_MIN;
	int8_t x198 = INT8_MIN;
	volatile int32_t x199 = -1;
	int8_t x200 = 54;
	volatile int32_t t48 = 3220;

	t48 = (x197-(x198==(x199^x200)));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x201 = 6U;
	int64_t x203 = -1LL;
	volatile int32_t x204 = INT32_MAX;
	volatile uint32_t t49 = 2965U;

	t49 = (x201-(x202==(x203^x204)));

	if (t49 != 6U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x205 = UINT8_MAX;
	uint32_t x206 = UINT32_MAX;
	uint64_t x207 = 3028LLU;
	volatile uint32_t x208 = 250612343U;
	int32_t t50 = -14368325;

	t50 = (x205-(x206==(x207^x208)));

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x209 = 1102251649155652265LLU;
	uint32_t x210 = UINT32_MAX;
	volatile uint64_t t51 = 68632877LLU;

	t51 = (x209-(x210==(x211^x212)));

	if (t51 != 1102251649155652265LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x213 = 13077;
	uint16_t x214 = UINT16_MAX;
	uint16_t x215 = 3036U;
	int16_t x216 = INT16_MIN;
	int32_t t52 = 61913249;

	t52 = (x213-(x214==(x215^x216)));

	if (t52 != 13077) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x217 = 0;
	int8_t x218 = INT8_MIN;
	static int64_t x219 = 0LL;
	int8_t x220 = -18;
	static volatile int32_t t53 = -66;

	t53 = (x217-(x218==(x219^x220)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x221 = INT64_MIN;
	static int16_t x222 = 1;
	static int32_t x223 = INT32_MIN;
	uint64_t x224 = UINT64_MAX;
	int64_t t54 = INT64_MIN;

	t54 = (x221-(x222==(x223^x224)));

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x225 = INT16_MIN;
	int64_t x226 = INT64_MIN;
	int16_t x227 = 7;
	int32_t x228 = INT32_MIN;
	static volatile int32_t t55 = -22550;

	t55 = (x225-(x226==(x227^x228)));

	if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x229 = 1;
	int64_t x231 = 21479914LL;
	int8_t x232 = INT8_MIN;
	volatile int32_t t56 = -468;

	t56 = (x229-(x230==(x231^x232)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x233 = INT8_MIN;
	uint16_t x234 = UINT16_MAX;
	static uint64_t x235 = 1221781163099449LLU;
	int64_t x236 = -4230289894451LL;
	volatile int32_t t57 = -909;

	t57 = (x233-(x234==(x235^x236)));

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x237 = 341353111764926797LLU;
	int16_t x239 = -1;
	uint16_t x240 = 0U;
	volatile uint64_t t58 = 3037593153272605LLU;

	t58 = (x237-(x238==(x239^x240)));

	if (t58 != 341353111764926796LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x241 = 128;
	volatile int64_t x242 = 5217LL;
	int8_t x244 = -1;

	t59 = (x241-(x242==(x243^x244)));

	if (t59 != 128) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x245 = INT8_MAX;
	static uint16_t x246 = 9425U;
	volatile int16_t x247 = INT16_MIN;
	static int64_t x248 = -11LL;

	t60 = (x245-(x246==(x247^x248)));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x249 = INT32_MIN;
	int8_t x250 = -1;
	static int8_t x251 = 31;
	static int8_t x252 = INT8_MAX;
	volatile int32_t t61 = INT32_MIN;

	t61 = (x249-(x250==(x251^x252)));

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x253 = 7U;
	int8_t x255 = -1;

	t62 = (x253-(x254==(x255^x256)));

	if (t62 != 7) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x257 = 1;
	int8_t x259 = INT8_MIN;
	int16_t x260 = 1;
	int32_t t63 = -9129003;

	t63 = (x257-(x258==(x259^x260)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x263 = INT8_MIN;
	uint32_t x264 = 958718348U;

	t64 = (x261-(x262==(x263^x264)));

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x266 = UINT64_MAX;
	int16_t x267 = INT16_MIN;
	uint8_t x268 = 124U;
	uint32_t t65 = UINT32_MAX;

	t65 = (x265-(x266==(x267^x268)));

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x270 = INT16_MIN;
	int64_t x271 = 16716798379476622LL;
	int64_t x272 = INT64_MIN;

	t66 = (x269-(x270==(x271^x272)));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x274 = -1LL;
	int8_t x275 = -1;
	int32_t x276 = INT32_MIN;
	int32_t t67 = -30468418;

	t67 = (x273-(x274==(x275^x276)));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x277 = INT8_MIN;
	int64_t x278 = 6969404LL;
	int8_t x280 = 7;
	static int32_t t68 = -2802665;

	t68 = (x277-(x278==(x279^x280)));

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x281 = 0U;
	uint8_t x283 = 0U;
	int64_t x284 = -15631085844LL;
	static int32_t t69 = -322627252;

	t69 = (x281-(x282==(x283^x284)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x285 = 1934U;
	int16_t x286 = -4259;
	uint32_t x287 = 18710U;
	int16_t x288 = INT16_MIN;
	volatile int32_t t70 = -36;

	t70 = (x285-(x286==(x287^x288)));

	if (t70 != 1934) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x289 = INT32_MIN;
	int16_t x291 = INT16_MIN;
	volatile int32_t t71 = INT32_MIN;

	t71 = (x289-(x290==(x291^x292)));

	if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x293 = 33;
	static volatile int32_t t72 = -202479618;

	t72 = (x293-(x294==(x295^x296)));

	if (t72 != 33) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x297 = INT32_MAX;
	uint32_t x298 = UINT32_MAX;
	int16_t x299 = INT16_MIN;
	int8_t x300 = 0;
	int32_t t73 = INT32_MAX;

	t73 = (x297-(x298==(x299^x300)));

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x301 = 175U;
	int16_t x303 = INT16_MIN;
	int32_t t74 = -477;

	t74 = (x301-(x302==(x303^x304)));

	if (t74 != 175) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x305 = -1;
	static volatile int16_t x306 = -9;
	int8_t x308 = 14;
	volatile int32_t t75 = 5177007;

	t75 = (x305-(x306==(x307^x308)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x309 = -85;
	int32_t x310 = -1;
	int16_t x311 = -3878;
	int64_t x312 = 832196997237LL;
	int32_t t76 = -714214430;

	t76 = (x309-(x310==(x311^x312)));

	if (t76 != -85) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x314 = INT16_MIN;
	int32_t x315 = INT32_MAX;
	int64_t x316 = INT64_MAX;
	volatile int32_t t77 = INT32_MIN;

	t77 = (x313-(x314==(x315^x316)));

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x317 = 25461U;
	uint8_t x318 = 103U;
	volatile uint16_t x319 = 2U;
	static int16_t x320 = INT16_MIN;

	t78 = (x317-(x318==(x319^x320)));

	if (t78 != 25461) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x321 = UINT64_MAX;
	int16_t x322 = 384;
	uint16_t x323 = 444U;
	static int8_t x324 = 0;
	volatile uint64_t t79 = UINT64_MAX;

	t79 = (x321-(x322==(x323^x324)));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x325 = -614689;
	uint8_t x326 = UINT8_MAX;
	static int16_t x328 = -1;
	static int32_t t80 = -7;

	t80 = (x325-(x326==(x327^x328)));

	if (t80 != -614689) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x329 = 5650U;
	int32_t x330 = 23971270;
	volatile uint64_t x331 = 30048629176452LLU;
	volatile int16_t x332 = INT16_MIN;
	volatile int32_t t81 = -6332724;

	t81 = (x329-(x330==(x331^x332)));

	if (t81 != 5650) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x333 = UINT8_MAX;
	int16_t x334 = -132;
	volatile uint64_t x335 = UINT64_MAX;
	int8_t x336 = -1;
	int32_t t82 = -23;

	t82 = (x333-(x334==(x335^x336)));

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x337 = 1U;
	int16_t x338 = 443;
	int16_t x339 = -1;
	static uint8_t x340 = 64U;
	int32_t t83 = 6;

	t83 = (x337-(x338==(x339^x340)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x341 = 16306455U;
	int8_t x342 = 2;
	static uint64_t x343 = UINT64_MAX;
	static uint16_t x344 = UINT16_MAX;
	uint32_t t84 = 13895695U;

	t84 = (x341-(x342==(x343^x344)));

	if (t84 != 16306455U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x345 = 352985197565412LLU;
	int8_t x346 = INT8_MIN;
	int16_t x347 = INT16_MAX;
	int8_t x348 = -1;
	volatile uint64_t t85 = 4012118883900016LLU;

	t85 = (x345-(x346==(x347^x348)));

	if (t85 != 352985197565412LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x349 = INT32_MAX;
	static int16_t x351 = 14;
	static volatile int32_t t86 = INT32_MAX;

	t86 = (x349-(x350==(x351^x352)));

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x353 = -6;
	int32_t x354 = 63;
	volatile uint32_t x355 = 88844106U;
	volatile int8_t x356 = INT8_MIN;

	t87 = (x353-(x354==(x355^x356)));

	if (t87 != -6) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x358 = 39;
	int32_t x359 = -1550;
	int8_t x360 = 0;
	static uint32_t t88 = 782372821U;

	t88 = (x357-(x358==(x359^x360)));

	if (t88 != 563578U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x361 = INT32_MIN;
	static uint32_t x362 = UINT32_MAX;
	static int16_t x363 = 27;
	volatile int64_t x364 = -1LL;

	t89 = (x361-(x362==(x363^x364)));

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x365 = INT32_MAX;
	volatile int32_t x366 = -1;
	int64_t x367 = INT64_MIN;
	int64_t x368 = INT64_MAX;
	static volatile int32_t t90 = -33653201;

	t90 = (x365-(x366==(x367^x368)));

	if (t90 != 2147483646) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x369 = UINT32_MAX;
	volatile int8_t x370 = -1;
	uint64_t x371 = 506541812LLU;
	static int16_t x372 = INT16_MIN;

	t91 = (x369-(x370==(x371^x372)));

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x373 = -25;
	int8_t x374 = 26;
	int16_t x376 = -6678;
	static int32_t t92 = 102852199;

	t92 = (x373-(x374==(x375^x376)));

	if (t92 != -25) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x377 = -1;
	int8_t x378 = INT8_MIN;
	volatile int8_t x379 = INT8_MAX;
	int32_t x380 = INT32_MIN;
	int32_t t93 = -22403359;

	t93 = (x377-(x378==(x379^x380)));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x381 = INT64_MIN;
	int8_t x382 = -1;
	static int64_t x383 = INT64_MIN;
	int32_t x384 = INT32_MIN;

	t94 = (x381-(x382==(x383^x384)));

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x385 = UINT64_MAX;
	static volatile int32_t x387 = INT32_MIN;
	int64_t x388 = 16859516122LL;
	volatile uint64_t t95 = UINT64_MAX;

	t95 = (x385-(x386==(x387^x388)));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x389 = 1798U;
	int64_t x390 = -4859086315906LL;
	int64_t x391 = 0LL;
	uint32_t x392 = 28U;

	t96 = (x389-(x390==(x391^x392)));

	if (t96 != 1798) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x393 = -7215LL;
	int16_t x394 = INT16_MIN;
	int32_t x395 = -1;
	static int8_t x396 = -2;
	static int64_t t97 = 406745504522LL;

	t97 = (x393-(x394==(x395^x396)));

	if (t97 != -7215LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x397 = INT16_MIN;
	static int32_t x399 = -1;
	int16_t x400 = INT16_MIN;
	int32_t t98 = -4323164;

	t98 = (x397-(x398==(x399^x400)));

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x402 = INT32_MAX;
	uint64_t x403 = 1827LLU;
	volatile int8_t x404 = INT8_MIN;
	int32_t t99 = -1;

	t99 = (x401-(x402==(x403^x404)));

	if (t99 != 4485) { NG(); } else { ; }
	
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

