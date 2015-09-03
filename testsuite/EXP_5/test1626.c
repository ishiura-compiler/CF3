#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x3 = INT64_MIN;
volatile uint32_t t1 = UINT32_MAX;
static int32_t x16 = -1;
static volatile int32_t t3 = -384645394;
uint16_t x21 = UINT16_MAX;
static volatile uint8_t x26 = 11U;
int64_t x28 = -1LL;
volatile int16_t x32 = -1;
static volatile int32_t t7 = -159;
int32_t x39 = -1;
volatile int16_t x41 = INT16_MAX;
static uint16_t x42 = UINT16_MAX;
int16_t x56 = -146;
int32_t t12 = 1;
int64_t x57 = -843489LL;
volatile int16_t x68 = -1;
volatile int64_t t16 = INT64_MIN;
int16_t x73 = -1489;
static int32_t t18 = 311;
static uint64_t x81 = UINT64_MAX;
int64_t x82 = INT64_MIN;
int64_t x94 = -56LL;
int16_t x95 = -1;
int32_t x96 = 144;
int64_t x97 = -1LL;
volatile int64_t x98 = -15755393179LL;
static volatile int64_t t23 = -1509342035775847339LL;
uint64_t x102 = 2152148LLU;
int64_t x107 = INT64_MIN;
uint64_t x111 = UINT64_MAX;
static volatile uint8_t x112 = 0U;
volatile int64_t t26 = 696LL;
int8_t x122 = 1;
static int32_t t29 = -156593356;
int64_t x131 = INT64_MAX;
static uint8_t x138 = 13U;
volatile int32_t t33 = -2734;
volatile int16_t x145 = INT16_MIN;
uint16_t x147 = UINT16_MAX;
int16_t x154 = 108;
static uint8_t x155 = UINT8_MAX;
volatile int32_t t38 = 39028;
uint32_t x162 = UINT32_MAX;
uint8_t x165 = UINT8_MAX;
volatile int8_t x166 = 0;
int16_t x167 = INT16_MIN;
int32_t x170 = -1;
int64_t x178 = INT64_MIN;
int16_t x183 = INT16_MIN;
int32_t x186 = -54136;
int64_t x190 = INT64_MAX;
volatile int64_t t46 = INT64_MAX;
int32_t x193 = 184022;
volatile uint8_t x194 = 102U;
volatile int8_t x195 = -12;
int16_t x198 = -1;
volatile int8_t x217 = INT8_MIN;
int16_t x229 = -1;
int16_t x232 = INT16_MAX;
volatile int16_t x235 = INT16_MIN;
uint32_t x237 = 619544332U;
uint16_t x239 = UINT16_MAX;
static volatile int32_t t58 = 279932322;
int64_t x249 = INT64_MIN;
volatile uint16_t x252 = UINT16_MAX;
uint64_t x256 = 13593LLU;
static int64_t x257 = -3670050384916LL;
int16_t x261 = 930;
int32_t t63 = -19179915;
static int32_t x266 = INT32_MIN;
int8_t x300 = INT8_MIN;
static volatile int32_t x302 = INT32_MIN;
volatile uint64_t x304 = 8769LLU;
static int8_t x311 = INT8_MIN;
int32_t t74 = -60296;
uint32_t x313 = UINT32_MAX;
int16_t x323 = -1;
int8_t x327 = INT8_MAX;
static int32_t t79 = 2550799;
static volatile int64_t x339 = INT64_MIN;
volatile int32_t t84 = -3228853;
volatile int32_t x360 = -1;
static uint8_t x368 = 15U;
static uint32_t x375 = UINT32_MAX;
volatile int32_t t90 = -136097593;
volatile int64_t x386 = INT64_MIN;
static uint8_t x396 = 53U;
int32_t t95 = 143484;
int8_t x398 = INT8_MIN;
uint64_t x405 = 7912970289LLU;
int32_t x408 = INT32_MIN;
uint16_t x409 = 1731U;
static int32_t x411 = -1;
int16_t x412 = INT16_MIN;


