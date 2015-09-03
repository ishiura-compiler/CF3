#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x1 = 726;
uint16_t x2 = 3U;
int8_t x3 = 1;
static uint16_t x6 = UINT16_MAX;
static volatile uint32_t x12 = 160863122U;
volatile uint32_t t2 = 3455578U;
volatile int32_t x16 = -1;
static volatile int8_t x17 = 5;
static uint32_t x19 = 4727U;
static int8_t x20 = -27;
uint64_t x28 = 27906LLU;
uint8_t x30 = 117U;
int32_t x33 = INT32_MIN;
int32_t x49 = INT32_MIN;
int8_t x54 = 17;
uint32_t x56 = UINT32_MAX;
int32_t x57 = INT32_MIN;
uint32_t x60 = 1259U;
int16_t x61 = -1549;
uint32_t x62 = 214U;
int32_t x63 = INT32_MIN;
uint8_t x67 = UINT8_MAX;
int16_t x68 = INT16_MAX;
int16_t x70 = INT16_MAX;
uint16_t x86 = UINT16_MAX;
static int64_t x90 = -21233128841456LL;
int8_t x93 = INT8_MAX;
static volatile int8_t x98 = INT8_MIN;
volatile int64_t t25 = -1604079753LL;
volatile int16_t x107 = 3;
static volatile int8_t x113 = 14;
int16_t x114 = INT16_MIN;
volatile int64_t t28 = -572814LL;
static uint16_t x120 = 6U;
static uint16_t x124 = 226U;
int32_t t30 = 24051941;
static volatile uint16_t x125 = 2720U;
int64_t x127 = -114589LL;
int32_t t31 = 143282585;
uint64_t x135 = 336923LLU;
int32_t t33 = 1;
static int8_t x137 = INT8_MIN;
static int16_t x142 = INT16_MAX;
static volatile int8_t x146 = -1;
uint16_t x155 = UINT16_MAX;
int16_t x156 = INT16_MIN;
static int8_t x157 = 0;
volatile int8_t x163 = 21;
volatile uint16_t x166 = 30U;
int8_t x184 = INT8_MIN;
int16_t x189 = -10473;
static int32_t x197 = -5758;
int32_t t49 = 5819;
volatile int64_t t50 = 25923LL;
static int16_t x206 = -436;
volatile uint32_t x207 = UINT32_MAX;
uint64_t t56 = 884913079320388LLU;
int32_t t57 = -313;
int8_t x233 = -1;
static int64_t x239 = INT64_MIN;
uint8_t x240 = UINT8_MAX;
volatile int32_t t60 = 11259;
uint8_t x250 = 59U;
uint8_t x253 = 7U;
int16_t x258 = -1;
uint8_t x262 = UINT8_MAX;
uint64_t x272 = 122213164085LLU;
int32_t x273 = INT32_MIN;
int8_t x275 = INT8_MIN;
int16_t x286 = INT16_MAX;
int32_t x296 = -8809523;
volatile int64_t x303 = -424441970LL;
int16_t x305 = INT16_MIN;
int32_t x309 = INT32_MIN;
int32_t t77 = -1467976;
int16_t x323 = INT16_MIN;
static volatile int16_t x324 = -1;
int32_t t81 = -6;
int32_t x332 = INT32_MIN;
volatile uint32_t t82 = 10U;
static int16_t x334 = INT16_MIN;
uint16_t x335 = 175U;
uint32_t x336 = 403U;
volatile int32_t x359 = -1;
int32_t x360 = -97249;
int64_t x365 = -1LL;
static int32_t x368 = -1;
volatile int64_t t91 = -30584256LL;
static int32_t x374 = INT32_MIN;
int64_t x377 = -1LL;
int64_t x385 = -1LL;
static int64_t x391 = INT64_MIN;
static uint64_t t97 = 132LLU;
int8_t x394 = INT8_MAX;
static volatile uint8_t x399 = 38U;


