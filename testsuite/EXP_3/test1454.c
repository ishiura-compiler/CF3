#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = INT16_MIN;
uint8_t x6 = 10U;
volatile int32_t t1 = 507796291;
volatile int32_t t2 = -134524;
uint8_t x23 = UINT8_MAX;
int32_t x26 = INT32_MAX;
static int8_t x30 = -1;
volatile int32_t t10 = 906056;
volatile int32_t t11 = 504;
int16_t x49 = INT16_MIN;
static int32_t x50 = -4772071;
int64_t x51 = -1LL;
volatile int16_t x55 = -1;
volatile int32_t x57 = -65285;
int32_t x59 = INT32_MIN;
int32_t t14 = 211598546;
volatile uint32_t x67 = 17073902U;
static int32_t x68 = INT32_MAX;
static int16_t x74 = -23;
volatile int32_t t18 = 27;
int32_t x80 = 446;
uint16_t x86 = 16U;
volatile int32_t t22 = -1;
int16_t x93 = 496;
int64_t x97 = 1LL;
uint32_t x98 = 224925220U;
uint8_t x99 = 59U;
int32_t t25 = -40;
uint64_t x107 = 1447422585071LLU;
int32_t t26 = 42;
int32_t t29 = -65;
int16_t x123 = -311;
static int64_t x129 = -1LL;
uint32_t x131 = 1018178564U;
int32_t t32 = -3;
uint32_t x134 = UINT32_MAX;
int32_t t33 = -239826508;
int32_t x138 = INT32_MAX;
int64_t x156 = INT64_MIN;
int32_t x157 = INT32_MIN;
volatile int32_t t42 = 11955;
volatile int32_t x176 = INT32_MIN;
int32_t t44 = -195402774;
static int32_t t45 = -518069906;
int16_t x188 = 4416;
int8_t x191 = -1;
volatile int32_t x199 = INT32_MIN;
volatile uint8_t x200 = 0U;
volatile int32_t t49 = 176;
uint16_t x202 = 303U;
volatile int32_t t51 = -1346;
static int64_t x214 = -39LL;
volatile uint16_t x227 = 16U;
int32_t x228 = -19;
int32_t t57 = -133713;
int16_t x235 = -1;
uint32_t x239 = UINT32_MAX;
int8_t x247 = INT8_MAX;
volatile uint16_t x254 = 18720U;
volatile int32_t x259 = INT32_MIN;
static int64_t x273 = INT64_MAX;
volatile int16_t x274 = INT16_MIN;
int8_t x275 = 0;
int32_t t68 = -65;
uint64_t x277 = UINT64_MAX;
uint32_t x286 = UINT32_MAX;
int64_t x295 = -1LL;
static int32_t t73 = 1317;
int32_t x303 = INT32_MIN;
volatile int32_t t75 = 495052;
int32_t x305 = INT32_MAX;
static volatile uint64_t x311 = 56555664837882LLU;
uint64_t x312 = UINT64_MAX;
volatile int32_t x324 = 42971;
int32_t x333 = -1;
static uint16_t x334 = 503U;
int16_t x336 = INT16_MAX;
int32_t x346 = INT32_MIN;
volatile int32_t t86 = -7092950;
int16_t x350 = INT16_MIN;
int16_t x355 = INT16_MIN;
static uint32_t x360 = 245421107U;
int16_t x363 = 0;
int32_t x365 = 112351;
int32_t x366 = 434;
int8_t x377 = INT8_MIN;
int8_t x382 = -3;
int8_t x384 = 0;
int8_t x390 = 60;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	static volatile int8_t x2 = -1;
	uint8_t x3 = 2U;
	int32_t x4 = INT32_MAX;
	int32_t t0 = -26802;

	t0 = ((x1==x2)&(x3<x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x7 = UINT16_MAX;
	int16_t x8 = -1;

	t1 = ((x5==x6)&(x7<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x9 = INT64_MAX;
	volatile int64_t x10 = 57LL;
	uint16_t x11 = 3U;
	uint32_t x12 = 1034U;

	t2 = ((x9==x10)&(x11<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int64_t x14 = INT64_MIN;
	volatile int64_t x15 = INT64_MIN;
	uint32_t x16 = 1867024957U;
	volatile int32_t t3 = -55989416;

	t3 = ((x13==x14)&(x15<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	int64_t x18 = 83623966372473LL;
	uint16_t x19 = 8170U;
	int16_t x20 = -9;
	volatile int32_t t4 = 77;

	t4 = ((x17==x18)&(x19<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 4U;
	int16_t x22 = INT16_MAX;
	int64_t x24 = 6LL;
	volatile int32_t t5 = 49692576;

	t5 = ((x21==x22)&(x23<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	volatile int16_t x27 = INT16_MIN;
	uint64_t x28 = 26LLU;
	volatile int32_t t6 = -48;

	t6 = ((x25==x26)&(x27<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	int16_t x31 = 0;
	int8_t x32 = INT8_MAX;
	volatile int32_t t7 = 33;

	t7 = ((x29==x30)&(x31<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = INT64_MAX;
	int32_t x34 = INT32_MAX;
	static int32_t x35 = 11;
	volatile int16_t x36 = -5;
	volatile int32_t t8 = 1121625;

	t8 = ((x33==x34)&(x35<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 2U;
	uint8_t x38 = 13U;
	static volatile int64_t x39 = -53424964670613LL;
	int32_t x40 = 6;
	volatile int32_t t9 = -4262707;

	t9 = ((x37==x38)&(x39<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	int8_t x42 = INT8_MIN;
	int32_t x43 = INT32_MIN;
	volatile uint8_t x44 = 1U;

	t10 = ((x41==x42)&(x43<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint8_t x45 = 4U;
	volatile int64_t x46 = INT64_MIN;
	volatile uint64_t x47 = 3349796307696LLU;
	int8_t x48 = 0;

	t11 = ((x45==x46)&(x47<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x52 = INT16_MIN;
	int32_t t12 = 20;

	t12 = ((x49==x50)&(x51<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	int16_t x54 = 1;
	uint16_t x56 = UINT16_MAX;
	static volatile int32_t t13 = 10732583;

	t13 = ((x53==x54)&(x55<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = -27;
	int64_t x60 = INT64_MAX;

	t14 = ((x57==x58)&(x59<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	int64_t x62 = INT64_MAX;
	static int64_t x63 = -1LL;
	uint16_t x64 = UINT16_MAX;
	static int32_t t15 = 23570102;

	t15 = ((x61==x62)&(x63<x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x65 = 14608U;
	int32_t x66 = INT32_MIN;
	volatile int32_t t16 = -1;

	t16 = ((x65==x66)&(x67<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -7;
	int32_t x70 = -397663564;
	int32_t x71 = -1;
	static uint64_t x72 = UINT64_MAX;
	int32_t t17 = 2444;

	t17 = ((x69==x70)&(x71<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = INT32_MIN;
	static int32_t x75 = -1;
	int64_t x76 = -1LL;

	t18 = ((x73==x74)&(x75<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 13797U;
	volatile uint8_t x78 = 7U;
	int16_t x79 = 0;
	volatile int32_t t19 = -4556;

	t19 = ((x77==x78)&(x79<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = -1;
	volatile int64_t x82 = INT64_MIN;
	volatile uint8_t x83 = UINT8_MAX;
	int16_t x84 = INT16_MIN;
	int32_t t20 = -205255;

	t20 = ((x81==x82)&(x83<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x85 = 30U;
	volatile uint64_t x87 = 10329648430LLU;
	int16_t x88 = 6;
	volatile int32_t t21 = 3;

	t21 = ((x85==x86)&(x87<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x89 = 48406LLU;
	uint64_t x90 = 10LLU;
	int64_t x91 = 10167850LL;
	uint16_t x92 = 2975U;

	t22 = ((x89==x90)&(x91<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x94 = -21;
	volatile uint8_t x95 = UINT8_MAX;
	volatile int8_t x96 = INT8_MIN;
	volatile int32_t t23 = -1;

	t23 = ((x93==x94)&(x95<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x100 = 340476624U;
	int32_t t24 = 13035;

	t24 = ((x97==x98)&(x99<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x101 = 59U;
	int32_t x102 = -1;
	volatile uint8_t x103 = 7U;
	volatile int16_t x104 = INT16_MIN;

	t25 = ((x101==x102)&(x103<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 7779081232263971268LLU;
	volatile int32_t x106 = 50716;
	int32_t x108 = -1;

	t26 = ((x105==x106)&(x107<x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -1;
	int16_t x110 = -201;
	uint32_t x111 = 469U;
	int64_t x112 = -1LL;
	int32_t t27 = 2;

	t27 = ((x109==x110)&(x111<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	uint8_t x114 = UINT8_MAX;
	int32_t x115 = INT32_MIN;
	volatile int16_t x116 = -1;
	volatile int32_t t28 = 2082837;

	t28 = ((x113==x114)&(x115<x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x117 = 47U;
	static uint64_t x118 = 70339949802LLU;
	int32_t x119 = INT32_MAX;
	int8_t x120 = INT8_MAX;

	t29 = ((x117==x118)&(x119<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = INT64_MIN;
	int16_t x122 = -1;
	int32_t x124 = INT32_MAX;
	int32_t t30 = 25;

	t30 = ((x121==x122)&(x123<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = INT32_MIN;
	int8_t x126 = -60;
	uint32_t x127 = 152U;
	volatile int64_t x128 = INT64_MAX;
	int32_t t31 = 15416985;

	t31 = ((x125==x126)&(x127<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x130 = INT32_MIN;
	int64_t x132 = INT64_MIN;

	t32 = ((x129==x130)&(x131<x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	int8_t x135 = 1;
	int64_t x136 = INT64_MAX;

	t33 = ((x133==x134)&(x135<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 2U;
	uint8_t x139 = 69U;
	int16_t x140 = -6;
	int32_t t34 = 83580;

	t34 = ((x137==x138)&(x139<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	uint32_t x142 = UINT32_MAX;
	int32_t x143 = INT32_MIN;
	int16_t x144 = INT16_MIN;
	volatile int32_t t35 = -1628;

	t35 = ((x141==x142)&(x143<x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 81U;
	volatile int16_t x146 = -1;
	int64_t x147 = -408881465493LL;
	int32_t x148 = INT32_MAX;
	static volatile int32_t t36 = 3526339;

	t36 = ((x145==x146)&(x147<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	uint16_t x150 = 0U;
	int32_t x151 = INT32_MIN;
	int8_t x152 = INT8_MIN;
	int32_t t37 = -162956;

	t37 = ((x149==x150)&(x151<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint64_t x153 = 58LLU;
	uint32_t x154 = 180555562U;
	volatile int64_t x155 = INT64_MIN;
	static volatile int32_t t38 = -8035;

	t38 = ((x153==x154)&(x155<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x158 = INT64_MAX;
	static int8_t x159 = INT8_MAX;
	uint8_t x160 = UINT8_MAX;
	static int32_t t39 = -187;

	t39 = ((x157==x158)&(x159<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = INT8_MAX;
	static volatile int16_t x162 = INT16_MAX;
	volatile uint32_t x163 = 127U;
	int16_t x164 = 2;
	int32_t t40 = 0;

	t40 = ((x161==x162)&(x163<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -96LL;
	int8_t x166 = INT8_MIN;
	int8_t x167 = INT8_MAX;
	uint32_t x168 = UINT32_MAX;
	volatile int32_t t41 = -9358928;

	t41 = ((x165==x166)&(x167<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = 0;
	static uint8_t x170 = 1U;
	volatile int64_t x171 = 808280106LL;
	volatile int64_t x172 = INT64_MIN;

	t42 = ((x169==x170)&(x171<x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x173 = INT8_MAX;
	volatile uint16_t x174 = UINT16_MAX;
	uint8_t x175 = 1U;
	int32_t t43 = -30;

	t43 = ((x173==x174)&(x175<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x177 = INT64_MIN;
	uint32_t x178 = 2138969094U;
	uint8_t x179 = 126U;
	int32_t x180 = -1;

	t44 = ((x177==x178)&(x179<x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x181 = -18;
	static int32_t x182 = INT32_MIN;
	int64_t x183 = 57LL;
	volatile uint64_t x184 = 435035124193LLU;

	t45 = ((x181==x182)&(x183<x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	uint8_t x186 = 1U;
	int8_t x187 = INT8_MAX;
	int32_t t46 = -111;

	t46 = ((x185==x186)&(x187<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -1LL;
	int8_t x190 = INT8_MIN;
	int64_t x192 = INT64_MIN;
	volatile int32_t t47 = -3;

	t47 = ((x189==x190)&(x191<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x193 = INT64_MIN;
	volatile int8_t x194 = INT8_MIN;
	int64_t x195 = 99385566738152882LL;
	static int64_t x196 = INT64_MAX;
	volatile int32_t t48 = 123408;

	t48 = ((x193==x194)&(x195<x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 137U;
	int8_t x198 = 0;

	t49 = ((x197==x198)&(x199<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x201 = INT64_MIN;
	static int8_t x203 = -1;
	uint64_t x204 = 31246476113LLU;
	int32_t t50 = -14303243;

	t50 = ((x201==x202)&(x203<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	int64_t x206 = INT64_MIN;
	static volatile int16_t x207 = INT16_MIN;
	volatile int8_t x208 = INT8_MIN;

	t51 = ((x205==x206)&(x207<x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = INT8_MIN;
	volatile uint8_t x210 = 0U;
	int16_t x211 = -1;
	uint32_t x212 = UINT32_MAX;
	volatile int32_t t52 = -11152820;

	t52 = ((x209==x210)&(x211<x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x213 = 14721489043644696LLU;
	static volatile uint32_t x215 = 19465702U;
	int64_t x216 = -33228LL;
	int32_t t53 = -1;

	t53 = ((x213==x214)&(x215<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	int32_t x218 = INT32_MIN;
	int64_t x219 = -8554LL;
	uint64_t x220 = 0LLU;
	volatile int32_t t54 = 1909;

	t54 = ((x217==x218)&(x219<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x221 = 4U;
	static int8_t x222 = -28;
	int32_t x223 = INT32_MAX;
	uint32_t x224 = 466U;
	int32_t t55 = -225096980;

	t55 = ((x221==x222)&(x223<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x225 = 1696265271993338698LL;
	int16_t x226 = 30;
	int32_t t56 = -3;

	t56 = ((x225==x226)&(x227<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MIN;
	uint16_t x230 = 3892U;
	volatile uint32_t x231 = UINT32_MAX;
	int32_t x232 = INT32_MAX;

	t57 = ((x229==x230)&(x231<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x233 = UINT16_MAX;
	int8_t x234 = INT8_MAX;
	uint8_t x236 = 3U;
	volatile int32_t t58 = 4790;

	t58 = ((x233==x234)&(x235<x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 67U;
	volatile uint64_t x238 = 1011192LLU;
	int64_t x240 = 97678094984LL;
	static int32_t t59 = 3930;

	t59 = ((x237==x238)&(x239<x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x241 = -361;
	int16_t x242 = INT16_MIN;
	uint64_t x243 = 3LLU;
	int64_t x244 = -1LL;
	static int32_t t60 = -1361377;

	t60 = ((x241==x242)&(x243<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -3213;
	int8_t x246 = -10;
	int16_t x248 = -29;
	int32_t t61 = 569974;

	t61 = ((x245==x246)&(x247<x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MAX;
	volatile int16_t x250 = -11;
	int32_t x251 = INT32_MIN;
	uint32_t x252 = 179041U;
	volatile int32_t t62 = -10448;

	t62 = ((x249==x250)&(x251<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x253 = 67U;
	int64_t x255 = INT64_MAX;
	uint64_t x256 = 759139722LLU;
	volatile int32_t t63 = 3752747;

	t63 = ((x253==x254)&(x255<x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	int16_t x258 = INT16_MIN;
	int16_t x260 = -1;
	volatile int32_t t64 = -2680;

	t64 = ((x257==x258)&(x259<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -1;
	int16_t x262 = INT16_MIN;
	int8_t x263 = INT8_MIN;
	int8_t x264 = -1;
	int32_t t65 = 5678;

	t65 = ((x261==x262)&(x263<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MAX;
	int16_t x266 = INT16_MIN;
	int16_t x267 = INT16_MIN;
	int16_t x268 = -3;
	int32_t t66 = -213;

	t66 = ((x265==x266)&(x267<x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x269 = INT64_MAX;
	volatile int32_t x270 = INT32_MIN;
	int8_t x271 = INT8_MIN;
	volatile int32_t x272 = -1;
	int32_t t67 = 1;

	t67 = ((x269==x270)&(x271<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x276 = 0U;

	t68 = ((x273==x274)&(x275<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x278 = INT16_MAX;
	int8_t x279 = -1;
	uint32_t x280 = 8076U;
	volatile int32_t t69 = -462;

	t69 = ((x277==x278)&(x279<x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	int64_t x282 = INT64_MIN;
	int64_t x283 = 64LL;
	static int32_t x284 = 45268;
	volatile int32_t t70 = 119414;

	t70 = ((x281==x282)&(x283<x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MIN;
	static int8_t x287 = INT8_MIN;
	static volatile uint64_t x288 = 32049LLU;
	int32_t t71 = 844470;

	t71 = ((x285==x286)&(x287<x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = INT16_MIN;
	uint64_t x290 = UINT64_MAX;
	volatile uint8_t x291 = 41U;
	int8_t x292 = -1;
	static int32_t t72 = -19820;

	t72 = ((x289==x290)&(x291<x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 1U;
	volatile int64_t x294 = -15068017575092671LL;
	static uint32_t x296 = UINT32_MAX;

	t73 = ((x293==x294)&(x295<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = UINT32_MAX;
	volatile int16_t x298 = INT16_MIN;
	static uint32_t x299 = 184213839U;
	static uint64_t x300 = 9876534294184LLU;
	int32_t t74 = -66473;

	t74 = ((x297==x298)&(x299<x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x301 = UINT64_MAX;
	uint32_t x302 = UINT32_MAX;
	int32_t x304 = 7;

	t75 = ((x301==x302)&(x303<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x306 = INT8_MIN;
	int64_t x307 = INT64_MAX;
	uint32_t x308 = 94U;
	int32_t t76 = 104;

	t76 = ((x305==x306)&(x307<x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	int64_t x310 = -173448LL;
	static volatile int32_t t77 = 62124926;

	t77 = ((x309==x310)&(x311<x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x313 = INT16_MIN;
	int32_t x314 = 4070023;
	static volatile int16_t x315 = -1;
	int32_t x316 = -1;
	volatile int32_t t78 = 86183730;

	t78 = ((x313==x314)&(x315<x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x317 = UINT64_MAX;
	int16_t x318 = -123;
	int32_t x319 = 175;
	int64_t x320 = INT64_MIN;
	int32_t t79 = -303716402;

	t79 = ((x317==x318)&(x319<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 46U;
	int32_t x322 = -12;
	volatile uint16_t x323 = UINT16_MAX;
	volatile int32_t t80 = -27911263;

	t80 = ((x321==x322)&(x323<x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MAX;
	volatile int64_t x326 = INT64_MIN;
	static int16_t x327 = 2;
	int8_t x328 = INT8_MAX;
	volatile int32_t t81 = 18;

	t81 = ((x325==x326)&(x327<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -2936074;
	int16_t x330 = INT16_MIN;
	uint16_t x331 = 465U;
	int8_t x332 = 1;
	static int32_t t82 = 0;

	t82 = ((x329==x330)&(x331<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x335 = UINT64_MAX;
	static volatile int32_t t83 = -105833579;

	t83 = ((x333==x334)&(x335<x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -1LL;
	int32_t x338 = -48;
	volatile int32_t x339 = INT32_MIN;
	uint32_t x340 = UINT32_MAX;
	int32_t t84 = -14612;

	t84 = ((x337==x338)&(x339<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = 235U;
	int16_t x342 = -3548;
	uint8_t x343 = 0U;
	int16_t x344 = INT16_MIN;
	volatile int32_t t85 = -15;

	t85 = ((x341==x342)&(x343<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	static uint32_t x347 = UINT32_MAX;
	static uint32_t x348 = 42U;

	t86 = ((x345==x346)&(x347<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x349 = INT32_MIN;
	static int32_t x351 = -12;
	static int64_t x352 = 365892LL;
	volatile int32_t t87 = -444597;

	t87 = ((x349==x350)&(x351<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	uint8_t x354 = 117U;
	int8_t x356 = INT8_MIN;
	volatile int32_t t88 = 2963;

	t88 = ((x353==x354)&(x355<x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = -1;
	static int8_t x358 = 49;
	volatile int16_t x359 = INT16_MIN;
	volatile int32_t t89 = 54150510;

	t89 = ((x357==x358)&(x359<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = -1849883;
	uint8_t x362 = 0U;
	volatile int8_t x364 = 1;
	volatile int32_t t90 = -10878;

	t90 = ((x361==x362)&(x363<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x367 = -177813309644496LL;
	uint64_t x368 = 3239462456150783LLU;
	static volatile int32_t t91 = -4;

	t91 = ((x365==x366)&(x367<x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	int64_t x370 = -750504399183880547LL;
	uint8_t x371 = 2U;
	static uint16_t x372 = 25545U;
	volatile int32_t t92 = -1;

	t92 = ((x369==x370)&(x371<x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = -1;
	static volatile int64_t x374 = -83535160973377LL;
	volatile int64_t x375 = INT64_MIN;
	uint32_t x376 = 31U;
	volatile int32_t t93 = 5870;

	t93 = ((x373==x374)&(x375<x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x378 = INT32_MIN;
	int32_t x379 = INT32_MIN;
	int64_t x380 = -1LL;
	volatile int32_t t94 = -584;

	t94 = ((x377==x378)&(x379<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x381 = INT16_MIN;
	uint16_t x383 = 1727U;
	volatile int32_t t95 = -1;

	t95 = ((x381==x382)&(x383<x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x385 = 5015LLU;
	uint64_t x386 = 287LLU;
	int32_t x387 = 277240;
	int64_t x388 = INT64_MIN;
	volatile int32_t t96 = 52472531;

	t96 = ((x385==x386)&(x387<x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x389 = 78974U;
	static int8_t x391 = INT8_MIN;
	static uint64_t x392 = 13596558594679LLU;
	int32_t t97 = 189;

	t97 = ((x389==x390)&(x391<x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	uint64_t x394 = UINT64_MAX;
	uint8_t x395 = 89U;
	int16_t x396 = -133;
	int32_t t98 = -3507678;

	t98 = ((x393==x394)&(x395<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MAX;
	int16_t x398 = INT16_MAX;
	uint32_t x399 = 210514487U;
	int32_t x400 = -1;
	static int32_t t99 = 418123725;

	t99 = ((x397==x398)&(x399<x400));

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

