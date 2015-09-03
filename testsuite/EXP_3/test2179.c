#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x4 = 14012344U;
int32_t t0 = 0;
uint64_t x13 = 5LLU;
int16_t x15 = -1;
static int16_t x16 = INT16_MIN;
static int8_t x26 = INT8_MIN;
int16_t x29 = INT16_MAX;
int16_t x36 = 1;
int8_t x38 = INT8_MAX;
volatile uint8_t x42 = 2U;
uint16_t x43 = 48U;
int32_t t10 = 13261;
volatile int64_t x50 = -5805096LL;
static uint32_t x56 = UINT32_MAX;
int32_t x58 = INT32_MIN;
volatile int32_t t14 = 227977;
int32_t x63 = INT32_MIN;
volatile int32_t t15 = 1797;
int16_t x66 = INT16_MAX;
uint16_t x68 = UINT16_MAX;
volatile int32_t t18 = 218121;
int8_t x87 = INT8_MAX;
volatile int32_t t23 = 1;
uint32_t x104 = 215324U;
static uint16_t x108 = 14551U;
int32_t t26 = 7275;
volatile int16_t x113 = -1;
volatile int64_t x120 = -56289461263LL;
volatile int8_t x124 = -1;
volatile int64_t x126 = -1LL;
static volatile int16_t x137 = INT16_MAX;
int32_t x138 = -1;
int32_t x139 = INT32_MIN;
uint32_t x142 = UINT32_MAX;
volatile uint8_t x148 = 4U;
uint64_t x152 = 6571914736670989LLU;
int16_t x156 = INT16_MIN;
int32_t t38 = 466;
volatile int64_t x158 = -140042063LL;
int64_t x168 = INT64_MAX;
uint64_t x170 = 5128592LLU;
volatile int16_t x178 = 14;
int8_t x179 = -1;
volatile uint8_t x180 = 0U;
static uint8_t x181 = UINT8_MAX;
int32_t x183 = INT32_MIN;
int64_t x188 = INT64_MAX;
static int32_t t49 = -233;
int32_t t51 = -6390;
static int32_t t52 = -1035686416;
uint32_t x216 = 729U;
static int32_t t53 = 406722730;
uint16_t x219 = UINT16_MAX;
uint64_t x230 = UINT64_MAX;
int16_t x231 = INT16_MIN;
int64_t x234 = 189055LL;
uint32_t x239 = 8273U;
volatile int32_t t60 = 738;
static volatile uint32_t x248 = 4U;
int32_t t62 = -18;
static int32_t t64 = -1276;
uint32_t x261 = UINT32_MAX;
uint64_t x264 = 34297363252752LLU;
volatile int64_t x266 = -2414634605276LL;
static int32_t t67 = 1945125;
int32_t x273 = -119;
volatile int16_t x274 = INT16_MIN;
volatile int8_t x283 = INT8_MAX;
int32_t t71 = 247513;
uint64_t x289 = 3683358644234311LLU;
int64_t x291 = INT64_MIN;
int64_t x292 = INT64_MAX;
uint32_t x296 = 42U;
int32_t t73 = 441;
uint16_t x302 = UINT16_MAX;
uint16_t x303 = UINT16_MAX;
volatile int32_t t75 = -151335;
uint32_t x318 = 1130841U;
static int32_t t80 = -140084;
static int64_t x334 = INT64_MIN;
int32_t x337 = -1;
volatile int32_t t85 = -77;
uint16_t x352 = UINT16_MAX;
int64_t x356 = 2145LL;
int64_t x359 = INT64_MAX;
int32_t x361 = 2093733;
volatile int64_t x367 = 22802050344LL;
static int16_t x372 = INT16_MIN;
volatile int32_t t93 = -165314;
volatile uint16_t x377 = 1U;
int32_t t94 = 3097214;
static int64_t x387 = INT64_MIN;
int32_t t96 = 57205;
int64_t x390 = INT64_MIN;
int8_t x391 = -1;
uint16_t x399 = 14U;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	static volatile uint32_t x2 = UINT32_MAX;
	volatile uint16_t x3 = 6449U;

	t0 = ((x1|x2)==(x3^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -3;
	volatile uint64_t x6 = UINT64_MAX;
	static int32_t x7 = INT32_MIN;
	uint8_t x8 = 3U;
	volatile int32_t t1 = -30785077;

	t1 = ((x5|x6)==(x7^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	static int32_t x10 = INT32_MIN;
	volatile int16_t x11 = -1;
	uint32_t x12 = 5560U;
	int32_t t2 = -6110997;

	t2 = ((x9|x10)==(x11^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x14 = INT32_MIN;
	int32_t t3 = -3754070;

	t3 = ((x13|x14)==(x15^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	int8_t x18 = INT8_MAX;
	uint8_t x19 = 24U;
	int32_t x20 = 153532891;
	int32_t t4 = 43294468;

	t4 = ((x17|x18)==(x19^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	static uint8_t x22 = UINT8_MAX;
	int64_t x23 = INT64_MAX;
	static uint32_t x24 = 565054U;
	int32_t t5 = 12332199;

	t5 = ((x21|x22)==(x23^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	static int64_t x27 = -3828301697332LL;
	static volatile int32_t x28 = INT32_MIN;
	int32_t t6 = 44187;

	t6 = ((x25|x26)==(x27^x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = -1LL;
	uint32_t x31 = 12U;
	uint8_t x32 = 112U;
	volatile int32_t t7 = -14715498;

	t7 = ((x29|x30)==(x31^x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 67;
	uint8_t x34 = 16U;
	uint64_t x35 = 40647668LLU;
	int32_t t8 = 6843259;

	t8 = ((x33|x34)==(x35^x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = 12;
	int16_t x39 = -1;
	int8_t x40 = INT8_MIN;
	static int32_t t9 = -502709216;

	t9 = ((x37|x38)==(x39^x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	static int64_t x44 = -48015544944289033LL;

	t10 = ((x41|x42)==(x43^x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = 1LL;
	volatile uint64_t x46 = UINT64_MAX;
	int64_t x47 = INT64_MIN;
	uint8_t x48 = 62U;
	volatile int32_t t11 = -7;

	t11 = ((x45|x46)==(x47^x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	static int32_t x51 = INT32_MAX;
	int32_t x52 = INT32_MAX;
	int32_t t12 = -112081423;

	t12 = ((x49|x50)==(x51^x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x53 = UINT32_MAX;
	int32_t x54 = -104693;
	static int8_t x55 = -1;
	volatile int32_t t13 = 0;

	t13 = ((x53|x54)==(x55^x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MAX;
	int16_t x59 = INT16_MAX;
	uint16_t x60 = UINT16_MAX;

	t14 = ((x57|x58)==(x59^x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -8;
	int8_t x62 = INT8_MAX;
	int16_t x64 = INT16_MIN;

	t15 = ((x61|x62)==(x63^x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	uint16_t x67 = 2U;
	static volatile int32_t t16 = -421329;

	t16 = ((x65|x66)==(x67^x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x69 = UINT64_MAX;
	int8_t x70 = 49;
	static uint8_t x71 = 72U;
	static int8_t x72 = INT8_MAX;
	int32_t t17 = 3452;

	t17 = ((x69|x70)==(x71^x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1LL;
	int16_t x74 = 7612;
	uint16_t x75 = UINT16_MAX;
	static volatile int8_t x76 = INT8_MIN;

	t18 = ((x73|x74)==(x75^x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = UINT8_MAX;
	uint8_t x78 = UINT8_MAX;
	int16_t x79 = -212;
	int8_t x80 = INT8_MAX;
	static volatile int32_t t19 = -876027;

	t19 = ((x77|x78)==(x79^x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = 87;
	volatile int16_t x82 = INT16_MIN;
	int32_t x83 = -1;
	uint64_t x84 = UINT64_MAX;
	static volatile int32_t t20 = -2246;

	t20 = ((x81|x82)==(x83^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	volatile uint64_t x86 = UINT64_MAX;
	volatile int64_t x88 = -1LL;
	volatile int32_t t21 = 48598;

	t21 = ((x85|x86)==(x87^x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x89 = -1;
	int32_t x90 = 315;
	uint32_t x91 = 630487U;
	static volatile int16_t x92 = -820;
	volatile int32_t t22 = 0;

	t22 = ((x89|x90)==(x91^x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	volatile uint32_t x94 = UINT32_MAX;
	int32_t x95 = -1;
	int16_t x96 = -1;

	t23 = ((x93|x94)==(x95^x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x97 = 1U;
	uint32_t x98 = UINT32_MAX;
	int64_t x99 = 213059354859122544LL;
	static uint64_t x100 = 379LLU;
	int32_t t24 = -690;

	t24 = ((x97|x98)==(x99^x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x101 = -17620LL;
	volatile int8_t x102 = -40;
	static int32_t x103 = -1;
	volatile int32_t t25 = 13440040;

	t25 = ((x101|x102)==(x103^x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = UINT32_MAX;
	volatile int16_t x106 = INT16_MAX;
	int8_t x107 = -7;

	t26 = ((x105|x106)==(x107^x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x109 = -11547682215995LL;
	int64_t x110 = INT64_MAX;
	uint32_t x111 = 2503U;
	volatile int64_t x112 = -1053441LL;
	static int32_t t27 = 142752;

	t27 = ((x109|x110)==(x111^x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x114 = INT16_MIN;
	int64_t x115 = INT64_MIN;
	volatile int8_t x116 = 0;
	volatile int32_t t28 = 0;

	t28 = ((x113|x114)==(x115^x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	volatile uint16_t x118 = 2U;
	int64_t x119 = INT64_MIN;
	volatile int32_t t29 = -4050;

	t29 = ((x117|x118)==(x119^x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x121 = -5495752;
	volatile uint32_t x122 = UINT32_MAX;
	uint64_t x123 = UINT64_MAX;
	volatile int32_t t30 = -16269;

	t30 = ((x121|x122)==(x123^x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 2050956971135LLU;
	static int32_t x127 = INT32_MIN;
	int32_t x128 = -1;
	volatile int32_t t31 = 108657;

	t31 = ((x125|x126)==(x127^x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = INT64_MIN;
	static uint8_t x130 = 1U;
	static int16_t x131 = INT16_MAX;
	int16_t x132 = INT16_MIN;
	int32_t t32 = 265327;

	t32 = ((x129|x130)==(x131^x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x133 = 1U;
	volatile int32_t x134 = 26858;
	static uint32_t x135 = 1U;
	int32_t x136 = INT32_MAX;
	int32_t t33 = 258;

	t33 = ((x133|x134)==(x135^x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x140 = 35462315336468LLU;
	int32_t t34 = 0;

	t34 = ((x137|x138)==(x139^x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -12920563;
	uint8_t x143 = 1U;
	int64_t x144 = 256114735083832776LL;
	int32_t t35 = 64;

	t35 = ((x141|x142)==(x143^x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x145 = 3U;
	int64_t x146 = -1LL;
	uint64_t x147 = 424888096170LLU;
	int32_t t36 = -526063081;

	t36 = ((x145|x146)==(x147^x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint8_t x149 = UINT8_MAX;
	static volatile int64_t x150 = INT64_MIN;
	int32_t x151 = -1;
	volatile int32_t t37 = -448;

	t37 = ((x149|x150)==(x151^x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = 745569;
	static int32_t x154 = 19692296;
	int16_t x155 = INT16_MIN;

	t38 = ((x153|x154)==(x155^x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = 4506618093722136LL;
	static volatile int64_t x159 = 4040LL;
	volatile int16_t x160 = 30;
	static volatile int32_t t39 = 434;

	t39 = ((x157|x158)==(x159^x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x161 = INT8_MAX;
	volatile int32_t x162 = 256238;
	volatile uint32_t x163 = UINT32_MAX;
	static int16_t x164 = INT16_MIN;
	int32_t t40 = 7323253;

	t40 = ((x161|x162)==(x163^x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	static uint8_t x166 = UINT8_MAX;
	int32_t x167 = -12371;
	static volatile int32_t t41 = 2;

	t41 = ((x165|x166)==(x167^x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 4085458U;
	volatile uint64_t x171 = 204628150916300322LLU;
	int32_t x172 = INT32_MIN;
	volatile int32_t t42 = 1;

	t42 = ((x169|x170)==(x171^x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -1LL;
	int32_t x174 = INT32_MIN;
	int8_t x175 = INT8_MIN;
	int64_t x176 = INT64_MIN;
	int32_t t43 = 104;

	t43 = ((x173|x174)==(x175^x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	volatile int32_t t44 = -36593287;

	t44 = ((x177|x178)==(x179^x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x182 = -1;
	static int32_t x184 = -10329322;
	int32_t t45 = 46052701;

	t45 = ((x181|x182)==(x183^x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = 1;
	int16_t x186 = -1;
	uint64_t x187 = 14520606999981257LLU;
	int32_t t46 = -242;

	t46 = ((x185|x186)==(x187^x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x189 = 8783659790333111463LLU;
	int16_t x190 = -1;
	int8_t x191 = 9;
	int64_t x192 = 22326696821766023LL;
	volatile int32_t t47 = -1349;

	t47 = ((x189|x190)==(x191^x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MAX;
	volatile uint16_t x194 = 0U;
	int16_t x195 = -1;
	uint16_t x196 = 0U;
	volatile int32_t t48 = -2077185;

	t48 = ((x193|x194)==(x195^x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x197 = INT8_MIN;
	int8_t x198 = INT8_MAX;
	static int8_t x199 = INT8_MAX;
	static int64_t x200 = INT64_MIN;

	t49 = ((x197|x198)==(x199^x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x201 = 0U;
	uint32_t x202 = 262123U;
	int64_t x203 = -1LL;
	int64_t x204 = -1LL;
	int32_t t50 = 645579;

	t50 = ((x201|x202)==(x203^x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -15LL;
	int16_t x206 = -393;
	int8_t x207 = 1;
	static uint64_t x208 = 2762944264LLU;

	t51 = ((x205|x206)==(x207^x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x209 = INT16_MIN;
	int32_t x210 = INT32_MIN;
	int32_t x211 = INT32_MIN;
	static uint32_t x212 = 41986542U;

	t52 = ((x209|x210)==(x211^x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = -1;
	int8_t x214 = 10;
	volatile int32_t x215 = INT32_MIN;

	t53 = ((x213|x214)==(x215^x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	uint8_t x218 = 0U;
	uint16_t x220 = 474U;
	static volatile int32_t t54 = 358;

	t54 = ((x217|x218)==(x219^x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x221 = UINT64_MAX;
	int32_t x222 = 60194464;
	volatile int32_t x223 = INT32_MIN;
	static int16_t x224 = 0;
	volatile int32_t t55 = 1;

	t55 = ((x221|x222)==(x223^x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -1LL;
	int64_t x226 = -7028550582266241LL;
	static int16_t x227 = 103;
	uint8_t x228 = 78U;
	static int32_t t56 = -176;

	t56 = ((x225|x226)==(x227^x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = INT8_MAX;
	static volatile int32_t x232 = INT32_MAX;
	int32_t t57 = -1094390;

	t57 = ((x229|x230)==(x231^x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x233 = INT16_MIN;
	uint64_t x235 = 22008011080340LLU;
	int32_t x236 = -1;
	static volatile int32_t t58 = 392362765;

	t58 = ((x233|x234)==(x235^x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x237 = 0;
	int8_t x238 = INT8_MIN;
	uint64_t x240 = UINT64_MAX;
	volatile int32_t t59 = 996;

	t59 = ((x237|x238)==(x239^x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MAX;
	int16_t x242 = INT16_MIN;
	int32_t x243 = -1;
	int64_t x244 = 3LL;

	t60 = ((x241|x242)==(x243^x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x245 = 58LLU;
	int16_t x246 = INT16_MIN;
	int16_t x247 = -1;
	int32_t t61 = 144;

	t61 = ((x245|x246)==(x247^x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = 55995LL;
	int8_t x250 = -1;
	int64_t x251 = 188011558LL;
	uint8_t x252 = 9U;

	t62 = ((x249|x250)==(x251^x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x253 = INT16_MAX;
	static int64_t x254 = -196LL;
	uint64_t x255 = 91LLU;
	uint8_t x256 = 108U;
	volatile int32_t t63 = -14809264;

	t63 = ((x253|x254)==(x255^x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = -1;
	int64_t x258 = -13517LL;
	static uint32_t x259 = UINT32_MAX;
	uint16_t x260 = 13U;

	t64 = ((x257|x258)==(x259^x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x262 = -42;
	int32_t x263 = 6;
	int32_t t65 = 1;

	t65 = ((x261|x262)==(x263^x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MAX;
	int32_t x267 = INT32_MIN;
	int64_t x268 = INT64_MIN;
	volatile int32_t t66 = 85;

	t66 = ((x265|x266)==(x267^x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = UINT16_MAX;
	static int16_t x270 = INT16_MAX;
	static int32_t x271 = -6;
	static uint16_t x272 = 11350U;

	t67 = ((x269|x270)==(x271^x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x275 = INT8_MIN;
	uint64_t x276 = 4702490280LLU;
	volatile int32_t t68 = 73748;

	t68 = ((x273|x274)==(x275^x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = 24433599U;
	static int8_t x278 = INT8_MIN;
	static volatile uint8_t x279 = UINT8_MAX;
	volatile uint32_t x280 = UINT32_MAX;
	volatile int32_t t69 = 179;

	t69 = ((x277|x278)==(x279^x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = UINT16_MAX;
	int16_t x282 = -1;
	static int8_t x284 = -47;
	volatile int32_t t70 = 734913;

	t70 = ((x281|x282)==(x283^x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MIN;
	int64_t x286 = INT64_MIN;
	int64_t x287 = -1LL;
	static int8_t x288 = INT8_MAX;

	t71 = ((x285|x286)==(x287^x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x290 = -1;
	volatile int32_t t72 = -626;

	t72 = ((x289|x290)==(x291^x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x293 = INT64_MIN;
	volatile uint64_t x294 = 269174621676932721LLU;
	static volatile int64_t x295 = INT64_MIN;

	t73 = ((x293|x294)==(x295^x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x297 = 1028603875963377506LL;
	int32_t x298 = INT32_MIN;
	static volatile uint64_t x299 = 2028376LLU;
	uint16_t x300 = UINT16_MAX;
	int32_t t74 = 747345964;

	t74 = ((x297|x298)==(x299^x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = 1U;
	static int16_t x304 = -1;

	t75 = ((x301|x302)==(x303^x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	volatile int64_t x306 = INT64_MIN;
	volatile int16_t x307 = INT16_MAX;
	static volatile int16_t x308 = 1;
	int32_t t76 = -3667;

	t76 = ((x305|x306)==(x307^x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	int32_t x310 = 14831316;
	static int64_t x311 = INT64_MAX;
	volatile int16_t x312 = INT16_MIN;
	volatile int32_t t77 = -3;

	t77 = ((x309|x310)==(x311^x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = 9;
	volatile int8_t x314 = INT8_MIN;
	static volatile int64_t x315 = INT64_MIN;
	volatile int32_t x316 = INT32_MAX;
	int32_t t78 = -579078162;

	t78 = ((x313|x314)==(x315^x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 214883U;
	uint8_t x319 = UINT8_MAX;
	int32_t x320 = INT32_MIN;
	int32_t t79 = -1;

	t79 = ((x317|x318)==(x319^x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	uint32_t x322 = 63U;
	int64_t x323 = 7626458826532LL;
	int64_t x324 = INT64_MIN;

	t80 = ((x321|x322)==(x323^x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -1;
	uint32_t x326 = 4673481U;
	int16_t x327 = INT16_MIN;
	uint16_t x328 = UINT16_MAX;
	int32_t t81 = -77266454;

	t81 = ((x325|x326)==(x327^x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x329 = 1490317875U;
	volatile int16_t x330 = -1;
	static int16_t x331 = INT16_MIN;
	int16_t x332 = INT16_MAX;
	volatile int32_t t82 = -719;

	t82 = ((x329|x330)==(x331^x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	int32_t x335 = INT32_MIN;
	uint32_t x336 = UINT32_MAX;
	volatile int32_t t83 = 260138;

	t83 = ((x333|x334)==(x335^x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x338 = UINT8_MAX;
	volatile int8_t x339 = -1;
	static volatile uint16_t x340 = 44U;
	int32_t t84 = 1;

	t84 = ((x337|x338)==(x339^x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	static int8_t x342 = INT8_MIN;
	int64_t x343 = INT64_MIN;
	uint8_t x344 = UINT8_MAX;

	t85 = ((x341|x342)==(x343^x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = UINT32_MAX;
	int64_t x346 = INT64_MAX;
	volatile uint8_t x347 = 72U;
	int64_t x348 = -1LL;
	volatile int32_t t86 = 1084;

	t86 = ((x345|x346)==(x347^x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 628452933LLU;
	volatile uint64_t x350 = UINT64_MAX;
	uint16_t x351 = 0U;
	int32_t t87 = 2089911;

	t87 = ((x349|x350)==(x351^x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MAX;
	int64_t x354 = INT64_MAX;
	int8_t x355 = 8;
	int32_t t88 = -537945771;

	t88 = ((x353|x354)==(x355^x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x357 = 0;
	int32_t x358 = -514134;
	volatile int16_t x360 = 7520;
	int32_t t89 = -24341;

	t89 = ((x357|x358)==(x359^x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x362 = UINT16_MAX;
	uint32_t x363 = 11U;
	int16_t x364 = 13709;
	volatile int32_t t90 = -6855908;

	t90 = ((x361|x362)==(x363^x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	static volatile int32_t x366 = -661216039;
	int8_t x368 = INT8_MAX;
	int32_t t91 = 72;

	t91 = ((x365|x366)==(x367^x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = -1;
	int32_t x370 = -1;
	static int64_t x371 = -1LL;
	volatile int32_t t92 = -1526485;

	t92 = ((x369|x370)==(x371^x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	static volatile int32_t x374 = -1;
	volatile int64_t x375 = 57085464027LL;
	uint8_t x376 = UINT8_MAX;

	t93 = ((x373|x374)==(x375^x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x378 = INT32_MIN;
	uint16_t x379 = 1814U;
	int16_t x380 = 89;

	t94 = ((x377|x378)==(x379^x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = 0;
	int32_t x382 = -1;
	volatile int32_t x383 = -1;
	int32_t x384 = INT32_MIN;
	int32_t t95 = 144;

	t95 = ((x381|x382)==(x383^x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = INT32_MAX;
	volatile uint16_t x386 = UINT16_MAX;
	int32_t x388 = INT32_MIN;

	t96 = ((x385|x386)==(x387^x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 12U;
	volatile int64_t x392 = 6896280LL;
	int32_t t97 = -1;

	t97 = ((x389|x390)==(x391^x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x393 = INT16_MAX;
	int16_t x394 = -3;
	int8_t x395 = -1;
	int32_t x396 = INT32_MIN;
	int32_t t98 = -8;

	t98 = ((x393|x394)==(x395^x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x397 = INT8_MIN;
	int32_t x398 = INT32_MIN;
	int32_t x400 = INT32_MIN;
	static volatile int32_t t99 = -1953990;

	t99 = ((x397|x398)==(x399^x400));

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

