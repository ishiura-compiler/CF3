#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x7 = 5U;
int8_t x8 = -1;
int32_t x10 = INT32_MIN;
uint64_t t3 = 1481717LLU;
static int8_t x22 = INT8_MIN;
int32_t t5 = 38;
uint16_t x26 = 0U;
int8_t x29 = INT8_MIN;
int16_t x32 = -132;
static int64_t x43 = INT64_MAX;
static volatile int64_t t10 = 58460599955LL;
int16_t x45 = INT16_MIN;
static int32_t x47 = 260723;
static uint64_t x52 = 875936971342LLU;
volatile uint32_t t14 = 13460U;
uint64_t x61 = 1095771LLU;
int64_t x64 = INT64_MIN;
static volatile uint64_t t15 = 24051710LLU;
volatile int64_t x68 = 19920801380449323LL;
int8_t x70 = INT8_MIN;
int64_t x94 = INT64_MIN;
static int32_t x98 = INT32_MIN;
volatile int64_t x100 = INT64_MIN;
int32_t x108 = INT32_MAX;
volatile int16_t x110 = -1;
int64_t x113 = 19977474979473LL;
static uint64_t t28 = 34248528251LLU;
uint64_t x133 = 31549212426338514LLU;
volatile int32_t t33 = 71752;
static uint16_t x142 = 2U;
volatile uint32_t x148 = UINT32_MAX;
int64_t x151 = INT64_MIN;
uint16_t x163 = 22U;
int8_t x166 = INT8_MIN;
static int64_t x167 = INT64_MAX;
volatile uint16_t x168 = 6278U;
static int32_t x178 = -1;
static int32_t x182 = INT32_MIN;
volatile int64_t x191 = 542618219996746016LL;
uint8_t x193 = 21U;
uint64_t x196 = 61471431LLU;
volatile uint32_t x197 = UINT32_MAX;
volatile uint64_t t48 = 61LLU;
static int16_t x206 = INT16_MAX;
int16_t x209 = -3175;
int16_t x212 = INT16_MIN;
volatile int32_t t50 = 278256;
int16_t x216 = INT16_MIN;
static uint32_t t51 = 89U;
int64_t x218 = INT64_MAX;
volatile int64_t t54 = 3358155883LL;
uint32_t x229 = UINT32_MAX;
int64_t t57 = -4972530LL;
int16_t x241 = -1;
int8_t x244 = INT8_MAX;
int32_t t58 = -71900;
int64_t x250 = -1LL;
int8_t x252 = INT8_MAX;
volatile uint64_t t60 = 3791144898748518LLU;
static int32_t t63 = 432;
int32_t x271 = INT32_MAX;
volatile int16_t x279 = INT16_MAX;
volatile int32_t t69 = 1;
int32_t x290 = 201302712;
static int64_t t70 = -93351LL;
uint8_t x300 = 2U;
static uint32_t t73 = 204U;
static uint64_t x305 = 6868LLU;
int32_t x306 = INT32_MIN;
uint32_t x307 = UINT32_MAX;
uint8_t x314 = 1U;
int32_t x315 = INT32_MIN;
int64_t x318 = INT64_MIN;
int32_t x320 = INT32_MAX;
volatile int16_t x327 = -1;
int8_t x336 = INT8_MIN;
uint32_t x341 = UINT32_MAX;
uint16_t x342 = 5230U;
uint16_t x343 = 677U;
int32_t x356 = -1;
int16_t x358 = -1;
static int64_t x361 = -11LL;
volatile int8_t x363 = INT8_MAX;
int64_t t87 = -1268907LL;
volatile int64_t t88 = -793389LL;
static int64_t x369 = INT64_MIN;
int8_t x370 = -44;
int32_t x371 = -1;
int32_t x375 = 114972815;
int16_t x376 = INT16_MIN;
static int64_t t92 = 2523350947LL;
volatile int16_t x396 = -120;
int64_t x403 = INT64_MIN;
uint16_t x409 = 0U;
int32_t x412 = INT32_MIN;


