#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x10 = 1012795LL;
int32_t x15 = -2;
static volatile int32_t x19 = -1695015;
static int8_t x20 = INT8_MIN;
static int8_t x23 = -1;
volatile int32_t t5 = -5;
int32_t t9 = 12;
uint32_t x43 = 1647538U;
int8_t x46 = INT8_MIN;
static int16_t x47 = 2298;
static int16_t x55 = INT16_MIN;
int64_t x57 = -1LL;
int64_t x58 = INT64_MIN;
volatile int64_t t14 = -52533LL;
volatile int32_t t16 = 21;
volatile uint8_t x75 = 0U;
int64_t x76 = INT64_MIN;
static uint64_t x78 = UINT64_MAX;
uint32_t x90 = 38070175U;
int8_t x93 = -19;
int64_t x95 = INT64_MAX;
int32_t x96 = INT32_MIN;
uint32_t x100 = UINT32_MAX;
volatile int32_t x106 = -108039;
int32_t x110 = -3763149;
uint64_t t27 = 201970LLU;
int16_t x118 = -1;
uint64_t x120 = 3491305081587LLU;
volatile uint64_t t29 = 119LLU;
int8_t x125 = INT8_MIN;
int32_t x127 = INT32_MIN;
static int64_t x131 = INT64_MIN;
int16_t x142 = -1;
uint16_t x145 = 0U;
static volatile uint8_t x147 = UINT8_MAX;
volatile uint64_t x150 = 475LLU;
int8_t x151 = -1;
int64_t x159 = INT64_MIN;
static volatile int64_t t40 = INT64_MIN;
static int32_t x167 = INT32_MAX;
int64_t x171 = INT64_MIN;
static int8_t x187 = 0;
volatile int16_t x191 = INT16_MIN;
volatile uint64_t t47 = 753133LLU;
uint64_t x199 = 1437596LLU;
int64_t x202 = INT64_MAX;
int16_t x206 = 1;
uint8_t x211 = 0U;
volatile int32_t t52 = 480;
int32_t x220 = INT32_MIN;
volatile int32_t t54 = 0;
uint16_t x223 = UINT16_MAX;
uint16_t x226 = UINT16_MAX;
uint8_t x230 = 34U;
volatile int64_t t57 = -1332767182LL;
int16_t x240 = INT16_MIN;
static int32_t x246 = 1;
static int16_t x252 = -1;
uint64_t x258 = 1895885LLU;
static volatile int16_t x259 = INT16_MIN;
int32_t x263 = -1;
int32_t t65 = 14082;
int64_t x266 = INT64_MIN;
static uint16_t x268 = UINT16_MAX;
volatile int32_t x278 = -1;
int64_t x280 = INT64_MIN;
volatile int64_t t69 = 49500292LL;
int32_t x281 = INT32_MIN;
int64_t x282 = -3LL;
uint8_t x283 = 0U;
int8_t x289 = INT8_MIN;
static int8_t x296 = 6;
int32_t t73 = -68314953;
static int8_t x298 = -1;
int64_t x300 = -1LL;
volatile uint64_t x301 = UINT64_MAX;
int64_t x302 = -1LL;
uint64_t t75 = 1471351LLU;
int32_t x307 = 14;
int32_t t76 = 1;
int16_t x309 = -1;
int32_t x310 = -1;
int64_t x314 = -1077163446404473LL;
uint8_t x317 = UINT8_MAX;
int16_t x319 = -1;
volatile int32_t t79 = 22804800;
static volatile uint64_t t80 = 1630099867669LLU;
uint32_t x334 = 1U;
int32_t t83 = 429360;
int16_t x340 = -778;
int32_t x342 = -58918;
uint8_t x344 = 0U;
int32_t x345 = INT32_MAX;
volatile int32_t x348 = INT32_MIN;
volatile int32_t t86 = 2039986;
uint8_t x359 = 17U;
volatile int64_t t89 = 732106186068068LL;
uint64_t t90 = 29042LLU;
int32_t x373 = 45;
int64_t x375 = INT64_MAX;
static int64_t x379 = -1LL;
volatile uint64_t t94 = 2078029670489604LLU;
volatile uint32_t t96 = 839210U;
int8_t x392 = -1;
int64_t t97 = -1366654LL;
int64_t x394 = INT64_MIN;
static int32_t x398 = INT32_MIN;


