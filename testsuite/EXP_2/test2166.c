#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = INT16_MAX;
static int64_t x10 = 1041501898981LL;
volatile uint64_t x19 = 1497582633658LLU;
int16_t x21 = INT16_MAX;
uint32_t x22 = 10430U;
int64_t x25 = INT64_MIN;
volatile int32_t t6 = -56;
int8_t x34 = -44;
volatile int32_t x41 = -1;
volatile int64_t x44 = -1LL;
uint32_t x46 = 7804252U;
volatile int32_t t12 = -406;
int32_t t13 = -1481;
volatile uint16_t x59 = 31649U;
static volatile uint32_t x61 = 185258U;
static volatile int32_t t17 = -10583159;
volatile int16_t x79 = INT16_MAX;
volatile int16_t x80 = INT16_MAX;
int32_t t19 = 9261969;
volatile int64_t x83 = -1LL;
int32_t x84 = 2597755;
volatile int64_t x85 = INT64_MAX;
uint32_t x86 = UINT32_MAX;
volatile int16_t x90 = -8112;
static int16_t x92 = INT16_MAX;
int64_t x100 = INT64_MIN;
uint16_t x101 = 117U;
int32_t t25 = -2789;
static int8_t x105 = -1;
static uint16_t x107 = 169U;
volatile int32_t t26 = -6;
int32_t x109 = INT32_MAX;
int64_t x112 = -1LL;
static int32_t t27 = -855;
volatile int32_t t31 = 408916387;
static int32_t x130 = INT32_MIN;
static volatile int32_t t34 = 133145;
int64_t x149 = -2784519573104LL;
static int16_t x150 = INT16_MIN;
static uint16_t x151 = 0U;
static int8_t x153 = INT8_MAX;
uint64_t x154 = 464554217072536LLU;
static volatile int8_t x157 = INT8_MIN;
static volatile int32_t x159 = 0;
uint16_t x160 = 6363U;
static volatile uint8_t x170 = UINT8_MAX;
int32_t x180 = 200;
volatile uint32_t x184 = 1U;
int32_t x187 = 1;
static int16_t x189 = INT16_MAX;
int64_t x190 = -1LL;
int8_t x192 = -34;
int16_t x193 = -613;
volatile int32_t x194 = INT32_MIN;
int16_t x197 = INT16_MIN;
uint64_t x204 = UINT64_MAX;
uint8_t x205 = 18U;
static volatile int32_t t53 = 840637;
int8_t x217 = 1;
static int64_t x221 = INT64_MIN;
volatile int32_t t55 = -232331158;
static uint16_t x229 = 2800U;
volatile int32_t t57 = -13144;
int16_t x237 = 4275;
int32_t t59 = 72;
int32_t x241 = INT32_MIN;
int64_t x243 = INT64_MIN;
static volatile int64_t x246 = INT64_MIN;
static volatile int32_t x247 = INT32_MAX;
static uint8_t x250 = 4U;
int16_t x253 = -1;
int64_t x258 = -1LL;
volatile int16_t x271 = -3;
int32_t t67 = -17;
int32_t t68 = -471439040;
volatile int32_t t69 = 3749939;
int8_t x283 = 0;
static int32_t t70 = 1107;
int64_t x294 = 2265LL;
int32_t x298 = -1;
volatile int32_t t74 = -913730;
uint64_t x303 = UINT64_MAX;
int32_t x305 = INT32_MAX;
uint8_t x318 = 30U;
static int16_t x319 = INT16_MIN;
int8_t x321 = -1;
int16_t x322 = -1;
int8_t x333 = -1;
volatile int16_t x334 = INT16_MIN;
int8_t x335 = INT8_MAX;
int8_t x338 = INT8_MIN;
int32_t x341 = INT32_MIN;
int32_t t87 = -864;
static uint32_t x353 = UINT32_MAX;
int32_t x356 = -1;
volatile int8_t x358 = -1;
volatile uint64_t x360 = 1785484580259LLU;
uint32_t x364 = UINT32_MAX;
uint64_t x372 = UINT64_MAX;
int8_t x373 = -1;
volatile int32_t t93 = 0;
static int64_t x380 = -1LL;
int32_t t94 = 2012296;
static uint64_t x384 = UINT64_MAX;
volatile int8_t x393 = INT8_MIN;
static int8_t x399 = -1;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int8_t x2 = -1;
	int64_t x3 = INT64_MIN;
	uint64_t x4 = 0LLU;
	static volatile int32_t t0 = -339944;

	t0 = ((x1&(x2^x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 1U;
	int16_t x6 = INT16_MIN;
	int8_t x8 = INT8_MIN;
	int32_t t1 = -1;

	t1 = ((x5&(x6^x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int8_t x11 = -15;
	int64_t x12 = -6216811709LL;
	static volatile int32_t t2 = 28;

	t2 = ((x9&(x10^x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 32140455U;
	int8_t x14 = INT8_MIN;
	uint64_t x15 = 14008405394LLU;
	uint32_t x16 = UINT32_MAX;
	static int32_t t3 = -1001;

	t3 = ((x13&(x14^x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = 1537006754LLU;
	int8_t x18 = INT8_MAX;
	int64_t x20 = INT64_MIN;
	int32_t t4 = -166661;

	t4 = ((x17&(x18^x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x23 = INT64_MAX;
	uint64_t x24 = 176LLU;
	static volatile int32_t t5 = 795711;

	t5 = ((x21&(x22^x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x26 = UINT64_MAX;
	uint64_t x27 = 29LLU;
	static volatile uint8_t x28 = UINT8_MAX;

	t6 = ((x25&(x26^x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint32_t x29 = 21U;
	static uint32_t x30 = UINT32_MAX;
	int64_t x31 = -1LL;
	uint16_t x32 = 1215U;
	int32_t t7 = -223216922;

	t7 = ((x29&(x30^x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	static uint16_t x35 = 136U;
	int64_t x36 = -6LL;
	volatile int32_t t8 = -894279538;

	t8 = ((x33&(x34^x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = INT8_MIN;
	volatile int8_t x38 = -7;
	uint16_t x39 = UINT16_MAX;
	int8_t x40 = INT8_MIN;
	int32_t t9 = 5941;

	t9 = ((x37&(x38^x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x42 = 381455;
	int8_t x43 = INT8_MAX;
	int32_t t10 = -12399310;

	t10 = ((x41&(x42^x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = 10;
	int16_t x47 = 1;
	static uint8_t x48 = 14U;
	int32_t t11 = 508;

	t11 = ((x45&(x46^x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	volatile int32_t x50 = INT32_MIN;
	int16_t x51 = INT16_MAX;
	uint32_t x52 = 12985062U;

	t12 = ((x49&(x50^x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 12;
	int64_t x54 = 3783LL;
	int8_t x55 = INT8_MIN;
	volatile int8_t x56 = 61;

	t13 = ((x53&(x54^x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x57 = 3LLU;
	uint64_t x58 = 641LLU;
	int8_t x60 = 12;
	volatile int32_t t14 = -217;

	t14 = ((x57&(x58^x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x62 = -1LL;
	volatile int16_t x63 = INT16_MIN;
	static int32_t x64 = -48347;
	volatile int32_t t15 = -73;

	t15 = ((x61&(x62^x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 579490602U;
	int16_t x66 = INT16_MAX;
	volatile uint64_t x67 = 1362567837LLU;
	volatile uint16_t x68 = 31256U;
	volatile int32_t t16 = 388;

	t16 = ((x65&(x66^x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = 1;
	int16_t x70 = INT16_MIN;
	uint64_t x71 = 13LLU;
	int8_t x72 = -6;

	t17 = ((x69&(x70^x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = -1310900;
	int16_t x74 = INT16_MIN;
	static uint8_t x75 = UINT8_MAX;
	int8_t x76 = INT8_MAX;
	volatile int32_t t18 = 15983985;

	t18 = ((x73&(x74^x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = INT8_MIN;
	static volatile int16_t x78 = INT16_MIN;

	t19 = ((x77&(x78^x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x81 = 128211166U;
	int32_t x82 = INT32_MIN;
	int32_t t20 = -275;

	t20 = ((x81&(x82^x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x87 = -30422LL;
	volatile uint32_t x88 = 323339031U;
	int32_t t21 = 7360;

	t21 = ((x85&(x86^x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x89 = 259U;
	uint64_t x91 = 30151107LLU;
	int32_t t22 = 48070501;

	t22 = ((x89&(x90^x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MAX;
	uint8_t x94 = 3U;
	uint8_t x95 = 1U;
	int32_t x96 = INT32_MIN;
	volatile int32_t t23 = 34283;

	t23 = ((x93&(x94^x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -14;
	static int8_t x98 = INT8_MAX;
	uint8_t x99 = 7U;
	int32_t t24 = -715425912;

	t24 = ((x97&(x98^x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x102 = INT64_MAX;
	uint16_t x103 = 328U;
	int32_t x104 = 1;

	t25 = ((x101&(x102^x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x106 = 158U;
	uint32_t x108 = 139426211U;

	t26 = ((x105&(x106^x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x110 = INT8_MAX;
	uint64_t x111 = UINT64_MAX;

	t27 = ((x109&(x110^x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x113 = INT64_MIN;
	int16_t x114 = 32;
	int16_t x115 = -1;
	int64_t x116 = -5084698494190LL;
	volatile int32_t t28 = -113306;

	t28 = ((x113&(x114^x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -2930LL;
	uint32_t x118 = 0U;
	int64_t x119 = 15740522639926LL;
	volatile int32_t x120 = -52;
	int32_t t29 = 243;

	t29 = ((x117&(x118^x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = -1;
	uint64_t x122 = 0LLU;
	static int32_t x123 = INT32_MAX;
	uint32_t x124 = 800240U;
	static int32_t t30 = -11675;

	t30 = ((x121&(x122^x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x125 = UINT8_MAX;
	uint16_t x126 = 245U;
	int8_t x127 = INT8_MIN;
	int64_t x128 = INT64_MIN;

	t31 = ((x125&(x126^x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MAX;
	int8_t x131 = INT8_MIN;
	volatile int32_t x132 = INT32_MAX;
	int32_t t32 = -101425;

	t32 = ((x129&(x130^x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	uint8_t x134 = UINT8_MAX;
	int16_t x135 = 13418;
	int32_t x136 = INT32_MAX;
	volatile int32_t t33 = 6996;

	t33 = ((x133&(x134^x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	uint16_t x138 = UINT16_MAX;
	static int8_t x139 = INT8_MIN;
	int64_t x140 = INT64_MIN;

	t34 = ((x137&(x138^x139))==x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = INT8_MIN;
	volatile int16_t x142 = 120;
	int32_t x143 = -177275741;
	volatile int32_t x144 = 16048;
	static volatile int32_t t35 = -1389;

	t35 = ((x141&(x142^x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	static int64_t x146 = -7272699433932809LL;
	int64_t x147 = INT64_MAX;
	int16_t x148 = INT16_MAX;
	static volatile int32_t t36 = 678392;

	t36 = ((x145&(x146^x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x152 = -1;
	int32_t t37 = -939;

	t37 = ((x149&(x150^x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x155 = 3;
	int64_t x156 = 1LL;
	volatile int32_t t38 = -3;

	t38 = ((x153&(x154^x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x158 = INT16_MAX;
	volatile int32_t t39 = 7621;

	t39 = ((x157&(x158^x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = UINT8_MAX;
	uint32_t x162 = 563U;
	static uint16_t x163 = 7U;
	static int64_t x164 = INT64_MIN;
	int32_t t40 = -7;

	t40 = ((x161&(x162^x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = INT8_MIN;
	uint8_t x166 = UINT8_MAX;
	uint64_t x167 = 3007327LLU;
	volatile uint16_t x168 = 7U;
	int32_t t41 = 53240800;

	t41 = ((x165&(x166^x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	int64_t x171 = INT64_MIN;
	volatile int8_t x172 = 22;
	static volatile int32_t t42 = 956;

	t42 = ((x169&(x170^x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 21;
	volatile uint16_t x174 = UINT16_MAX;
	volatile uint64_t x175 = UINT64_MAX;
	int64_t x176 = 6386LL;
	volatile int32_t t43 = -25974662;

	t43 = ((x173&(x174^x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MAX;
	static int8_t x178 = INT8_MAX;
	int32_t x179 = INT32_MIN;
	volatile int32_t t44 = -1782023;

	t44 = ((x177&(x178^x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = 0;
	int8_t x182 = -5;
	int8_t x183 = 3;
	volatile int32_t t45 = 0;

	t45 = ((x181&(x182^x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = UINT8_MAX;
	int8_t x186 = -1;
	volatile uint64_t x188 = UINT64_MAX;
	volatile int32_t t46 = -606;

	t46 = ((x185&(x186^x187))==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x191 = 3935U;
	volatile int32_t t47 = -718655840;

	t47 = ((x189&(x190^x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x195 = INT16_MAX;
	uint8_t x196 = UINT8_MAX;
	int32_t t48 = 73;

	t48 = ((x193&(x194^x195))==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x198 = INT16_MIN;
	volatile uint64_t x199 = 26195287454654024LLU;
	int16_t x200 = 50;
	int32_t t49 = 140646666;

	t49 = ((x197&(x198^x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x201 = -1;
	static uint64_t x202 = 16830LLU;
	uint8_t x203 = 1U;
	int32_t t50 = -9849957;

	t50 = ((x201&(x202^x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x206 = UINT16_MAX;
	uint16_t x207 = 4216U;
	volatile uint32_t x208 = UINT32_MAX;
	static volatile int32_t t51 = 3;

	t51 = ((x205&(x206^x207))==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = INT16_MIN;
	uint64_t x210 = UINT64_MAX;
	int64_t x211 = -9787353420419320LL;
	int16_t x212 = 15;
	int32_t t52 = 2383;

	t52 = ((x209&(x210^x211))==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = UINT64_MAX;
	int32_t x214 = -1;
	volatile uint32_t x215 = 352087868U;
	int32_t x216 = INT32_MIN;

	t53 = ((x213&(x214^x215))==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x218 = 7412U;
	uint32_t x219 = 1509373483U;
	int16_t x220 = -1;
	volatile int32_t t54 = -16;

	t54 = ((x217&(x218^x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x222 = 1;
	uint32_t x223 = 0U;
	int64_t x224 = -1LL;

	t55 = ((x221&(x222^x223))==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = INT16_MIN;
	volatile int8_t x226 = -1;
	volatile uint8_t x227 = 3U;
	static int32_t x228 = INT32_MIN;
	int32_t t56 = -29;

	t56 = ((x225&(x226^x227))==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x230 = INT16_MIN;
	uint16_t x231 = 8992U;
	static int16_t x232 = -1;

	t57 = ((x229&(x230^x231))==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MIN;
	volatile int64_t x234 = -1LL;
	volatile int64_t x235 = INT64_MIN;
	int32_t x236 = INT32_MIN;
	volatile int32_t t58 = 2;

	t58 = ((x233&(x234^x235))==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x238 = -1;
	volatile uint32_t x239 = UINT32_MAX;
	uint16_t x240 = 2693U;

	t59 = ((x237&(x238^x239))==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x242 = -1LL;
	int32_t x244 = INT32_MIN;
	volatile int32_t t60 = -1;

	t60 = ((x241&(x242^x243))==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MIN;
	uint8_t x248 = 0U;
	volatile int32_t t61 = -3;

	t61 = ((x245&(x246^x247))==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 59U;
	static int32_t x251 = -1;
	int64_t x252 = -1LL;
	static int32_t t62 = -14975478;

	t62 = ((x249&(x250^x251))==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x254 = 977817372;
	int64_t x255 = INT64_MIN;
	volatile uint32_t x256 = UINT32_MAX;
	int32_t t63 = 1;

	t63 = ((x253&(x254^x255))==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x257 = INT8_MIN;
	uint32_t x259 = 384U;
	static int32_t x260 = -63309;
	volatile int32_t t64 = -2;

	t64 = ((x257&(x258^x259))==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = 1;
	uint32_t x262 = 167918U;
	int32_t x263 = INT32_MIN;
	int32_t x264 = INT32_MIN;
	int32_t t65 = 3648177;

	t65 = ((x261&(x262^x263))==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x265 = INT64_MIN;
	static int16_t x266 = -1;
	uint32_t x267 = UINT32_MAX;
	uint32_t x268 = 224551U;
	static volatile int32_t t66 = -7977628;

	t66 = ((x265&(x266^x267))==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 496918433LLU;
	uint64_t x270 = 798536LLU;
	int64_t x272 = INT64_MIN;

	t67 = ((x269&(x270^x271))==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 8837263U;
	int8_t x274 = INT8_MIN;
	int8_t x275 = 2;
	static int64_t x276 = INT64_MIN;

	t68 = ((x273&(x274^x275))==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = 24U;
	uint16_t x278 = 2670U;
	static int64_t x279 = INT64_MAX;
	int16_t x280 = -1;

	t69 = ((x277&(x278^x279))==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MIN;
	int8_t x282 = 1;
	int8_t x284 = -1;

	t70 = ((x281&(x282^x283))==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = 1313LL;
	int32_t x286 = -1;
	int64_t x287 = INT64_MAX;
	int8_t x288 = -1;
	int32_t t71 = 21085;

	t71 = ((x285&(x286^x287))==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x289 = 6;
	volatile int64_t x290 = -1LL;
	uint8_t x291 = 3U;
	int8_t x292 = INT8_MIN;
	volatile int32_t t72 = 23059292;

	t72 = ((x289&(x290^x291))==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 1629U;
	int64_t x295 = INT64_MAX;
	static int16_t x296 = -1;
	static int32_t t73 = -1757240;

	t73 = ((x293&(x294^x295))==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x297 = INT64_MIN;
	int16_t x299 = INT16_MIN;
	uint64_t x300 = UINT64_MAX;

	t74 = ((x297&(x298^x299))==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = -20952150743239LL;
	static volatile uint8_t x302 = 23U;
	volatile int64_t x304 = 1LL;
	volatile int32_t t75 = 1;

	t75 = ((x301&(x302^x303))==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = -58;
	int16_t x307 = 4;
	uint16_t x308 = UINT16_MAX;
	int32_t t76 = 133365142;

	t76 = ((x305&(x306^x307))==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MAX;
	int8_t x310 = INT8_MIN;
	int32_t x311 = -243;
	uint32_t x312 = 936968U;
	volatile int32_t t77 = 172;

	t77 = ((x309&(x310^x311))==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	int32_t x314 = 59203;
	int32_t x315 = INT32_MAX;
	int64_t x316 = INT64_MIN;
	int32_t t78 = 217;

	t78 = ((x313&(x314^x315))==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = UINT8_MAX;
	int8_t x320 = INT8_MIN;
	volatile int32_t t79 = -1515678;

	t79 = ((x317&(x318^x319))==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x323 = -1;
	int64_t x324 = INT64_MIN;
	static int32_t t80 = -168526440;

	t80 = ((x321&(x322^x323))==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 3476LLU;
	uint16_t x326 = UINT16_MAX;
	volatile uint64_t x327 = 1273961905317373543LLU;
	volatile int64_t x328 = 501551626LL;
	int32_t t81 = -3;

	t81 = ((x325&(x326^x327))==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -1;
	uint16_t x330 = 1941U;
	int16_t x331 = -1;
	volatile uint64_t x332 = 170711643800LLU;
	volatile int32_t t82 = 795;

	t82 = ((x329&(x330^x331))==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x336 = 7LLU;
	static volatile int32_t t83 = 2;

	t83 = ((x333&(x334^x335))==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MIN;
	int8_t x339 = -1;
	static volatile int16_t x340 = -110;
	volatile int32_t t84 = 21850;

	t84 = ((x337&(x338^x339))==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x342 = INT8_MIN;
	volatile int16_t x343 = 2;
	static int8_t x344 = INT8_MIN;
	int32_t t85 = 421;

	t85 = ((x341&(x342^x343))==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x345 = -15LL;
	volatile int32_t x346 = -1;
	int32_t x347 = -1;
	static volatile int64_t x348 = -1LL;
	static volatile int32_t t86 = 0;

	t86 = ((x345&(x346^x347))==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1LL;
	int32_t x350 = -440170;
	int64_t x351 = INT64_MIN;
	volatile int8_t x352 = -1;

	t87 = ((x349&(x350^x351))==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x354 = -1LL;
	uint16_t x355 = UINT16_MAX;
	volatile int32_t t88 = -112652061;

	t88 = ((x353&(x354^x355))==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x357 = 23825066814LLU;
	volatile int8_t x359 = INT8_MAX;
	volatile int32_t t89 = 19198;

	t89 = ((x357&(x358^x359))==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = UINT64_MAX;
	int32_t x362 = 1486;
	int64_t x363 = INT64_MIN;
	volatile int32_t t90 = -2;

	t90 = ((x361&(x362^x363))==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	int16_t x366 = -19;
	static volatile uint8_t x367 = 7U;
	int16_t x368 = INT16_MIN;
	static volatile int32_t t91 = 1;

	t91 = ((x365&(x366^x367))==x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -5272655082203826LL;
	static volatile uint8_t x370 = 9U;
	int32_t x371 = INT32_MIN;
	static int32_t t92 = 998;

	t92 = ((x369&(x370^x371))==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x374 = -1;
	volatile int32_t x375 = -6202;
	int16_t x376 = -1;

	t93 = ((x373&(x374^x375))==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	static int16_t x378 = INT16_MIN;
	uint8_t x379 = 12U;

	t94 = ((x377&(x378^x379))==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x381 = 95;
	int8_t x382 = INT8_MIN;
	static int64_t x383 = INT64_MIN;
	static int32_t t95 = -24;

	t95 = ((x381&(x382^x383))==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MAX;
	int16_t x386 = INT16_MAX;
	int32_t x387 = INT32_MAX;
	static uint64_t x388 = 464301679457LLU;
	volatile int32_t t96 = -44600;

	t96 = ((x385&(x386^x387))==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = UINT8_MAX;
	static int16_t x390 = 5350;
	uint64_t x391 = 271409098702022227LLU;
	volatile int8_t x392 = INT8_MAX;
	static volatile int32_t t97 = 9045826;

	t97 = ((x389&(x390^x391))==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x394 = UINT8_MAX;
	volatile uint32_t x395 = 4U;
	int8_t x396 = 2;
	volatile int32_t t98 = 55520;

	t98 = ((x393&(x394^x395))==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = 2U;
	uint8_t x398 = 3U;
	uint16_t x400 = 2027U;
	int32_t t99 = -4920240;

	t99 = ((x397&(x398^x399))==x400);

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

