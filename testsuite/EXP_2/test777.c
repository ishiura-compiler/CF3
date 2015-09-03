#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x1 = -58;
uint32_t x6 = UINT32_MAX;
volatile int32_t t1 = -29;
volatile int64_t x13 = -1LL;
uint32_t x19 = 1008452413U;
static int32_t x20 = -1;
uint8_t x27 = 105U;
static volatile int64_t x28 = INT64_MIN;
static int32_t t6 = -3;
int32_t x33 = INT32_MAX;
static uint32_t x35 = UINT32_MAX;
uint32_t x38 = 1261U;
int16_t x39 = INT16_MAX;
static volatile uint64_t x41 = 55684684720LLU;
int16_t x43 = 31;
static uint64_t x47 = 34902886733955LLU;
int32_t t11 = -353445;
int16_t x56 = INT16_MIN;
static int64_t x58 = -24937291003LL;
int8_t x59 = INT8_MAX;
int64_t x64 = -15799519LL;
int32_t x68 = INT32_MIN;
int16_t x78 = -3;
uint8_t x87 = UINT8_MAX;
volatile int8_t x89 = -1;
int32_t x91 = 486158;
uint8_t x92 = 4U;
int32_t x93 = INT32_MIN;
int8_t x99 = -1;
volatile int32_t t23 = -576169;
static int64_t x109 = -1LL;
int16_t x111 = INT16_MIN;
volatile int8_t x115 = 2;
uint8_t x121 = 0U;
int32_t x142 = 20018;
static int32_t x145 = INT32_MIN;
static int64_t x151 = INT64_MIN;
uint16_t x152 = UINT16_MAX;
int16_t x156 = -1;
volatile int32_t t37 = 3804719;
int8_t x167 = INT8_MAX;
uint32_t x168 = 9U;
static int32_t x170 = INT32_MIN;
int64_t x172 = -1LL;
volatile int8_t x173 = -1;
int16_t x182 = INT16_MIN;
int32_t x190 = INT32_MIN;
volatile int16_t x191 = -1;
int64_t x193 = 271004LL;
int8_t x194 = 1;
int32_t t46 = -5695;
volatile uint64_t x203 = UINT64_MAX;
static int32_t t48 = -3457885;
int32_t t49 = 46638;
static uint8_t x209 = UINT8_MAX;
uint32_t x210 = 3907U;
uint64_t x218 = UINT64_MAX;
uint16_t x219 = UINT16_MAX;
static int32_t x224 = INT32_MIN;
int32_t t53 = -15911959;
int8_t x235 = INT8_MAX;
uint16_t x236 = 725U;
uint8_t x242 = 4U;
uint32_t x247 = 214U;
uint8_t x250 = 12U;
uint16_t x257 = 21U;
uint8_t x260 = UINT8_MAX;
uint64_t x262 = 733062759181LLU;
static uint32_t x264 = 1325U;
volatile int16_t x274 = INT16_MIN;
int8_t x275 = -1;
int16_t x280 = INT16_MIN;
int64_t x290 = 1LL;
uint8_t x295 = UINT8_MAX;
uint8_t x298 = 1U;
uint64_t x301 = UINT64_MAX;
int32_t x303 = INT32_MIN;
volatile uint8_t x304 = 80U;
int16_t x305 = -1;
uint8_t x307 = 1U;
static int64_t x312 = INT64_MIN;
int32_t x316 = INT32_MIN;
int32_t x317 = INT32_MIN;
uint32_t x325 = 14934U;
int8_t x327 = INT8_MIN;
uint32_t x328 = UINT32_MAX;
volatile int32_t t78 = -15249708;
int8_t x329 = -1;
uint32_t x332 = UINT32_MAX;
volatile int64_t x333 = -428706LL;
volatile int8_t x335 = 2;
int8_t x336 = INT8_MAX;
int8_t x338 = INT8_MIN;
int32_t t81 = 64757391;
uint8_t x343 = 103U;
static volatile uint64_t x347 = 343LLU;
static int8_t x349 = -1;
int32_t t84 = -5468;
int8_t x358 = 0;
static uint64_t x359 = UINT64_MAX;
volatile int32_t x366 = INT32_MIN;
static volatile int32_t t88 = 3;
uint64_t x370 = UINT64_MAX;
uint64_t x372 = 5LLU;
volatile int32_t t92 = -119973;
volatile int16_t x390 = -7;
int64_t x393 = -82768LL;
uint16_t x398 = 120U;
static int8_t x404 = 0;
static uint16_t x405 = UINT16_MAX;
static volatile int32_t t98 = -242020;


