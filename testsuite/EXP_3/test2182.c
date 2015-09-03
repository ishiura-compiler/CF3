#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x14 = INT16_MAX;
int32_t x15 = INT32_MIN;
uint16_t x16 = UINT16_MAX;
static volatile int64_t x17 = 2568658651772LL;
uint32_t x33 = 429802247U;
int64_t t8 = -103LL;
uint64_t x38 = 66563157064LLU;
int32_t x52 = 1;
int64_t x56 = INT64_MIN;
int64_t t14 = 216375LL;
volatile int32_t x65 = -1738;
static int16_t x67 = -14;
int8_t x68 = -3;
static uint64_t t16 = 0LLU;
int16_t x75 = -3691;
int16_t x76 = 998;
uint32_t x77 = UINT32_MAX;
static int8_t x82 = INT8_MIN;
static int32_t t20 = -1323018;
int64_t x91 = INT64_MIN;
uint64_t t22 = 0LLU;
static volatile int64_t x99 = INT64_MIN;
uint16_t x101 = 1U;
static int64_t x103 = INT64_MIN;
static uint16_t x114 = UINT16_MAX;
volatile uint32_t t29 = 510835652U;
int64_t x121 = INT64_MIN;
int8_t x132 = -4;
uint16_t x135 = UINT16_MAX;
volatile int16_t x139 = INT16_MIN;
int64_t x152 = 41993317976803LL;
int32_t x159 = -3125;
int32_t x160 = 1;
uint16_t x168 = 2758U;
static uint32_t x171 = UINT32_MAX;
volatile int32_t x172 = INT32_MAX;
uint64_t x180 = 13571LLU;
volatile uint64_t t44 = 3208283015148131054LLU;
int8_t x182 = INT8_MAX;
int32_t x186 = 65018698;
int64_t x191 = INT64_MIN;
uint16_t x193 = UINT16_MAX;
int16_t x197 = 2;
int64_t x201 = 12122245LL;
int64_t x205 = -3309202160LL;
volatile int64_t t51 = 1LL;
int16_t x210 = INT16_MAX;
uint8_t x211 = 0U;
static uint8_t x228 = UINT8_MAX;
static int64_t x236 = -209LL;
int64_t x238 = 2398510420441917LL;
static int16_t x239 = INT16_MAX;
static volatile int16_t x245 = -1;
int64_t x247 = -616521752757702LL;
volatile uint8_t x248 = 0U;
int16_t x251 = INT16_MIN;
static uint32_t x252 = UINT32_MAX;
uint8_t x253 = 1U;
static int16_t x255 = -1;
static int64_t x257 = 511018708329768LL;
int16_t x258 = INT16_MIN;
int8_t x259 = -1;
int64_t x262 = INT64_MIN;
volatile uint8_t x266 = 127U;
int32_t x272 = -1;
volatile uint64_t t68 = 1625675684LLU;
int16_t x279 = 16;
static volatile int32_t x283 = INT32_MAX;
static int64_t x284 = INT64_MIN;
volatile int32_t t71 = 3813306;
volatile int64_t t72 = 32817884245LL;
static volatile int32_t x302 = -1208303;
static volatile int32_t t75 = 89;
volatile int64_t t76 = -10452978391LL;
volatile uint64_t t77 = 13209144499103LLU;
int32_t x314 = INT32_MIN;
static int16_t x315 = INT16_MIN;
int8_t x318 = INT8_MAX;
int32_t x319 = INT32_MIN;
static volatile int8_t x323 = -7;
static uint8_t x326 = 67U;
volatile int16_t x327 = 955;
int16_t x331 = INT16_MIN;
int32_t t83 = -110568;
int8_t x345 = INT8_MIN;
volatile uint16_t x348 = 23823U;
static uint64_t x352 = 73LLU;
int32_t x355 = 132113;
static int16_t x356 = 3863;
int16_t x357 = -1;
static uint32_t x363 = 24049U;
uint16_t x366 = UINT16_MAX;
int16_t x368 = INT16_MIN;
int64_t t92 = -641126404962904295LL;
uint8_t x374 = 3U;
static uint16_t x383 = 196U;
static uint32_t x391 = 1920U;
uint8_t x393 = UINT8_MAX;


