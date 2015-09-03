#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = INT32_MIN;
uint8_t x3 = UINT8_MAX;
int8_t x6 = 9;
int32_t x8 = 0;
uint8_t x10 = 23U;
uint8_t x15 = 7U;
int32_t x16 = 5055;
int32_t x17 = -907;
uint8_t x25 = 28U;
static int32_t t6 = 0;
int16_t x29 = INT16_MIN;
int8_t x40 = -1;
uint32_t x58 = 0U;
static uint16_t x61 = 15083U;
int16_t x62 = -1;
int32_t t18 = 7075503;
int32_t t19 = 3;
int32_t x84 = INT32_MIN;
int32_t t20 = 939632;
static int32_t x91 = INT32_MIN;
int32_t x92 = INT32_MIN;
int32_t t22 = -1821;
int64_t x98 = INT64_MIN;
static int8_t x104 = INT8_MAX;
int32_t t25 = 1;
int8_t x111 = INT8_MIN;
int32_t t27 = -784;
int8_t x119 = -57;
volatile int32_t t29 = -106293789;
int32_t x122 = -1;
uint8_t x126 = UINT8_MAX;
volatile int8_t x127 = INT8_MAX;
volatile uint32_t x129 = UINT32_MAX;
int8_t x133 = 4;
uint32_t x136 = 331273U;
static int32_t x137 = 9;
int8_t x139 = -1;
int8_t x145 = -1;
uint32_t x146 = 5487461U;
int32_t x150 = -47;
volatile int64_t x152 = -1LL;
static uint32_t x153 = 5U;
uint64_t x156 = 8LLU;
volatile int32_t t39 = -6;
static volatile int32_t t40 = 107;
volatile int8_t x167 = -2;
static volatile int32_t t42 = 1596;
int8_t x174 = INT8_MIN;
volatile uint32_t x181 = 10U;
int32_t x189 = INT32_MIN;
static int16_t x195 = -1;
volatile int32_t t49 = 85821600;
static uint64_t x201 = 1586996LLU;
static volatile int32_t t51 = 383326;
static uint8_t x211 = UINT8_MAX;
uint64_t x214 = 5LLU;
uint64_t x221 = 57957LLU;
static int32_t t55 = 2386;
volatile int64_t x236 = INT64_MAX;
volatile int32_t t58 = -2623;
uint32_t x239 = 824462U;
static volatile uint8_t x240 = UINT8_MAX;
volatile int32_t t59 = -89441;
volatile int32_t t60 = 197537;
int16_t x247 = INT16_MIN;
volatile int32_t t62 = -904;
static volatile uint8_t x253 = 12U;
int8_t x254 = 26;
uint64_t x255 = 95507LLU;
volatile int32_t x258 = INT32_MAX;
static volatile uint64_t x262 = 20304LLU;
int32_t t66 = 104;
uint32_t x270 = UINT32_MAX;
volatile int32_t t68 = -120;
int32_t t69 = 38708830;
volatile uint64_t x289 = 124501149635644066LLU;
int16_t x294 = -45;
static uint64_t x295 = 5949589415LLU;
uint16_t x299 = 75U;
int64_t x300 = -1LL;
int16_t x301 = INT16_MIN;
volatile int32_t x303 = 189605;
int32_t x316 = -24;
int32_t x321 = INT32_MIN;
static volatile int16_t x323 = INT16_MAX;
int32_t x331 = INT32_MIN;
int32_t t84 = 51;
volatile int32_t x343 = -1;
volatile int32_t t85 = 127;
static int8_t x349 = INT8_MIN;
static volatile int32_t t87 = 1;
uint8_t x355 = 0U;
int16_t x359 = INT16_MIN;
volatile int32_t t90 = 991028;
int16_t x372 = INT16_MIN;
static uint16_t x375 = 1487U;
int32_t t93 = -1;
int64_t x378 = 35166754866881127LL;
static int64_t x380 = 10598113088LL;
int8_t x381 = -1;
int32_t x382 = 21;
int64_t x383 = -1879LL;
uint64_t x384 = 82347805174393077LLU;
uint8_t x387 = 41U;
int32_t x388 = -430;
int32_t x390 = INT32_MIN;
volatile uint16_t x393 = UINT16_MAX;
volatile uint32_t x396 = 1957184U;
int8_t x397 = INT8_MIN;