void f0(void) {
	int8_t x2 = INT8_MIN;
	uint32_t x3 = UINT32_MAX;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = -6935294;

	t0 = ((x1==(x2%x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	volatile int16_t x7 = -26;
	static volatile int16_t x8 = INT16_MIN;

	t1 = ((x5==(x6%x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x9 = INT8_MAX;
	int16_t x10 = INT16_MIN;
	int32_t x11 = INT32_MIN;
	volatile int64_t x12 = INT64_MAX;
	volatile int32_t t2 = -45325233;

	t2 = ((x9==(x10%x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = INT8_MIN;
	int32_t x15 = INT32_MAX;
	static int16_t x16 = 1;
	int32_t t3 = -220800651;

	t3 = ((x13==(x14%x15))<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	volatile uint8_t x18 = 10U;
	volatile int32_t t4 = -48402;

	t4 = ((x17==(x18%x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	int32_t x22 = INT32_MIN;
	volatile uint16_t x23 = 74U;
	static int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 13;

	t5 = ((x21==(x22%x23))<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 97709579739LLU;
	int16_t x26 = 110;

	t6 = ((x25==(x26%x27))<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 28;
	int64_t x30 = -1LL;
	int8_t x31 = INT8_MAX;
	uint32_t x32 = 7779U;
	int32_t t7 = 1660;

	t7 = ((x29==(x30%x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x34 = 276922U;
	int8_t x36 = INT8_MIN;
	volatile int32_t t8 = -306;

	t8 = ((x33==(x34%x35))<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 17413U;
	uint8_t x40 = UINT8_MAX;
	int32_t t9 = -479870;

	t9 = ((x37==(x38%x39))<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = INT64_MIN;
	uint64_t x44 = 197029343267LLU;
	volatile int32_t t10 = -298870690;

	t10 = ((x41==(x42%x43))<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	static volatile int8_t x46 = 33;
	uint64_t x48 = UINT64_MAX;

	t11 = ((x45==(x46%x47))<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = INT64_MAX;
	uint16_t x50 = 6U;
	static volatile int8_t x51 = -1;
	static uint64_t x52 = 108301683947LLU;
	int32_t t12 = 1626279;

	t12 = ((x49==(x50%x51))<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1LL;
	volatile int16_t x54 = INT16_MIN;
	uint64_t x55 = UINT64_MAX;
	volatile int32_t t13 = -1;

	t13 = ((x53==(x54%x55))<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = INT64_MIN;
	volatile int8_t x60 = 50;
	volatile int32_t t14 = 546745;

	t14 = ((x57==(x58%x59))<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = UINT8_MAX;
	static volatile uint16_t x62 = 48U;
	int32_t x63 = -1;
	static volatile int32_t t15 = -2;

	t15 = ((x61==(x62%x63))<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	volatile uint16_t x66 = UINT16_MAX;
	volatile int16_t x67 = -1;
	int32_t t16 = -204652;

	t16 = ((x65==(x66%x67))<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = 52;
	int16_t x70 = INT16_MAX;
	static int64_t x71 = -500LL;
	uint8_t x72 = UINT8_MAX;
	volatile int32_t t17 = 7687454;

	t17 = ((x69==(x70%x71))<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 9U;
	volatile int8_t x74 = 5;
	static int32_t x75 = -95094;
	volatile int32_t x76 = -6;
	int32_t t18 = 998;

	t18 = ((x73==(x74%x75))<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 2U;
	volatile int64_t x79 = -62LL;
	static int32_t x80 = -1;
	volatile int32_t t19 = 11964;

	t19 = ((x77==(x78%x79))<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x85 = 7LLU;
	uint32_t x86 = UINT32_MAX;
	static uint16_t x88 = 16888U;
	int32_t t20 = 595;

	t20 = ((x85==(x86%x87))<=x88);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x90 = 11U;
	static int32_t t21 = 1199;

	t21 = ((x89==(x90%x91))<=x92);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x94 = INT32_MIN;
	int32_t x95 = INT32_MAX;
	volatile uint8_t x96 = UINT8_MAX;
	volatile int32_t t22 = 79914;

	t22 = ((x93==(x94%x95))<=x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint32_t x97 = 0U;
	uint8_t x98 = UINT8_MAX;
	volatile uint8_t x100 = 10U;

	t23 = ((x97==(x98%x99))<=x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x101 = 1667U;
	int64_t x102 = INT64_MIN;
	int32_t x103 = INT32_MIN;
	int16_t x104 = 76;
	volatile int32_t t24 = -27182;

	t24 = ((x101==(x102%x103))<=x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x105 = INT16_MIN;
	int8_t x106 = INT8_MIN;
	static uint64_t x107 = 1081089247078LLU;
	int32_t x108 = -1;
	static int32_t t25 = 26881137;

	t25 = ((x105==(x106%x107))<=x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x110 = INT32_MAX;
	static int8_t x112 = INT8_MAX;
	volatile int32_t t26 = -7;

	t26 = ((x109==(x110%x111))<=x112);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = INT64_MIN;
	volatile int8_t x114 = INT8_MIN;
	uint32_t x116 = 84049U;
	volatile int32_t t27 = -389120224;

	t27 = ((x113==(x114%x115))<=x116);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x117 = -1;
	uint32_t x118 = UINT32_MAX;
	int8_t x119 = INT8_MIN;
	int16_t x120 = -13;
	int32_t t28 = 2;

	t28 = ((x117==(x118%x119))<=x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x122 = -1;
	int32_t x123 = INT32_MIN;
	int64_t x124 = INT64_MIN;
	int32_t t29 = -1508733;

	t29 = ((x121==(x122%x123))<=x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = 13U;
	uint32_t x126 = UINT32_MAX;
	int64_t x127 = -1LL;
	int64_t x128 = INT64_MAX;
	int32_t t30 = -300141152;

	t30 = ((x125==(x126%x127))<=x128);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = -3;
	uint8_t x130 = 2U;
	static volatile uint64_t x131 = 46224075599799LLU;
	int32_t x132 = 14;
	volatile int32_t t31 = 849;

	t31 = ((x129==(x130%x131))<=x132);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = -16;
	int8_t x134 = -1;
	int32_t x135 = INT32_MIN;
	int64_t x136 = 285644166543280023LL;
	static int32_t t32 = 134336;

	t32 = ((x133==(x134%x135))<=x136);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x137 = 446U;
	int8_t x138 = INT8_MIN;
	static int16_t x139 = INT16_MIN;
	int64_t x140 = -1LL;
	static volatile int32_t t33 = 207;

	t33 = ((x137==(x138%x139))<=x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x141 = 3116U;
	static int64_t x143 = INT64_MIN;
	int64_t x144 = 670298693887654LL;
	volatile int32_t t34 = -2667437;

	t34 = ((x141==(x142%x143))<=x144);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x146 = 8563U;
	int64_t x147 = INT64_MIN;
	int16_t x148 = INT16_MIN;
	volatile int32_t t35 = 262;

	t35 = ((x145==(x146%x147))<=x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x149 = INT8_MIN;
	int8_t x150 = INT8_MAX;
	int32_t t36 = 206;

	t36 = ((x149==(x150%x151))<=x152);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = INT8_MAX;
	uint32_t x154 = 146U;
	int64_t x155 = -1602735754709538115LL;

	t37 = ((x153==(x154%x155))<=x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x157 = 335244564900876LL;
	int64_t x158 = 366590511878LL;
	static uint16_t x159 = 1U;
	int32_t x160 = 47169639;
	volatile int32_t t38 = -193217457;

	t38 = ((x157==(x158%x159))<=x160);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x165 = INT16_MIN;
	uint16_t x166 = 0U;
	static volatile int32_t t39 = 101187;

	t39 = ((x165==(x166%x167))<=x168);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x169 = UINT16_MAX;
	int64_t x171 = -936541875535259LL;
	int32_t t40 = 236320600;

	t40 = ((x169==(x170%x171))<=x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x174 = INT16_MIN;
	volatile int64_t x175 = 2504596LL;
	uint8_t x176 = UINT8_MAX;
	int32_t t41 = 461062118;

	t41 = ((x173==(x174%x175))<=x176);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = INT8_MIN;
	int32_t x178 = -219764567;
	uint32_t x179 = UINT32_MAX;
	int16_t x180 = INT16_MIN;
	volatile int32_t t42 = 251842;

	t42 = ((x177==(x178%x179))<=x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x181 = 6612U;
	int32_t x183 = -1;
	static volatile int32_t x184 = INT32_MIN;
	int32_t t43 = -719546944;

	t43 = ((x181==(x182%x183))<=x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = -1;
	int64_t x186 = 371LL;
	volatile int64_t x187 = INT64_MIN;
	uint64_t x188 = UINT64_MAX;
	int32_t t44 = 13272;

	t44 = ((x185==(x186%x187))<=x188);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x189 = UINT16_MAX;
	static volatile uint16_t x192 = 0U;
	volatile int32_t t45 = 19;

	t45 = ((x189==(x190%x191))<=x192);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x195 = 6764427;
	static uint32_t x196 = 99328873U;

	t46 = ((x193==(x194%x195))<=x196);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x197 = 162;
	int32_t x198 = 1;
	int64_t x199 = INT64_MIN;
	int64_t x200 = -1LL;
	int32_t t47 = 205198;

	t47 = ((x197==(x198%x199))<=x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x201 = 1768U;
	int64_t x202 = INT64_MIN;
	volatile uint64_t x204 = UINT64_MAX;

	t48 = ((x201==(x202%x203))<=x204);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x205 = 58297743LLU;
	int8_t x206 = -1;
	static int8_t x207 = -1;
	uint16_t x208 = 4U;

	t49 = ((x205==(x206%x207))<=x208);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x211 = INT32_MIN;
	int8_t x212 = INT8_MAX;
	int32_t t50 = -999615;

	t50 = ((x209==(x210%x211))<=x212);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x213 = 3730U;
	int16_t x214 = INT16_MIN;
	int16_t x215 = INT16_MAX;
	volatile int16_t x216 = INT16_MAX;
	volatile int32_t t51 = -4;

	t51 = ((x213==(x214%x215))<=x216);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x217 = UINT64_MAX;
	uint8_t x220 = 103U;
	static volatile int32_t t52 = -2;

	t52 = ((x217==(x218%x219))<=x220);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint8_t x221 = UINT8_MAX;
	int16_t x222 = INT16_MAX;
	int8_t x223 = -28;

	t53 = ((x221==(x222%x223))<=x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = -6432;
	volatile int64_t x226 = -1LL;
	volatile int8_t x227 = INT8_MAX;
	int64_t x228 = -11300586993126LL;
	static int32_t t54 = 5840;

	t54 = ((x225==(x226%x227))<=x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x229 = 14U;
	int16_t x230 = INT16_MIN;
	int32_t x231 = INT32_MIN;
	volatile int64_t x232 = -1LL;
	volatile int32_t t55 = 113477;

	t55 = ((x229==(x230%x231))<=x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x233 = UINT8_MAX;
	int64_t x234 = INT64_MIN;
	volatile int32_t t56 = -297408;

	t56 = ((x233==(x234%x235))<=x236);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = -1;
	volatile int8_t x238 = -1;
	volatile uint16_t x239 = 3U;
	static uint32_t x240 = 106U;
	int32_t t57 = 12582176;

	t57 = ((x237==(x238%x239))<=x240);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x241 = -1;
	int32_t x243 = INT32_MAX;
	static int64_t x244 = -1391034671783804LL;
	static int32_t t58 = 1;

	t58 = ((x241==(x242%x243))<=x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = -317;
	int64_t x246 = -1LL;
	int8_t x248 = INT8_MIN;
	static int32_t t59 = 200750;

	t59 = ((x245==(x246%x247))<=x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = INT64_MIN;
	uint16_t x251 = 462U;
	int32_t x252 = INT32_MAX;
	static int32_t t60 = 16519169;

	t60 = ((x249==(x250%x251))<=x252);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x253 = INT64_MIN;
	static uint8_t x254 = 0U;
	static volatile int8_t x255 = -7;
	static uint32_t x256 = UINT32_MAX;
	volatile int32_t t61 = 1351503;

	t61 = ((x253==(x254%x255))<=x256);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x258 = UINT8_MAX;
	uint32_t x259 = 94278U;
	int32_t t62 = -16545;

	t62 = ((x257==(x258%x259))<=x260);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x261 = -1;
	uint32_t x263 = 650424U;
	int32_t t63 = 802418;

	t63 = ((x261==(x262%x263))<=x264);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x269 = 116LLU;
	static int32_t x270 = -1;
	int32_t x271 = INT32_MAX;
	int8_t x272 = -1;
	volatile int32_t t64 = 24647027;

	t64 = ((x269==(x270%x271))<=x272);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x273 = 4U;
	int64_t x276 = -1LL;
	static int32_t t65 = 73982;

	t65 = ((x273==(x274%x275))<=x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x277 = 15018078U;
	int16_t x278 = -29;
	static volatile uint8_t x279 = 16U;
	static volatile int32_t t66 = -792;

	t66 = ((x277==(x278%x279))<=x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x281 = -1LL;
	volatile int16_t x282 = INT16_MAX;
	int16_t x283 = -1830;
	int32_t x284 = -3977;
	volatile int32_t t67 = 4748;

	t67 = ((x281==(x282%x283))<=x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x285 = INT64_MAX;
	uint32_t x286 = 6895906U;
	volatile int64_t x287 = INT64_MAX;
	volatile int8_t x288 = -1;
	int32_t t68 = -7;

	t68 = ((x285==(x286%x287))<=x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x289 = INT8_MAX;
	volatile int64_t x291 = 21854496290LL;
	static volatile uint64_t x292 = UINT64_MAX;
	volatile int32_t t69 = 0;

	t69 = ((x289==(x290%x291))<=x292);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x293 = INT8_MIN;
	int16_t x294 = -1;
	static int64_t x296 = -7122657LL;
	volatile int32_t t70 = -1;

	t70 = ((x293==(x294%x295))<=x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x297 = INT64_MIN;
	uint32_t x299 = 40907U;
	int64_t x300 = INT64_MAX;
	volatile int32_t t71 = -12;

	t71 = ((x297==(x298%x299))<=x300);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x302 = -1;
	static volatile int32_t t72 = -7180106;

	t72 = ((x301==(x302%x303))<=x304);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x306 = INT64_MIN;
	int64_t x308 = -8369LL;
	static volatile int32_t t73 = -164;

	t73 = ((x305==(x306%x307))<=x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x309 = INT64_MIN;
	int8_t x310 = INT8_MIN;
	static uint16_t x311 = UINT16_MAX;
	volatile int32_t t74 = -353;

	t74 = ((x309==(x310%x311))<=x312);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x313 = UINT64_MAX;
	int64_t x314 = INT64_MIN;
	uint64_t x315 = 128735LLU;
	volatile int32_t t75 = -540616;

	t75 = ((x313==(x314%x315))<=x316);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x318 = UINT16_MAX;
	int64_t x319 = INT64_MAX;
	static volatile int64_t x320 = -1LL;
	static int32_t t76 = -1776036;

	t76 = ((x317==(x318%x319))<=x320);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x321 = UINT32_MAX;
	volatile int64_t x322 = -1LL;
	static volatile int64_t x323 = 3038726743858LL;
	uint32_t x324 = 26806U;
	volatile int32_t t77 = 146415114;

	t77 = ((x321==(x322%x323))<=x324);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x326 = INT64_MIN;

	t78 = ((x325==(x326%x327))<=x328);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x330 = 50;
	static uint32_t x331 = UINT32_MAX;
	volatile int32_t t79 = 32;

	t79 = ((x329==(x330%x331))<=x332);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x334 = UINT16_MAX;
	int32_t t80 = -1611828;

	t80 = ((x333==(x334%x335))<=x336);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x337 = INT32_MIN;
	volatile int32_t x339 = INT32_MIN;
	int16_t x340 = 4218;

	t81 = ((x337==(x338%x339))<=x340);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x341 = 155299LL;
	volatile uint8_t x342 = 27U;
	volatile uint32_t x344 = 412164U;
	int32_t t82 = 1;

	t82 = ((x341==(x342%x343))<=x344);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x345 = 4446LL;
	uint8_t x346 = UINT8_MAX;
	uint16_t x348 = UINT16_MAX;
	int32_t t83 = 6315458;

	t83 = ((x345==(x346%x347))<=x348);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x350 = 68U;
	uint8_t x351 = 29U;
	static uint16_t x352 = 28167U;

	t84 = ((x349==(x350%x351))<=x352);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x353 = 82942985607529807LL;
	volatile int32_t x354 = INT32_MAX;
	int64_t x355 = INT64_MAX;
	uint8_t x356 = UINT8_MAX;
	volatile int32_t t85 = -6749608;

	t85 = ((x353==(x354%x355))<=x356);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x357 = 42U;
	volatile int32_t x360 = INT32_MAX;
	static volatile int32_t t86 = 11221632;

	t86 = ((x357==(x358%x359))<=x360);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x361 = UINT64_MAX;
	uint64_t x362 = 257338740LLU;
	static uint16_t x363 = 141U;
	static int32_t x364 = INT32_MIN;
	volatile int32_t t87 = 9943;

	t87 = ((x361==(x362%x363))<=x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x365 = 62699354;
	static volatile int64_t x367 = 20LL;
	int8_t x368 = INT8_MIN;

	t88 = ((x365==(x366%x367))<=x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x369 = INT16_MIN;
	uint16_t x371 = UINT16_MAX;
	volatile int32_t t89 = 961801726;

	t89 = ((x369==(x370%x371))<=x372);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x373 = 221;
	static volatile int16_t x374 = 484;
	int16_t x375 = INT16_MIN;
	uint8_t x376 = 0U;
	int32_t t90 = -10;

	t90 = ((x373==(x374%x375))<=x376);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x377 = 2U;
	uint16_t x378 = 230U;
	int16_t x379 = INT16_MIN;
	int32_t x380 = -1;
	int32_t t91 = 96;

	t91 = ((x377==(x378%x379))<=x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x381 = INT32_MIN;
	uint64_t x382 = 313815928LLU;
	int8_t x383 = INT8_MIN;
	int64_t x384 = -1LL;

	t92 = ((x381==(x382%x383))<=x384);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x385 = 1132;
	int64_t x386 = -1LL;
	volatile int16_t x387 = INT16_MIN;
	int16_t x388 = INT16_MIN;
	volatile int32_t t93 = -1;

	t93 = ((x385==(x386%x387))<=x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x389 = 19;
	volatile uint32_t x391 = 81572U;
	static int64_t x392 = -70465LL;
	int32_t t94 = -58935;

	t94 = ((x389==(x390%x391))<=x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x394 = 1954U;
	int32_t x395 = -1;
	volatile int64_t x396 = INT64_MIN;
	int32_t t95 = 2198295;

	t95 = ((x393==(x394%x395))<=x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x397 = 8U;
	int16_t x399 = INT16_MIN;
	int16_t x400 = INT16_MAX;
	int32_t t96 = -396975053;

	t96 = ((x397==(x398%x399))<=x400);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x401 = INT16_MIN;
	int16_t x402 = -1;
	int16_t x403 = INT16_MIN;
	volatile int32_t t97 = 17439;

	t97 = ((x401==(x402%x403))<=x404);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x406 = -116;
	volatile int16_t x407 = -1;
	static int8_t x408 = INT8_MAX;

	t98 = ((x405==(x406%x407))<=x408);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x409 = 0U;
	int16_t x410 = -11;
	static int8_t x411 = -1;
	int64_t x412 = INT64_MAX;
	volatile int32_t t99 = -3508485;

	t99 = ((x409==(x410%x411))<=x412);

	if (t99 != 1) { NG(); } else { ; }
	
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

