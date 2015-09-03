#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t0 = UINT32_MAX;
volatile uint16_t x5 = 12461U;
volatile uint16_t x9 = UINT16_MAX;
uint8_t x11 = 20U;
int8_t x14 = INT8_MIN;
uint16_t x16 = UINT16_MAX;
volatile int32_t t3 = -1;
int8_t x24 = INT8_MAX;
int16_t x27 = 159;
int32_t x29 = INT32_MIN;
int32_t x32 = INT32_MIN;
uint16_t x33 = 2366U;
int16_t x36 = INT16_MIN;
int32_t x40 = INT32_MAX;
static uint8_t x41 = UINT8_MAX;
volatile int32_t t11 = -204;
static uint64_t t12 = UINT64_MAX;
int32_t x59 = INT32_MIN;
volatile uint64_t t16 = 14406LLU;
uint64_t x71 = UINT64_MAX;
int32_t t19 = 1;
static int8_t x88 = INT8_MAX;
volatile int64_t x89 = INT64_MIN;
uint32_t x94 = 65106897U;
static int64_t x107 = -1864439734458LL;
volatile int64_t x112 = 171899LL;
int16_t x124 = INT16_MIN;
uint8_t x129 = 34U;
int64_t x130 = 341433LL;
static volatile int32_t t32 = -3549819;
volatile int32_t x134 = INT32_MIN;
static int32_t x138 = INT32_MAX;
int32_t x139 = INT32_MIN;
int64_t x147 = INT64_MIN;
volatile int32_t t36 = -2454;
int64_t x155 = INT64_MAX;
volatile uint8_t x156 = 7U;
int32_t t42 = 38303360;
uint32_t x179 = 1U;
static uint8_t x184 = UINT8_MAX;
volatile int32_t t45 = -223893661;
int32_t x185 = 364997;
uint8_t x186 = UINT8_MAX;
int64_t x188 = -2LL;
int64_t x192 = -381LL;
static int8_t x198 = -3;
volatile int32_t t49 = 2;
static volatile uint64_t x208 = 127LLU;
static volatile int32_t t52 = 108;
int32_t x215 = 3881;
int8_t x218 = INT8_MIN;
uint32_t x221 = 1424648U;
int8_t x224 = 0;
int64_t x225 = -1LL;
uint64_t x232 = 86341897339LLU;
uint64_t x247 = UINT64_MAX;
uint64_t x249 = 13LLU;
int16_t x258 = -1631;
volatile uint8_t x261 = 21U;
static int32_t x263 = -1;
int64_t x265 = INT64_MAX;
int64_t t66 = INT64_MAX;
static volatile uint16_t x271 = 22245U;
static int64_t t68 = 170393495785748812LL;
uint8_t x279 = 28U;
volatile int64_t t70 = 250549046169157856LL;
int64_t x288 = 358729942378809LL;
volatile int64_t t71 = -33189211LL;
volatile int16_t x289 = -1;
int32_t x291 = -23;
volatile int8_t x294 = -1;
uint32_t x295 = 57986U;
int32_t x296 = INT32_MIN;
int64_t t73 = -10124514919LL;
volatile uint64_t x299 = UINT64_MAX;
int16_t x300 = INT16_MAX;
volatile uint64_t x302 = 81640043650054LLU;
static int32_t x307 = -1;
int32_t x308 = 2030209;
int8_t x310 = -1;
int16_t x311 = INT16_MIN;
int16_t x320 = -173;
static volatile int16_t x330 = INT16_MIN;
int32_t t82 = 16541605;
static uint32_t x334 = 12U;
uint64_t x335 = 3LLU;
uint64_t x340 = 196LLU;
uint64_t t84 = 9251149030611609LLU;
uint16_t x343 = 25U;
volatile int8_t x344 = INT8_MIN;
uint64_t t85 = UINT64_MAX;
static int16_t x348 = -1;
volatile int16_t x350 = INT16_MIN;
volatile uint64_t x351 = UINT64_MAX;
uint16_t x354 = UINT16_MAX;
static volatile int32_t x356 = -1;
volatile int64_t t88 = -72910924276LL;
int32_t x357 = -1;
int8_t x360 = 58;
volatile uint8_t x364 = 122U;
static int8_t x365 = INT8_MIN;
volatile int32_t t92 = -147;
int8_t x378 = 0;
int8_t x390 = INT8_MIN;


