#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = 31455253;
volatile int16_t x8 = -1;
uint8_t x12 = 58U;
uint32_t x18 = 100U;
static int32_t x22 = -1;
uint64_t x23 = 3103349980703360LLU;
int64_t x25 = 343552740002LL;
uint64_t x28 = UINT64_MAX;
volatile int64_t x34 = -1LL;
uint32_t x38 = 21248U;
int32_t x39 = -806997196;
volatile int16_t x42 = INT16_MAX;
int32_t x43 = INT32_MAX;
int32_t t9 = 0;
static int64_t x48 = INT64_MIN;
int64_t x55 = 1411012872622093LL;
int64_t x63 = INT64_MAX;
int32_t x64 = -1;
int32_t x69 = -218;
int16_t x72 = -1;
volatile int64_t x75 = INT64_MIN;
int64_t x83 = INT64_MIN;
int16_t x84 = -1;
int32_t x87 = 17;
uint8_t x88 = 47U;
volatile int32_t t20 = 8;
uint64_t x90 = 180121088LLU;
int32_t t21 = 0;
static uint8_t x93 = 4U;
uint64_t x95 = UINT64_MAX;
uint8_t x100 = UINT8_MAX;
int16_t x104 = INT16_MIN;
uint8_t x105 = 16U;
static int8_t x119 = -1;
uint64_t t30 = 1LLU;
int32_t x129 = -1;
int64_t x131 = INT64_MIN;
int64_t x136 = -1LL;
int64_t x139 = 186631476452LL;
int64_t x142 = INT64_MIN;
volatile uint32_t x153 = 333142980U;
volatile uint64_t t38 = 33959431841983LLU;
volatile int8_t x166 = INT8_MAX;
int8_t x168 = INT8_MAX;
volatile int8_t x169 = 0;
static int64_t x180 = INT64_MAX;
int64_t x184 = INT64_MAX;
int64_t x190 = 540824814LL;
int16_t x192 = -20;
int16_t x199 = -3;
static volatile int32_t x200 = -51582;
volatile int16_t x206 = -1;
int64_t t50 = 2599733LL;
uint16_t x220 = UINT16_MAX;
int32_t t53 = -817645959;
uint16_t x227 = 0U;
volatile uint8_t x228 = 1U;
int8_t x238 = INT8_MAX;
static int64_t x242 = -1LL;
uint32_t x244 = 454451975U;
int64_t x248 = -1LL;
int32_t t60 = 3056;
uint32_t x261 = 10U;
int64_t x264 = -1LL;
int8_t x274 = 0;
static volatile int16_t x277 = INT16_MIN;
int32_t x281 = INT32_MAX;
volatile int8_t x286 = INT8_MAX;
int32_t x289 = INT32_MIN;
int32_t x293 = -1;
int64_t x294 = 4LL;
int32_t t72 = -482062185;
int32_t t73 = -255;
int16_t x308 = -1;
volatile int32_t t74 = 1042757;
uint16_t x311 = 516U;
int64_t x321 = INT64_MIN;
int64_t x328 = -1LL;
static volatile int64_t t79 = -1LL;
int32_t t80 = 122;
int16_t x333 = 498;
uint8_t x336 = 36U;
volatile int32_t t81 = 27;
uint8_t x337 = 2U;
uint64_t x339 = 30648180LLU;
static int64_t x345 = INT64_MAX;
int64_t x355 = -1LL;
uint16_t x357 = 1U;
int32_t x358 = INT32_MIN;
uint64_t x359 = 15LLU;
static int8_t x364 = INT8_MIN;
static volatile int32_t t88 = 27;
int32_t t89 = -354;
uint16_t x372 = 2396U;
uint64_t x380 = 32521491843033763LLU;
static int16_t x381 = -5709;
volatile int64_t x382 = -137881030808347LL;
static int32_t t92 = 124824;
uint8_t x390 = 36U;
static uint8_t x397 = UINT8_MAX;
uint32_t x406 = 17U;
static volatile int32_t x409 = 7;