void f0(void) {
	uint32_t x1 = 20U;
	uint16_t x2 = 21U;
	volatile uint16_t x3 = 870U;
	static int16_t x4 = INT16_MAX;
	static volatile uint32_t t0 = 1U;

	t0 = ((x1|x2)&(x3^x4));

	if (t0 != 17U) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MAX;
	volatile int64_t x6 = INT64_MIN;
	int32_t x7 = 104041;
	volatile int8_t x8 = INT8_MAX;
	volatile int64_t t1 = -12783306LL;

	t1 = ((x5|x6)&(x7^x8));

	if (t1 != 103958LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 1189991429U;
	volatile uint16_t x10 = 0U;
	int64_t x11 = INT64_MAX;
	static int32_t x12 = INT32_MAX;
	int64_t t2 = 874073245LL;

	t2 = ((x9|x10)&(x11^x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	volatile int32_t t3 = -21432933;

	t3 = ((x13|x14)&(x15^x16));

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = INT32_MIN;
	uint64_t x19 = UINT64_MAX;
	int8_t x20 = INT8_MIN;
	uint64_t t4 = 5445243LLU;

	t4 = ((x17|x18)&(x19^x20));

	if (t4 != 124LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	volatile int8_t x22 = INT8_MIN;
	uint64_t x23 = UINT64_MAX;
	int16_t x24 = INT16_MIN;
	static volatile uint64_t t5 = 47LLU;

	t5 = ((x21|x22)&(x23^x24));

	if (t5 != 32767LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = UINT8_MAX;
	int32_t x26 = -1;
	uint32_t x27 = 54036644U;
	int64_t x28 = INT64_MAX;
	volatile int64_t t6 = 7175673715109LL;

	t6 = ((x25|x26)&(x27^x28));

	if (t6 != 9223372036800739163LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 6141786;
	volatile uint64_t x30 = 312097742LLU;
	int32_t x31 = INT32_MIN;
	uint8_t x32 = 1U;
	volatile uint64_t t7 = 1852171LLU;

	t7 = ((x29|x30)&(x31^x32));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = -58409LL;
	volatile int32_t x35 = INT32_MIN;
	volatile uint32_t x36 = 2768796U;

	t8 = ((x33|x34)&(x35^x36));

	if (t8 != 2150243220LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	int16_t x39 = -28;
	int8_t x40 = INT8_MIN;
	uint64_t t9 = 31LLU;

	t9 = ((x37|x38)&(x39^x40));

	if (t9 != 100LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = INT32_MAX;
	int8_t x42 = INT8_MIN;
	volatile uint64_t x43 = 108LLU;
	int16_t x44 = INT16_MAX;
	volatile uint64_t t10 = 83LLU;

	t10 = ((x41|x42)&(x43^x44));

	if (t10 != 32659LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1566;
	int8_t x46 = 0;
	uint16_t x47 = UINT16_MAX;
	int8_t x48 = 45;
	int32_t t11 = -3;

	t11 = ((x45|x46)&(x47^x48));

	if (t11 != 63938) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint32_t x49 = 1U;
	int32_t x50 = INT32_MIN;
	uint64_t x51 = UINT64_MAX;
	uint64_t t12 = 22939LLU;

	t12 = ((x49|x50)&(x51^x52));

	if (t12 != 2147483648LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	volatile int32_t x54 = INT32_MAX;
	uint32_t x55 = 3980235U;
	int64_t t13 = -4016414LL;

	t13 = ((x53|x54)&(x55^x56));

	if (t13 != -9223372036850795573LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	int64_t x58 = -2229LL;
	int8_t x59 = INT8_MAX;
	int16_t x60 = INT16_MIN;

	t14 = ((x57|x58)&(x59^x60));

	if (t14 != -32641LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = INT64_MIN;
	volatile int64_t x62 = -1LL;
	uint32_t x63 = 13U;
	static int16_t x64 = -1;
	static int64_t t15 = -188800620918LL;

	t15 = ((x61|x62)&(x63^x64));

	if (t15 != 4294967282LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x66 = UINT64_MAX;

	t16 = ((x65|x66)&(x67^x68));

	if (t16 != 15LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x69 = UINT16_MAX;
	static uint64_t x70 = 9555532649LLU;
	uint32_t x71 = 233011U;
	int8_t x72 = -1;
	uint64_t t17 = 5106907326373807617LLU;

	t17 = ((x69|x70)&(x71^x72));

	if (t17 != 965505484LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = 23;
	int16_t x74 = -3;
	volatile int32_t t18 = -295630041;

	t18 = ((x73|x74)&(x75^x76));

	if (t18 != -3469) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x78 = UINT8_MAX;
	int8_t x79 = INT8_MAX;
	volatile int16_t x80 = INT16_MIN;
	volatile uint32_t t19 = 2610U;

	t19 = ((x77|x78)&(x79^x80));

	if (t19 != 4294934655U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -1;
	int8_t x83 = INT8_MAX;
	static uint8_t x84 = 3U;

	t20 = ((x81|x82)&(x83^x84));

	if (t20 != 124) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MAX;
	int16_t x86 = -1;
	static uint64_t x87 = 3057510105307610169LLU;
	int32_t x88 = INT32_MIN;
	uint64_t t21 = 1040856215347LLU;

	t21 = ((x85|x86)&(x87^x88));

	if (t21 != 15389233968805510201LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = -419187096553025LL;
	uint32_t x90 = 7403117U;
	volatile uint64_t x92 = UINT64_MAX;

	t22 = ((x89|x90)&(x91^x92));

	if (t22 != 9222952849765564415LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -1LL;
	int16_t x94 = 0;
	static int16_t x95 = INT16_MAX;
	static int32_t x96 = -15862681;
	int64_t t23 = -3026335LL;

	t23 = ((x93|x94)&(x95^x96));

	if (t23 != -15889512LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -1;
	int32_t x98 = -1;
	uint16_t x100 = 0U;
	int64_t t24 = INT64_MIN;

	t24 = ((x97|x98)&(x99^x100));

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x102 = INT64_MIN;
	int64_t x104 = INT64_MIN;
	int64_t t25 = 61554958076LL;

	t25 = ((x101|x102)&(x103^x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x105 = -25;
	uint32_t x106 = UINT32_MAX;
	static int8_t x107 = INT8_MIN;
	uint8_t x108 = 7U;
	static uint32_t t26 = 257215271U;

	t26 = ((x105|x106)&(x107^x108));

	if (t26 != 4294967175U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = UINT64_MAX;
	int8_t x110 = INT8_MIN;
	int64_t x111 = -1807816086089LL;
	int16_t x112 = INT16_MAX;
	static uint64_t t27 = 549LLU;

	t27 = ((x109|x110)&(x111^x112));

	if (t27 != 18446742265893474888LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = UINT8_MAX;
	static int64_t x115 = -15511365783046348LL;
	static uint8_t x116 = 30U;
	volatile int64_t t28 = -1176856687514206LL;

	t28 = ((x113|x114)&(x115^x116));

	if (t28 != 14122LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	uint8_t x118 = 4U;
	static int32_t x119 = INT32_MIN;
	static uint32_t x120 = 56625846U;

	t29 = ((x117|x118)&(x119^x120));

	if (t29 != 2204109494U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x122 = 1808451728693472LLU;
	int16_t x123 = -1;
	int8_t x124 = INT8_MIN;
	uint64_t t30 = 111320489423LLU;

	t30 = ((x121|x122)&(x123^x124));

	if (t30 != 96LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x125 = UINT16_MAX;
	static int64_t x126 = -1LL;
	int32_t x127 = -1;
	uint8_t x128 = 2U;
	static volatile int64_t t31 = 198798259LL;

	t31 = ((x125|x126)&(x127^x128));

	if (t31 != -3LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = -2LL;
	uint64_t x130 = UINT64_MAX;
	uint64_t x131 = UINT64_MAX;
	volatile uint64_t t32 = 18783903924199468LLU;

	t32 = ((x129|x130)&(x131^x132));

	if (t32 != 3LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = INT16_MIN;
	int32_t x134 = INT32_MIN;
	volatile int32_t x136 = INT32_MAX;
	volatile int32_t t33 = -7485928;

	t33 = ((x133|x134)&(x135^x136));

	if (t33 != 2147418112) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = 10195;
	uint16_t x138 = 113U;
	volatile int8_t x140 = -1;
	volatile int32_t t34 = 29;

	t34 = ((x137|x138)&(x139^x140));

	if (t34 != 10227) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -1LL;
	static int32_t x142 = -14533869;
	static volatile uint32_t x143 = 267222059U;
	static uint8_t x144 = 108U;
	volatile int64_t t35 = -696613LL;

	t35 = ((x141|x142)&(x143^x144));

	if (t35 != 267222087LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x145 = UINT16_MAX;
	static int8_t x146 = 0;
	static int8_t x147 = -1;
	int16_t x148 = -1;
	volatile int32_t t36 = 3670039;

	t36 = ((x145|x146)&(x147^x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	int32_t x150 = INT32_MIN;
	volatile uint8_t x151 = 120U;
	static volatile int64_t t37 = -8390500402054LL;

	t37 = ((x149|x150)&(x151^x152));

	if (t37 != 41991895252992LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x153 = 2006121LLU;
	static int16_t x154 = INT16_MAX;
	static uint16_t x155 = 11U;
	int16_t x156 = -1;
	uint64_t t38 = 11341685685LLU;

	t38 = ((x153|x154)&(x155^x156));

	if (t38 != 2031604LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 113U;
	uint64_t x158 = 7395078127LLU;
	uint64_t t39 = 2LLU;

	t39 = ((x157|x158)&(x159^x160));

	if (t39 != 7395075018LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	uint32_t x162 = 9760272U;
	static int16_t x163 = -1;
	int8_t x164 = INT8_MIN;
	volatile uint32_t t40 = 3846U;

	t40 = ((x161|x162)&(x163^x164));

	if (t40 != 127U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	uint8_t x166 = UINT8_MAX;
	uint8_t x167 = 113U;
	int32_t t41 = -15;

	t41 = ((x165|x166)&(x167^x168));

	if (t41 != 183) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 3LLU;
	uint16_t x170 = UINT16_MAX;
	volatile uint64_t t42 = 11767968LLU;

	t42 = ((x169|x170)&(x171^x172));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 589U;
	uint64_t x174 = 9930017LLU;
	static int64_t x175 = 333659003377LL;
	int8_t x176 = -1;
	volatile uint64_t t43 = 375103357993932967LLU;

	t43 = ((x173|x174)&(x175^x176));

	if (t43 != 1541644LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = 1;
	uint16_t x178 = 7709U;
	int16_t x179 = -1;

	t44 = ((x177|x178)&(x179^x180));

	if (t44 != 2588LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x181 = UINT8_MAX;
	int32_t x183 = INT32_MIN;
	int32_t x184 = INT32_MIN;
	int32_t t45 = 8;

	t45 = ((x181|x182)&(x183^x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MAX;
	int32_t x187 = INT32_MAX;
	uint16_t x188 = UINT16_MAX;
	static int32_t t46 = -49949557;

	t46 = ((x185|x186)&(x187^x188));

	if (t46 != 65011712) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MAX;
	int32_t x190 = 10312176;
	int8_t x192 = 0;
	int64_t t47 = 610675821053LL;

	t47 = ((x189|x190)&(x191^x192));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x194 = UINT32_MAX;
	static volatile uint32_t x195 = UINT32_MAX;
	uint8_t x196 = 20U;
	volatile uint32_t t48 = 747360U;

	t48 = ((x193|x194)&(x195^x196));

	if (t48 != 4294967275U) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x198 = 13030547U;
	int32_t x199 = 1848413;
	int16_t x200 = INT16_MAX;
	uint32_t t49 = 34U;

	t49 = ((x197|x198)&(x199^x200));

	if (t49 != 278658U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x202 = 226LL;
	volatile int64_t x203 = INT64_MIN;
	int16_t x204 = -1;
	volatile int64_t t50 = -17679982309993081LL;

	t50 = ((x201|x202)&(x203^x204));

	if (t50 != 12122343LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x206 = 699029179922LL;
	int32_t x207 = -1;
	int8_t x208 = INT8_MIN;

	t51 = ((x205|x206)&(x207^x208));

	if (t51 != 18LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 50U;
	int32_t x212 = INT32_MAX;
	volatile int32_t t52 = 1595527;

	t52 = ((x209|x210)&(x211^x212));

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = -1;
	static volatile int32_t x214 = -194297;
	int64_t x215 = INT64_MAX;
	int8_t x216 = INT8_MIN;
	int64_t t53 = 10058787LL;

	t53 = ((x213|x214)&(x215^x216));

	if (t53 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -1;
	static volatile int16_t x218 = -1;
	int8_t x219 = INT8_MIN;
	int64_t x220 = INT64_MIN;
	int64_t t54 = -5352039097LL;

	t54 = ((x217|x218)&(x219^x220));

	if (t54 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x221 = -1;
	int16_t x222 = INT16_MIN;
	uint8_t x223 = 4U;
	int16_t x224 = 8;
	int32_t t55 = -5295;

	t55 = ((x221|x222)&(x223^x224));

	if (t55 != 12) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	int8_t x226 = 10;
	int64_t x227 = INT64_MAX;
	int64_t t56 = -31LL;

	t56 = ((x225|x226)&(x227^x228));

	if (t56 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MAX;
	int16_t x230 = INT16_MIN;
	int16_t x231 = 15;
	int8_t x232 = INT8_MIN;
	static int32_t t57 = 0;

	t57 = ((x229|x230)&(x231^x232));

	if (t57 != -113) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -12364;
	int64_t x234 = INT64_MAX;
	int32_t x235 = -1;
	int64_t t58 = -1527LL;

	t58 = ((x233|x234)&(x235^x236));

	if (t58 != 208LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = 0;
	int16_t x240 = INT16_MAX;
	int64_t t59 = -658218744LL;

	t59 = ((x237|x238)&(x239^x240));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -1;
	volatile uint64_t x242 = 3812907100804990LLU;
	uint64_t x243 = 3802095673LLU;
	volatile int32_t x244 = 40116;
	volatile uint64_t t60 = 265358596503582LLU;

	t60 = ((x241|x242)&(x243^x244));

	if (t60 != 3802135693LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x246 = 4U;
	static volatile int64_t t61 = 32473450086LL;

	t61 = ((x245|x246)&(x247^x248));

	if (t61 != -616521752757702LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MIN;
	int8_t x250 = INT8_MIN;
	volatile int64_t t62 = 0LL;

	t62 = ((x249|x250)&(x251^x252));

	if (t62 != 32640LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x254 = UINT32_MAX;
	uint16_t x256 = 6U;
	uint32_t t63 = 2U;

	t63 = ((x253|x254)&(x255^x256));

	if (t63 != 4294967289U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x260 = 312671618U;
	int64_t t64 = -9087LL;

	t64 = ((x257|x258)&(x259^x260));

	if (t64 != 3982295080LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = 10;
	uint8_t x263 = 27U;
	static volatile int8_t x264 = -1;
	int64_t t65 = INT64_MIN;

	t65 = ((x261|x262)&(x263^x264));

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x265 = 8752243;
	static int8_t x267 = INT8_MIN;
	int64_t x268 = INT64_MIN;
	static volatile int64_t t66 = 28624818165668LL;

	t66 = ((x265|x266)&(x267^x268));

	if (t66 != 8752128LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MAX;
	int8_t x270 = INT8_MIN;
	int16_t x271 = INT16_MIN;
	static volatile int32_t t67 = 3455082;

	t67 = ((x269|x270)&(x271^x272));

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 26450LLU;
	int64_t x274 = -1LL;
	int32_t x275 = INT32_MAX;
	int16_t x276 = INT16_MIN;

	t68 = ((x273|x274)&(x275^x276));

	if (t68 != 18446744071562100735LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = -173;
	static uint16_t x278 = UINT16_MAX;
	int8_t x280 = INT8_MIN;
	static int32_t t69 = 29;

	t69 = ((x277|x278)&(x279^x280));

	if (t69 != -112) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 1U;
	int32_t x282 = -185810;
	int64_t t70 = 6888112833975491LL;

	t70 = ((x281|x282)&(x283^x284));

	if (t70 != -9223372034707477969LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x285 = INT8_MIN;
	static int32_t x286 = INT32_MAX;
	int16_t x287 = INT16_MAX;
	int32_t x288 = -11216332;

	t71 = ((x285|x286)&(x287^x288));

	if (t71 != -11229749) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	int64_t x290 = 192008498LL;
	static volatile int8_t x291 = INT8_MAX;
	uint8_t x292 = UINT8_MAX;

	t72 = ((x289|x290)&(x291^x292));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -1LL;
	int16_t x294 = INT16_MIN;
	static uint32_t x295 = 26189U;
	int64_t x296 = INT64_MAX;
	volatile int64_t t73 = 570267455419594LL;

	t73 = ((x293|x294)&(x295^x296));

	if (t73 != 9223372036854749618LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = 22;
	int16_t x298 = -1;
	int64_t x299 = INT64_MAX;
	volatile int32_t x300 = INT32_MIN;
	volatile int64_t t74 = -31700081250849LL;

	t74 = ((x297|x298)&(x299^x300));

	if (t74 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x301 = 8U;
	int32_t x303 = INT32_MIN;
	static volatile int32_t x304 = 23125920;

	t75 = ((x301|x302)&(x303^x304));

	if (t75 != -2124378112) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = -1;
	int8_t x306 = INT8_MAX;
	uint8_t x307 = UINT8_MAX;
	int64_t x308 = INT64_MAX;

	t76 = ((x305|x306)&(x307^x308));

	if (t76 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = -148;
	uint32_t x310 = 95177U;
	volatile uint16_t x311 = 4044U;
	static volatile uint64_t x312 = UINT64_MAX;

	t77 = ((x309|x310)&(x311^x312));

	if (t77 != 4294963233LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -182786LL;
	int64_t x316 = INT64_MIN;
	int64_t t78 = -369878132815LL;

	t78 = ((x313|x314)&(x315^x316));

	if (t78 != 9223372036854579200LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x317 = 64524LLU;
	volatile int64_t x320 = -1LL;
	volatile uint64_t t79 = 142597LLU;

	t79 = ((x317|x318)&(x319^x320));

	if (t79 != 64639LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	volatile uint32_t x322 = 695771U;
	uint32_t x324 = UINT32_MAX;
	uint32_t t80 = 33U;

	t80 = ((x321|x322)&(x323^x324));

	if (t80 != 2U) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = INT8_MIN;
	static volatile int64_t x328 = INT64_MAX;
	volatile int64_t t81 = 758064617LL;

	t81 = ((x325|x326)&(x327^x328));

	if (t81 != 9223372036854774848LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 471U;
	uint64_t x330 = 533836116581LLU;
	int8_t x332 = INT8_MIN;
	volatile uint64_t t82 = 145852LLU;

	t82 = ((x329|x330)&(x331^x332));

	if (t82 != 13184LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x333 = -23963;
	int8_t x334 = -1;
	static int8_t x335 = INT8_MIN;
	int16_t x336 = INT16_MAX;

	t83 = ((x333|x334)&(x335^x336));

	if (t83 != -32641) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = 3538388U;
	int32_t x338 = 20;
	static uint64_t x339 = UINT64_MAX;
	int16_t x340 = -928;
	volatile uint64_t t84 = 592604189LLU;

	t84 = ((x337|x338)&(x339^x340));

	if (t84 != 404LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x341 = -2524;
	int8_t x342 = -3;
	static int8_t x343 = INT8_MIN;
	int32_t x344 = INT32_MAX;
	int32_t t85 = 46;

	t85 = ((x341|x342)&(x343^x344));

	if (t85 != -2147483523) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = 9;
	int8_t x347 = -2;
	int32_t t86 = 3688236;

	t86 = ((x345|x346)&(x347^x348));

	if (t86 != -23935) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = UINT16_MAX;
	uint32_t x350 = UINT32_MAX;
	static volatile uint8_t x351 = UINT8_MAX;
	volatile uint64_t t87 = 596404357468559816LLU;

	t87 = ((x349|x350)&(x351^x352));

	if (t87 != 182LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	static volatile int16_t x354 = INT16_MIN;
	int64_t t88 = 4592479239049046403LL;

	t88 = ((x353|x354)&(x355^x356));

	if (t88 != 131072LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x358 = 237097089517386LLU;
	int8_t x359 = -1;
	static int8_t x360 = -5;
	volatile uint64_t t89 = 19180910454LLU;

	t89 = ((x357|x358)&(x359^x360));

	if (t89 != 4LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	static int32_t x362 = INT32_MIN;
	int64_t x364 = 4097978440801242LL;
	int64_t t90 = 1598363746494LL;

	t90 = ((x361|x362)&(x363^x364));

	if (t90 != 4097978440779264LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = 3068U;
	uint64_t x367 = 168286305LLU;
	uint64_t t91 = 8370LLU;

	t91 = ((x365|x366)&(x367^x368));

	if (t91 != 22625LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = UINT32_MAX;
	volatile uint16_t x370 = UINT16_MAX;
	static int64_t x371 = INT64_MIN;
	static uint32_t x372 = 14299U;

	t92 = ((x369|x370)&(x371^x372));

	if (t92 != 14299LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	int16_t x375 = 39;
	static int32_t x376 = -2833;
	volatile int32_t t93 = -99;

	t93 = ((x373|x374)&(x375^x376));

	if (t93 != -2944) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x377 = 2626U;
	uint8_t x378 = 6U;
	uint8_t x379 = 20U;
	static volatile uint32_t x380 = 2701964U;
	uint32_t t94 = 1341222212U;

	t94 = ((x377|x378)&(x379^x380));

	if (t94 != 2560U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x381 = UINT64_MAX;
	uint8_t x382 = 2U;
	uint64_t x384 = 44383812092570LLU;
	volatile uint64_t t95 = 1101412514349121LLU;

	t95 = ((x381|x382)&(x383^x384));

	if (t95 != 44383812092510LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -140;
	int8_t x386 = INT8_MIN;
	int16_t x387 = INT16_MIN;
	int64_t x388 = -1LL;
	int64_t t96 = -6LL;

	t96 = ((x385|x386)&(x387^x388));

	if (t96 != 32756LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x389 = INT32_MIN;
	int32_t x390 = INT32_MIN;
	int8_t x392 = -1;
	uint32_t t97 = 690373U;

	t97 = ((x389|x390)&(x391^x392));

	if (t97 != 2147483648U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x394 = -8;
	uint32_t x395 = 3569U;
	static uint16_t x396 = 2U;
	uint32_t t98 = 429944945U;

	t98 = ((x393|x394)&(x395^x396));

	if (t98 != 3571U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 195609760343753LLU;
	int8_t x398 = 59;
	uint32_t x399 = UINT32_MAX;
	static uint32_t x400 = 127U;
	volatile uint64_t t99 = 2103153551199323LLU;

	t99 = ((x397|x398)&(x399^x400));

	if (t99 != 4064781952LLU) { NG(); } else { ; }
	
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