void f0(void) {
	int64_t x1 = -1LL;
	uint64_t x2 = 31403253744LLU;
	uint16_t x3 = 13276U;
	uint16_t x4 = 2U;
	static volatile int64_t t0 = 7284LL;

	t0 = ((x1*(x2==x3))&x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = UINT8_MAX;
	int8_t x6 = -1;
	int32_t x7 = -1;
	volatile int64_t x8 = INT64_MIN;
	volatile int64_t t1 = -64465488850LL;

	t1 = ((x5*(x6==x7))&x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	uint8_t x11 = 1U;
	int64_t x12 = INT64_MAX;
	int64_t t2 = 57754717LL;

	t2 = ((x9*(x10==x11))&x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	uint8_t x14 = 1U;
	int32_t x16 = -39;
	int64_t t3 = 1463092812037875929LL;

	t3 = ((x13*(x14==x15))&x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = -66282;
	int64_t x18 = INT64_MIN;
	int32_t t4 = 29098;

	t4 = ((x17*(x18==x19))&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;
	static int8_t x22 = INT8_MIN;
	static int32_t x24 = INT32_MIN;

	t5 = ((x21*(x22==x23))&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 3U;
	volatile int8_t x26 = 0;
	int16_t x27 = INT16_MAX;
	static int64_t x28 = INT64_MAX;
	volatile int64_t t6 = -1001135943361273LL;

	t6 = ((x25*(x26==x27))&x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -2;
	static int8_t x30 = -1;
	volatile int64_t x31 = INT64_MAX;
	static int16_t x32 = -75;
	int32_t t7 = 430677862;

	t7 = ((x29*(x30==x31))&x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = INT64_MIN;
	uint8_t x34 = 0U;
	uint64_t x35 = 728982529LLU;
	int64_t x36 = INT64_MIN;
	int64_t t8 = 1521LL;

	t8 = ((x33*(x34==x35))&x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = INT8_MIN;
	int8_t x38 = -1;
	volatile int16_t x39 = -1;
	uint8_t x40 = 5U;

	t9 = ((x37*(x38==x39))&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	int8_t x42 = INT8_MIN;
	int16_t x44 = INT16_MAX;
	volatile int32_t t10 = -197277;

	t10 = ((x41*(x42==x43))&x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x45 = INT16_MAX;
	int16_t x48 = -5222;
	int32_t t11 = 210;

	t11 = ((x45*(x46==x47))&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = -1;
	int32_t x50 = 668400205;
	int32_t x51 = INT32_MAX;
	static int8_t x52 = INT8_MIN;
	static volatile int32_t t12 = 1;

	t12 = ((x49*(x50==x51))&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x53 = UINT64_MAX;
	int32_t x54 = INT32_MIN;
	uint32_t x56 = 7603623U;
	uint64_t t13 = 191502626395458LLU;

	t13 = ((x53*(x54==x55))&x56);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x59 = 4174971559LLU;
	int16_t x60 = -9;

	t14 = ((x57*(x58==x59))&x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	static volatile int64_t x62 = INT64_MIN;
	int8_t x63 = INT8_MIN;
	int16_t x64 = INT16_MIN;
	static int32_t t15 = -2395265;

	t15 = ((x61*(x62==x63))&x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 6U;
	static uint8_t x66 = 1U;
	uint64_t x67 = 161LLU;
	int16_t x68 = INT16_MIN;

	t16 = ((x65*(x66==x67))&x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	uint32_t x70 = UINT32_MAX;
	int32_t x71 = 43077594;
	static volatile uint16_t x72 = UINT16_MAX;
	int64_t t17 = 58903101079490LL;

	t17 = ((x69*(x70==x71))&x72);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = -1;
	static int64_t x74 = INT64_MAX;
	int64_t t18 = 65364777909827131LL;

	t18 = ((x73*(x74==x75))&x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 299U;
	static int8_t x79 = 61;
	static volatile int16_t x80 = INT16_MIN;
	int32_t t19 = -61;

	t19 = ((x77*(x78==x79))&x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = 5633501LL;
	uint32_t x82 = UINT32_MAX;
	uint64_t x83 = 2024282005888922LLU;
	static int32_t x84 = INT32_MIN;
	static int64_t t20 = -421118LL;

	t20 = ((x81*(x82==x83))&x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	int32_t x86 = -15038;
	uint8_t x87 = UINT8_MAX;
	uint64_t x88 = 117873136244939681LLU;
	volatile uint64_t t21 = 17367508LLU;

	t21 = ((x85*(x86==x87))&x88);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -3230543869810LL;
	int8_t x91 = INT8_MIN;
	uint32_t x92 = 712U;
	static volatile int64_t t22 = 3991707932067290578LL;

	t22 = ((x89*(x90==x91))&x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = INT16_MAX;
	int32_t t23 = -4027;

	t23 = ((x93*(x94==x95))&x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 6U;
	static int32_t x98 = INT32_MIN;
	volatile int64_t x99 = -500LL;
	uint32_t t24 = 1U;

	t24 = ((x97*(x98==x99))&x100);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 494225984194819LLU;
	volatile int16_t x102 = 1780;
	uint16_t x103 = 14288U;
	static uint8_t x104 = 84U;
	static volatile uint64_t t25 = 15303288147LLU;

	t25 = ((x101*(x102==x103))&x104);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	uint64_t x107 = UINT64_MAX;
	volatile uint8_t x108 = UINT8_MAX;
	volatile int32_t t26 = 5;

	t26 = ((x105*(x106==x107))&x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = INT8_MAX;
	int32_t x111 = INT32_MAX;
	volatile uint64_t x112 = UINT64_MAX;

	t27 = ((x109*(x110==x111))&x112);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	int16_t x114 = INT16_MAX;
	uint64_t x115 = 7098643347LLU;
	static int32_t x116 = 68447519;
	int32_t t28 = -3776;

	t28 = ((x113*(x114==x115))&x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	uint8_t x119 = 3U;

	t29 = ((x117*(x118==x119))&x120);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 1LLU;
	int32_t x122 = 11822494;
	uint8_t x123 = 13U;
	int64_t x124 = INT64_MIN;
	static uint64_t t30 = 10684LLU;

	t30 = ((x121*(x122==x123))&x124);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x126 = -1;
	int64_t x128 = INT64_MIN;
	int64_t t31 = 22001866917LL;

	t31 = ((x125*(x126==x127))&x128);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = INT64_MIN;
	static int16_t x130 = INT16_MAX;
	int32_t x132 = INT32_MAX;
	static volatile int64_t t32 = 2727677075390032927LL;

	t32 = ((x129*(x130==x131))&x132);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	uint8_t x134 = UINT8_MAX;
	int32_t x135 = -1;
	static int16_t x136 = -1;
	int32_t t33 = 1;

	t33 = ((x133*(x134==x135))&x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 3U;
	int8_t x138 = -12;
	int16_t x139 = -1;
	uint8_t x140 = 14U;
	static volatile int32_t t34 = 30332481;

	t34 = ((x137*(x138==x139))&x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -1;
	uint8_t x143 = 3U;
	uint32_t x144 = 50U;
	volatile uint32_t t35 = 474197U;

	t35 = ((x141*(x142==x143))&x144);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int64_t x146 = 7586LL;
	int64_t x148 = -43621LL;
	int64_t t36 = 342151777170689096LL;

	t36 = ((x145*(x146==x147))&x148);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x149 = INT8_MIN;
	uint8_t x152 = 103U;
	static int32_t t37 = -118889;

	t37 = ((x149*(x150==x151))&x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -1;
	int16_t x154 = INT16_MAX;
	uint8_t x155 = UINT8_MAX;
	uint8_t x156 = UINT8_MAX;
	static int32_t t38 = -500108557;

	t38 = ((x153*(x154==x155))&x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -3127725742704964466LL;
	int32_t x158 = INT32_MIN;
	int64_t x160 = 142935LL;
	volatile int64_t t39 = -546597181340991LL;

	t39 = ((x157*(x158==x159))&x160);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	uint64_t x162 = UINT64_MAX;
	int32_t x163 = -1;
	static int32_t x164 = INT32_MIN;

	t40 = ((x161*(x162==x163))&x164);

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = UINT64_MAX;
	uint32_t x166 = 8U;
	static int32_t x168 = -1;
	uint64_t t41 = 1LLU;

	t41 = ((x165*(x166==x167))&x168);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x169 = -7404;
	volatile int8_t x170 = -1;
	int32_t x172 = INT32_MAX;
	int32_t t42 = -1;

	t42 = ((x169*(x170==x171))&x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x173 = -1;
	static int32_t x174 = INT32_MIN;
	int32_t x175 = 1;
	int64_t x176 = -142552481856LL;
	static int64_t t43 = 4LL;

	t43 = ((x173*(x174==x175))&x176);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = INT32_MIN;
	static uint32_t x178 = UINT32_MAX;
	static int64_t x179 = INT64_MIN;
	int16_t x180 = 15363;
	static int32_t t44 = 1;

	t44 = ((x177*(x178==x179))&x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x181 = 5;
	uint16_t x182 = 211U;
	uint8_t x183 = 0U;
	uint64_t x184 = 1489472190LLU;
	volatile uint64_t t45 = 3094760480763232LLU;

	t45 = ((x181*(x182==x183))&x184);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -1;
	int8_t x186 = INT8_MAX;
	uint16_t x188 = 2U;
	volatile int32_t t46 = -1081;

	t46 = ((x185*(x186==x187))&x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x189 = 102LLU;
	uint16_t x190 = 12605U;
	volatile int64_t x192 = INT64_MIN;

	t47 = ((x189*(x190==x191))&x192);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -13455LL;
	int32_t x194 = 59;
	int16_t x195 = -1;
	int32_t x196 = 895775413;
	static volatile int64_t t48 = 70641334855LL;

	t48 = ((x193*(x194==x195))&x196);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 816742172827477LLU;
	volatile int8_t x198 = -13;
	uint64_t x200 = UINT64_MAX;
	uint64_t t49 = 152483165LLU;

	t49 = ((x197*(x198==x199))&x200);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = INT64_MIN;
	static int8_t x203 = INT8_MAX;
	volatile uint32_t x204 = 868787397U;
	int64_t t50 = 90008460884586LL;

	t50 = ((x201*(x202==x203))&x204);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = UINT16_MAX;
	uint8_t x207 = 3U;
	volatile uint32_t x208 = 122625437U;
	volatile uint32_t t51 = 46U;

	t51 = ((x205*(x206==x207))&x208);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = 20;
	uint16_t x210 = 0U;
	uint16_t x212 = UINT16_MAX;

	t52 = ((x209*(x210==x211))&x212);

	if (t52 != 20) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -1;
	int64_t x214 = -923824273064230064LL;
	static int64_t x215 = 178073675427977251LL;
	volatile int32_t x216 = 8778;
	int32_t t53 = -3602224;

	t53 = ((x213*(x214==x215))&x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	uint16_t x218 = UINT16_MAX;
	int8_t x219 = INT8_MIN;

	t54 = ((x217*(x218==x219))&x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = INT32_MAX;
	int32_t x222 = -2429558;
	int32_t x224 = INT32_MIN;
	int32_t t55 = -1;

	t55 = ((x221*(x222==x223))&x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x225 = UINT32_MAX;
	uint16_t x227 = UINT16_MAX;
	int16_t x228 = INT16_MIN;
	static volatile uint32_t t56 = 2953148U;

	t56 = ((x225*(x226==x227))&x228);

	if (t56 != 4294934528U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x229 = -20470243947LL;
	uint64_t x231 = 664653967963193228LLU;
	int16_t x232 = INT16_MAX;

	t57 = ((x229*(x230==x231))&x232);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MAX;
	volatile int8_t x234 = INT8_MIN;
	int64_t x235 = INT64_MIN;
	uint64_t x236 = UINT64_MAX;
	uint64_t t58 = 16089473589531964LLU;

	t58 = ((x233*(x234==x235))&x236);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint64_t x237 = UINT64_MAX;
	int32_t x238 = -7678;
	uint32_t x239 = 3U;
	volatile uint64_t t59 = 1024097LLU;

	t59 = ((x237*(x238==x239))&x240);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MAX;
	int16_t x242 = INT16_MIN;
	int16_t x243 = INT16_MIN;
	static int64_t x244 = INT64_MAX;
	int64_t t60 = INT64_MAX;

	t60 = ((x241*(x242==x243))&x244);

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x245 = INT8_MIN;
	int64_t x247 = INT64_MIN;
	uint64_t x248 = UINT64_MAX;
	uint64_t t61 = 51500090990LLU;

	t61 = ((x245*(x246==x247))&x248);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	uint16_t x250 = UINT16_MAX;
	static int8_t x251 = -1;
	int32_t t62 = 767;

	t62 = ((x249*(x250==x251))&x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 45U;
	uint32_t x254 = 6U;
	uint8_t x255 = 2U;
	volatile uint16_t x256 = 6914U;
	uint32_t t63 = 453U;

	t63 = ((x253*(x254==x255))&x256);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = 9U;
	static uint64_t x260 = 735376433LLU;
	uint64_t t64 = 39954941081713LLU;

	t64 = ((x257*(x258==x259))&x260);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	int16_t x262 = INT16_MIN;
	volatile int8_t x264 = INT8_MIN;

	t65 = ((x261*(x262==x263))&x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 18854374U;
	static int8_t x267 = -1;
	volatile uint32_t t66 = 174U;

	t66 = ((x265*(x266==x267))&x268);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = 53U;
	static volatile uint16_t x270 = 3343U;
	uint16_t x271 = UINT16_MAX;
	int32_t x272 = INT32_MIN;
	static volatile int32_t t67 = 59224191;

	t67 = ((x269*(x270==x271))&x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x273 = 40U;
	int16_t x274 = 572;
	uint32_t x275 = 3752829U;
	int8_t x276 = INT8_MIN;
	volatile uint32_t t68 = 540U;

	t68 = ((x273*(x274==x275))&x276);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int64_t x277 = 483954422413773208LL;
	static int8_t x279 = 3;

	t69 = ((x277*(x278==x279))&x280);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x284 = UINT32_MAX;
	volatile uint32_t t70 = 3745698U;

	t70 = ((x281*(x282==x283))&x284);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MIN;
	int8_t x286 = INT8_MIN;
	volatile uint8_t x287 = UINT8_MAX;
	volatile uint8_t x288 = 94U;
	int32_t t71 = 0;

	t71 = ((x285*(x286==x287))&x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x290 = 24;
	int64_t x291 = INT64_MIN;
	uint64_t x292 = 582LLU;
	uint64_t t72 = 446578852LLU;

	t72 = ((x289*(x290==x291))&x292);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 13481U;
	int32_t x294 = -1;
	int32_t x295 = INT32_MIN;

	t73 = ((x293*(x294==x295))&x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x297 = -3197;
	int32_t x299 = INT32_MAX;
	static volatile int64_t t74 = 2237LL;

	t74 = ((x297*(x298==x299))&x300);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x303 = 930;
	static volatile uint8_t x304 = UINT8_MAX;

	t75 = ((x301*(x302==x303))&x304);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -4;
	int32_t x306 = INT32_MIN;
	static int16_t x308 = INT16_MAX;

	t76 = ((x305*(x306==x307))&x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x311 = 1977U;
	int64_t x312 = 43041094960186LL;
	int64_t t77 = 4LL;

	t77 = ((x309*(x310==x311))&x312);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x313 = 7U;
	int32_t x315 = INT32_MIN;
	int8_t x316 = 1;
	volatile int32_t t78 = -1790;

	t78 = ((x313*(x314==x315))&x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x318 = UINT64_MAX;
	int32_t x320 = INT32_MIN;

	t79 = ((x317*(x318==x319))&x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = UINT64_MAX;
	int16_t x322 = INT16_MAX;
	static uint32_t x323 = UINT32_MAX;
	volatile int16_t x324 = INT16_MIN;

	t80 = ((x321*(x322==x323))&x324);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x325 = INT64_MIN;
	int32_t x326 = INT32_MIN;
	uint32_t x327 = 980U;
	uint64_t x328 = 2552259149986203152LLU;
	uint64_t t81 = 1314346231337727272LLU;

	t81 = ((x325*(x326==x327))&x328);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = UINT8_MAX;
	static volatile uint32_t x330 = 69U;
	int32_t x331 = -1;
	int8_t x332 = INT8_MAX;
	int32_t t82 = -48124;

	t82 = ((x329*(x330==x331))&x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 5392U;
	uint16_t x335 = 12U;
	int32_t x336 = -1;

	t83 = ((x333*(x334==x335))&x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x337 = -3;
	volatile int64_t x338 = INT64_MIN;
	static uint16_t x339 = UINT16_MAX;
	volatile int32_t t84 = -2764;

	t84 = ((x337*(x338==x339))&x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	static volatile uint16_t x343 = UINT16_MAX;
	int32_t t85 = 3;

	t85 = ((x341*(x342==x343))&x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x346 = 3U;
	int32_t x347 = 2836;

	t86 = ((x345*(x346==x347))&x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x349 = UINT32_MAX;
	int8_t x350 = -1;
	uint64_t x351 = 66857651LLU;
	int16_t x352 = INT16_MAX;
	volatile uint32_t t87 = 11U;

	t87 = ((x349*(x350==x351))&x352);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = 502;
	uint64_t x354 = 25979LLU;
	volatile uint32_t x355 = UINT32_MAX;
	volatile uint64_t x356 = UINT64_MAX;
	volatile uint64_t t88 = 935747692140853292LLU;

	t88 = ((x353*(x354==x355))&x356);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = 12169640400672LL;
	uint64_t x358 = UINT64_MAX;
	volatile int16_t x360 = INT16_MAX;

	t89 = ((x357*(x358==x359))&x360);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x361 = 164972686488408791LLU;
	uint32_t x362 = 847684U;
	int8_t x363 = INT8_MIN;
	uint16_t x364 = 2013U;

	t90 = ((x361*(x362==x363))&x364);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x365 = 5U;
	int64_t x366 = INT64_MIN;
	uint64_t x367 = UINT64_MAX;
	int64_t x368 = 1128975632198986272LL;
	int64_t t91 = -3693197004642LL;

	t91 = ((x365*(x366==x367))&x368);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = -19;
	static int32_t x370 = -1;
	int8_t x371 = INT8_MAX;
	int16_t x372 = 10;
	volatile int32_t t92 = -381;

	t92 = ((x369*(x370==x371))&x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x374 = INT16_MAX;
	int8_t x376 = INT8_MIN;
	int32_t t93 = 33851;

	t93 = ((x373*(x374==x375))&x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x377 = UINT64_MAX;
	int32_t x378 = INT32_MIN;
	uint64_t x380 = 4382628556718LLU;

	t94 = ((x377*(x378==x379))&x380);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x381 = INT32_MIN;
	uint8_t x382 = 1U;
	int32_t x383 = -1;
	uint16_t x384 = UINT16_MAX;
	volatile int32_t t95 = -6118;

	t95 = ((x381*(x382==x383))&x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	uint64_t x386 = UINT64_MAX;
	uint64_t x387 = UINT64_MAX;
	volatile uint32_t x388 = 469U;

	t96 = ((x385*(x386==x387))&x388);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x389 = 802508546981LL;
	uint64_t x390 = UINT64_MAX;
	volatile uint16_t x391 = 3U;

	t97 = ((x389*(x390==x391))&x392);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	uint16_t x395 = 21413U;
	static int64_t x396 = -1LL;
	int64_t t98 = 2815519LL;

	t98 = ((x393*(x394==x395))&x396);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x397 = INT32_MIN;
	volatile uint64_t x399 = 698502926559271LLU;
	volatile uint16_t x400 = UINT16_MAX;
	int32_t t99 = 1;

	t99 = ((x397*(x398==x399))&x400);

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

