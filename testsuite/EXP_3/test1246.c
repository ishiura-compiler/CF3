#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x2 = UINT8_MAX;
int8_t x17 = INT8_MAX;
uint16_t x18 = 3911U;
volatile int64_t x19 = 300664LL;
int16_t x31 = INT16_MAX;
uint64_t x34 = 3670LLU;
uint64_t x47 = 161845LLU;
int64_t x50 = -1LL;
static volatile int16_t x52 = INT16_MIN;
int32_t x53 = INT32_MIN;
uint16_t x58 = UINT16_MAX;
static volatile int8_t x65 = -1;
uint16_t x70 = 1198U;
int16_t x72 = INT16_MAX;
volatile int32_t t17 = -10972088;
uint16_t x73 = 2566U;
static int8_t x76 = -1;
static uint64_t x77 = 103000457081866235LLU;
uint32_t x78 = UINT32_MAX;
static int32_t x82 = INT32_MAX;
static int64_t x96 = INT64_MAX;
static int16_t x103 = INT16_MIN;
static int8_t x111 = -1;
volatile int32_t t27 = 7;
int64_t x114 = 979LL;
volatile int64_t t29 = -5LL;
int8_t x130 = INT8_MAX;
uint8_t x131 = 6U;
volatile int32_t t34 = -4;
volatile uint8_t x141 = 14U;
static uint32_t x145 = UINT32_MAX;
int8_t x146 = INT8_MIN;
static volatile uint64_t x148 = 1088706777034LLU;
int16_t x155 = INT16_MAX;
int64_t t38 = 2897481287564204482LL;
int8_t x158 = 9;
static uint32_t x159 = UINT32_MAX;
volatile uint32_t t39 = 106633U;
uint64_t x162 = UINT64_MAX;
uint64_t x170 = 3204965LLU;
int16_t x179 = 0;
int32_t t43 = -73;
uint64_t x191 = UINT64_MAX;
uint64_t x195 = 0LLU;
int64_t x197 = INT64_MIN;
int64_t x198 = -19106LL;
int64_t x200 = -832LL;
volatile uint64_t x206 = 5995LLU;
int8_t x208 = 3;
volatile int32_t t51 = 1;
uint32_t x214 = 2775608U;
volatile int16_t x215 = INT16_MIN;
static volatile uint32_t t52 = 0U;
static volatile int64_t t54 = -646935025200LL;
static volatile int32_t x226 = INT32_MAX;
volatile int32_t x227 = -83896599;
static uint32_t x236 = 247113853U;
int8_t x238 = -1;
uint16_t x240 = 1900U;
volatile uint64_t t58 = 279295538397257909LLU;
static int16_t x241 = INT16_MIN;
volatile uint32_t x242 = 1U;
volatile int8_t x247 = -1;
int64_t x254 = -1LL;
uint8_t x257 = 0U;
static int16_t x261 = -18;
uint16_t x268 = UINT16_MAX;
volatile uint32_t t65 = 70648U;
int16_t x274 = INT16_MIN;
volatile int64_t x278 = -1LL;
int32_t x280 = -1;
int64_t x284 = -1LL;
volatile uint32_t x285 = UINT32_MAX;
uint64_t x289 = 110397017LLU;
static uint64_t t71 = 86185513377LLU;
int64_t x294 = -153795163154116LL;
static int32_t t73 = -3769526;
static uint32_t t74 = 36241U;
uint64_t x306 = 3321880921606879LLU;
static uint64_t t75 = 2064166755961791LLU;
volatile uint64_t x310 = 81991208673LLU;
volatile int8_t x312 = INT8_MAX;
uint64_t x313 = UINT64_MAX;
volatile uint8_t x331 = 12U;
volatile int16_t x332 = -64;
int64_t x337 = INT64_MAX;
int32_t x342 = INT32_MAX;
uint64_t x345 = 1427308LLU;
volatile int32_t x348 = 141645;
int32_t x350 = -1;
int32_t t85 = -3114;
static volatile int8_t x353 = -1;
static int32_t x358 = INT32_MIN;
volatile int64_t x360 = INT64_MAX;
int32_t t87 = -3844;
int16_t x363 = INT16_MIN;
volatile uint64_t x368 = UINT64_MAX;
int32_t t90 = -111087;
uint8_t x376 = 64U;
uint64_t x380 = 6666896663LLU;
int8_t x382 = INT8_MIN;
uint8_t x388 = UINT8_MAX;
int16_t x390 = -297;
uint64_t t95 = 16154408241LLU;
int8_t x393 = INT8_MIN;
uint64_t x396 = 29483674LLU;
volatile int64_t t96 = 2391280077254LL;
int32_t x407 = 7975737;
int32_t t99 = 5065;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	static int8_t x3 = INT8_MIN;
	uint8_t x4 = 29U;
	volatile uint32_t t0 = 11517384U;

	t0 = ((x1%x2)&(x3==x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	uint64_t x6 = 2704208301260434924LLU;
	volatile uint32_t x7 = 98U;
	static uint16_t x8 = 3864U;
	volatile uint64_t t1 = 6799709272333LLU;

	t1 = ((x5%x6)&(x7==x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -1LL;
	uint32_t x10 = 179596927U;
	int8_t x11 = INT8_MIN;
	volatile int16_t x12 = INT16_MIN;
	int64_t t2 = -18577666130306LL;

	t2 = ((x9%x10)&(x11==x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x13 = 4U;
	uint16_t x14 = 10143U;
	int16_t x15 = INT16_MIN;
	static uint8_t x16 = 8U;
	int32_t t3 = -239912;

	t3 = ((x13%x14)&(x15==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x20 = INT16_MIN;
	volatile int32_t t4 = 18531;

	t4 = ((x17%x18)&(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = -1;
	int16_t x22 = -1;
	int16_t x23 = INT16_MIN;
	volatile uint64_t x24 = 63711665870950556LLU;
	int32_t t5 = -98842752;

	t5 = ((x21%x22)&(x23==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	uint32_t x26 = UINT32_MAX;
	static int32_t x27 = INT32_MIN;
	int64_t x28 = INT64_MAX;
	static volatile uint32_t t6 = 3U;

	t6 = ((x25%x26)&(x27==x28));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 83U;
	uint64_t x30 = UINT64_MAX;
	volatile uint32_t x32 = UINT32_MAX;
	static uint64_t t7 = 2556LLU;

	t7 = ((x29%x30)&(x31==x32));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = 0U;
	volatile int16_t x35 = INT16_MIN;
	volatile uint16_t x36 = UINT16_MAX;
	volatile uint64_t t8 = 12415LLU;

	t8 = ((x33%x34)&(x35==x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x37 = UINT8_MAX;
	volatile int64_t x38 = INT64_MAX;
	volatile uint8_t x39 = UINT8_MAX;
	static uint8_t x40 = UINT8_MAX;
	int64_t t9 = -1824LL;

	t9 = ((x37%x38)&(x39==x40));

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 3U;
	volatile int16_t x42 = 3744;
	static int8_t x43 = INT8_MAX;
	uint16_t x44 = 282U;
	uint32_t t10 = 3U;

	t10 = ((x41%x42)&(x43==x44));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 193;
	int8_t x46 = 8;
	uint32_t x48 = 3U;
	int32_t t11 = 96889074;

	t11 = ((x45%x46)&(x47==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = INT64_MIN;
	uint64_t x51 = UINT64_MAX;
	int64_t t12 = 1362940188LL;

	t12 = ((x49%x50)&(x51==x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x54 = -3108637391686501LL;
	static uint32_t x55 = UINT32_MAX;
	uint32_t x56 = 17U;
	volatile int64_t t13 = 131631081LL;

	t13 = ((x53%x54)&(x55==x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x57 = UINT8_MAX;
	int16_t x59 = -1;
	volatile uint64_t x60 = UINT64_MAX;
	static volatile int32_t t14 = 333446;

	t14 = ((x57%x58)&(x59==x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = INT32_MIN;
	int64_t x62 = INT64_MIN;
	int64_t x63 = INT64_MAX;
	int64_t x64 = INT64_MIN;
	volatile int64_t t15 = 226855LL;

	t15 = ((x61%x62)&(x63==x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x66 = 3U;
	int64_t x67 = INT64_MIN;
	volatile int64_t x68 = INT64_MIN;
	static volatile int32_t t16 = 44767194;

	t16 = ((x65%x66)&(x67==x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	int32_t x71 = -530903;

	t17 = ((x69%x70)&(x71==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x74 = 2144060;
	int16_t x75 = INT16_MIN;
	int32_t t18 = -7;

	t18 = ((x73%x74)&(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x79 = UINT8_MAX;
	int32_t x80 = INT32_MIN;
	static volatile uint64_t t19 = 1196029294307963055LLU;

	t19 = ((x77%x78)&(x79==x80));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x81 = 1U;
	uint64_t x83 = 83330097LLU;
	volatile int16_t x84 = INT16_MIN;
	int32_t t20 = -6736628;

	t20 = ((x81%x82)&(x83==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MAX;
	uint64_t x86 = UINT64_MAX;
	static int64_t x87 = INT64_MIN;
	int32_t x88 = INT32_MIN;
	volatile uint64_t t21 = 7741201656LLU;

	t21 = ((x85%x86)&(x87==x88));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	volatile int8_t x90 = -1;
	uint32_t x91 = 3431503U;
	volatile int32_t x92 = -3594945;
	int32_t t22 = -1200;

	t22 = ((x89%x90)&(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 2038U;
	static uint64_t x94 = 1421LLU;
	static int16_t x95 = INT16_MIN;
	static uint64_t t23 = 58747LLU;

	t23 = ((x93%x94)&(x95==x96));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	uint32_t x98 = 10342438U;
	volatile int64_t x99 = INT64_MIN;
	int32_t x100 = INT32_MIN;
	uint32_t t24 = 26855U;

	t24 = ((x97%x98)&(x99==x100));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x101 = UINT32_MAX;
	volatile int64_t x102 = 44844LL;
	static int64_t x104 = INT64_MAX;
	int64_t t25 = -28628281881377LL;

	t25 = ((x101%x102)&(x103==x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 0U;
	int16_t x106 = INT16_MIN;
	uint16_t x107 = 16410U;
	static int16_t x108 = -1;
	volatile int32_t t26 = -321888258;

	t26 = ((x105%x106)&(x107==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = 1419294;
	int16_t x110 = 5801;
	volatile uint32_t x112 = UINT32_MAX;

	t27 = ((x109%x110)&(x111==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 1U;
	static int8_t x115 = INT8_MAX;
	volatile int64_t x116 = INT64_MAX;
	int64_t t28 = -157LL;

	t28 = ((x113%x114)&(x115==x116));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x117 = 1;
	volatile int64_t x118 = INT64_MAX;
	uint16_t x119 = UINT16_MAX;
	static uint32_t x120 = UINT32_MAX;

	t29 = ((x117%x118)&(x119==x120));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x121 = INT8_MIN;
	int64_t x122 = -5456035513626LL;
	static int16_t x123 = -8;
	int8_t x124 = INT8_MAX;
	static volatile int64_t t30 = 3434LL;

	t30 = ((x121%x122)&(x123==x124));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = UINT32_MAX;
	int16_t x126 = -225;
	uint16_t x127 = UINT16_MAX;
	static uint32_t x128 = 103162U;
	uint32_t t31 = 395801994U;

	t31 = ((x125%x126)&(x127==x128));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = 101;
	int8_t x132 = -1;
	int32_t t32 = -521256;

	t32 = ((x129%x130)&(x131==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = 0;
	volatile int16_t x134 = -1;
	int32_t x135 = -8230707;
	int64_t x136 = INT64_MIN;
	volatile int32_t t33 = 2084;

	t33 = ((x133%x134)&(x135==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 0U;
	volatile uint16_t x138 = UINT16_MAX;
	volatile int32_t x139 = 4336880;
	volatile uint16_t x140 = UINT16_MAX;

	t34 = ((x137%x138)&(x139==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x142 = -1;
	static int16_t x143 = 6;
	uint8_t x144 = 30U;
	int32_t t35 = -6;

	t35 = ((x141%x142)&(x143==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x147 = 1U;
	uint32_t t36 = 302U;

	t36 = ((x145%x146)&(x147==x148));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	int8_t x150 = INT8_MIN;
	uint8_t x151 = UINT8_MAX;
	volatile uint16_t x152 = 25056U;
	int32_t t37 = 33938;

	t37 = ((x149%x150)&(x151==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	int64_t x154 = -1LL;
	volatile int64_t x156 = -3266862LL;

	t38 = ((x153%x154)&(x155==x156));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = UINT32_MAX;
	int64_t x160 = 363LL;

	t39 = ((x157%x158)&(x159==x160));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = 2;
	volatile int8_t x163 = 39;
	int32_t x164 = -1;
	uint64_t t40 = 8700837265LLU;

	t40 = ((x161%x162)&(x163==x164));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = -1;
	int32_t x171 = 940;
	uint64_t x172 = UINT64_MAX;
	volatile uint64_t t41 = 10LLU;

	t41 = ((x169%x170)&(x171==x172));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x173 = 58U;
	volatile int32_t x174 = INT32_MIN;
	int8_t x175 = 15;
	int16_t x176 = INT16_MAX;
	volatile int32_t t42 = 58;

	t42 = ((x173%x174)&(x175==x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x177 = 57;
	static int32_t x178 = INT32_MIN;
	static volatile int64_t x180 = INT64_MIN;

	t43 = ((x177%x178)&(x179==x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x181 = INT16_MAX;
	int32_t x182 = -1;
	static uint64_t x183 = 330858145234LLU;
	int64_t x184 = 1597389003263378915LL;
	static volatile int32_t t44 = 61175712;

	t44 = ((x181%x182)&(x183==x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x185 = INT16_MIN;
	static int8_t x186 = -1;
	int16_t x187 = -1;
	int8_t x188 = INT8_MAX;
	int32_t t45 = -12;

	t45 = ((x185%x186)&(x187==x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x189 = 2U;
	volatile int8_t x190 = INT8_MIN;
	int64_t x192 = INT64_MIN;
	volatile int32_t t46 = 440688269;

	t46 = ((x189%x190)&(x191==x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x193 = 24264U;
	static uint64_t x194 = 2693646261LLU;
	volatile int64_t x196 = INT64_MIN;
	uint64_t t47 = 17238457840818639LLU;

	t47 = ((x193%x194)&(x195==x196));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x199 = 1;
	volatile int64_t t48 = 0LL;

	t48 = ((x197%x198)&(x199==x200));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x201 = UINT8_MAX;
	uint64_t x202 = 72785388LLU;
	uint8_t x203 = 2U;
	uint32_t x204 = 3U;
	uint64_t t49 = 1LLU;

	t49 = ((x201%x202)&(x203==x204));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x205 = UINT32_MAX;
	int8_t x207 = -1;
	uint64_t t50 = 225450157698291899LLU;

	t50 = ((x205%x206)&(x207==x208));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x209 = INT8_MIN;
	int32_t x210 = INT32_MIN;
	static uint32_t x211 = 10449419U;
	int32_t x212 = 14352440;

	t51 = ((x209%x210)&(x211==x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x213 = 1U;
	volatile int8_t x216 = INT8_MAX;

	t52 = ((x213%x214)&(x215==x216));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = -1102;
	uint64_t x218 = 11731LLU;
	volatile int16_t x219 = -1;
	int64_t x220 = INT64_MAX;
	uint64_t t53 = 3995527554865LLU;

	t53 = ((x217%x218)&(x219==x220));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x221 = 373U;
	int64_t x222 = -89327969316LL;
	int8_t x223 = INT8_MIN;
	volatile uint64_t x224 = 63998201LLU;

	t54 = ((x221%x222)&(x223==x224));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x225 = INT8_MIN;
	int8_t x228 = -18;
	volatile int32_t t55 = -121747;

	t55 = ((x225%x226)&(x227==x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x229 = 1638900U;
	int32_t x230 = -529907732;
	int32_t x231 = INT32_MIN;
	int8_t x232 = INT8_MAX;
	volatile uint32_t t56 = 6933648U;

	t56 = ((x229%x230)&(x231==x232));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x233 = -1;
	uint8_t x234 = 3U;
	static volatile int8_t x235 = 0;
	int32_t t57 = -14835;

	t57 = ((x233%x234)&(x235==x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x237 = 1673061899070685296LLU;
	static int64_t x239 = -1LL;

	t58 = ((x237%x238)&(x239==x240));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x243 = INT8_MIN;
	static int32_t x244 = -116120751;
	volatile uint32_t t59 = 433748769U;

	t59 = ((x241%x242)&(x243==x244));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x245 = -43;
	uint64_t x246 = 1088174361LLU;
	int32_t x248 = INT32_MAX;
	volatile uint64_t t60 = 1531209LLU;

	t60 = ((x245%x246)&(x247==x248));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x249 = 1LL;
	uint64_t x250 = 2940612946595LLU;
	int32_t x251 = -145489;
	static int64_t x252 = INT64_MIN;
	volatile uint64_t t61 = 260572LLU;

	t61 = ((x249%x250)&(x251==x252));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x253 = -27562;
	int64_t x255 = INT64_MIN;
	int64_t x256 = 10577LL;
	int64_t t62 = 2085805594039581LL;

	t62 = ((x253%x254)&(x255==x256));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x258 = INT16_MIN;
	static uint64_t x259 = UINT64_MAX;
	volatile int32_t x260 = INT32_MIN;
	static int32_t t63 = -6594;

	t63 = ((x257%x258)&(x259==x260));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x262 = INT64_MAX;
	uint16_t x263 = UINT16_MAX;
	int16_t x264 = -31;
	int64_t t64 = -332387416103617LL;

	t64 = ((x261%x262)&(x263==x264));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x265 = 195087168U;
	uint32_t x266 = 256697474U;
	volatile uint64_t x267 = 1176984410035887940LLU;

	t65 = ((x265%x266)&(x267==x268));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x269 = INT16_MAX;
	int8_t x270 = INT8_MIN;
	volatile int8_t x271 = -1;
	volatile uint32_t x272 = UINT32_MAX;
	volatile int32_t t66 = 9427972;

	t66 = ((x269%x270)&(x271==x272));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x273 = INT32_MIN;
	int32_t x275 = -1868;
	uint8_t x276 = 3U;
	int32_t t67 = -175566;

	t67 = ((x273%x274)&(x275==x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x277 = INT64_MAX;
	volatile int64_t x279 = INT64_MIN;
	volatile int64_t t68 = 228192LL;

	t68 = ((x277%x278)&(x279==x280));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x281 = 64U;
	int64_t x282 = -1LL;
	uint16_t x283 = UINT16_MAX;
	volatile int64_t t69 = 104904747120751029LL;

	t69 = ((x281%x282)&(x283==x284));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x286 = INT64_MIN;
	int16_t x287 = -2;
	int64_t x288 = -322LL;
	int64_t t70 = 1425050716870LL;

	t70 = ((x285%x286)&(x287==x288));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x290 = INT32_MIN;
	uint16_t x291 = UINT16_MAX;
	static int64_t x292 = INT64_MAX;

	t71 = ((x289%x290)&(x291==x292));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x293 = -13;
	static volatile int64_t x295 = INT64_MIN;
	uint8_t x296 = UINT8_MAX;
	int64_t t72 = 2107614549018168LL;

	t72 = ((x293%x294)&(x295==x296));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x297 = INT8_MIN;
	static int32_t x298 = 18118;
	uint16_t x299 = 1U;
	volatile int32_t x300 = INT32_MAX;

	t73 = ((x297%x298)&(x299==x300));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x301 = UINT32_MAX;
	int32_t x302 = INT32_MIN;
	uint64_t x303 = UINT64_MAX;
	uint16_t x304 = 176U;

	t74 = ((x301%x302)&(x303==x304));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x305 = INT64_MIN;
	int16_t x307 = 331;
	uint8_t x308 = 9U;

	t75 = ((x305%x306)&(x307==x308));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x309 = -1LL;
	static int16_t x311 = INT16_MIN;
	volatile uint64_t t76 = 588266997505LLU;

	t76 = ((x309%x310)&(x311==x312));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x314 = 2310U;
	static int8_t x315 = -1;
	int32_t x316 = INT32_MIN;
	static volatile uint64_t t77 = 242328069576LLU;

	t77 = ((x313%x314)&(x315==x316));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x317 = INT32_MIN;
	int64_t x318 = 478410509820472LL;
	static volatile int16_t x319 = INT16_MAX;
	uint32_t x320 = UINT32_MAX;
	volatile int64_t t78 = -2037185715860LL;

	t78 = ((x317%x318)&(x319==x320));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x321 = UINT16_MAX;
	int16_t x322 = INT16_MAX;
	int8_t x323 = INT8_MIN;
	static int8_t x324 = 2;
	int32_t t79 = -919;

	t79 = ((x321%x322)&(x323==x324));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x329 = 321853;
	int32_t x330 = INT32_MAX;
	int32_t t80 = -244143678;

	t80 = ((x329%x330)&(x331==x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x333 = 100U;
	int8_t x334 = -1;
	uint32_t x335 = UINT32_MAX;
	static volatile int8_t x336 = 50;
	int32_t t81 = 248;

	t81 = ((x333%x334)&(x335==x336));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x338 = -11;
	int16_t x339 = -15775;
	int8_t x340 = -1;
	volatile int64_t t82 = -447209023473LL;

	t82 = ((x337%x338)&(x339==x340));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x341 = UINT64_MAX;
	int8_t x343 = -17;
	uint64_t x344 = UINT64_MAX;
	uint64_t t83 = 1133411927486LLU;

	t83 = ((x341%x342)&(x343==x344));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x346 = 2015U;
	int16_t x347 = INT16_MAX;
	volatile uint64_t t84 = 2077067261679843259LLU;

	t84 = ((x345%x346)&(x347==x348));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x349 = 0;
	uint64_t x351 = UINT64_MAX;
	int64_t x352 = -1LL;

	t85 = ((x349%x350)&(x351==x352));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x354 = INT32_MIN;
	int8_t x355 = -1;
	static volatile uint8_t x356 = 0U;
	int32_t t86 = -177106;

	t86 = ((x353%x354)&(x355==x356));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x357 = -1;
	int16_t x359 = -1;

	t87 = ((x357%x358)&(x359==x360));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x361 = INT64_MAX;
	static uint32_t x362 = 10390U;
	uint32_t x364 = UINT32_MAX;
	volatile int64_t t88 = -17951438LL;

	t88 = ((x361%x362)&(x363==x364));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x365 = 241U;
	uint8_t x366 = 15U;
	int16_t x367 = -1;
	volatile uint32_t t89 = 17842944U;

	t89 = ((x365%x366)&(x367==x368));

	if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x369 = INT32_MIN;
	int32_t x370 = 103;
	uint64_t x371 = 672034419535LLU;
	volatile int16_t x372 = INT16_MAX;

	t90 = ((x369%x370)&(x371==x372));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x373 = UINT32_MAX;
	int16_t x374 = -1;
	int64_t x375 = INT64_MAX;
	uint32_t t91 = 250609U;

	t91 = ((x373%x374)&(x375==x376));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x377 = UINT32_MAX;
	uint64_t x378 = 5491204609LLU;
	int8_t x379 = INT8_MIN;
	uint64_t t92 = 212616999253679242LLU;

	t92 = ((x377%x378)&(x379==x380));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x381 = -1LL;
	volatile int16_t x383 = -106;
	int16_t x384 = INT16_MAX;
	volatile int64_t t93 = -6LL;

	t93 = ((x381%x382)&(x383==x384));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x385 = 8426491872481LLU;
	int8_t x386 = INT8_MIN;
	static volatile uint8_t x387 = 1U;
	volatile uint64_t t94 = 3063LLU;

	t94 = ((x385%x386)&(x387==x388));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x389 = 24491020LLU;
	int32_t x391 = INT32_MIN;
	static uint8_t x392 = UINT8_MAX;

	t95 = ((x389%x390)&(x391==x392));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x394 = INT64_MIN;
	uint8_t x395 = 52U;

	t96 = ((x393%x394)&(x395==x396));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x397 = UINT16_MAX;
	int32_t x398 = -1;
	uint32_t x399 = 37393U;
	static int64_t x400 = -1LL;
	int32_t t97 = -875996751;

	t97 = ((x397%x398)&(x399==x400));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x401 = -1;
	volatile int8_t x402 = INT8_MAX;
	volatile uint32_t x403 = 6476197U;
	int32_t x404 = INT32_MIN;
	int32_t t98 = 92679063;

	t98 = ((x401%x402)&(x403==x404));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x405 = -1;
	int32_t x406 = INT32_MAX;
	int16_t x408 = -1;

	t99 = ((x405%x406)&(x407==x408));

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