void f0(void) {
	static int16_t x1 = 825;
	volatile int16_t x2 = INT16_MIN;
	int16_t x3 = INT16_MIN;
	uint64_t x4 = UINT64_MAX;
	volatile uint64_t t0 = 10278457070203630LLU;

	t0 = ((x1^(x2==x3))%x4);

	if (t0 != 824LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = 45U;
	static int8_t x6 = INT8_MIN;
	static volatile int32_t t1 = 1;

	t1 = ((x5^(x6==x7))%x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -2911327301122405310LL;
	int16_t x11 = -155;
	int32_t x12 = -1271940;
	int64_t t2 = 1LL;

	t2 = ((x9^(x10==x11))%x12);

	if (t2 != -539090LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	static uint16_t x14 = UINT16_MAX;
	int8_t x15 = INT8_MAX;
	static volatile uint64_t x16 = UINT64_MAX;

	t3 = ((x13^(x14==x15))%x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = -1LL;
	static int8_t x18 = INT8_MIN;
	int16_t x19 = INT16_MIN;
	static uint64_t x20 = 846312779482645LLU;
	uint64_t t4 = 30250LLU;

	t4 = ((x17^(x18==x19))%x20);

	if (t4 != 510732105821195LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	static int8_t x23 = INT8_MAX;
	volatile int8_t x24 = INT8_MAX;

	t5 = ((x21^(x22==x23))%x24);

	if (t5 != -8) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int64_t x27 = -1LL;
	int8_t x28 = INT8_MIN;
	int32_t t6 = 3;

	t6 = ((x25^(x26==x27))%x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = INT64_MIN;
	int16_t x31 = INT16_MAX;
	int32_t t7 = 207395;

	t7 = ((x29^(x30==x31))%x32);

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 6;
	uint16_t x34 = 5U;
	uint64_t x35 = 20945849586LLU;
	static uint64_t x36 = UINT64_MAX;
	volatile uint64_t t8 = 13857843937911LLU;

	t8 = ((x33^(x34==x35))%x36);

	if (t8 != 6LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = 1;
	int8_t x38 = -11;
	static int16_t x39 = -1;
	int16_t x40 = INT16_MIN;
	volatile int32_t t9 = 5;

	t9 = ((x37^(x38==x39))%x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = 2909;
	uint32_t x42 = UINT32_MAX;
	int64_t x44 = 130523192949157058LL;

	t10 = ((x41^(x42==x43))%x44);

	if (t10 != 2909LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x46 = INT16_MIN;
	int32_t x48 = -10;
	volatile int32_t t11 = 222738;

	t11 = ((x45^(x46==x47))%x48);

	if (t11 != -8) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	static int32_t x50 = -1;
	uint16_t x51 = UINT16_MAX;
	uint64_t t12 = 2041342004617716LLU;

	t12 = ((x49^(x50==x51))%x52);

	if (t12 != 65535LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 6706730553895LLU;
	int32_t x54 = 1243;
	uint32_t x55 = UINT32_MAX;
	uint16_t x56 = 619U;
	uint64_t t13 = 133578143386219LLU;

	t13 = ((x53^(x54==x55))%x56);

	if (t13 != 76LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 321431U;
	uint8_t x58 = 16U;
	volatile int32_t x59 = -1;
	int16_t x60 = INT16_MIN;

	t14 = ((x57^(x58==x59))%x60);

	if (t14 != 321431U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x62 = -66957LL;
	uint16_t x63 = 104U;

	t15 = ((x61^(x62==x63))%x64);

	if (t15 != 1095771LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	static int8_t x66 = INT8_MAX;
	static int64_t x67 = -1LL;
	volatile int64_t t16 = 4563959195LL;

	t16 = ((x65^(x66==x67))%x68);

	if (t16 != 127LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	int8_t x71 = INT8_MIN;
	volatile uint16_t x72 = 2U;
	int32_t t17 = 213318;

	t17 = ((x69^(x70==x71))%x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MAX;
	int64_t x74 = -1LL;
	int64_t x75 = -1LL;
	int16_t x76 = -1;
	volatile int32_t t18 = 1225348;

	t18 = ((x73^(x74==x75))%x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	uint32_t x78 = 57U;
	volatile int16_t x79 = 169;
	uint16_t x80 = UINT16_MAX;
	int32_t t19 = -914183;

	t19 = ((x77^(x78==x79))%x80);

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -24;
	volatile uint16_t x82 = UINT16_MAX;
	static uint16_t x83 = 8U;
	static int16_t x84 = -28;
	int32_t t20 = -244;

	t20 = ((x81^(x82==x83))%x84);

	if (t20 != -24) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	volatile int16_t x86 = INT16_MIN;
	int64_t x87 = 11638357632LL;
	int16_t x88 = INT16_MAX;
	static volatile int32_t t21 = -123745966;

	t21 = ((x85^(x86==x87))%x88);

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x93 = INT16_MIN;
	int16_t x95 = -7330;
	static uint16_t x96 = UINT16_MAX;
	volatile int32_t t22 = 13213101;

	t22 = ((x93^(x94==x95))%x96);

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x97 = 2;
	int16_t x99 = -1;
	static volatile int64_t t23 = 356251818984LL;

	t23 = ((x97^(x98==x99))%x100);

	if (t23 != 2LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = INT16_MIN;
	int64_t x102 = INT64_MIN;
	volatile int8_t x103 = -33;
	int8_t x104 = INT8_MIN;
	int32_t t24 = 31487;

	t24 = ((x101^(x102==x103))%x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x105 = INT32_MIN;
	int32_t x106 = -73163;
	uint8_t x107 = 2U;
	volatile int32_t t25 = 6;

	t25 = ((x105^(x106==x107))%x108);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = 2;
	int16_t x111 = 1;
	static int16_t x112 = 167;
	volatile int32_t t26 = 118;

	t26 = ((x109^(x110==x111))%x112);

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x114 = -4;
	int16_t x115 = INT16_MIN;
	int32_t x116 = 21681;
	static volatile int64_t t27 = -125966731LL;

	t27 = ((x113^(x114==x115))%x116);

	if (t27 != 18447LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x117 = 41U;
	int8_t x118 = -1;
	int64_t x119 = INT64_MIN;
	uint64_t x120 = 4860942561LLU;

	t28 = ((x117^(x118==x119))%x120);

	if (t28 != 41LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x121 = 17491LLU;
	uint32_t x122 = 5U;
	int8_t x123 = 0;
	int32_t x124 = -1;
	uint64_t t29 = 43933060507094753LLU;

	t29 = ((x121^(x122==x123))%x124);

	if (t29 != 17491LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = -1;
	uint8_t x126 = 8U;
	volatile int64_t x127 = 5909001LL;
	int32_t x128 = INT32_MAX;
	volatile int32_t t30 = 1;

	t30 = ((x125^(x126==x127))%x128);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = 0;
	uint16_t x130 = 328U;
	static uint64_t x131 = UINT64_MAX;
	volatile int64_t x132 = 3874274896LL;
	static volatile int64_t t31 = 3024804LL;

	t31 = ((x129^(x130==x131))%x132);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x134 = INT8_MIN;
	uint64_t x135 = UINT64_MAX;
	int64_t x136 = INT64_MIN;
	static uint64_t t32 = 1244199141744LLU;

	t32 = ((x133^(x134==x135))%x136);

	if (t32 != 31549212426338514LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = INT16_MAX;
	static int32_t x138 = INT32_MIN;
	uint64_t x139 = 1498721LLU;
	int16_t x140 = -1;

	t33 = ((x137^(x138==x139))%x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x141 = 718233U;
	int64_t x143 = INT64_MAX;
	int32_t x144 = -1;
	static volatile uint32_t t34 = 340U;

	t34 = ((x141^(x142==x143))%x144);

	if (t34 != 718233U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = INT16_MIN;
	static volatile int16_t x146 = -1;
	static volatile int64_t x147 = INT64_MIN;
	uint32_t t35 = 41U;

	t35 = ((x145^(x146==x147))%x148);

	if (t35 != 4294934528U) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x149 = 1141U;
	volatile int16_t x150 = INT16_MAX;
	static int64_t x152 = -104738674808LL;
	volatile int64_t t36 = -9LL;

	t36 = ((x149^(x150==x151))%x152);

	if (t36 != 1141LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = INT8_MIN;
	int16_t x154 = -1;
	static int8_t x155 = 35;
	volatile int64_t x156 = 1812900119966851LL;
	int64_t t37 = -955757LL;

	t37 = ((x153^(x154==x155))%x156);

	if (t37 != -128LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x161 = INT64_MAX;
	static int64_t x162 = -10956355LL;
	int8_t x164 = 3;
	static int64_t t38 = -761638LL;

	t38 = ((x161^(x162==x163))%x164);

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x165 = 37U;
	volatile uint32_t t39 = 191U;

	t39 = ((x165^(x166==x167))%x168);

	if (t39 != 37U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x169 = 870U;
	uint16_t x170 = 5693U;
	uint16_t x171 = 3018U;
	volatile uint32_t x172 = UINT32_MAX;
	uint32_t t40 = 3117U;

	t40 = ((x169^(x170==x171))%x172);

	if (t40 != 870U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = INT16_MIN;
	int8_t x174 = -1;
	uint16_t x175 = UINT16_MAX;
	uint16_t x176 = 118U;
	volatile int32_t t41 = -4375;

	t41 = ((x173^(x174==x175))%x176);

	if (t41 != -82) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x177 = 120;
	uint32_t x179 = 6U;
	uint8_t x180 = 87U;
	int32_t t42 = 125;

	t42 = ((x177^(x178==x179))%x180);

	if (t42 != 33) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x181 = 6772;
	volatile int8_t x183 = -7;
	uint16_t x184 = 13920U;
	static volatile int32_t t43 = -174;

	t43 = ((x181^(x182==x183))%x184);

	if (t43 != 6772) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x185 = -2437LL;
	volatile int32_t x186 = INT32_MAX;
	uint32_t x187 = UINT32_MAX;
	int16_t x188 = 37;
	int64_t t44 = -12243LL;

	t44 = ((x185^(x186==x187))%x188);

	if (t44 != -32LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = 4;
	int64_t x190 = INT64_MAX;
	int16_t x192 = INT16_MAX;
	static int32_t t45 = 128;

	t45 = ((x189^(x190==x191))%x192);

	if (t45 != 4) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x194 = 100231238U;
	volatile int64_t x195 = INT64_MIN;
	static uint64_t t46 = 96578LLU;

	t46 = ((x193^(x194==x195))%x196);

	if (t46 != 21LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x198 = -2307960469589LL;
	static uint16_t x199 = 18385U;
	int64_t x200 = INT64_MIN;
	volatile int64_t t47 = 170709363089LL;

	t47 = ((x197^(x198==x199))%x200);

	if (t47 != 4294967295LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x201 = UINT64_MAX;
	int32_t x202 = -1123726;
	uint64_t x203 = 969795862153LLU;
	int64_t x204 = INT64_MIN;

	t48 = ((x201^(x202==x203))%x204);

	if (t48 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = 0;
	int8_t x207 = 23;
	uint32_t x208 = 771674U;
	volatile uint32_t t49 = 78002546U;

	t49 = ((x205^(x206==x207))%x208);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x210 = -1;
	volatile int16_t x211 = 92;

	t50 = ((x209^(x210==x211))%x212);

	if (t50 != -3175) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x213 = UINT32_MAX;
	int64_t x214 = -1LL;
	volatile int8_t x215 = -6;

	t51 = ((x213^(x214==x215))%x216);

	if (t51 != 32767U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x217 = -1;
	uint8_t x219 = UINT8_MAX;
	int64_t x220 = -1210LL;
	static volatile int64_t t52 = -62552503LL;

	t52 = ((x217^(x218==x219))%x220);

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x221 = 0U;
	int64_t x222 = -1LL;
	int32_t x223 = INT32_MIN;
	int32_t x224 = 248;
	static uint32_t t53 = 65160292U;

	t53 = ((x221^(x222==x223))%x224);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x225 = 24LL;
	volatile int8_t x226 = INT8_MIN;
	static int32_t x227 = INT32_MIN;
	static uint32_t x228 = UINT32_MAX;

	t54 = ((x225^(x226==x227))%x228);

	if (t54 != 24LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x230 = INT64_MIN;
	volatile int16_t x231 = INT16_MIN;
	int16_t x232 = -1;
	uint32_t t55 = 468521U;

	t55 = ((x229^(x230==x231))%x232);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x233 = INT32_MIN;
	volatile uint64_t x234 = UINT64_MAX;
	uint16_t x235 = UINT16_MAX;
	uint64_t x236 = 545964026753LLU;
	static uint64_t t56 = 28749LLU;

	t56 = ((x233^(x234==x235))%x236);

	if (t56 != 350601856305LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x237 = -1;
	uint8_t x238 = 1U;
	uint32_t x239 = UINT32_MAX;
	int64_t x240 = INT64_MIN;

	t57 = ((x237^(x238==x239))%x240);

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x242 = -3;
	int8_t x243 = INT8_MIN;

	t58 = ((x241^(x242==x243))%x244);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x245 = -1LL;
	volatile int8_t x246 = -1;
	static volatile int64_t x247 = INT64_MIN;
	static volatile int8_t x248 = -2;
	int64_t t59 = 17782797816LL;

	t59 = ((x245^(x246==x247))%x248);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x249 = 88108LLU;
	uint16_t x251 = UINT16_MAX;

	t60 = ((x249^(x250==x251))%x252);

	if (t60 != 97LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x253 = 25U;
	uint8_t x254 = 105U;
	int32_t x255 = INT32_MAX;
	static volatile uint64_t x256 = 623LLU;
	uint64_t t61 = 1563126LLU;

	t61 = ((x253^(x254==x255))%x256);

	if (t61 != 25LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = INT16_MAX;
	static int16_t x258 = INT16_MAX;
	uint8_t x259 = 101U;
	uint8_t x260 = 116U;
	volatile int32_t t62 = -7599;

	t62 = ((x257^(x258==x259))%x260);

	if (t62 != 55) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x261 = UINT16_MAX;
	int32_t x262 = INT32_MIN;
	uint16_t x263 = UINT16_MAX;
	static int8_t x264 = -1;

	t63 = ((x261^(x262==x263))%x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x265 = -1;
	int16_t x266 = INT16_MIN;
	int64_t x267 = INT64_MIN;
	uint64_t x268 = 185619493LLU;
	static volatile uint64_t t64 = 68LLU;

	t64 = ((x265^(x266==x267))%x268);

	if (t64 != 33648712LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x269 = 433U;
	static volatile uint16_t x270 = 195U;
	uint16_t x272 = 1U;
	uint32_t t65 = 2296300U;

	t65 = ((x269^(x270==x271))%x272);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x273 = -1;
	int16_t x274 = -8;
	volatile int32_t x275 = -1;
	volatile int8_t x276 = -1;
	static int32_t t66 = 696916655;

	t66 = ((x273^(x274==x275))%x276);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x277 = UINT32_MAX;
	volatile int16_t x278 = INT16_MIN;
	int16_t x280 = INT16_MAX;
	uint32_t t67 = 1466441U;

	t67 = ((x277^(x278==x279))%x280);

	if (t67 != 3U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x281 = 38LLU;
	int64_t x282 = INT64_MIN;
	int16_t x283 = INT16_MAX;
	static int64_t x284 = INT64_MIN;
	uint64_t t68 = 7473887717LLU;

	t68 = ((x281^(x282==x283))%x284);

	if (t68 != 38LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x285 = -1;
	static uint32_t x286 = UINT32_MAX;
	int16_t x287 = INT16_MIN;
	static volatile int8_t x288 = -1;

	t69 = ((x285^(x286==x287))%x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x289 = 127LL;
	uint8_t x291 = UINT8_MAX;
	uint16_t x292 = UINT16_MAX;

	t70 = ((x289^(x290==x291))%x292);

	if (t70 != 127LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x293 = INT64_MIN;
	int16_t x294 = -1;
	volatile int16_t x295 = 1416;
	int8_t x296 = INT8_MIN;
	static int64_t t71 = -220356845500414382LL;

	t71 = ((x293^(x294==x295))%x296);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = 4865876938LL;
	int64_t x298 = INT64_MIN;
	int64_t x299 = INT64_MIN;
	volatile int64_t t72 = 252586342129LL;

	t72 = ((x297^(x298==x299))%x300);

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x301 = 62;
	int16_t x302 = INT16_MIN;
	uint8_t x303 = 2U;
	uint32_t x304 = 3U;

	t73 = ((x301^(x302==x303))%x304);

	if (t73 != 2U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x308 = -210818;
	volatile uint64_t t74 = 362130591474657036LLU;

	t74 = ((x305^(x306==x307))%x308);

	if (t74 != 6868LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x313 = INT32_MIN;
	int8_t x316 = 33;
	volatile int32_t t75 = -250;

	t75 = ((x313^(x314==x315))%x316);

	if (t75 != -2) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x317 = INT8_MIN;
	volatile int64_t x319 = INT64_MAX;
	int32_t t76 = 3241251;

	t76 = ((x317^(x318==x319))%x320);

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x321 = UINT64_MAX;
	volatile int32_t x322 = INT32_MAX;
	volatile int32_t x323 = INT32_MAX;
	uint16_t x324 = 1U;
	uint64_t t77 = 772085824262LLU;

	t77 = ((x321^(x322==x323))%x324);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x325 = UINT64_MAX;
	volatile int8_t x326 = INT8_MIN;
	uint32_t x328 = 53174121U;
	volatile uint64_t t78 = 387951LLU;

	t78 = ((x325^(x326==x327))%x328);

	if (t78 != 45609579LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint8_t x329 = 1U;
	int32_t x330 = 50151881;
	static uint64_t x331 = 4272LLU;
	static uint16_t x332 = UINT16_MAX;
	volatile int32_t t79 = -15050776;

	t79 = ((x329^(x330==x331))%x332);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x333 = 726666244668727743LLU;
	int16_t x334 = INT16_MAX;
	int64_t x335 = INT64_MAX;
	uint64_t t80 = 2129593983876LLU;

	t80 = ((x333^(x334==x335))%x336);

	if (t80 != 726666244668727743LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x337 = 22045U;
	int8_t x338 = INT8_MAX;
	int64_t x339 = INT64_MAX;
	int8_t x340 = INT8_MAX;
	static int32_t t81 = -104677654;

	t81 = ((x337^(x338==x339))%x340);

	if (t81 != 74) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x344 = 53U;
	volatile uint32_t t82 = 5460013U;

	t82 = ((x341^(x342==x343))%x344);

	if (t82 != 41U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x345 = 13U;
	int64_t x346 = INT64_MIN;
	uint8_t x347 = 29U;
	static int32_t x348 = -1;
	int32_t t83 = 180197;

	t83 = ((x345^(x346==x347))%x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x349 = 21434389U;
	int32_t x350 = INT32_MIN;
	int64_t x351 = -93667LL;
	static volatile uint8_t x352 = 99U;
	uint32_t t84 = 55484U;

	t84 = ((x349^(x350==x351))%x352);

	if (t84 != 97U) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x353 = INT32_MIN;
	int8_t x354 = -1;
	volatile int16_t x355 = INT16_MAX;
	volatile int32_t t85 = 538768559;

	t85 = ((x353^(x354==x355))%x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x357 = INT64_MIN;
	int32_t x359 = INT32_MAX;
	int32_t x360 = INT32_MAX;
	volatile int64_t t86 = -153441143803882LL;

	t86 = ((x357^(x358==x359))%x360);

	if (t86 != -2LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x362 = 1410596465671LLU;
	volatile int64_t x364 = 14050LL;

	t87 = ((x361^(x362==x363))%x364);

	if (t87 != -11LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x365 = -714831LL;
	int32_t x366 = -1;
	uint8_t x367 = 0U;
	int64_t x368 = INT64_MIN;

	t88 = ((x365^(x366==x367))%x368);

	if (t88 != -714831LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x372 = INT16_MIN;
	int64_t t89 = 1026099827691LL;

	t89 = ((x369^(x370==x371))%x372);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x373 = 7U;
	int32_t x374 = -1;
	static volatile int32_t t90 = 0;

	t90 = ((x373^(x374==x375))%x376);

	if (t90 != 7) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x377 = -13803608666914LL;
	int8_t x378 = 51;
	uint16_t x379 = 2U;
	uint64_t x380 = UINT64_MAX;
	static volatile uint64_t t91 = 2337035341LLU;

	t91 = ((x377^(x378==x379))%x380);

	if (t91 != 18446730270100884702LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x381 = INT8_MIN;
	int64_t x382 = INT64_MIN;
	int64_t x383 = INT64_MIN;
	int64_t x384 = -3LL;

	t92 = ((x381^(x382==x383))%x384);

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x385 = INT16_MAX;
	uint32_t x386 = 2977U;
	int32_t x387 = -1;
	uint32_t x388 = UINT32_MAX;
	volatile uint32_t t93 = 12U;

	t93 = ((x385^(x386==x387))%x388);

	if (t93 != 32767U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x389 = 206555294520697LLU;
	volatile uint8_t x390 = 1U;
	int32_t x391 = INT32_MAX;
	static int16_t x392 = -244;
	volatile uint64_t t94 = 1LLU;

	t94 = ((x389^(x390==x391))%x392);

	if (t94 != 206555294520697LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x393 = 111U;
	uint8_t x394 = UINT8_MAX;
	uint8_t x395 = 30U;
	volatile uint32_t t95 = 76315U;

	t95 = ((x393^(x394==x395))%x396);

	if (t95 != 111U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x397 = INT32_MIN;
	int16_t x398 = INT16_MAX;
	int64_t x399 = -1LL;
	static uint8_t x400 = UINT8_MAX;
	volatile int32_t t96 = -252231;

	t96 = ((x397^(x398==x399))%x400);

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x401 = INT64_MAX;
	int32_t x402 = INT32_MIN;
	uint16_t x404 = 213U;
	int64_t t97 = 563291054815252595LL;

	t97 = ((x401^(x402==x403))%x404);

	if (t97 != 4LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x405 = INT16_MIN;
	int8_t x406 = INT8_MAX;
	volatile int64_t x407 = INT64_MIN;
	int64_t x408 = 24LL;
	int64_t t98 = -185297LL;

	t98 = ((x405^(x406==x407))%x408);

	if (t98 != -8LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x410 = 1052055LL;
	int8_t x411 = -48;
	int32_t t99 = 86894;

	t99 = ((x409^(x410==x411))%x412);

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

