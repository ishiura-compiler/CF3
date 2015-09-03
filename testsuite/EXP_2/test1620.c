#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x6 = 1U;
uint16_t x7 = 0U;
volatile int32_t t1 = -3;
static int64_t x9 = -1LL;
int16_t x17 = 277;
volatile int32_t x21 = -404;
volatile int64_t x25 = -1LL;
uint32_t x29 = 835U;
static int64_t x34 = INT64_MIN;
uint8_t x38 = 6U;
int32_t x45 = -1;
volatile int32_t t12 = 23;
static uint16_t x53 = 14U;
volatile int8_t x54 = INT8_MIN;
static int16_t x60 = -1;
static int16_t x63 = INT16_MIN;
int32_t x66 = INT32_MIN;
uint8_t x75 = 2U;
int32_t t19 = 12;
uint64_t x90 = 199553741628746828LLU;
uint64_t x96 = UINT64_MAX;
int32_t t25 = 18602274;
int32_t t26 = -7114;
int16_t x110 = 53;
int64_t x115 = -1LL;
int8_t x119 = -16;
uint32_t x127 = UINT32_MAX;
static int8_t x128 = INT8_MAX;
static uint64_t x129 = 21LLU;
volatile uint64_t x135 = UINT64_MAX;
int32_t t33 = 5;
static int8_t x143 = -36;
uint32_t x159 = UINT32_MAX;
volatile int16_t x162 = -1;
int32_t t41 = 8;
uint16_t x172 = 2U;
static int32_t t42 = 22;
volatile int16_t x181 = INT16_MIN;
uint64_t x182 = 665176LLU;
uint8_t x186 = 79U;
int16_t x196 = -1;
volatile int32_t t50 = 0;
static uint64_t x205 = 263818873LLU;
int8_t x207 = -1;
volatile int8_t x208 = INT8_MIN;
int64_t x209 = INT64_MIN;
uint64_t x210 = UINT64_MAX;
volatile uint16_t x213 = 351U;
volatile int32_t t53 = 3;
uint8_t x227 = 1U;
volatile int64_t x228 = INT64_MAX;
uint8_t x236 = 4U;
int32_t t58 = -1;
int32_t x237 = INT32_MIN;
int16_t x240 = INT16_MAX;
static int64_t x245 = 29LL;
uint16_t x248 = 18U;
int64_t x252 = INT64_MIN;
int64_t x253 = INT64_MIN;
uint64_t x257 = UINT64_MAX;
int16_t x260 = INT16_MIN;
volatile int32_t t65 = 1307;
volatile uint64_t x269 = UINT64_MAX;
int16_t x270 = 130;
volatile uint8_t x272 = 40U;
static volatile int32_t t68 = 123;
static int32_t t70 = -1804;
static int8_t x287 = INT8_MIN;
int16_t x289 = 0;
static int16_t x291 = INT16_MAX;
volatile int32_t t72 = -5;
int32_t t74 = 11;
int16_t x301 = 16086;
int8_t x309 = INT8_MIN;
int16_t x315 = INT16_MAX;
int16_t x323 = INT16_MAX;
int8_t x325 = -1;
int32_t x326 = -1;
volatile uint32_t x336 = UINT32_MAX;
static int8_t x338 = -1;
uint32_t x343 = UINT32_MAX;
int64_t x347 = INT64_MIN;
uint32_t x349 = UINT32_MAX;
int8_t x356 = 51;
int32_t t88 = -204109995;
int16_t x357 = INT16_MAX;
int32_t x358 = -1;
uint64_t x364 = UINT64_MAX;
uint16_t x366 = UINT16_MAX;
volatile int32_t t91 = 506;
int64_t x372 = -1LL;
volatile uint8_t x376 = 9U;
int32_t x386 = INT32_MIN;
int16_t x391 = -29;
static volatile int64_t x396 = INT64_MIN;
volatile int32_t t98 = 142;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	uint16_t x2 = UINT16_MAX;
	volatile int64_t x3 = -4376741397560560LL;
	int16_t x4 = INT16_MAX;
	int32_t t0 = 18278645;

	t0 = ((x1==(x2<=x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	int32_t x8 = -1;

	t1 = ((x5==(x6<=x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = 95706964161LL;
	static int8_t x11 = -1;
	int64_t x12 = -1LL;
	int32_t t2 = 1;

	t2 = ((x9==(x10<=x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	int8_t x14 = INT8_MIN;
	uint16_t x15 = 1420U;
	static int16_t x16 = -6839;
	int32_t t3 = 5170;

	t3 = ((x13==(x14<=x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x18 = 2;
	int8_t x19 = 4;
	int8_t x20 = 2;
	static int32_t t4 = 23529489;

	t4 = ((x17==(x18<=x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x22 = UINT32_MAX;
	static int64_t x23 = -28287220105816456LL;
	static int32_t x24 = INT32_MAX;
	static int32_t t5 = 1065302511;

	t5 = ((x21==(x22<=x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = -2190;
	uint64_t x27 = UINT64_MAX;
	volatile int16_t x28 = INT16_MIN;
	int32_t t6 = -124797;

	t6 = ((x25==(x26<=x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x30 = 46U;
	int16_t x31 = INT16_MAX;
	static int64_t x32 = -1LL;
	volatile int32_t t7 = -3;

	t7 = ((x29==(x30<=x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	uint64_t x35 = 42948470LLU;
	static uint8_t x36 = 0U;
	int32_t t8 = 580;

	t8 = ((x33==(x34<=x35))==x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x37 = -215LL;
	int64_t x39 = 218109LL;
	volatile int32_t x40 = INT32_MIN;
	int32_t t9 = -1;

	t9 = ((x37==(x38<=x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 7;
	int64_t x42 = 4LL;
	volatile int32_t x43 = -76;
	static uint8_t x44 = 6U;
	int32_t t10 = 159772;

	t10 = ((x41==(x42<=x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = INT8_MIN;
	int16_t x47 = 4079;
	int32_t x48 = -1;
	volatile int32_t t11 = -266;

	t11 = ((x45==(x46<=x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	uint64_t x50 = 5LLU;
	volatile int64_t x51 = -19234LL;
	int64_t x52 = INT64_MIN;

	t12 = ((x49==(x50<=x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x55 = INT16_MIN;
	uint32_t x56 = UINT32_MAX;
	int32_t t13 = 31;

	t13 = ((x53==(x54<=x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = INT8_MIN;
	int16_t x58 = -7;
	uint16_t x59 = 420U;
	static int32_t t14 = 27;

	t14 = ((x57==(x58<=x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	int32_t x62 = INT32_MIN;
	static uint8_t x64 = 23U;
	int32_t t15 = -1423;

	t15 = ((x61==(x62<=x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 4U;
	int64_t x67 = 1396181LL;
	int64_t x68 = -1LL;
	volatile int32_t t16 = -103674852;

	t16 = ((x65==(x66<=x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -1;
	int64_t x70 = 5LL;
	static volatile int32_t x71 = -5470774;
	uint32_t x72 = 60544U;
	int32_t t17 = -716;

	t17 = ((x69==(x70<=x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	uint64_t x74 = 22LLU;
	static int16_t x76 = -294;
	static volatile int32_t t18 = 13758;

	t18 = ((x73==(x74<=x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	volatile uint16_t x78 = 2U;
	int8_t x79 = 10;
	uint64_t x80 = 12499425027393LLU;

	t19 = ((x77==(x78<=x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x81 = 10779U;
	uint8_t x82 = 1U;
	uint32_t x83 = 18U;
	int8_t x84 = 22;
	int32_t t20 = -41974526;

	t20 = ((x81==(x82<=x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 193U;
	int8_t x86 = 2;
	int64_t x87 = INT64_MIN;
	int64_t x88 = -1LL;
	int32_t t21 = -7018295;

	t21 = ((x85==(x86<=x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x89 = 174145283687363LLU;
	int64_t x91 = INT64_MAX;
	int64_t x92 = INT64_MAX;
	int32_t t22 = -988;

	t22 = ((x89==(x90<=x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = UINT8_MAX;
	int16_t x94 = INT16_MIN;
	int8_t x95 = INT8_MIN;
	volatile int32_t t23 = -634052;

	t23 = ((x93==(x94<=x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -1;
	int32_t x98 = 4566;
	uint8_t x99 = 3U;
	int32_t x100 = INT32_MAX;
	volatile int32_t t24 = 1586;

	t24 = ((x97==(x98<=x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x101 = INT16_MIN;
	volatile int64_t x102 = -1LL;
	int8_t x103 = 27;
	uint32_t x104 = UINT32_MAX;

	t25 = ((x101==(x102<=x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x105 = 31U;
	int32_t x106 = INT32_MIN;
	volatile int16_t x107 = -15;
	volatile int16_t x108 = INT16_MIN;

	t26 = ((x105==(x106<=x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -6256668;
	int64_t x111 = 1366830LL;
	int16_t x112 = INT16_MIN;
	static volatile int32_t t27 = -119108469;

	t27 = ((x109==(x110<=x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = UINT32_MAX;
	static int64_t x114 = -3764905932543LL;
	static uint64_t x116 = 15561719973LLU;
	volatile int32_t t28 = -3183276;

	t28 = ((x113==(x114<=x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -1019658;
	static int8_t x118 = 6;
	uint32_t x120 = 486U;
	int32_t t29 = 195;

	t29 = ((x117==(x118<=x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -1LL;
	volatile int64_t x122 = 3419689376000514451LL;
	uint16_t x123 = 3U;
	static int32_t x124 = -1;
	int32_t t30 = -121667;

	t30 = ((x121==(x122<=x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = 6;
	int64_t x126 = INT64_MIN;
	static volatile int32_t t31 = -1;

	t31 = ((x125==(x126<=x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x130 = 930U;
	uint64_t x131 = UINT64_MAX;
	uint32_t x132 = 496821758U;
	int32_t t32 = -230291053;

	t32 = ((x129==(x130<=x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -58;
	int64_t x134 = INT64_MIN;
	static volatile int8_t x136 = -1;

	t33 = ((x133==(x134<=x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x137 = 15U;
	int8_t x138 = -1;
	int64_t x139 = INT64_MIN;
	uint16_t x140 = 0U;
	volatile int32_t t34 = -88479;

	t34 = ((x137==(x138<=x139))==x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = INT8_MIN;
	int64_t x142 = INT64_MIN;
	uint32_t x144 = UINT32_MAX;
	static volatile int32_t t35 = 1;

	t35 = ((x141==(x142<=x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = 10019;
	uint8_t x146 = 3U;
	int8_t x147 = INT8_MIN;
	volatile int8_t x148 = -3;
	volatile int32_t t36 = -580774860;

	t36 = ((x145==(x146<=x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x149 = -22781551225303LL;
	volatile uint64_t x150 = UINT64_MAX;
	int16_t x151 = INT16_MAX;
	volatile int8_t x152 = INT8_MIN;
	static int32_t t37 = -353;

	t37 = ((x149==(x150<=x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x153 = INT32_MIN;
	uint8_t x154 = UINT8_MAX;
	int16_t x155 = INT16_MIN;
	volatile int64_t x156 = 498330LL;
	volatile int32_t t38 = -438390;

	t38 = ((x153==(x154<=x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x157 = 1U;
	int8_t x158 = -1;
	int16_t x160 = 102;
	volatile int32_t t39 = -781129126;

	t39 = ((x157==(x158<=x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	volatile int32_t x163 = -1;
	int8_t x164 = INT8_MAX;
	int32_t t40 = -89;

	t40 = ((x161==(x162<=x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = INT8_MAX;
	static int32_t x166 = 555;
	volatile int64_t x167 = -1LL;
	volatile uint64_t x168 = UINT64_MAX;

	t41 = ((x165==(x166<=x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x169 = 7U;
	uint16_t x170 = 2U;
	int32_t x171 = -1;

	t42 = ((x169==(x170<=x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x173 = 47;
	uint16_t x174 = 1373U;
	uint64_t x175 = 1LLU;
	uint64_t x176 = 236450176219939LLU;
	int32_t t43 = 551;

	t43 = ((x173==(x174<=x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = UINT8_MAX;
	static volatile int8_t x178 = INT8_MAX;
	int8_t x179 = INT8_MIN;
	int8_t x180 = INT8_MIN;
	volatile int32_t t44 = 2309194;

	t44 = ((x177==(x178<=x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x183 = INT8_MIN;
	volatile int32_t x184 = -41719072;
	int32_t t45 = 127647;

	t45 = ((x181==(x182<=x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = -427;
	int8_t x187 = INT8_MIN;
	int8_t x188 = INT8_MAX;
	volatile int32_t t46 = 8;

	t46 = ((x185==(x186<=x187))==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = 59LL;
	static int16_t x190 = 1;
	int8_t x191 = INT8_MIN;
	int16_t x192 = INT16_MAX;
	volatile int32_t t47 = -13066;

	t47 = ((x189==(x190<=x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = UINT32_MAX;
	int32_t x194 = INT32_MIN;
	int32_t x195 = 39421;
	volatile int32_t t48 = 937;

	t48 = ((x193==(x194<=x195))==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x197 = -7;
	static volatile int8_t x198 = 1;
	uint8_t x199 = UINT8_MAX;
	volatile int64_t x200 = INT64_MAX;
	volatile int32_t t49 = -6929;

	t49 = ((x197==(x198<=x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = 103532;
	volatile uint64_t x202 = UINT64_MAX;
	int8_t x203 = INT8_MIN;
	volatile uint8_t x204 = UINT8_MAX;

	t50 = ((x201==(x202<=x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x206 = INT64_MIN;
	static int32_t t51 = 136471;

	t51 = ((x205==(x206<=x207))==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x211 = 391818U;
	int64_t x212 = INT64_MIN;
	volatile int32_t t52 = 236096015;

	t52 = ((x209==(x210<=x211))==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x214 = -4376;
	uint16_t x215 = 6U;
	int32_t x216 = INT32_MAX;

	t53 = ((x213==(x214<=x215))==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	int64_t x218 = -1LL;
	int8_t x219 = INT8_MIN;
	volatile int16_t x220 = -425;
	volatile int32_t t54 = 6;

	t54 = ((x217==(x218<=x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x221 = 57U;
	int8_t x222 = INT8_MAX;
	uint64_t x223 = 336316914765364700LLU;
	volatile uint8_t x224 = 9U;
	static volatile int32_t t55 = 2251885;

	t55 = ((x221==(x222<=x223))==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x225 = UINT32_MAX;
	static volatile int32_t x226 = 1718;
	int32_t t56 = -93;

	t56 = ((x225==(x226<=x227))==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x229 = INT32_MIN;
	int8_t x230 = 61;
	int64_t x231 = INT64_MIN;
	int64_t x232 = 48420LL;
	int32_t t57 = -2045;

	t57 = ((x229==(x230<=x231))==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	int8_t x234 = 2;
	uint64_t x235 = 4427006292465933212LLU;

	t58 = ((x233==(x234<=x235))==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x238 = 2;
	uint64_t x239 = 8437171397LLU;
	static volatile int32_t t59 = -11;

	t59 = ((x237==(x238<=x239))==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x241 = 1615;
	int8_t x242 = -1;
	int32_t x243 = -1;
	int8_t x244 = -1;
	int32_t t60 = 15;

	t60 = ((x241==(x242<=x243))==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x246 = INT64_MIN;
	int16_t x247 = INT16_MIN;
	volatile int32_t t61 = 473;

	t61 = ((x245==(x246<=x247))==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = UINT32_MAX;
	static int64_t x250 = INT64_MAX;
	uint64_t x251 = 1198376088949LLU;
	int32_t t62 = -171921622;

	t62 = ((x249==(x250<=x251))==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x254 = INT16_MAX;
	int32_t x255 = INT32_MAX;
	static volatile int64_t x256 = INT64_MIN;
	int32_t t63 = -44024;

	t63 = ((x253==(x254<=x255))==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x258 = INT32_MIN;
	uint8_t x259 = 0U;
	int32_t t64 = -231851758;

	t64 = ((x257==(x258<=x259))==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MAX;
	static int8_t x262 = INT8_MAX;
	int16_t x263 = INT16_MIN;
	uint32_t x264 = 701783156U;

	t65 = ((x261==(x262<=x263))==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MAX;
	static uint16_t x266 = 336U;
	static uint32_t x267 = 2295U;
	int32_t x268 = INT32_MIN;
	volatile int32_t t66 = 74249;

	t66 = ((x265==(x266<=x267))==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x271 = INT8_MAX;
	int32_t t67 = -4;

	t67 = ((x269==(x270<=x271))==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MAX;
	int32_t x274 = 746;
	static volatile int32_t x275 = 1641;
	int32_t x276 = INT32_MIN;

	t68 = ((x273==(x274<=x275))==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x277 = UINT32_MAX;
	int16_t x278 = INT16_MIN;
	static int8_t x279 = 12;
	volatile int32_t x280 = 245259335;
	static volatile int32_t t69 = 35;

	t69 = ((x277==(x278<=x279))==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x281 = INT8_MIN;
	int64_t x282 = 138972598LL;
	volatile int64_t x283 = INT64_MIN;
	static volatile int8_t x284 = INT8_MIN;

	t70 = ((x281==(x282<=x283))==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = 6;
	uint16_t x286 = 0U;
	int32_t x288 = INT32_MIN;
	int32_t t71 = 45488;

	t71 = ((x285==(x286<=x287))==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x290 = -1;
	uint16_t x292 = UINT16_MAX;

	t72 = ((x289==(x290<=x291))==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x293 = 7518868623199LL;
	int32_t x294 = INT32_MIN;
	int64_t x295 = INT64_MAX;
	uint32_t x296 = UINT32_MAX;
	volatile int32_t t73 = -496;

	t73 = ((x293==(x294<=x295))==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = 61;
	uint32_t x298 = 0U;
	static int32_t x299 = -1;
	static int64_t x300 = INT64_MIN;

	t74 = ((x297==(x298<=x299))==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x302 = UINT8_MAX;
	static int8_t x303 = INT8_MAX;
	volatile int32_t x304 = -1;
	int32_t t75 = -43226;

	t75 = ((x301==(x302<=x303))==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = INT32_MIN;
	int8_t x306 = INT8_MAX;
	volatile int32_t x307 = 0;
	volatile uint8_t x308 = 0U;
	static volatile int32_t t76 = -12219;

	t76 = ((x305==(x306<=x307))==x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x310 = INT16_MIN;
	volatile int8_t x311 = -1;
	int16_t x312 = 3;
	volatile int32_t t77 = 15842083;

	t77 = ((x309==(x310<=x311))==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x313 = INT16_MIN;
	int32_t x314 = -16455385;
	int64_t x316 = 215LL;
	static int32_t t78 = -129834;

	t78 = ((x313==(x314<=x315))==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -141;
	int8_t x318 = -1;
	volatile uint64_t x319 = 1820587LLU;
	static int16_t x320 = 53;
	int32_t t79 = -32;

	t79 = ((x317==(x318<=x319))==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = -1LL;
	uint64_t x322 = UINT64_MAX;
	int64_t x324 = -1LL;
	static int32_t t80 = 1;

	t80 = ((x321==(x322<=x323))==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x327 = INT16_MAX;
	int8_t x328 = INT8_MAX;
	volatile int32_t t81 = 0;

	t81 = ((x325==(x326<=x327))==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	uint8_t x330 = 7U;
	uint16_t x331 = 156U;
	int16_t x332 = 4;
	int32_t t82 = 61910;

	t82 = ((x329==(x330<=x331))==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x333 = INT8_MIN;
	static int32_t x334 = INT32_MAX;
	static uint64_t x335 = UINT64_MAX;
	int32_t t83 = 14;

	t83 = ((x333==(x334<=x335))==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MIN;
	int64_t x339 = INT64_MIN;
	static uint64_t x340 = 12824471581506LLU;
	static volatile int32_t t84 = -26300506;

	t84 = ((x337==(x338<=x339))==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint16_t x341 = UINT16_MAX;
	uint32_t x342 = 1153398U;
	volatile int8_t x344 = -32;
	volatile int32_t t85 = 31287;

	t85 = ((x341==(x342<=x343))==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = 18;
	static int64_t x346 = INT64_MIN;
	volatile uint64_t x348 = 293514673419953LLU;
	static volatile int32_t t86 = -204;

	t86 = ((x345==(x346<=x347))==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x350 = -82;
	static int8_t x351 = 2;
	int64_t x352 = INT64_MIN;
	volatile int32_t t87 = -3818832;

	t87 = ((x349==(x350<=x351))==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = -1;
	int8_t x354 = 27;
	int32_t x355 = -1;

	t88 = ((x353==(x354<=x355))==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x359 = 9U;
	volatile uint64_t x360 = 34120463208897348LLU;
	volatile int32_t t89 = -476798572;

	t89 = ((x357==(x358<=x359))==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x361 = 488660880990867LLU;
	volatile int32_t x362 = -1;
	static uint32_t x363 = 3820980U;
	int32_t t90 = 891554;

	t90 = ((x361==(x362<=x363))==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x365 = INT32_MIN;
	int64_t x367 = INT64_MIN;
	int16_t x368 = -984;

	t91 = ((x365==(x366<=x367))==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x369 = -55;
	int32_t x370 = 1774;
	int32_t x371 = -1;
	volatile int32_t t92 = 102914281;

	t92 = ((x369==(x370<=x371))==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MAX;
	static volatile uint64_t x374 = 1648823358411345275LLU;
	int32_t x375 = 860819;
	volatile int32_t t93 = 251;

	t93 = ((x373==(x374<=x375))==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	uint16_t x378 = 1U;
	int64_t x379 = INT64_MAX;
	uint32_t x380 = 1873304744U;
	int32_t t94 = 28610;

	t94 = ((x377==(x378<=x379))==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 0U;
	int32_t x382 = 1;
	uint8_t x383 = 3U;
	uint16_t x384 = 2U;
	int32_t t95 = 3813401;

	t95 = ((x381==(x382<=x383))==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = -39LL;
	volatile int16_t x387 = INT16_MIN;
	uint16_t x388 = 1759U;
	volatile int32_t t96 = 777916117;

	t96 = ((x385==(x386<=x387))==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = 48922642;
	static uint64_t x390 = 167712705781577LLU;
	int16_t x392 = INT16_MAX;
	volatile int32_t t97 = -479;

	t97 = ((x389==(x390<=x391))==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 117U;
	int8_t x394 = -1;
	uint64_t x395 = UINT64_MAX;

	t98 = ((x393==(x394<=x395))==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = 953U;
	uint32_t x398 = 3454U;
	int32_t x399 = INT32_MIN;
	uint16_t x400 = UINT16_MAX;
	int32_t t99 = 11;

	t99 = ((x397==(x398<=x399))==x400);

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