void f0(void) {
	uint32_t x4 = 32060U;
	static volatile uint32_t t0 = 32U;

	t0 = ((x1^(x2<=x3))%x4);

	if (t0 != 726U) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = 849853LL;
	int32_t x7 = INT32_MIN;
	static volatile uint8_t x8 = 5U;
	int64_t t1 = -35330973LL;

	t1 = ((x5^(x6<=x7))%x8);

	if (t1 != 3LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = -1;
	static int16_t x10 = -1;
	uint64_t x11 = UINT64_MAX;

	t2 = ((x9^(x10<=x11))%x12);

	if (t2 != 112526122U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int16_t x14 = -9;
	int64_t x15 = INT64_MAX;
	int64_t t3 = -51LL;

	t3 = ((x13^(x14<=x15))%x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = -14;
	volatile int32_t t4 = 45;

	t4 = ((x17^(x18<=x19))%x20);

	if (t4 != 5) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	int8_t x22 = INT8_MIN;
	int64_t x23 = 48953554373929LL;
	static uint16_t x24 = 14474U;
	int32_t t5 = -14862;

	t5 = ((x21^(x22<=x23))%x24);

	if (t5 != -2) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = -10;
	int16_t x26 = -1;
	static int32_t x27 = -1;
	uint64_t t6 = 27621885268840LLU;

	t6 = ((x25^(x26<=x27))%x28);

	if (t6 != 25723LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	volatile uint32_t x31 = UINT32_MAX;
	static int16_t x32 = 13;
	volatile uint64_t t7 = 117530050428800LLU;

	t7 = ((x29^(x30<=x31))%x32);

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x34 = 82U;
	uint64_t x35 = UINT64_MAX;
	int32_t x36 = INT32_MIN;
	int32_t t8 = 118;

	t8 = ((x33^(x34<=x35))%x36);

	if (t8 != -2147483647) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = -100293525;
	uint32_t x38 = 1U;
	volatile uint32_t x39 = UINT32_MAX;
	uint32_t x40 = 935650U;
	uint32_t t9 = 6U;

	t9 = ((x37^(x38<=x39))%x40);

	if (t9 != 154820U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	volatile uint16_t x42 = 167U;
	volatile int64_t x43 = -1LL;
	static int64_t x44 = 5919596678417491LL;
	int64_t t10 = 3981646060558742LL;

	t10 = ((x41^(x42<=x43))%x44);

	if (t10 != 32767LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = INT64_MIN;
	uint64_t x46 = 6780986773725665LLU;
	int8_t x47 = -23;
	static int8_t x48 = INT8_MAX;
	volatile int64_t t11 = -23304372631313LL;

	t11 = ((x45^(x46<=x47))%x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = -56;
	volatile int16_t x51 = INT16_MIN;
	int16_t x52 = INT16_MAX;
	int32_t t12 = -334825408;

	t12 = ((x49^(x50<=x51))%x52);

	if (t12 != -2) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	uint32_t x55 = UINT32_MAX;
	volatile int64_t t13 = 82367483691855LL;

	t13 = ((x53^(x54<=x55))%x56);

	if (t13 != -2147483647LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = -1;
	int32_t x59 = -1;
	static uint32_t t14 = 18848U;

	t14 = ((x57^(x58<=x59))%x60);

	if (t14 != 1054U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x64 = 10869LL;
	volatile int64_t t15 = 3880038162LL;

	t15 = ((x61^(x62<=x63))%x64);

	if (t15 != -1550LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x65 = 1778U;
	uint8_t x66 = UINT8_MAX;
	volatile int32_t t16 = 28006;

	t16 = ((x65^(x66<=x67))%x68);

	if (t16 != 1779) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = UINT16_MAX;
	uint64_t x71 = 7176379298536910LLU;
	static uint32_t x72 = 710485U;
	uint32_t t17 = 1557575809U;

	t17 = ((x69^(x70<=x71))%x72);

	if (t17 != 65534U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 50U;
	int32_t x74 = 31376675;
	volatile int8_t x75 = -1;
	uint16_t x76 = 7U;
	int32_t t18 = 4751430;

	t18 = ((x73^(x74<=x75))%x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x77 = 43U;
	static int32_t x78 = INT32_MIN;
	int64_t x79 = INT64_MAX;
	int32_t x80 = INT32_MIN;
	int32_t t19 = -305;

	t19 = ((x77^(x78<=x79))%x80);

	if (t19 != 42) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 12233U;
	uint16_t x82 = 197U;
	static int16_t x83 = -835;
	static volatile uint8_t x84 = 17U;
	volatile int32_t t20 = 277797;

	t20 = ((x81^(x82<=x83))%x84);

	if (t20 != 10) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MAX;
	uint16_t x87 = 2U;
	int32_t x88 = -1;
	static volatile int32_t t21 = -59634;

	t21 = ((x85^(x86<=x87))%x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x89 = UINT16_MAX;
	int16_t x91 = INT16_MAX;
	volatile int32_t x92 = INT32_MIN;
	int32_t t22 = -47;

	t22 = ((x89^(x90<=x91))%x92);

	if (t22 != 65534) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x94 = 3744U;
	static volatile uint64_t x95 = UINT64_MAX;
	static int16_t x96 = -14896;
	int32_t t23 = -284837;

	t23 = ((x93^(x94<=x95))%x96);

	if (t23 != 126) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	static int64_t x99 = -8642690LL;
	uint16_t x100 = 3U;
	volatile int64_t t24 = -1120808LL;

	t24 = ((x97^(x98<=x99))%x100);

	if (t24 != -2LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = -4018LL;
	int8_t x102 = 10;
	int64_t x103 = INT64_MIN;
	volatile int16_t x104 = INT16_MIN;

	t25 = ((x101^(x102<=x103))%x104);

	if (t25 != -4018LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = 0;
	volatile int8_t x106 = INT8_MIN;
	int32_t x108 = INT32_MIN;
	volatile int32_t t26 = -2429;

	t26 = ((x105^(x106<=x107))%x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = 864211;
	int16_t x110 = INT16_MAX;
	uint64_t x111 = 232000958452423245LLU;
	int32_t x112 = INT32_MIN;
	volatile int32_t t27 = 14143;

	t27 = ((x109^(x110<=x111))%x112);

	if (t27 != 864210) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x115 = UINT16_MAX;
	volatile int64_t x116 = -1LL;

	t28 = ((x113^(x114<=x115))%x116);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 875363239U;
	int8_t x118 = INT8_MIN;
	volatile uint32_t x119 = 30075U;
	uint32_t t29 = 30825552U;

	t29 = ((x117^(x118<=x119))%x120);

	if (t29 != 1U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	int64_t x122 = -1LL;
	int16_t x123 = INT16_MAX;

	t30 = ((x121^(x122<=x123))%x124);

	if (t30 != -127) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x126 = 511895510403122LL;
	static int32_t x128 = INT32_MIN;

	t31 = ((x125^(x126<=x127))%x128);

	if (t31 != 2720) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x129 = UINT64_MAX;
	int32_t x130 = -48154482;
	int64_t x131 = -183815639LL;
	static uint8_t x132 = UINT8_MAX;
	static uint64_t t32 = 99543805514LLU;

	t32 = ((x129^(x130<=x131))%x132);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x133 = 11U;
	volatile uint8_t x134 = 1U;
	static int32_t x136 = -817938;

	t33 = ((x133^(x134<=x135))%x136);

	if (t33 != 10) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x138 = 777901800LLU;
	int16_t x139 = INT16_MAX;
	volatile int64_t x140 = INT64_MAX;
	int64_t t34 = 1076511LL;

	t34 = ((x137^(x138<=x139))%x140);

	if (t34 != -128LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	int64_t x143 = INT64_MIN;
	uint32_t x144 = UINT32_MAX;
	static volatile uint32_t t35 = 98339U;

	t35 = ((x141^(x142<=x143))%x144);

	if (t35 != 4294967168U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -1;
	int8_t x147 = INT8_MAX;
	uint64_t x148 = 1332650201831LLU;
	static volatile uint64_t t36 = 251369330807322LLU;

	t36 = ((x145^(x146<=x147))%x148);

	if (t36 != 82434574964LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = UINT8_MAX;
	volatile uint32_t x150 = 0U;
	int32_t x151 = INT32_MAX;
	int8_t x152 = 3;
	static volatile int32_t t37 = -22839;

	t37 = ((x149^(x150<=x151))%x152);

	if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = INT64_MAX;
	int64_t x154 = -238518495597755494LL;
	volatile int64_t t38 = 62932LL;

	t38 = ((x153^(x154<=x155))%x156);

	if (t38 != 32766LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x158 = INT64_MAX;
	uint64_t x159 = 44714521090396761LLU;
	int32_t x160 = 9;
	volatile int32_t t39 = 5139814;

	t39 = ((x157^(x158<=x159))%x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x161 = 0U;
	int32_t x162 = INT32_MIN;
	int8_t x164 = INT8_MAX;
	int32_t t40 = -16684171;

	t40 = ((x161^(x162<=x163))%x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	uint8_t x167 = 1U;
	int8_t x168 = 15;
	int32_t t41 = -10;

	t41 = ((x165^(x166<=x167))%x168);

	if (t41 != -8) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	uint64_t x170 = 8LLU;
	uint64_t x171 = UINT64_MAX;
	int16_t x172 = -1;
	int32_t t42 = -422533986;

	t42 = ((x169^(x170<=x171))%x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = UINT16_MAX;
	int64_t x174 = -1LL;
	int16_t x175 = INT16_MIN;
	int16_t x176 = -1;
	volatile int32_t t43 = 5;

	t43 = ((x173^(x174<=x175))%x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 450641400428763LLU;
	int16_t x178 = -1;
	int8_t x179 = INT8_MIN;
	volatile int8_t x180 = INT8_MIN;
	uint64_t t44 = 1527LLU;

	t44 = ((x177^(x178<=x179))%x180);

	if (t44 != 450641400428763LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	int64_t x182 = -1LL;
	int64_t x183 = -766442262642300LL;
	volatile int64_t t45 = -2219506325674674906LL;

	t45 = ((x181^(x182<=x183))%x184);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x185 = INT8_MAX;
	volatile int64_t x186 = 624139LL;
	volatile uint32_t x187 = UINT32_MAX;
	int32_t x188 = -7680;
	static volatile int32_t t46 = -1276516;

	t46 = ((x185^(x186<=x187))%x188);

	if (t46 != 126) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x190 = INT32_MIN;
	int32_t x191 = INT32_MAX;
	static volatile uint8_t x192 = 58U;
	volatile int32_t t47 = -10;

	t47 = ((x189^(x190<=x191))%x192);

	if (t47 != -34) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint8_t x193 = 2U;
	volatile uint64_t x194 = UINT64_MAX;
	static int8_t x195 = -1;
	int32_t x196 = INT32_MIN;
	int32_t t48 = -39519;

	t48 = ((x193^(x194<=x195))%x196);

	if (t48 != 3) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x198 = 0;
	static int16_t x199 = -118;
	int8_t x200 = 1;

	t49 = ((x197^(x198<=x199))%x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 44U;
	uint16_t x202 = 392U;
	uint64_t x203 = UINT64_MAX;
	int64_t x204 = INT64_MIN;

	t50 = ((x201^(x202<=x203))%x204);

	if (t50 != 45LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -24460450304LL;
	int64_t x208 = INT64_MIN;
	int64_t t51 = -1970812LL;

	t51 = ((x205^(x206<=x207))%x208);

	if (t51 != -24460450303LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 6U;
	int64_t x210 = -6LL;
	uint32_t x211 = 5663621U;
	int16_t x212 = -683;
	int32_t t52 = -1314986;

	t52 = ((x209^(x210<=x211))%x212);

	if (t52 != 7) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	uint32_t x214 = 73690U;
	static int16_t x215 = -33;
	volatile int64_t x216 = INT64_MIN;
	int64_t t53 = -673674458132LL;

	t53 = ((x213^(x214<=x215))%x216);

	if (t53 != -32767LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 1177987007U;
	volatile int32_t x218 = -1;
	uint8_t x219 = 0U;
	static int16_t x220 = -963;
	uint32_t t54 = 10260U;

	t54 = ((x217^(x218<=x219))%x220);

	if (t54 != 1177987006U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 985U;
	volatile int8_t x222 = INT8_MIN;
	int32_t x223 = -1;
	uint64_t x224 = UINT64_MAX;
	static volatile uint64_t t55 = 976183LLU;

	t55 = ((x221^(x222<=x223))%x224);

	if (t55 != 984LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	int16_t x226 = -1;
	int8_t x227 = INT8_MIN;
	uint64_t x228 = 856279493098LLU;

	t56 = ((x225^(x226<=x227))%x228);

	if (t56 != 581848647288LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 13U;
	int8_t x230 = 1;
	volatile uint64_t x231 = 10457339316153LLU;
	uint8_t x232 = 13U;

	t57 = ((x229^(x230<=x231))%x232);

	if (t57 != 12) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x234 = 11060350;
	uint8_t x235 = 6U;
	int64_t x236 = 166583035LL;
	static int64_t t58 = -389063470361003LL;

	t58 = ((x233^(x234<=x235))%x236);

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint64_t x237 = 3114LLU;
	static int64_t x238 = INT64_MAX;
	uint64_t t59 = 16448208680082LLU;

	t59 = ((x237^(x238<=x239))%x240);

	if (t59 != 54LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = 0U;
	int64_t x242 = INT64_MAX;
	static uint16_t x243 = 341U;
	int16_t x244 = 1024;

	t60 = ((x241^(x242<=x243))%x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MAX;
	int64_t x246 = -7640LL;
	uint64_t x247 = UINT64_MAX;
	static volatile int8_t x248 = -5;
	static int64_t t61 = -10829785716LL;

	t61 = ((x245^(x246<=x247))%x248);

	if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -1;
	uint32_t x251 = UINT32_MAX;
	int8_t x252 = -9;
	static int32_t t62 = -10349;

	t62 = ((x249^(x250<=x251))%x252);

	if (t62 != -2) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x254 = INT32_MIN;
	int64_t x255 = INT64_MIN;
	int32_t x256 = -16;
	volatile int32_t t63 = -1667637;

	t63 = ((x253^(x254<=x255))%x256);

	if (t63 != 7) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x257 = 3358U;
	int32_t x259 = -674;
	int8_t x260 = -3;
	volatile uint32_t t64 = 2489U;

	t64 = ((x257^(x258<=x259))%x260);

	if (t64 != 3358U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = UINT32_MAX;
	volatile int64_t x263 = INT64_MAX;
	uint32_t x264 = 10U;
	static volatile uint32_t t65 = 218204388U;

	t65 = ((x261^(x262<=x263))%x264);

	if (t65 != 4U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x265 = UINT16_MAX;
	int64_t x266 = -1LL;
	static uint64_t x267 = UINT64_MAX;
	static uint16_t x268 = UINT16_MAX;
	volatile int32_t t66 = -1;

	t66 = ((x265^(x266<=x267))%x268);

	if (t66 != 65534) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	static int64_t x270 = 31643532302516442LL;
	int16_t x271 = INT16_MIN;
	volatile uint64_t t67 = 81323LLU;

	t67 = ((x269^(x270<=x271))%x272);

	if (t67 != 28136320398LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x274 = -1;
	int64_t x276 = INT64_MAX;
	int64_t t68 = -1LL;

	t68 = ((x273^(x274<=x275))%x276);

	if (t68 != -2147483648LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MIN;
	int64_t x278 = INT64_MIN;
	int32_t x279 = 28885;
	uint32_t x280 = 15481428U;
	volatile int64_t t69 = 284658453396022633LL;

	t69 = ((x277^(x278<=x279))%x280);

	if (t69 != -5903431LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x281 = 12906673077372LLU;
	volatile int16_t x282 = INT16_MIN;
	int8_t x283 = -1;
	int32_t x284 = INT32_MIN;
	volatile uint64_t t70 = 21317622876032628LLU;

	t70 = ((x281^(x282<=x283))%x284);

	if (t70 != 12906673077373LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x285 = 2U;
	uint8_t x287 = 4U;
	volatile int64_t x288 = -1LL;
	volatile int64_t t71 = -2LL;

	t71 = ((x285^(x286<=x287))%x288);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x289 = INT16_MIN;
	uint16_t x290 = 0U;
	int8_t x291 = INT8_MIN;
	uint16_t x292 = UINT16_MAX;
	int32_t t72 = -882173;

	t72 = ((x289^(x290<=x291))%x292);

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x293 = 4066U;
	int8_t x294 = INT8_MIN;
	int32_t x295 = 0;
	volatile int32_t t73 = -66736;

	t73 = ((x293^(x294<=x295))%x296);

	if (t73 != 4067) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = 1;
	uint32_t x298 = 277652U;
	int32_t x299 = -1;
	uint16_t x300 = 2U;
	int32_t t74 = -88;

	t74 = ((x297^(x298<=x299))%x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	volatile int64_t x302 = -1LL;
	int64_t x304 = INT64_MIN;
	int64_t t75 = -266403214LL;

	t75 = ((x301^(x302<=x303))%x304);

	if (t75 != -128LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x306 = INT8_MIN;
	uint32_t x307 = 10107U;
	int8_t x308 = -1;
	volatile int32_t t76 = 88;

	t76 = ((x305^(x306<=x307))%x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x310 = INT16_MIN;
	uint64_t x311 = UINT64_MAX;
	volatile int16_t x312 = INT16_MIN;

	t77 = ((x309^(x310<=x311))%x312);

	if (t77 != -32767) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 3U;
	static int32_t x314 = 17733418;
	static volatile int32_t x315 = INT32_MAX;
	static volatile int32_t x316 = INT32_MIN;
	int32_t t78 = 3;

	t78 = ((x313^(x314<=x315))%x316);

	if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x317 = 7U;
	volatile uint16_t x318 = 14U;
	int8_t x319 = 30;
	uint32_t x320 = 3343967U;
	volatile uint32_t t79 = 1377304U;

	t79 = ((x317^(x318<=x319))%x320);

	if (t79 != 6U) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x321 = -177;
	int16_t x322 = 79;
	int32_t t80 = 12251034;

	t80 = ((x321^(x322<=x323))%x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = -1;
	int16_t x326 = -1;
	int32_t x327 = INT32_MIN;
	int32_t x328 = 39;

	t81 = ((x325^(x326<=x327))%x328);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x329 = 285027U;
	int64_t x330 = INT64_MAX;
	int32_t x331 = INT32_MIN;

	t82 = ((x329^(x330<=x331))%x332);

	if (t82 != 285027U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = UINT64_MAX;
	uint64_t t83 = 1155405468427185LLU;

	t83 = ((x333^(x334<=x335))%x336);

	if (t83 != 14LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x337 = 48U;
	static int16_t x338 = -1;
	volatile uint64_t x339 = 2756431685503LLU;
	int8_t x340 = INT8_MIN;
	volatile int32_t t84 = -16286980;

	t84 = ((x337^(x338<=x339))%x340);

	if (t84 != 48) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	int64_t x342 = INT64_MIN;
	int32_t x343 = -111062651;
	int32_t x344 = -1;
	int32_t t85 = -6782;

	t85 = ((x341^(x342<=x343))%x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MAX;
	static uint16_t x346 = 2U;
	volatile int8_t x347 = -57;
	uint32_t x348 = 2622U;
	static volatile uint32_t t86 = 938938085U;

	t86 = ((x345^(x346<=x347))%x348);

	if (t86 != 127U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -1;
	int32_t x350 = -1;
	uint16_t x351 = 3960U;
	int32_t x352 = INT32_MIN;
	static int32_t t87 = 13812454;

	t87 = ((x349^(x350<=x351))%x352);

	if (t87 != -2) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -58074491097590LL;
	static int64_t x354 = -1LL;
	int8_t x355 = INT8_MIN;
	uint8_t x356 = 12U;
	int64_t t88 = 3087804351702907762LL;

	t88 = ((x353^(x354<=x355))%x356);

	if (t88 != -2LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x357 = 93U;
	int8_t x358 = -1;
	int32_t t89 = 29267;

	t89 = ((x357^(x358<=x359))%x360);

	if (t89 != 92) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MIN;
	uint64_t x362 = 2150842651375989LLU;
	static int16_t x363 = INT16_MIN;
	static int8_t x364 = INT8_MIN;
	volatile int32_t t90 = -1;

	t90 = ((x361^(x362<=x363))%x364);

	if (t90 != -127) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x366 = INT64_MIN;
	volatile int8_t x367 = INT8_MIN;

	t91 = ((x365^(x366<=x367))%x368);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = 99LL;
	int32_t x370 = INT32_MIN;
	volatile int8_t x371 = -1;
	uint64_t x372 = 2238850430314LLU;
	volatile uint64_t t92 = 188LLU;

	t92 = ((x369^(x370<=x371))%x372);

	if (t92 != 98LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x373 = 128;
	int64_t x375 = INT64_MIN;
	static uint8_t x376 = 15U;
	volatile int32_t t93 = 1705817;

	t93 = ((x373^(x374<=x375))%x376);

	if (t93 != 8) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x378 = -1;
	static uint64_t x379 = 2LLU;
	uint8_t x380 = 60U;
	volatile int64_t t94 = -18008060855533515LL;

	t94 = ((x377^(x378<=x379))%x380);

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint16_t x381 = 2926U;
	static int32_t x382 = 56075;
	uint8_t x383 = UINT8_MAX;
	int64_t x384 = INT64_MIN;
	int64_t t95 = -84155941352LL;

	t95 = ((x381^(x382<=x383))%x384);

	if (t95 != 2926LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x386 = -149927145488LL;
	volatile int64_t x387 = -1LL;
	int64_t x388 = -4LL;
	volatile int64_t t96 = -36696865LL;

	t96 = ((x385^(x386<=x387))%x388);

	if (t96 != -2LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MIN;
	uint8_t x390 = 11U;
	uint64_t x392 = UINT64_MAX;

	t97 = ((x389^(x390<=x391))%x392);

	if (t97 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -2;
	int32_t x395 = INT32_MIN;
	volatile uint8_t x396 = 2U;
	volatile int32_t t98 = 0;

	t98 = ((x393^(x394<=x395))%x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x397 = 73;
	static int16_t x398 = -1;
	uint64_t x400 = UINT64_MAX;
	volatile uint64_t t99 = 0LLU;

	t99 = ((x397^(x398<=x399))%x400);

	if (t99 != 72LLU) { NG(); } else { ; }
	
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