void f0(void) {
	static int16_t x2 = -1;
	int8_t x4 = INT8_MIN;
	int32_t t0 = -7448;

	t0 = (x1<=((x2|x3)^x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 1;
	int32_t x7 = 58722834;
	static int32_t t1 = 0;

	t1 = (x5<=((x6|x7)^x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	int32_t x11 = INT32_MAX;
	static int8_t x12 = INT8_MAX;
	int32_t t2 = 1;

	t2 = (x9<=((x10|x11)^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	uint8_t x14 = 10U;
	static int32_t t3 = 69;

	t3 = (x13<=((x14|x15)^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = 423740625U;
	int16_t x19 = INT16_MIN;
	int32_t x20 = INT32_MIN;
	int32_t t4 = -7;

	t4 = (x17<=((x18|x19)^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = INT16_MIN;
	int32_t x22 = 266;
	static int8_t x23 = INT8_MIN;
	uint16_t x24 = 6820U;
	static int32_t t5 = -1;

	t5 = (x21<=((x22|x23)^x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = -29;
	static volatile int64_t x27 = -1LL;
	static int8_t x28 = -1;

	t6 = (x25<=((x26|x27)^x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = INT64_MIN;
	uint32_t x31 = 542439U;
	volatile int8_t x32 = -1;
	volatile int32_t t7 = 0;

	t7 = (x29<=((x30|x31)^x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	volatile int16_t x34 = 322;
	static int64_t x35 = 13LL;
	uint16_t x36 = 893U;
	static volatile int32_t t8 = -1963835;

	t8 = (x33<=((x34|x35)^x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	int32_t x38 = -240012;
	uint8_t x39 = 1U;
	int32_t t9 = -439709;

	t9 = (x37<=((x38|x39)^x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -12;
	static uint16_t x42 = 19U;
	static int16_t x43 = INT16_MAX;
	int16_t x44 = INT16_MIN;
	static volatile int32_t t10 = 8072702;

	t10 = (x41<=((x42|x43)^x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	static int64_t x46 = -1LL;
	int8_t x47 = -1;
	static volatile uint32_t x48 = 411704665U;
	volatile int32_t t11 = 40;

	t11 = (x45<=((x46|x47)^x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x49 = UINT16_MAX;
	static volatile uint8_t x50 = 6U;
	uint16_t x51 = 84U;
	int64_t x52 = 106634467LL;
	volatile int32_t t12 = -168028;

	t12 = (x49<=((x50|x51)^x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 0U;
	int16_t x54 = INT16_MIN;
	uint64_t x55 = UINT64_MAX;
	uint64_t x56 = UINT64_MAX;
	int32_t t13 = 53;

	t13 = (x53<=((x54|x55)^x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x57 = 1U;
	volatile int32_t x59 = 117;
	int32_t x60 = -2;
	volatile int32_t t14 = 904309;

	t14 = (x57<=((x58|x59)^x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x63 = 900U;
	static int32_t x64 = 1;
	volatile int32_t t15 = -10;

	t15 = (x61<=((x62|x63)^x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MAX;
	uint8_t x66 = 0U;
	uint32_t x67 = 59U;
	int8_t x68 = 0;
	int32_t t16 = -15557;

	t16 = (x65<=((x66|x67)^x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = -7124;
	int32_t x70 = INT32_MIN;
	volatile uint16_t x71 = 4779U;
	int32_t x72 = INT32_MIN;
	static int32_t t17 = 638468750;

	t17 = (x69<=((x70|x71)^x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = INT64_MIN;
	volatile int8_t x74 = INT8_MIN;
	static int64_t x75 = INT64_MIN;
	volatile int32_t x76 = 28868;

	t18 = (x73<=((x74|x75)^x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = -827081;
	static uint8_t x78 = 0U;
	int16_t x79 = -1;
	int64_t x80 = -1LL;

	t19 = (x77<=((x78|x79)^x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x81 = UINT32_MAX;
	int64_t x82 = 132691553763LL;
	int16_t x83 = INT16_MIN;

	t20 = (x81<=((x82|x83)^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	volatile int16_t x86 = 3320;
	static int64_t x87 = INT64_MIN;
	int8_t x88 = INT8_MIN;
	static volatile int32_t t21 = -9369;

	t21 = (x85<=((x86|x87)^x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	uint64_t x90 = 6LLU;

	t22 = (x89<=((x90|x91)^x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = UINT8_MAX;
	uint32_t x94 = 63974316U;
	static int16_t x95 = INT16_MAX;
	uint8_t x96 = UINT8_MAX;
	int32_t t23 = -5275443;

	t23 = (x93<=((x94|x95)^x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = UINT16_MAX;
	uint64_t x99 = UINT64_MAX;
	int8_t x100 = 2;
	static int32_t t24 = -625485;

	t24 = (x97<=((x98|x99)^x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = UINT32_MAX;
	int32_t x102 = INT32_MAX;
	volatile int64_t x103 = -1LL;

	t25 = (x101<=((x102|x103)^x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = UINT8_MAX;
	static uint64_t x106 = UINT64_MAX;
	int8_t x107 = INT8_MIN;
	int64_t x108 = INT64_MIN;
	volatile int32_t t26 = -6;

	t26 = (x105<=((x106|x107)^x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -1;
	int64_t x110 = -116025383373397LL;
	int8_t x112 = INT8_MIN;

	t27 = (x109<=((x110|x111)^x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -35;
	int32_t x114 = INT32_MIN;
	volatile int8_t x115 = INT8_MIN;
	uint16_t x116 = 7U;
	static volatile int32_t t28 = -235089;

	t28 = (x113<=((x114|x115)^x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x117 = 56292227LLU;
	static int64_t x118 = 4523007838255858940LL;
	int8_t x120 = INT8_MIN;

	t29 = (x117<=((x118|x119)^x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MAX;
	int8_t x123 = INT8_MIN;
	static volatile uint64_t x124 = 43729348LLU;
	volatile int32_t t30 = -8656230;

	t30 = (x121<=((x122|x123)^x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = UINT32_MAX;
	int32_t x128 = -1;
	static volatile int32_t t31 = 982097;

	t31 = (x125<=((x126|x127)^x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x130 = UINT16_MAX;
	uint16_t x131 = 777U;
	int32_t x132 = -3884708;
	volatile int32_t t32 = 12327;

	t32 = (x129<=((x130|x131)^x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x134 = 1U;
	int32_t x135 = INT32_MAX;
	int32_t t33 = 590273242;

	t33 = (x133<=((x134|x135)^x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x138 = UINT64_MAX;
	int64_t x140 = INT64_MIN;
	volatile int32_t t34 = 51529707;

	t34 = (x137<=((x138|x139)^x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = 1978;
	int16_t x142 = -18;
	uint64_t x143 = 36LLU;
	volatile uint16_t x144 = UINT16_MAX;
	static volatile int32_t t35 = 9922;

	t35 = (x141<=((x142|x143)^x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x147 = 7570U;
	int8_t x148 = 0;
	int32_t t36 = 31;

	t36 = (x145<=((x146|x147)^x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x149 = 0U;
	uint32_t x151 = 146936U;
	volatile int32_t t37 = -3697191;

	t37 = (x149<=((x150|x151)^x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x154 = INT32_MIN;
	int64_t x155 = -16000880977654144LL;
	volatile int32_t t38 = 1;

	t38 = (x153<=((x154|x155)^x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x157 = -1;
	uint32_t x158 = 59128176U;
	uint64_t x159 = UINT64_MAX;
	uint64_t x160 = 126LLU;

	t39 = (x157<=((x158|x159)^x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MAX;
	int64_t x162 = 4124768667705802882LL;
	static int64_t x163 = -1LL;
	volatile int16_t x164 = 10391;

	t40 = (x161<=((x162|x163)^x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x165 = 1877U;
	volatile uint8_t x166 = 97U;
	int16_t x168 = -1;
	volatile int32_t t41 = -26384;

	t41 = (x165<=((x166|x167)^x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = INT8_MIN;
	static int16_t x170 = INT16_MIN;
	int32_t x171 = -887410586;
	int16_t x172 = 314;

	t42 = (x169<=((x170|x171)^x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x173 = INT8_MAX;
	volatile int32_t x175 = INT32_MIN;
	int32_t x176 = -1;
	volatile int32_t t43 = -622188367;

	t43 = (x173<=((x174|x175)^x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = 13;
	uint64_t x178 = UINT64_MAX;
	int8_t x179 = INT8_MAX;
	static int8_t x180 = INT8_MIN;
	int32_t t44 = 2762020;

	t44 = (x177<=((x178|x179)^x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x182 = 16359U;
	int64_t x183 = -418477LL;
	static volatile int64_t x184 = -100012275LL;
	static volatile int32_t t45 = 11899;

	t45 = (x181<=((x182|x183)^x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x185 = INT8_MIN;
	int8_t x186 = -14;
	uint16_t x187 = 0U;
	uint64_t x188 = 228437745751025LLU;
	volatile int32_t t46 = 1908093;

	t46 = (x185<=((x186|x187)^x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x190 = -1;
	volatile int16_t x191 = 1594;
	static uint32_t x192 = 217968U;
	volatile int32_t t47 = 4038485;

	t47 = (x189<=((x190|x191)^x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -1;
	uint64_t x194 = 1148LLU;
	int16_t x196 = -34;
	static volatile int32_t t48 = 100;

	t48 = (x193<=((x194|x195)^x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x197 = 86U;
	int16_t x198 = -1;
	int16_t x199 = -1;
	uint8_t x200 = 3U;

	t49 = (x197<=((x198|x199)^x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x202 = -1LL;
	uint16_t x203 = 10881U;
	int32_t x204 = INT32_MIN;
	volatile int32_t t50 = 1;

	t50 = (x201<=((x202|x203)^x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x205 = -1781;
	uint64_t x206 = 1LLU;
	uint32_t x207 = 347766806U;
	volatile uint64_t x208 = 3LLU;

	t51 = (x205<=((x206|x207)^x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -453296306274341757LL;
	static int16_t x210 = 5012;
	volatile uint32_t x212 = 111U;
	static int32_t t52 = -12;

	t52 = (x209<=((x210|x211)^x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x213 = INT64_MIN;
	int64_t x215 = INT64_MAX;
	int16_t x216 = -1;
	static volatile int32_t t53 = 6742631;

	t53 = (x213<=((x214|x215)^x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x217 = UINT8_MAX;
	int8_t x218 = INT8_MAX;
	uint32_t x219 = 191U;
	uint64_t x220 = 1244774LLU;
	volatile int32_t t54 = 31634998;

	t54 = (x217<=((x218|x219)^x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x222 = 1;
	int32_t x223 = INT32_MIN;
	static uint32_t x224 = 49161U;

	t55 = (x221<=((x222|x223)^x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -1;
	uint64_t x226 = UINT64_MAX;
	static uint8_t x227 = UINT8_MAX;
	static volatile int8_t x228 = -3;
	volatile int32_t t56 = -9641484;

	t56 = (x225<=((x226|x227)^x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x229 = 115239891U;
	volatile uint8_t x230 = 2U;
	uint64_t x231 = 3690362032855824021LLU;
	int64_t x232 = INT64_MAX;
	int32_t t57 = -3;

	t57 = (x229<=((x230|x231)^x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x233 = -1;
	static volatile uint32_t x234 = 247U;
	int16_t x235 = INT16_MIN;

	t58 = (x233<=((x234|x235)^x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	uint64_t x238 = 25103299LLU;

	t59 = (x237<=((x238|x239)^x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	static int64_t x242 = INT64_MAX;
	static int16_t x243 = INT16_MAX;
	int32_t x244 = INT32_MAX;

	t60 = (x241<=((x242|x243)^x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x245 = 98LLU;
	int8_t x246 = -1;
	volatile int16_t x248 = -1;
	int32_t t61 = 1;

	t61 = (x245<=((x246|x247)^x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MIN;
	static int64_t x250 = INT64_MIN;
	static int32_t x251 = 904;
	volatile int16_t x252 = INT16_MIN;

	t62 = (x249<=((x250|x251)^x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x256 = INT64_MIN;
	static volatile int32_t t63 = -1316907;

	t63 = (x253<=((x254|x255)^x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = 12;
	volatile uint16_t x259 = 31704U;
	int8_t x260 = 26;
	static volatile int32_t t64 = 40;

	t64 = (x257<=((x258|x259)^x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x261 = INT64_MAX;
	int32_t x263 = 128519365;
	int8_t x264 = -1;
	static volatile int32_t t65 = 827734;

	t65 = (x261<=((x262|x263)^x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x265 = INT16_MIN;
	int64_t x266 = -54867191147542LL;
	static int64_t x267 = INT64_MIN;
	volatile int64_t x268 = INT64_MIN;

	t66 = (x265<=((x266|x267)^x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -14759668LL;
	static int32_t x271 = -1;
	static int32_t x272 = -1;
	static volatile int32_t t67 = 64063;

	t67 = (x269<=((x270|x271)^x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x273 = INT64_MIN;
	int8_t x274 = 4;
	int64_t x275 = -10687095074541LL;
	uint64_t x276 = 90239112850LLU;

	t68 = (x273<=((x274|x275)^x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x277 = 1442U;
	int8_t x278 = INT8_MAX;
	uint64_t x279 = 4421524211346164LLU;
	int32_t x280 = INT32_MIN;

	t69 = (x277<=((x278|x279)^x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = -1LL;
	volatile uint16_t x282 = 13248U;
	volatile int16_t x283 = -4;
	int16_t x284 = -3680;
	int32_t t70 = 192824309;

	t70 = (x281<=((x282|x283)^x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = UINT32_MAX;
	volatile int64_t x286 = INT64_MIN;
	static int16_t x287 = INT16_MIN;
	int32_t x288 = -1;
	static volatile int32_t t71 = 1;

	t71 = (x285<=((x286|x287)^x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x290 = 2U;
	int16_t x291 = INT16_MIN;
	static int8_t x292 = INT8_MIN;
	int32_t t72 = -33;

	t72 = (x289<=((x290|x291)^x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = -1LL;
	uint16_t x296 = UINT16_MAX;
	int32_t t73 = -4015018;

	t73 = (x293<=((x294|x295)^x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MAX;
	volatile int64_t x298 = INT64_MIN;
	volatile int32_t t74 = -292;

	t74 = (x297<=((x298|x299)^x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x302 = INT8_MAX;
	static int64_t x304 = INT64_MIN;
	volatile int32_t t75 = 958329157;

	t75 = (x301<=((x302|x303)^x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = -1;
	static volatile int32_t x306 = INT32_MAX;
	int64_t x307 = 3LL;
	uint32_t x308 = UINT32_MAX;
	int32_t t76 = -45550;

	t76 = (x305<=((x306|x307)^x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x309 = UINT64_MAX;
	static int16_t x310 = INT16_MIN;
	static int32_t x311 = INT32_MAX;
	int8_t x312 = INT8_MAX;
	int32_t t77 = -5964727;

	t77 = (x309<=((x310|x311)^x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = -13;
	int32_t x314 = 479430;
	int32_t x315 = INT32_MAX;
	int32_t t78 = -193;

	t78 = (x313<=((x314|x315)^x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x317 = -1;
	int64_t x318 = INT64_MAX;
	int16_t x319 = INT16_MAX;
	int64_t x320 = 382814443LL;
	int32_t t79 = 8962;

	t79 = (x317<=((x318|x319)^x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x322 = INT64_MAX;
	uint8_t x324 = UINT8_MAX;
	volatile int32_t t80 = -37528;

	t80 = (x321<=((x322|x323)^x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = 276;
	int16_t x326 = 0;
	static volatile uint8_t x327 = 9U;
	int16_t x328 = 98;
	volatile int32_t t81 = -61909967;

	t81 = (x325<=((x326|x327)^x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = UINT16_MAX;
	volatile int64_t x330 = INT64_MIN;
	volatile int8_t x332 = INT8_MAX;
	volatile int32_t t82 = 34123;

	t82 = (x329<=((x330|x331)^x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -1;
	uint64_t x334 = UINT64_MAX;
	uint32_t x335 = UINT32_MAX;
	int64_t x336 = -4935LL;
	static volatile int32_t t83 = 143034;

	t83 = (x333<=((x334|x335)^x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = 115373564517LL;
	int32_t x338 = INT32_MAX;
	uint8_t x339 = 6U;
	int64_t x340 = INT64_MIN;

	t84 = (x337<=((x338|x339)^x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = 218;
	static volatile int8_t x342 = INT8_MAX;
	uint8_t x344 = UINT8_MAX;

	t85 = (x341<=((x342|x343)^x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x345 = INT64_MIN;
	int64_t x346 = INT64_MIN;
	int64_t x347 = INT64_MIN;
	int16_t x348 = -5969;
	int32_t t86 = 1060160412;

	t86 = (x345<=((x346|x347)^x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x350 = -102154980LL;
	int32_t x351 = INT32_MIN;
	static int8_t x352 = -1;

	t87 = (x349<=((x350|x351)^x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = -1;
	int32_t x354 = 6;
	uint16_t x356 = UINT16_MAX;
	int32_t t88 = -760;

	t88 = (x353<=((x354|x355)^x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = INT8_MIN;
	static uint8_t x358 = 30U;
	uint64_t x360 = 257887184609491492LLU;
	int32_t t89 = 478602;

	t89 = (x357<=((x358|x359)^x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x361 = -1;
	uint16_t x362 = 1633U;
	int32_t x363 = INT32_MAX;
	static uint8_t x364 = UINT8_MAX;

	t90 = (x361<=((x362|x363)^x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = 6U;
	int16_t x366 = 1717;
	int16_t x367 = 210;
	int32_t x368 = 90;
	int32_t t91 = -1;

	t91 = (x365<=((x366|x367)^x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x369 = INT16_MAX;
	int64_t x370 = 47377690509906LL;
	volatile int16_t x371 = 2011;
	volatile int32_t t92 = 817836;

	t92 = (x369<=((x370|x371)^x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = UINT8_MAX;
	static int16_t x374 = INT16_MIN;
	uint16_t x376 = 7U;

	t93 = (x373<=((x374|x375)^x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	static int16_t x379 = -1;
	volatile int32_t t94 = 9;

	t94 = (x377<=((x378|x379)^x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t t95 = 2;

	t95 = (x381<=((x382|x383)^x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = -11900;
	uint32_t x386 = UINT32_MAX;
	static int32_t t96 = 5788;

	t96 = (x385<=((x386|x387)^x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = UINT16_MAX;
	uint8_t x391 = 4U;
	int8_t x392 = -6;
	int32_t t97 = 8;

	t97 = (x389<=((x390|x391)^x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x394 = UINT16_MAX;
	int16_t x395 = -3;
	int32_t t98 = 0;

	t98 = (x393<=((x394|x395)^x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x398 = -56291434;
	int16_t x399 = 11071;
	volatile uint32_t x400 = 7733U;
	int32_t t99 = 151;

	t99 = (x397<=((x398|x399)^x400));

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