void f0(void) {
	int64_t x1 = -1LL;
	uint8_t x2 = UINT8_MAX;
	int8_t x4 = INT8_MAX;
	int32_t t0 = 63767;

	t0 = ((x1==(x2^x3))%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -3;
	volatile uint32_t x6 = UINT32_MAX;
	static uint32_t x7 = UINT32_MAX;
	static volatile int32_t t1 = 7316;

	t1 = ((x5==(x6^x7))%x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -2;
	uint64_t x10 = UINT64_MAX;
	int16_t x11 = 34;
	volatile int32_t t2 = 12680;

	t2 = ((x9==(x10^x11))%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MIN;
	uint8_t x19 = 1U;
	uint32_t x20 = 11242U;
	volatile uint32_t t3 = 14U;

	t3 = ((x17==(x18^x19))%x20);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x21 = INT32_MIN;
	int32_t x24 = INT32_MAX;
	int32_t t4 = -7;

	t4 = ((x21==(x22^x23))%x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x26 = -1;
	uint16_t x27 = 35U;
	volatile uint64_t t5 = 1387890550237158563LLU;

	t5 = ((x25==(x26^x27))%x28);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -1;
	int8_t x30 = 0;
	int32_t x31 = -393227387;
	uint64_t x32 = 367281693148271911LLU;
	volatile uint64_t t6 = 208815523LLU;

	t6 = ((x29==(x30^x31))%x32);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x33 = 33LL;
	static int8_t x35 = 0;
	int64_t x36 = INT64_MIN;
	static volatile int64_t t7 = 12828425679LL;

	t7 = ((x33==(x34^x35))%x36);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = INT32_MAX;
	static int8_t x40 = INT8_MIN;
	volatile int32_t t8 = -1168072;

	t8 = ((x37==(x38^x39))%x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MAX;
	static volatile uint16_t x44 = 1865U;

	t9 = ((x41==(x42^x43))%x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = 2;
	volatile int32_t x46 = -51003796;
	int32_t x47 = INT32_MAX;
	volatile int64_t t10 = 46689123476304875LL;

	t10 = ((x45==(x46^x47))%x48);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = INT64_MIN;
	int32_t x50 = -1;
	static int64_t x51 = -1LL;
	uint32_t x52 = 432403041U;
	volatile uint32_t t11 = 1U;

	t11 = ((x49==(x50^x51))%x52);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = -4;
	int16_t x54 = 2;
	int32_t x56 = -451;
	int32_t t12 = 1666903;

	t12 = ((x53==(x54^x55))%x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x57 = -14;
	uint64_t x58 = 7465150778256LLU;
	int16_t x59 = INT16_MAX;
	uint16_t x60 = UINT16_MAX;
	volatile int32_t t13 = -2007;

	t13 = ((x57==(x58^x59))%x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x61 = INT8_MAX;
	int32_t x62 = -1;
	static volatile int32_t t14 = -522667434;

	t14 = ((x61==(x62^x63))%x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x65 = INT64_MIN;
	int16_t x66 = INT16_MIN;
	int32_t x67 = INT32_MIN;
	static uint16_t x68 = UINT16_MAX;
	int32_t t15 = 554793;

	t15 = ((x65==(x66^x67))%x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x70 = 11375827;
	uint16_t x71 = 14U;
	int32_t t16 = -387;

	t16 = ((x69==(x70^x71))%x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x73 = INT8_MAX;
	int32_t x74 = 51;
	int16_t x76 = INT16_MIN;
	int32_t t17 = -12847180;

	t17 = ((x73==(x74^x75))%x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = INT64_MAX;
	int64_t x78 = INT64_MIN;
	volatile int16_t x79 = -1;
	volatile uint8_t x80 = UINT8_MAX;
	volatile int32_t t18 = -17717;

	t18 = ((x77==(x78^x79))%x80);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x81 = INT64_MIN;
	static volatile uint32_t x82 = 1U;
	volatile int32_t t19 = 57074256;

	t19 = ((x81==(x82^x83))%x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x85 = INT64_MIN;
	int16_t x86 = INT16_MIN;

	t20 = ((x85==(x86^x87))%x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = INT64_MAX;
	uint32_t x91 = 1142681U;
	int16_t x92 = INT16_MAX;

	t21 = ((x89==(x90^x91))%x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x94 = 1U;
	static volatile int8_t x96 = INT8_MIN;
	volatile int32_t t22 = -33;

	t22 = ((x93==(x94^x95))%x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x97 = 115U;
	volatile int32_t x98 = -1;
	volatile int32_t x99 = INT32_MIN;
	int32_t t23 = -700;

	t23 = ((x97==(x98^x99))%x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x101 = 26043U;
	int64_t x102 = INT64_MIN;
	int16_t x103 = -6757;
	static volatile int32_t t24 = -5371316;

	t24 = ((x101==(x102^x103))%x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x106 = 13350U;
	int8_t x107 = INT8_MAX;
	int32_t x108 = INT32_MIN;
	volatile int32_t t25 = -3531918;

	t25 = ((x105==(x106^x107))%x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = INT8_MIN;
	volatile uint8_t x110 = UINT8_MAX;
	volatile int64_t x111 = INT64_MIN;
	int64_t x112 = 9062565683495548LL;
	volatile int64_t t26 = 674116765LL;

	t26 = ((x109==(x110^x111))%x112);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = INT16_MAX;
	int32_t x114 = INT32_MAX;
	uint8_t x115 = 17U;
	int8_t x116 = INT8_MAX;
	volatile int32_t t27 = -927;

	t27 = ((x113==(x114^x115))%x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = 100724415398LL;
	int32_t x118 = INT32_MIN;
	int16_t x120 = 1;
	static int32_t t28 = 56;

	t28 = ((x117==(x118^x119))%x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x121 = INT32_MIN;
	int32_t x122 = 1;
	static int32_t x123 = INT32_MIN;
	int16_t x124 = INT16_MAX;
	int32_t t29 = -27047;

	t29 = ((x121==(x122^x123))%x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x125 = -5;
	int32_t x126 = -366982734;
	static volatile int64_t x127 = 948746823LL;
	uint64_t x128 = UINT64_MAX;

	t30 = ((x125==(x126^x127))%x128);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x130 = -1;
	int8_t x132 = -1;
	volatile int32_t t31 = -614;

	t31 = ((x129==(x130^x131))%x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = INT8_MIN;
	int64_t x134 = INT64_MIN;
	volatile int16_t x135 = INT16_MAX;
	int64_t t32 = 402LL;

	t32 = ((x133==(x134^x135))%x136);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = -1;
	uint64_t x138 = 7911080540926LLU;
	int8_t x140 = -1;
	static volatile int32_t t33 = 4441489;

	t33 = ((x137==(x138^x139))%x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x141 = INT16_MAX;
	int8_t x143 = INT8_MAX;
	int16_t x144 = -4124;
	volatile int32_t t34 = -2682808;

	t34 = ((x141==(x142^x143))%x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x145 = 63;
	int8_t x146 = INT8_MIN;
	static int16_t x147 = INT16_MIN;
	volatile int8_t x148 = INT8_MIN;
	volatile int32_t t35 = -1315;

	t35 = ((x145==(x146^x147))%x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x149 = 0;
	static int8_t x150 = INT8_MIN;
	uint8_t x151 = 11U;
	int32_t x152 = -1;
	volatile int32_t t36 = -537901;

	t36 = ((x149==(x150^x151))%x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x154 = -1;
	static volatile int64_t x155 = INT64_MAX;
	volatile int32_t x156 = -918836628;
	static int32_t t37 = 284527105;

	t37 = ((x153==(x154^x155))%x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x157 = INT64_MAX;
	int8_t x158 = INT8_MIN;
	int32_t x159 = 2851;
	uint64_t x160 = 54LLU;

	t38 = ((x157==(x158^x159))%x160);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x161 = 825U;
	volatile uint16_t x162 = 4071U;
	volatile uint32_t x163 = 1163477000U;
	int32_t x164 = INT32_MIN;
	volatile int32_t t39 = -303;

	t39 = ((x161==(x162^x163))%x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x165 = INT32_MAX;
	volatile int64_t x167 = INT64_MIN;
	volatile int32_t t40 = 131;

	t40 = ((x165==(x166^x167))%x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x170 = 21LLU;
	static int64_t x171 = INT64_MIN;
	static int64_t x172 = -14788157LL;
	volatile int64_t t41 = -53017595LL;

	t41 = ((x169==(x170^x171))%x172);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = INT32_MAX;
	int8_t x174 = -1;
	int64_t x175 = -472146LL;
	volatile uint64_t x176 = 802267252272138222LLU;
	static uint64_t t42 = 53069100390LLU;

	t42 = ((x173==(x174^x175))%x176);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x177 = 11U;
	int8_t x178 = INT8_MIN;
	uint64_t x179 = 2517471036827089670LLU;
	int64_t t43 = 22656951493711152LL;

	t43 = ((x177==(x178^x179))%x180);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x181 = -1LL;
	int64_t x182 = -1LL;
	volatile int32_t x183 = -1;
	static volatile int64_t t44 = 2122248LL;

	t44 = ((x181==(x182^x183))%x184);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x185 = UINT32_MAX;
	volatile int64_t x186 = -15487701078LL;
	int32_t x187 = -19647;
	static int16_t x188 = INT16_MIN;
	int32_t t45 = -8059906;

	t45 = ((x185==(x186^x187))%x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = -1;
	int32_t x191 = INT32_MIN;
	volatile int32_t t46 = 40;

	t46 = ((x189==(x190^x191))%x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = 8;
	uint32_t x194 = 411U;
	volatile int32_t x195 = -95;
	volatile uint16_t x196 = 25U;
	volatile int32_t t47 = 29990419;

	t47 = ((x193==(x194^x195))%x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x197 = UINT8_MAX;
	volatile int64_t x198 = 1783753483733LL;
	static volatile int32_t t48 = -42975;

	t48 = ((x197==(x198^x199))%x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint32_t x201 = UINT32_MAX;
	uint32_t x202 = UINT32_MAX;
	static uint16_t x203 = 11U;
	int32_t x204 = INT32_MAX;
	volatile int32_t t49 = -766;

	t49 = ((x201==(x202^x203))%x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x205 = INT16_MIN;
	uint16_t x207 = 9317U;
	int64_t x208 = -7709838LL;

	t50 = ((x205==(x206^x207))%x208);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x209 = UINT16_MAX;
	uint64_t x210 = UINT64_MAX;
	uint8_t x211 = 54U;
	int64_t x212 = INT64_MAX;
	int64_t t51 = 42716902203LL;

	t51 = ((x209==(x210^x211))%x212);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x217 = 1U;
	uint16_t x218 = UINT16_MAX;
	int32_t x219 = INT32_MIN;
	int32_t t52 = -1730161;

	t52 = ((x217==(x218^x219))%x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x221 = 27U;
	int64_t x222 = -97612522468LL;
	int32_t x223 = -1;
	static volatile int16_t x224 = INT16_MIN;

	t53 = ((x221==(x222^x223))%x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = INT32_MAX;
	int8_t x226 = INT8_MIN;
	int32_t t54 = -58593530;

	t54 = ((x225==(x226^x227))%x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x229 = 2U;
	volatile uint16_t x230 = 3552U;
	uint16_t x231 = UINT16_MAX;
	uint64_t x232 = 4041514394687811LLU;
	volatile uint64_t t55 = 1365399524466LLU;

	t55 = ((x229==(x230^x231))%x232);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x233 = -1LL;
	static int64_t x234 = INT64_MIN;
	uint16_t x235 = 3377U;
	int8_t x236 = -1;
	int32_t t56 = 7948;

	t56 = ((x233==(x234^x235))%x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = INT16_MAX;
	uint8_t x239 = 61U;
	uint64_t x240 = UINT64_MAX;
	static volatile uint64_t t57 = 12135142110563LLU;

	t57 = ((x237==(x238^x239))%x240);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x241 = -1;
	int16_t x243 = INT16_MIN;
	uint32_t t58 = 64U;

	t58 = ((x241==(x242^x243))%x244);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x245 = INT8_MIN;
	int16_t x246 = INT16_MIN;
	int8_t x247 = -1;
	static int64_t t59 = 416578125367019782LL;

	t59 = ((x245==(x246^x247))%x248);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x249 = -3;
	uint32_t x250 = 32U;
	uint64_t x251 = UINT64_MAX;
	volatile int32_t x252 = -1;

	t60 = ((x249==(x250^x251))%x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x253 = 138;
	int16_t x254 = -1;
	int64_t x255 = INT64_MIN;
	uint64_t x256 = UINT64_MAX;
	uint64_t t61 = 455268171145LLU;

	t61 = ((x253==(x254^x255))%x256);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x257 = 230666852LLU;
	volatile int16_t x258 = INT16_MIN;
	int32_t x259 = 89;
	static int16_t x260 = INT16_MIN;
	int32_t t62 = -82;

	t62 = ((x257==(x258^x259))%x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x262 = UINT64_MAX;
	int32_t x263 = INT32_MIN;
	int64_t t63 = -147545LL;

	t63 = ((x261==(x262^x263))%x264);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x265 = UINT64_MAX;
	volatile int16_t x266 = INT16_MIN;
	int16_t x267 = -1;
	static uint8_t x268 = UINT8_MAX;
	volatile int32_t t64 = 105;

	t64 = ((x265==(x266^x267))%x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x269 = -59;
	volatile int64_t x270 = INT64_MAX;
	volatile int8_t x271 = INT8_MIN;
	static int64_t x272 = INT64_MAX;
	int64_t t65 = 105LL;

	t65 = ((x269==(x270^x271))%x272);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x273 = 1U;
	uint16_t x275 = UINT16_MAX;
	uint64_t x276 = UINT64_MAX;
	uint64_t t66 = 1459462LLU;

	t66 = ((x273==(x274^x275))%x276);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x278 = 1802912012565LL;
	uint64_t x279 = 46998431788180782LLU;
	int16_t x280 = -1;
	int32_t t67 = 226;

	t67 = ((x277==(x278^x279))%x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x282 = INT64_MAX;
	volatile int8_t x283 = -1;
	int32_t x284 = INT32_MIN;
	int32_t t68 = -48900015;

	t68 = ((x281==(x282^x283))%x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = INT64_MIN;
	uint64_t x287 = 18563140100848LLU;
	volatile int8_t x288 = INT8_MAX;
	volatile int32_t t69 = 64;

	t69 = ((x285==(x286^x287))%x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x290 = INT64_MIN;
	int32_t x291 = INT32_MAX;
	volatile int32_t x292 = INT32_MIN;
	volatile int32_t t70 = 2;

	t70 = ((x289==(x290^x291))%x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x295 = 6LLU;
	volatile int64_t x296 = 103808075956020221LL;
	int64_t t71 = 1758063299LL;

	t71 = ((x293==(x294^x295))%x296);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x297 = -1LL;
	uint64_t x298 = 7LLU;
	int64_t x299 = INT64_MAX;
	int8_t x300 = INT8_MIN;

	t72 = ((x297==(x298^x299))%x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x301 = INT16_MIN;
	static int64_t x302 = INT64_MAX;
	static volatile uint16_t x303 = UINT16_MAX;
	int16_t x304 = INT16_MIN;

	t73 = ((x301==(x302^x303))%x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x305 = 5U;
	uint16_t x306 = 5U;
	static volatile int64_t x307 = INT64_MAX;

	t74 = ((x305==(x306^x307))%x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x309 = INT64_MAX;
	uint8_t x310 = 53U;
	volatile uint64_t x312 = UINT64_MAX;
	uint64_t t75 = 84971882365615LLU;

	t75 = ((x309==(x310^x311))%x312);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x313 = -1;
	static int64_t x314 = -1LL;
	volatile int64_t x315 = INT64_MAX;
	static uint64_t x316 = 775441LLU;
	static volatile uint64_t t76 = 15642685957511LLU;

	t76 = ((x313==(x314^x315))%x316);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x317 = -1;
	uint16_t x318 = UINT16_MAX;
	int8_t x319 = -1;
	volatile int16_t x320 = -1;
	static volatile int32_t t77 = -500;

	t77 = ((x317==(x318^x319))%x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x322 = -1;
	uint8_t x323 = 17U;
	int16_t x324 = INT16_MIN;
	volatile int32_t t78 = 59818557;

	t78 = ((x321==(x322^x323))%x324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x325 = INT32_MAX;
	uint8_t x326 = 24U;
	uint64_t x327 = UINT64_MAX;

	t79 = ((x325==(x326^x327))%x328);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x329 = 169LL;
	int32_t x330 = INT32_MIN;
	static uint64_t x331 = 25LLU;
	int16_t x332 = -1;

	t80 = ((x329==(x330^x331))%x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x334 = INT16_MAX;
	static int32_t x335 = -1;

	t81 = ((x333==(x334^x335))%x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x338 = INT32_MIN;
	uint64_t x340 = 1970908085LLU;
	uint64_t t82 = 57252403LLU;

	t82 = ((x337==(x338^x339))%x340);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x341 = 7254U;
	int8_t x342 = INT8_MIN;
	int32_t x343 = -1;
	static int16_t x344 = -1;
	volatile int32_t t83 = -32327;

	t83 = ((x341==(x342^x343))%x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x346 = -1;
	uint8_t x347 = UINT8_MAX;
	int16_t x348 = INT16_MAX;
	volatile int32_t t84 = 222494;

	t84 = ((x345==(x346^x347))%x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x349 = -1;
	int64_t x350 = INT64_MAX;
	static int64_t x351 = INT64_MAX;
	static uint8_t x352 = 1U;
	int32_t t85 = 471858;

	t85 = ((x349==(x350^x351))%x352);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x353 = -22;
	int16_t x354 = 8120;
	int64_t x356 = INT64_MIN;
	volatile int64_t t86 = -361089927188424193LL;

	t86 = ((x353==(x354^x355))%x356);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x360 = INT8_MIN;
	static int32_t t87 = 21777811;

	t87 = ((x357==(x358^x359))%x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x361 = 3U;
	volatile uint8_t x362 = 91U;
	int32_t x363 = -780875145;

	t88 = ((x361==(x362^x363))%x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x365 = 27U;
	volatile int64_t x366 = 17404933035617245LL;
	uint8_t x367 = 29U;
	int32_t x368 = -44838484;

	t89 = ((x365==(x366^x367))%x368);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x369 = UINT64_MAX;
	int16_t x370 = INT16_MAX;
	int32_t x371 = -862757765;
	static volatile int32_t t90 = 1;

	t90 = ((x369==(x370^x371))%x372);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x377 = 632056382950LLU;
	uint16_t x378 = UINT16_MAX;
	static uint32_t x379 = UINT32_MAX;
	volatile uint64_t t91 = 43287048LLU;

	t91 = ((x377==(x378^x379))%x380);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x383 = UINT8_MAX;
	volatile int16_t x384 = INT16_MIN;

	t92 = ((x381==(x382^x383))%x384);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x385 = 92U;
	static int32_t x386 = -1;
	uint8_t x387 = 6U;
	int32_t x388 = 117522;
	static volatile int32_t t93 = -12813522;

	t93 = ((x385==(x386^x387))%x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x389 = -1;
	uint32_t x391 = UINT32_MAX;
	volatile int32_t x392 = -8;
	int32_t t94 = -762;

	t94 = ((x389==(x390^x391))%x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x393 = 0U;
	int16_t x394 = INT16_MAX;
	static int64_t x395 = -1LL;
	uint32_t x396 = UINT32_MAX;
	volatile uint32_t t95 = 115181533U;

	t95 = ((x393==(x394^x395))%x396);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x398 = INT32_MAX;
	uint64_t x399 = 305704895LLU;
	static int16_t x400 = INT16_MAX;
	int32_t t96 = 118;

	t96 = ((x397==(x398^x399))%x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x401 = INT32_MIN;
	int32_t x402 = INT32_MAX;
	int8_t x403 = -1;
	uint8_t x404 = 3U;
	int32_t t97 = -600940622;

	t97 = ((x401==(x402^x403))%x404);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x405 = INT8_MAX;
	int64_t x407 = INT64_MIN;
	int64_t x408 = -13LL;
	volatile int64_t t98 = 0LL;

	t98 = ((x405==(x406^x407))%x408);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x410 = UINT16_MAX;
	int64_t x411 = -1LL;
	int64_t x412 = -272254027198LL;
	int64_t t99 = -125269LL;

	t99 = ((x409==(x410^x411))%x412);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