void f0(void) {
	int32_t x1 = -233140124;
	static int32_t x2 = INT32_MIN;
	int32_t x3 = INT32_MIN;
	static uint32_t x4 = UINT32_MAX;

	t0 = (x1|((x2<=x3)|x4));

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = 20U;
	int32_t x7 = 77904;
	uint16_t x8 = 30U;
	volatile int32_t t1 = -11;

	t1 = (x5|((x6<=x7)|x8));

	if (t1 != 12479) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x10 = -1;
	int8_t x12 = INT8_MIN;
	static int32_t t2 = -16862732;

	t2 = (x9|((x10<=x11)|x12));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	static int64_t x15 = -737328990468LL;

	t3 = (x13|((x14<=x15)|x16));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 8672053284965LL;
	int8_t x18 = INT8_MIN;
	int16_t x19 = INT16_MIN;
	uint32_t x20 = 12756U;
	int64_t t4 = -118462712897658LL;

	t4 = (x17|((x18<=x19)|x20));

	if (t4 != 8672053293557LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 4;
	int16_t x22 = -18;
	int8_t x23 = INT8_MIN;
	volatile int32_t t5 = -4043791;

	t5 = (x21|((x22<=x23)|x24));

	if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 1403U;
	volatile uint8_t x26 = 1U;
	volatile int64_t x28 = -4242418LL;
	static int64_t t6 = -188920481281097LL;

	t6 = (x25|((x26<=x27)|x28));

	if (t6 != -4242049LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = INT16_MAX;
	static volatile int32_t x31 = -787;
	int32_t t7 = INT32_MIN;

	t7 = (x29|((x30<=x31)|x32));

	if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = 2;
	int32_t x35 = -24338;
	int32_t t8 = -37332022;

	t8 = (x33|((x34<=x35)|x36));

	if (t8 != -30402) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x37 = UINT16_MAX;
	uint8_t x38 = 27U;
	volatile int8_t x39 = INT8_MIN;
	volatile int32_t t9 = INT32_MAX;

	t9 = (x37|((x38<=x39)|x40));

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x42 = 36U;
	volatile uint8_t x43 = 50U;
	int64_t x44 = -170731078LL;
	int64_t t10 = 71143820896585009LL;

	t10 = (x41|((x42<=x43)|x44));

	if (t10 != -170731009LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 11;
	static uint16_t x46 = 1644U;
	uint32_t x47 = 1598U;
	volatile int32_t x48 = 61932064;

	t11 = (x45|((x46<=x47)|x48));

	if (t11 != 61932075) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x49 = 2710698495LLU;
	int32_t x50 = INT32_MAX;
	static int8_t x51 = 49;
	volatile int16_t x52 = -1;

	t12 = (x49|((x50<=x51)|x52));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = INT16_MIN;
	int8_t x54 = 44;
	int64_t x55 = INT64_MIN;
	volatile int32_t x56 = 24407221;
	volatile int32_t t13 = -1;

	t13 = (x53|((x54<=x55)|x56));

	if (t13 != -4939) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 3U;
	int32_t x58 = INT32_MAX;
	static int16_t x60 = 1;
	volatile int32_t t14 = 261;

	t14 = (x57|((x58<=x59)|x60));

	if (t14 != 3) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = -58;
	volatile int64_t x62 = -1LL;
	uint8_t x63 = 16U;
	int8_t x64 = -1;
	volatile int32_t t15 = 3;

	t15 = (x61|((x62<=x63)|x64));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 24615716884LLU;
	static int16_t x66 = 2;
	static int64_t x67 = INT64_MIN;
	int64_t x68 = INT64_MIN;

	t16 = (x65|((x66<=x67)|x68));

	if (t16 != 9223372061470492692LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = INT8_MIN;
	int8_t x70 = INT8_MAX;
	int64_t x72 = -1LL;
	int64_t t17 = 1182308255081134124LL;

	t17 = (x69|((x70<=x71)|x72));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	volatile int32_t x74 = INT32_MIN;
	static uint16_t x75 = 10413U;
	int16_t x76 = INT16_MAX;
	int32_t t18 = -71;

	t18 = (x73|((x74<=x75)|x76));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	int32_t x78 = INT32_MIN;
	int8_t x79 = INT8_MIN;
	volatile int32_t x80 = INT32_MIN;

	t19 = (x77|((x78<=x79)|x80));

	if (t19 != -32767) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 1545152U;
	volatile int32_t x82 = INT32_MIN;
	static int8_t x83 = INT8_MIN;
	volatile uint64_t x84 = 8150LLU;
	volatile uint64_t t20 = 319279298353912169LLU;

	t20 = (x81|((x82<=x83)|x84));

	if (t20 != 1548247LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = UINT16_MAX;
	int64_t x86 = -123824586LL;
	int16_t x87 = -1;
	int32_t t21 = 640;

	t21 = (x85|((x86<=x87)|x88));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x90 = -12867;
	int64_t x91 = 16113033LL;
	uint8_t x92 = 88U;
	int64_t t22 = 9LL;

	t22 = (x89|((x90<=x91)|x92));

	if (t22 != -9223372036854775719LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x93 = INT8_MIN;
	uint32_t x95 = UINT32_MAX;
	static volatile int8_t x96 = -11;
	volatile int32_t t23 = 17945602;

	t23 = (x93|((x94<=x95)|x96));

	if (t23 != -11) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = -158342076;
	int16_t x98 = INT16_MAX;
	int8_t x99 = 0;
	uint16_t x100 = UINT16_MAX;
	int32_t t24 = 23;

	t24 = (x97|((x98<=x99)|x100));

	if (t24 != -158334977) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x101 = INT8_MAX;
	static uint64_t x102 = UINT64_MAX;
	int16_t x103 = INT16_MIN;
	uint32_t x104 = 1587U;
	uint32_t t25 = 289U;

	t25 = (x101|((x102<=x103)|x104));

	if (t25 != 1663U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	int32_t x106 = -827887365;
	volatile uint16_t x108 = UINT16_MAX;
	volatile int64_t t26 = 86741887732744LL;

	t26 = (x105|((x106<=x107)|x108));

	if (t26 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -592;
	static int8_t x110 = INT8_MIN;
	uint32_t x111 = UINT32_MAX;
	int64_t t27 = 80377916259616LL;

	t27 = (x109|((x110<=x111)|x112));

	if (t27 != -5LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = INT16_MIN;
	static uint8_t x114 = UINT8_MAX;
	int64_t x115 = 560018723625657LL;
	int64_t x116 = -1LL;
	int64_t t28 = 6383215616162LL;

	t28 = (x113|((x114<=x115)|x116));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -1;
	volatile int32_t x118 = INT32_MIN;
	int16_t x119 = INT16_MIN;
	static int8_t x120 = INT8_MIN;
	volatile int32_t t29 = 16720;

	t29 = (x117|((x118<=x119)|x120));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	int32_t x122 = INT32_MIN;
	int8_t x123 = INT8_MIN;
	int32_t t30 = 21;

	t30 = (x121|((x122<=x123)|x124));

	if (t30 != -32767) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x125 = 1033U;
	volatile uint16_t x126 = 857U;
	int8_t x127 = INT8_MIN;
	int8_t x128 = 0;
	static int32_t t31 = -148;

	t31 = (x125|((x126<=x127)|x128));

	if (t31 != 1033) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x131 = INT8_MIN;
	int32_t x132 = -8412;

	t32 = (x129|((x130<=x131)|x132));

	if (t32 != -8410) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -1;
	int64_t x135 = INT64_MIN;
	uint32_t x136 = UINT32_MAX;
	static uint32_t t33 = UINT32_MAX;

	t33 = (x133|((x134<=x135)|x136));

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = UINT16_MAX;
	static int8_t x140 = INT8_MAX;
	int32_t t34 = -66;

	t34 = (x137|((x138<=x139)|x140));

	if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x141 = UINT16_MAX;
	volatile int8_t x142 = -1;
	volatile int16_t x143 = -1;
	uint32_t x144 = UINT32_MAX;
	uint32_t t35 = UINT32_MAX;

	t35 = (x141|((x142<=x143)|x144));

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = -1;
	static uint32_t x146 = 227277422U;
	int32_t x148 = -1782;

	t36 = (x145|((x146<=x147)|x148));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x149 = -671;
	int16_t x150 = 6871;
	volatile int8_t x151 = -11;
	int32_t x152 = -1;
	volatile int32_t t37 = 0;

	t37 = (x149|((x150<=x151)|x152));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = -15;
	static uint64_t x154 = 147811203LLU;
	int32_t t38 = -15;

	t38 = (x153|((x154<=x155)|x156));

	if (t38 != -9) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = 7087201756818290LL;
	int64_t x158 = INT64_MIN;
	int16_t x159 = 493;
	int8_t x160 = 2;
	volatile int64_t t39 = -299390LL;

	t39 = (x157|((x158<=x159)|x160));

	if (t39 != 7087201756818291LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x161 = -3310;
	int8_t x162 = INT8_MIN;
	volatile uint64_t x163 = 183947386LLU;
	int32_t x164 = INT32_MIN;
	int32_t t40 = 11090334;

	t40 = (x161|((x162<=x163)|x164));

	if (t40 != -3310) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MAX;
	int8_t x166 = 1;
	int32_t x167 = 1583184;
	volatile int32_t x168 = -4391;
	int64_t t41 = 9LL;

	t41 = (x165|((x166<=x167)|x168));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = UINT8_MAX;
	uint32_t x170 = UINT32_MAX;
	int64_t x171 = INT64_MIN;
	uint8_t x172 = 3U;

	t42 = (x169|((x170<=x171)|x172));

	if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = -13867000491LL;
	volatile uint16_t x174 = UINT16_MAX;
	static int8_t x175 = -1;
	uint16_t x176 = UINT16_MAX;
	volatile int64_t t43 = 2548158856796LL;

	t43 = (x173|((x174<=x175)|x176));

	if (t43 != -13866958849LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = -3704;
	static uint16_t x178 = UINT16_MAX;
	int16_t x180 = -1;
	static int32_t t44 = -795134471;

	t44 = (x177|((x178<=x179)|x180));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MIN;
	int16_t x182 = -1;
	uint16_t x183 = 5370U;

	t45 = (x181|((x182<=x183)|x184));

	if (t45 != -2147483393) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x187 = INT32_MAX;
	volatile int64_t t46 = 27704506LL;

	t46 = (x185|((x186<=x187)|x188));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x189 = 285277LLU;
	int16_t x190 = INT16_MAX;
	int64_t x191 = 12756406218771042LL;
	uint64_t t47 = 384731583LLU;

	t47 = (x189|((x190<=x191)|x192));

	if (t47 != 18446744073709551327LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = 1;
	static int64_t x194 = 909376128870LL;
	int8_t x195 = INT8_MIN;
	volatile int64_t x196 = INT64_MAX;
	volatile int64_t t48 = INT64_MAX;

	t48 = (x193|((x194<=x195)|x196));

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -1;
	int64_t x199 = -35896857576LL;
	static uint16_t x200 = UINT16_MAX;

	t49 = (x197|((x198<=x199)|x200));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = 25;
	int16_t x202 = INT16_MIN;
	int16_t x203 = 8081;
	uint64_t x204 = UINT64_MAX;
	static uint64_t t50 = UINT64_MAX;

	t50 = (x201|((x202<=x203)|x204));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MAX;
	int64_t x206 = 537652837332590983LL;
	int16_t x207 = 24;
	uint64_t t51 = 341701080756407LLU;

	t51 = (x205|((x206<=x207)|x208));

	if (t51 != 127LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -1;
	int32_t x210 = 1;
	volatile uint16_t x211 = 392U;
	volatile int8_t x212 = -58;

	t52 = (x209|((x210<=x211)|x212));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x213 = INT8_MIN;
	int64_t x214 = 63671116985LL;
	static volatile uint64_t x216 = 228835963942LLU;
	uint64_t t53 = 2337LLU;

	t53 = (x213|((x214<=x215)|x216));

	if (t53 != 18446744073709551526LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x217 = INT32_MIN;
	volatile uint16_t x219 = 2U;
	volatile uint32_t x220 = 23U;
	volatile uint32_t t54 = 546169860U;

	t54 = (x217|((x218<=x219)|x220));

	if (t54 != 2147483671U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x222 = -1;
	int64_t x223 = -73341116675143LL;
	uint32_t t55 = 27628917U;

	t55 = (x221|((x222<=x223)|x224));

	if (t55 != 1424648U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x226 = 93U;
	int64_t x227 = INT64_MIN;
	volatile uint8_t x228 = 54U;
	volatile int64_t t56 = 0LL;

	t56 = (x225|((x226<=x227)|x228));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = 1;
	volatile uint8_t x230 = 1U;
	int8_t x231 = INT8_MAX;
	static volatile uint64_t t57 = 1443922398LLU;

	t57 = (x229|((x230<=x231)|x232));

	if (t57 != 86341897339LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 1U;
	int8_t x234 = 1;
	volatile int64_t x235 = INT64_MAX;
	static volatile int8_t x236 = -25;
	volatile int32_t t58 = -388723612;

	t58 = (x233|((x234<=x235)|x236));

	if (t58 != -25) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x237 = 3U;
	int16_t x238 = INT16_MAX;
	static int8_t x239 = INT8_MIN;
	uint32_t x240 = 3U;
	static volatile uint32_t t59 = 291080107U;

	t59 = (x237|((x238<=x239)|x240));

	if (t59 != 3U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -1;
	int32_t x242 = INT32_MIN;
	static uint64_t x243 = 5LLU;
	int32_t x244 = 320443;
	volatile int32_t t60 = -4131816;

	t60 = (x241|((x242<=x243)|x244));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 1U;
	volatile uint64_t x246 = 2897537605045LLU;
	uint32_t x248 = 6U;
	uint32_t t61 = 108750476U;

	t61 = (x245|((x246<=x247)|x248));

	if (t61 != 7U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x250 = INT16_MAX;
	int32_t x251 = INT32_MIN;
	static uint32_t x252 = 7U;
	uint64_t t62 = 184535044242860604LLU;

	t62 = (x249|((x250<=x251)|x252));

	if (t62 != 15LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = UINT64_MAX;
	int32_t x254 = INT32_MIN;
	static uint8_t x255 = 1U;
	static int8_t x256 = INT8_MAX;
	uint64_t t63 = UINT64_MAX;

	t63 = (x253|((x254<=x255)|x256));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = -270;
	static int32_t x259 = INT32_MAX;
	int32_t x260 = -30711183;
	static volatile int32_t t64 = 29829;

	t64 = (x257|((x258<=x259)|x260));

	if (t64 != -269) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x262 = INT32_MIN;
	int16_t x264 = -1;
	volatile int32_t t65 = 982534;

	t65 = (x261|((x262<=x263)|x264));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x266 = INT16_MIN;
	static volatile int64_t x267 = INT64_MIN;
	int8_t x268 = 0;

	t66 = (x265|((x266<=x267)|x268));

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MAX;
	int16_t x270 = INT16_MIN;
	int32_t x272 = INT32_MIN;
	int32_t t67 = -6;

	t67 = (x269|((x270<=x271)|x272));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x273 = INT64_MIN;
	volatile uint16_t x274 = 190U;
	uint8_t x275 = 18U;
	static int8_t x276 = 1;

	t68 = (x273|((x274<=x275)|x276));

	if (t68 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MIN;
	int8_t x278 = INT8_MIN;
	static int64_t x280 = INT64_MAX;
	volatile int64_t t69 = 4581261503LL;

	t69 = (x277|((x278<=x279)|x280));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	int64_t x282 = -1LL;
	int16_t x283 = INT16_MIN;
	int32_t x284 = INT32_MAX;

	t70 = (x281|((x282<=x283)|x284));

	if (t70 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = -1;
	int16_t x286 = 4323;
	volatile uint16_t x287 = 26U;

	t71 = (x285|((x286<=x287)|x288));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x290 = -24;
	volatile int16_t x292 = -1;
	volatile int32_t t72 = 13701739;

	t72 = (x289|((x290<=x291)|x292));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -905692038LL;

	t73 = (x293|((x294<=x295)|x296));

	if (t73 != -905692038LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -1LL;
	int32_t x298 = -57455641;
	int64_t t74 = -23657218426790565LL;

	t74 = (x297|((x298<=x299)|x300));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = 30;
	int32_t x303 = -1;
	static int32_t x304 = -1;
	volatile int32_t t75 = 1420;

	t75 = (x301|((x302<=x303)|x304));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = 2U;
	volatile uint64_t x306 = UINT64_MAX;
	static volatile int32_t t76 = -200;

	t76 = (x305|((x306<=x307)|x308));

	if (t76 != 2030211) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x309 = 23987;
	volatile int64_t x312 = INT64_MIN;
	int64_t t77 = -370LL;

	t77 = (x309|((x310<=x311)|x312));

	if (t77 != -9223372036854751821LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = UINT16_MAX;
	static uint64_t x314 = UINT64_MAX;
	int16_t x315 = INT16_MAX;
	static int16_t x316 = INT16_MIN;
	volatile int32_t t78 = 9771640;

	t78 = (x313|((x314<=x315)|x316));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	uint32_t x318 = 39330618U;
	uint16_t x319 = 141U;
	int32_t t79 = 1;

	t79 = (x317|((x318<=x319)|x320));

	if (t79 != -173) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = UINT16_MAX;
	volatile uint64_t x322 = 3265326156601124LLU;
	static int8_t x323 = INT8_MAX;
	int32_t x324 = INT32_MAX;
	static volatile int32_t t80 = INT32_MAX;

	t80 = (x321|((x322<=x323)|x324));

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = UINT32_MAX;
	static int32_t x326 = -5164;
	static int8_t x327 = 16;
	volatile uint64_t x328 = 94221185765197355LLU;
	uint64_t t81 = 788LLU;

	t81 = (x325|((x326<=x327)|x328));

	if (t81 != 94221188653383679LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = UINT16_MAX;
	static volatile int32_t x331 = -1;
	static int8_t x332 = -1;

	t82 = (x329|((x330<=x331)|x332));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = 23;
	int64_t x336 = -101740339389666LL;
	static volatile int64_t t83 = 48855456LL;

	t83 = (x333|((x334<=x335)|x336));

	if (t83 != -101740339389665LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MIN;
	uint64_t x338 = UINT64_MAX;
	uint16_t x339 = UINT16_MAX;

	t84 = (x337|((x338<=x339)|x340));

	if (t84 != 18446744073709519044LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = UINT64_MAX;
	int64_t x342 = INT64_MIN;

	t85 = (x341|((x342<=x343)|x344));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = UINT64_MAX;
	int64_t x346 = INT64_MIN;
	static volatile int8_t x347 = -53;
	uint64_t t86 = UINT64_MAX;

	t86 = (x345|((x346<=x347)|x348));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 0U;
	uint8_t x352 = UINT8_MAX;
	volatile int32_t t87 = 3;

	t87 = (x349|((x350<=x351)|x352));

	if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x353 = INT64_MIN;
	uint8_t x355 = UINT8_MAX;

	t88 = (x353|((x354<=x355)|x356));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x358 = INT16_MIN;
	volatile uint32_t x359 = 433U;
	volatile int32_t t89 = 41;

	t89 = (x357|((x358<=x359)|x360));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = UINT32_MAX;
	int8_t x362 = INT8_MIN;
	volatile uint32_t x363 = UINT32_MAX;
	static uint32_t t90 = UINT32_MAX;

	t90 = (x361|((x362<=x363)|x364));

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x366 = 1;
	static int8_t x367 = INT8_MAX;
	static int16_t x368 = -11636;
	volatile int32_t t91 = -1879;

	t91 = (x365|((x366<=x367)|x368));

	if (t91 != -115) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	int32_t x370 = INT32_MAX;
	int16_t x371 = -1;
	volatile uint16_t x372 = 12911U;

	t92 = (x369|((x370<=x371)|x372));

	if (t92 != -17) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MAX;
	static volatile int64_t x374 = -1LL;
	volatile int64_t x375 = INT64_MAX;
	static volatile int8_t x376 = -55;
	int32_t t93 = 421121;

	t93 = (x373|((x374<=x375)|x376));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = 7324;
	static int32_t x379 = -60932785;
	volatile int16_t x380 = INT16_MAX;
	volatile int32_t t94 = 205;

	t94 = (x377|((x378<=x379)|x380));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x381 = 463U;
	uint8_t x382 = 67U;
	volatile int8_t x383 = 1;
	uint16_t x384 = 7U;
	uint32_t t95 = 359192904U;

	t95 = (x381|((x382<=x383)|x384));

	if (t95 != 463U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = UINT16_MAX;
	volatile uint32_t x386 = 30641382U;
	int16_t x387 = INT16_MIN;
	uint16_t x388 = 104U;
	int32_t t96 = 1;

	t96 = (x385|((x386<=x387)|x388));

	if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x389 = UINT8_MAX;
	volatile uint32_t x391 = 526127U;
	int32_t x392 = 400;
	volatile int32_t t97 = 438075911;

	t97 = (x389|((x390<=x391)|x392));

	if (t97 != 511) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x393 = -741446;
	int16_t x394 = INT16_MIN;
	int16_t x395 = INT16_MIN;
	int32_t x396 = 1;
	int32_t t98 = 27339563;

	t98 = (x393|((x394<=x395)|x396));

	if (t98 != -741445) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 12432067788804327LLU;
	int16_t x398 = -1;
	uint32_t x399 = 1055435384U;
	int32_t x400 = 2664356;
	volatile uint64_t t99 = 14256LLU;

	t99 = (x397|((x398<=x399)|x400));

	if (t99 != 12432067789371367LLU) { NG(); } else { ; }
	
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