void f0(void) {
	volatile uint64_t x1 = 61LLU;
	int64_t x2 = INT64_MIN;
	int16_t x4 = 12;
	static uint64_t t0 = 1143432316LLU;

	t0 = (x1+((x2<=x3)<x4));

	if (t0 != 62LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = UINT32_MAX;
	int8_t x6 = 0;
	int32_t x7 = INT32_MIN;
	int8_t x8 = INT8_MIN;

	t1 = (x5+((x6<=x7)<x8));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = 122310727818LL;
	volatile uint16_t x10 = 3U;
	int64_t x11 = 0LL;
	uint32_t x12 = 11U;
	volatile int64_t t2 = 212508503266LL;

	t2 = (x9+((x10<=x11)<x12));

	if (t2 != 122310727819LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 115U;
	static uint8_t x14 = 93U;
	static uint32_t x15 = 230U;

	t3 = (x13+((x14<=x15)<x16));

	if (t3 != 115) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = 0U;
	int64_t x18 = INT64_MAX;
	uint16_t x19 = 622U;
	static uint32_t x20 = 80U;
	volatile uint32_t t4 = 4518U;

	t4 = (x17+((x18<=x19)<x20));

	if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = 36;
	uint64_t x23 = UINT64_MAX;
	uint64_t x24 = 31LLU;
	volatile int32_t t5 = -464229981;

	t5 = (x21+((x22<=x23)<x24));

	if (t5 != 65536) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -422437666LL;
	static int32_t x27 = -66065;
	int64_t t6 = -295016670778LL;

	t6 = (x25+((x26<=x27)<x28));

	if (t6 != -422437666LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MIN;
	int32_t x30 = -134913213;
	uint8_t x31 = 1U;

	t7 = (x29+((x30<=x31)<x32));

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x37 = INT64_MAX;
	uint8_t x38 = 110U;
	int64_t x40 = -1LL;
	int64_t t8 = INT64_MAX;

	t8 = (x37+((x38<=x39)<x40));

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x43 = 3;
	uint8_t x44 = 4U;
	volatile int32_t t9 = 89382973;

	t9 = (x41+((x42<=x43)<x44));

	if (t9 != 32768) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x45 = INT64_MIN;
	int8_t x46 = -1;
	int16_t x47 = INT16_MIN;
	int32_t x48 = INT32_MAX;
	int64_t t10 = 206252602126LL;

	t10 = (x45+((x46<=x47)<x48));

	if (t10 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = UINT16_MAX;
	int64_t x50 = INT64_MIN;
	uint8_t x51 = 15U;
	uint32_t x52 = UINT32_MAX;
	volatile int32_t t11 = -1;

	t11 = (x49+((x50<=x51)<x52));

	if (t11 != 65536) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x53 = 15045U;
	int32_t x54 = INT32_MIN;
	int32_t x55 = -8099;

	t12 = (x53+((x54<=x55)<x56));

	if (t12 != 15045) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x58 = UINT16_MAX;
	static int8_t x59 = INT8_MAX;
	volatile int8_t x60 = INT8_MIN;
	int64_t t13 = 4042632089894128LL;

	t13 = (x57+((x58<=x59)<x60));

	if (t13 != -843489LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = UINT64_MAX;
	volatile int8_t x62 = 19;
	int64_t x63 = INT64_MAX;
	int8_t x64 = -1;
	volatile uint64_t t14 = UINT64_MAX;

	t14 = (x61+((x62<=x63)<x64));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x65 = 1U;
	static volatile int64_t x66 = -2022499856825645LL;
	volatile int16_t x67 = INT16_MIN;
	int32_t t15 = 19480;

	t15 = (x65+((x66<=x67)<x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x69 = INT64_MIN;
	int32_t x70 = 17;
	uint64_t x71 = UINT64_MAX;
	int32_t x72 = INT32_MIN;

	t16 = (x69+((x70<=x71)<x72));

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x74 = -1;
	int16_t x75 = -1;
	uint8_t x76 = UINT8_MAX;
	volatile int32_t t17 = -3;

	t17 = (x73+((x74<=x75)<x76));

	if (t17 != -1488) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x77 = 17119U;
	static uint16_t x78 = 11U;
	int64_t x79 = INT64_MAX;
	int64_t x80 = -71193123324032LL;

	t18 = (x77+((x78<=x79)<x80));

	if (t18 != 17119) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x83 = UINT64_MAX;
	int8_t x84 = -1;
	volatile uint64_t t19 = UINT64_MAX;

	t19 = (x81+((x82<=x83)<x84));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x85 = 411U;
	int16_t x86 = -746;
	int8_t x87 = -22;
	int8_t x88 = INT8_MAX;
	int32_t t20 = -29;

	t20 = (x85+((x86<=x87)<x88));

	if (t20 != 412) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x89 = INT64_MIN;
	uint64_t x90 = UINT64_MAX;
	static volatile uint64_t x91 = 65793540LLU;
	volatile int64_t x92 = -3677223249940LL;
	int64_t t21 = INT64_MIN;

	t21 = (x89+((x90<=x91)<x92));

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x93 = UINT8_MAX;
	int32_t t22 = -832684168;

	t22 = (x93+((x94<=x95)<x96));

	if (t22 != 256) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x99 = -1;
	static volatile int32_t x100 = -568;

	t23 = (x97+((x98<=x99)<x100));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = INT64_MIN;
	volatile int32_t x103 = 1;
	uint16_t x104 = UINT16_MAX;
	static int64_t t24 = 23LL;

	t24 = (x101+((x102<=x103)<x104));

	if (t24 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x105 = UINT32_MAX;
	static uint64_t x106 = 209512175977698LLU;
	volatile int64_t x108 = 82LL;
	volatile uint32_t t25 = 54602758U;

	t25 = (x105+((x106<=x107)<x108));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x109 = -1LL;
	static int32_t x110 = -1;

	t26 = (x109+((x110<=x111)<x112));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = INT16_MAX;
	int8_t x114 = 1;
	uint8_t x115 = 31U;
	int64_t x116 = -3201521429685271973LL;
	int32_t t27 = -3;

	t27 = (x113+((x114<=x115)<x116));

	if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = INT64_MIN;
	uint16_t x118 = 0U;
	int64_t x119 = INT64_MIN;
	int8_t x120 = 53;
	volatile int64_t t28 = 1290LL;

	t28 = (x117+((x118<=x119)<x120));

	if (t28 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = 0;
	uint16_t x123 = 4839U;
	volatile int8_t x124 = INT8_MAX;

	t29 = (x121+((x122<=x123)<x124));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x125 = 1451U;
	uint64_t x126 = 245641LLU;
	int8_t x127 = -23;
	int64_t x128 = 5368617LL;
	static volatile uint32_t t30 = 10U;

	t30 = (x125+((x126<=x127)<x128));

	if (t30 != 1452U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x129 = -1LL;
	int32_t x130 = INT32_MAX;
	int32_t x132 = INT32_MAX;
	int64_t t31 = -111122LL;

	t31 = (x129+((x130<=x131)<x132));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x133 = 18U;
	static uint16_t x134 = UINT16_MAX;
	int8_t x135 = 51;
	int64_t x136 = 4654130125LL;
	volatile uint32_t t32 = 6U;

	t32 = (x133+((x134<=x135)<x136));

	if (t32 != 19U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x137 = 628U;
	int16_t x139 = INT16_MIN;
	static int32_t x140 = INT32_MAX;

	t33 = (x137+((x138<=x139)<x140));

	if (t33 != 629) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x141 = 1;
	volatile int32_t x142 = INT32_MIN;
	static int32_t x143 = 13;
	uint64_t x144 = UINT64_MAX;
	volatile int32_t t34 = 24;

	t34 = (x141+((x142<=x143)<x144));

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x146 = INT16_MAX;
	volatile int8_t x148 = -2;
	int32_t t35 = 6337583;

	t35 = (x145+((x146<=x147)<x148));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x149 = 23;
	static volatile int16_t x150 = INT16_MIN;
	static int64_t x151 = 29903266467557803LL;
	int32_t x152 = INT32_MAX;
	int32_t t36 = 6763;

	t36 = (x149+((x150<=x151)<x152));

	if (t36 != 24) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x153 = UINT16_MAX;
	int32_t x156 = 938;
	volatile int32_t t37 = 139174533;

	t37 = (x153+((x154<=x155)<x156));

	if (t37 != 65536) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x157 = 3351;
	static int32_t x158 = -1;
	int32_t x159 = INT32_MAX;
	static int16_t x160 = 3;

	t38 = (x157+((x158<=x159)<x160));

	if (t38 != 3352) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = -3;
	int64_t x163 = -15009561324399081LL;
	volatile uint8_t x164 = 3U;
	int32_t t39 = 0;

	t39 = (x161+((x162<=x163)<x164));

	if (t39 != -2) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x168 = INT16_MAX;
	static int32_t t40 = 855997;

	t40 = (x165+((x166<=x167)<x168));

	if (t40 != 256) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = -1;
	static uint32_t x171 = UINT32_MAX;
	volatile uint8_t x172 = UINT8_MAX;
	volatile int32_t t41 = 148028;

	t41 = (x169+((x170<=x171)<x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x173 = INT32_MIN;
	int64_t x174 = INT64_MAX;
	int64_t x175 = INT64_MAX;
	int64_t x176 = -1LL;
	volatile int32_t t42 = INT32_MIN;

	t42 = (x173+((x174<=x175)<x176));

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x177 = INT64_MIN;
	uint32_t x179 = 13082002U;
	volatile int8_t x180 = -1;
	static volatile int64_t t43 = INT64_MIN;

	t43 = (x177+((x178<=x179)<x180));

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x181 = UINT16_MAX;
	int64_t x182 = -1LL;
	int64_t x184 = INT64_MIN;
	int32_t t44 = -72657979;

	t44 = (x181+((x182<=x183)<x184));

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = -1;
	int16_t x187 = -1;
	volatile int32_t x188 = INT32_MIN;
	int32_t t45 = 290;

	t45 = (x185+((x186<=x187)<x188));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x189 = INT64_MAX;
	volatile uint32_t x191 = UINT32_MAX;
	int8_t x192 = INT8_MIN;

	t46 = (x189+((x190<=x191)<x192));

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x196 = 16575568U;
	volatile int32_t t47 = -28422297;

	t47 = (x193+((x194<=x195)<x196));

	if (t47 != 184023) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x197 = 512847U;
	uint16_t x199 = 3273U;
	int32_t x200 = -7002943;
	static uint32_t t48 = 3U;

	t48 = (x197+((x198<=x199)<x200));

	if (t48 != 512847U) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x205 = -1LL;
	int8_t x206 = 1;
	int8_t x207 = INT8_MAX;
	uint64_t x208 = 812610902695LLU;
	volatile int64_t t49 = -142312850482LL;

	t49 = (x205+((x206<=x207)<x208));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x209 = 3338079U;
	uint32_t x210 = 48U;
	uint32_t x211 = UINT32_MAX;
	static int64_t x212 = INT64_MIN;
	uint32_t t50 = 3121U;

	t50 = (x209+((x210<=x211)<x212));

	if (t50 != 3338079U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = -40;
	int8_t x214 = -1;
	int64_t x215 = -3178241583950687LL;
	int16_t x216 = 1;
	int32_t t51 = 594097969;

	t51 = (x213+((x214<=x215)<x216));

	if (t51 != -39) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x218 = INT8_MIN;
	int16_t x219 = -1;
	volatile int16_t x220 = -1;
	int32_t t52 = 103;

	t52 = (x217+((x218<=x219)<x220));

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = -12;
	int64_t x222 = -1LL;
	int8_t x223 = INT8_MIN;
	volatile int32_t x224 = 1825197;
	int32_t t53 = -1;

	t53 = (x221+((x222<=x223)<x224));

	if (t53 != -11) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x225 = 8875004;
	static int64_t x226 = 2286324335LL;
	static int16_t x227 = -1;
	int32_t x228 = -3015466;
	static int32_t t54 = -114511958;

	t54 = (x225+((x226<=x227)<x228));

	if (t54 != 8875004) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x230 = 410559616593LLU;
	static uint64_t x231 = 300388872755453546LLU;
	int32_t t55 = -250;

	t55 = (x229+((x230<=x231)<x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x233 = -1493;
	int64_t x234 = -30532075555785LL;
	uint32_t x236 = UINT32_MAX;
	static volatile int32_t t56 = 8;

	t56 = (x233+((x234<=x235)<x236));

	if (t56 != -1492) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x238 = 0U;
	static int8_t x240 = INT8_MAX;
	uint32_t t57 = 30985121U;

	t57 = (x237+((x238<=x239)<x240));

	if (t57 != 619544333U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x241 = 0U;
	static uint8_t x242 = UINT8_MAX;
	static int16_t x243 = -1;
	uint32_t x244 = 236195775U;

	t58 = (x241+((x242<=x243)<x244));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x245 = -1;
	volatile int16_t x246 = INT16_MIN;
	volatile int32_t x247 = INT32_MAX;
	int64_t x248 = -1LL;
	volatile int32_t t59 = -2429954;

	t59 = (x245+((x246<=x247)<x248));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x250 = UINT8_MAX;
	static uint8_t x251 = UINT8_MAX;
	volatile int64_t t60 = 3775LL;

	t60 = (x249+((x250<=x251)<x252));

	if (t60 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x253 = 15682162678LLU;
	int16_t x254 = -1;
	int8_t x255 = -9;
	uint64_t t61 = 725845520LLU;

	t61 = (x253+((x254<=x255)<x256));

	if (t61 != 15682162679LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x258 = INT16_MIN;
	int64_t x259 = INT64_MAX;
	volatile int64_t x260 = INT64_MAX;
	volatile int64_t t62 = -9LL;

	t62 = (x257+((x258<=x259)<x260));

	if (t62 != -3670050384915LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x262 = 0U;
	volatile int32_t x263 = INT32_MIN;
	int64_t x264 = -3192LL;

	t63 = (x261+((x262<=x263)<x264));

	if (t63 != 930) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x265 = INT16_MIN;
	int32_t x267 = 23;
	static int32_t x268 = -10913113;
	volatile int32_t t64 = 169729714;

	t64 = (x265+((x266<=x267)<x268));

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x269 = -1;
	volatile int16_t x270 = -23;
	int64_t x271 = -73071283800LL;
	uint64_t x272 = 45LLU;
	static volatile int32_t t65 = 4;

	t65 = (x269+((x270<=x271)<x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x273 = 320;
	static int32_t x274 = INT32_MIN;
	static int32_t x275 = -1;
	int64_t x276 = -32LL;
	volatile int32_t t66 = 4;

	t66 = (x273+((x274<=x275)<x276));

	if (t66 != 320) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x277 = 4053651866975LLU;
	static int32_t x278 = INT32_MIN;
	int32_t x279 = INT32_MIN;
	uint32_t x280 = 67U;
	uint64_t t67 = 122318271200115822LLU;

	t67 = (x277+((x278<=x279)<x280));

	if (t67 != 4053651866976LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x285 = INT16_MIN;
	static volatile int64_t x286 = -1LL;
	int8_t x287 = INT8_MIN;
	int8_t x288 = INT8_MAX;
	static volatile int32_t t68 = -195220;

	t68 = (x285+((x286<=x287)<x288));

	if (t68 != -32767) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x289 = -1LL;
	int8_t x290 = INT8_MAX;
	int8_t x291 = INT8_MIN;
	volatile int8_t x292 = INT8_MIN;
	int64_t t69 = -12LL;

	t69 = (x289+((x290<=x291)<x292));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x293 = UINT16_MAX;
	static uint64_t x294 = 155762756LLU;
	int8_t x295 = 0;
	int32_t x296 = INT32_MIN;
	int32_t t70 = -3;

	t70 = (x293+((x294<=x295)<x296));

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x297 = INT32_MAX;
	volatile int64_t x298 = -1LL;
	int32_t x299 = -1;
	static int32_t t71 = INT32_MAX;

	t71 = (x297+((x298<=x299)<x300));

	if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x301 = -41684926022624LL;
	int32_t x303 = INT32_MAX;
	volatile int64_t t72 = 0LL;

	t72 = (x301+((x302<=x303)<x304));

	if (t72 != -41684926022623LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x305 = -1;
	volatile int8_t x306 = INT8_MAX;
	static int64_t x307 = -505596028219784185LL;
	static int64_t x308 = INT64_MAX;
	static int32_t t73 = 2;

	t73 = (x305+((x306<=x307)<x308));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x309 = UINT16_MAX;
	int16_t x310 = 11;
	volatile uint32_t x312 = 1U;

	t74 = (x309+((x310<=x311)<x312));

	if (t74 != 65536) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint8_t x314 = 8U;
	static int64_t x315 = -1LL;
	volatile uint8_t x316 = 5U;
	volatile uint32_t t75 = 1429614U;

	t75 = (x313+((x314<=x315)<x316));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x317 = INT32_MIN;
	static uint32_t x318 = UINT32_MAX;
	int8_t x319 = -1;
	uint16_t x320 = UINT16_MAX;
	volatile int32_t t76 = -13036;

	t76 = (x317+((x318<=x319)<x320));

	if (t76 != -2147483647) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x321 = -15;
	int16_t x322 = INT16_MIN;
	static int64_t x324 = INT64_MIN;
	int32_t t77 = 22;

	t77 = (x321+((x322<=x323)<x324));

	if (t77 != -15) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x325 = INT32_MIN;
	uint16_t x326 = 1256U;
	int8_t x328 = INT8_MIN;
	volatile int32_t t78 = INT32_MIN;

	t78 = (x325+((x326<=x327)<x328));

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x329 = -1;
	int16_t x330 = -1;
	int32_t x331 = INT32_MIN;
	uint64_t x332 = UINT64_MAX;

	t79 = (x329+((x330<=x331)<x332));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x333 = 2595466LLU;
	uint16_t x334 = 11U;
	int8_t x335 = 0;
	static uint8_t x336 = 65U;
	uint64_t t80 = 6656960268LLU;

	t80 = (x333+((x334<=x335)<x336));

	if (t80 != 2595467LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x337 = INT8_MIN;
	static uint64_t x338 = 577657LLU;
	uint64_t x340 = 275398829774LLU;
	volatile int32_t t81 = -12;

	t81 = (x337+((x338<=x339)<x340));

	if (t81 != -127) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x341 = INT8_MIN;
	uint32_t x342 = 8340605U;
	uint16_t x343 = UINT16_MAX;
	volatile int64_t x344 = INT64_MAX;
	int32_t t82 = 1690434;

	t82 = (x341+((x342<=x343)<x344));

	if (t82 != -127) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x345 = INT16_MAX;
	int16_t x346 = INT16_MAX;
	static int16_t x347 = 958;
	uint32_t x348 = 155115U;
	int32_t t83 = 3045;

	t83 = (x345+((x346<=x347)<x348));

	if (t83 != 32768) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x349 = 52965424;
	int16_t x350 = -34;
	uint8_t x351 = 14U;
	int16_t x352 = INT16_MAX;

	t84 = (x349+((x350<=x351)<x352));

	if (t84 != 52965425) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x353 = 711818017065LLU;
	static volatile int8_t x354 = INT8_MIN;
	uint8_t x355 = 1U;
	uint8_t x356 = 53U;
	static volatile uint64_t t85 = 16157917080943LLU;

	t85 = (x353+((x354<=x355)<x356));

	if (t85 != 711818017066LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x357 = 7;
	uint16_t x358 = 0U;
	int8_t x359 = 6;
	volatile int32_t t86 = 2952342;

	t86 = (x357+((x358<=x359)<x360));

	if (t86 != 7) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x361 = -578;
	uint32_t x362 = 245685U;
	static uint64_t x363 = 63256624094934LLU;
	uint64_t x364 = 92946146237LLU;
	volatile int32_t t87 = 11070;

	t87 = (x361+((x362<=x363)<x364));

	if (t87 != -577) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x365 = INT32_MIN;
	volatile int16_t x366 = -203;
	volatile int64_t x367 = 7306LL;
	volatile int32_t t88 = -1;

	t88 = (x365+((x366<=x367)<x368));

	if (t88 != -2147483647) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x369 = INT16_MIN;
	int8_t x370 = -2;
	volatile int8_t x371 = -1;
	int8_t x372 = INT8_MIN;
	volatile int32_t t89 = -821;

	t89 = (x369+((x370<=x371)<x372));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x373 = 23U;
	int32_t x374 = 14;
	volatile int32_t x376 = INT32_MIN;

	t90 = (x373+((x374<=x375)<x376));

	if (t90 != 23) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x377 = 144739397342442LLU;
	static uint64_t x378 = UINT64_MAX;
	int64_t x379 = -292193806669LL;
	volatile int64_t x380 = INT64_MIN;
	uint64_t t91 = 1LLU;

	t91 = (x377+((x378<=x379)<x380));

	if (t91 != 144739397342442LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x381 = -1;
	int32_t x382 = -1382991;
	static volatile int32_t x383 = INT32_MIN;
	int16_t x384 = -1;
	static int32_t t92 = 904062;

	t92 = (x381+((x382<=x383)<x384));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x385 = -218;
	int32_t x387 = -1;
	int16_t x388 = 237;
	volatile int32_t t93 = 105270154;

	t93 = (x385+((x386<=x387)<x388));

	if (t93 != -217) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x389 = 5U;
	int8_t x390 = INT8_MIN;
	int16_t x391 = -1;
	static int16_t x392 = INT16_MAX;
	static volatile int32_t t94 = -23381276;

	t94 = (x389+((x390<=x391)<x392));

	if (t94 != 6) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x393 = UINT16_MAX;
	uint16_t x394 = UINT16_MAX;
	volatile int64_t x395 = 62143LL;

	t95 = (x393+((x394<=x395)<x396));

	if (t95 != 65536) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x397 = INT8_MIN;
	int8_t x399 = 43;
	uint32_t x400 = UINT32_MAX;
	volatile int32_t t96 = -114332;

	t96 = (x397+((x398<=x399)<x400));

	if (t96 != -127) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x401 = 16340111969LLU;
	int8_t x402 = -8;
	int16_t x403 = -927;
	int32_t x404 = -1;
	uint64_t t97 = 821596872LLU;

	t97 = (x401+((x402<=x403)<x404));

	if (t97 != 16340111969LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x406 = -1;
	uint64_t x407 = 64314857128267LLU;
	static uint64_t t98 = 39036470730LLU;

	t98 = (x405+((x406<=x407)<x408));

	if (t98 != 7912970289LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x410 = INT32_MAX;
	int32_t t99 = 13412;

	t99 = (x409+((x410<=x411)<x412));

	if (t99 != 1731) { NG(); } else { ; }
	
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

