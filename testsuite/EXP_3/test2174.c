#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x1 = 5006652870385LLU;
volatile int32_t x13 = -657933;
uint16_t x15 = 52U;
volatile int32_t t2 = 21;
int16_t x32 = INT16_MIN;
int16_t x36 = 14;
int64_t x42 = INT64_MAX;
static volatile int64_t t7 = 155946191903LL;
int32_t x51 = INT32_MIN;
uint16_t x52 = UINT16_MAX;
int8_t x54 = INT8_MIN;
volatile int16_t x55 = INT16_MIN;
uint64_t x78 = UINT64_MAX;
int64_t x79 = INT64_MIN;
static volatile uint64_t t11 = 584341085851872LLU;
static volatile int64_t t13 = 494590LL;
static int16_t x99 = 0;
static int64_t x101 = 12581025715093LL;
static uint8_t x108 = 4U;
static volatile uint64_t t18 = 86011417711LLU;
int8_t x118 = INT8_MIN;
int16_t x124 = INT16_MAX;
volatile int32_t t20 = 70;
int32_t x127 = INT32_MAX;
int16_t x138 = INT16_MIN;
static volatile uint64_t x160 = UINT64_MAX;
uint64_t t29 = 6896478LLU;
uint64_t x169 = UINT64_MAX;
uint64_t x170 = 203LLU;
static int32_t x174 = INT32_MIN;
volatile int32_t t33 = 2346195;
int16_t x196 = 61;
int16_t x207 = -210;
volatile int64_t t42 = 45LL;
volatile uint8_t x217 = UINT8_MAX;
int16_t x218 = INT16_MIN;
static volatile int16_t x227 = -23;
uint32_t x230 = UINT32_MAX;
volatile int64_t t46 = 44371647LL;
int8_t x234 = -1;
int8_t x248 = INT8_MIN;
volatile uint32_t x254 = 6U;
int16_t x257 = INT16_MAX;
int16_t x258 = -174;
static volatile int32_t t52 = -580846;
uint64_t x265 = UINT64_MAX;
volatile int64_t x273 = 107477LL;
int8_t x274 = 21;
uint8_t x289 = UINT8_MAX;
int16_t x291 = -394;
volatile int16_t x296 = -3;
uint32_t t59 = 481759U;
uint64_t x303 = 900046142LLU;
int32_t x307 = 31;
uint64_t t61 = 4995323082838LLU;
uint64_t x313 = 3092641266762LLU;
volatile uint16_t x316 = 10279U;
static uint32_t x325 = 5U;
int16_t x331 = INT16_MIN;
static int16_t x349 = INT16_MIN;
static uint64_t x350 = UINT64_MAX;
volatile int32_t t70 = -1;
int8_t x357 = -2;
static int64_t t71 = 22944051LL;
uint16_t x365 = 3U;
volatile int64_t x366 = -1LL;
volatile uint64_t x367 = UINT64_MAX;
int8_t x374 = INT8_MIN;
uint32_t x388 = 310891U;
volatile int64_t x390 = -1LL;
volatile int64_t t77 = -372LL;
uint8_t x396 = 4U;
volatile int16_t x403 = INT16_MAX;
int8_t x410 = INT8_MIN;
int8_t x420 = -1;
static int8_t x422 = -62;
static int64_t x423 = -105326LL;
volatile int16_t x427 = -1;
int64_t x433 = INT64_MIN;
int64_t x439 = INT64_MAX;
static uint64_t x443 = UINT64_MAX;
int16_t x446 = INT16_MIN;
uint8_t x461 = 64U;
int64_t x464 = -1LL;
volatile int64_t t94 = -3564478800605LL;
int16_t x468 = INT16_MIN;
static int64_t t95 = -4342LL;
volatile int8_t x471 = -1;
volatile uint16_t x472 = UINT16_MAX;
int32_t x476 = INT32_MIN;
int32_t x479 = INT32_MAX;
int32_t x480 = INT32_MAX;


void f0(void) {
	static int32_t x2 = 65;
	volatile int16_t x3 = 12071;
	volatile int64_t x4 = -1LL;
	uint64_t t0 = 1057421559788162175LLU;

	t0 = ((x1|x2)*(x3^x4));

	if (t0 != 18386303760258263896LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int32_t x6 = -191917;
	uint16_t x7 = 2268U;
	static int8_t x8 = INT8_MAX;
	int32_t t1 = 1105337;

	t1 = ((x5|x6)*(x7^x8));

	if (t1 != -62078247) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x14 = 5U;
	volatile int8_t x16 = -1;

	t2 = ((x13|x14)*(x15^x16));

	if (t2 != 34870237) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x21 = INT32_MAX;
	volatile uint32_t x22 = UINT32_MAX;
	uint16_t x23 = 4U;
	int16_t x24 = INT16_MIN;
	uint32_t t3 = 4U;

	t3 = ((x21|x22)*(x23^x24));

	if (t3 != 32764U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x29 = UINT8_MAX;
	int16_t x30 = INT16_MIN;
	int32_t x31 = 1;
	int32_t t4 = -2123647;

	t4 = ((x29|x30)*(x31^x32));

	if (t4 != 1065353471) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x33 = 3U;
	static int64_t x34 = 1LL;
	static int8_t x35 = 1;
	static int64_t t5 = -1204761239477626LL;

	t5 = ((x33|x34)*(x35^x36));

	if (t5 != 45LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x37 = UINT32_MAX;
	volatile int8_t x38 = 0;
	volatile uint16_t x39 = 36U;
	uint16_t x40 = UINT16_MAX;
	uint32_t t6 = 394126U;

	t6 = ((x37|x38)*(x39^x40));

	if (t6 != 4294901797U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x41 = -1LL;
	volatile int16_t x43 = INT16_MAX;
	volatile int32_t x44 = INT32_MIN;

	t7 = ((x41|x42)*(x43^x44));

	if (t7 != 2147450881LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x49 = INT8_MIN;
	volatile int64_t x50 = -1LL;
	int64_t t8 = 1585765LL;

	t8 = ((x49|x50)*(x51^x52));

	if (t8 != 2147418113LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x53 = INT64_MAX;
	int64_t x56 = 27LL;
	int64_t t9 = -1247539453497LL;

	t9 = ((x53|x54)*(x55^x56));

	if (t9 != 32741LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x65 = 724;
	int16_t x66 = 76;
	int16_t x67 = -1;
	static int8_t x68 = INT8_MAX;
	volatile int32_t t10 = -29862492;

	t10 = ((x65|x66)*(x67^x68));

	if (t10 != -93696) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x77 = 15155276U;
	uint8_t x80 = 3U;

	t11 = ((x77|x78)*(x79^x80));

	if (t11 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x85 = INT8_MIN;
	int8_t x86 = INT8_MAX;
	uint8_t x87 = 14U;
	int64_t x88 = 749767154064LL;
	int64_t t12 = -558063202LL;

	t12 = ((x85|x86)*(x87^x88));

	if (t12 != -749767154078LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x93 = INT64_MIN;
	volatile int32_t x94 = -1;
	static volatile int32_t x95 = 411091;
	int16_t x96 = -1;

	t13 = ((x93|x94)*(x95^x96));

	if (t13 != 411092LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x97 = 13740U;
	int8_t x98 = 3;
	uint32_t x100 = 2925168U;
	uint32_t t14 = 14028656U;

	t14 = ((x97|x98)*(x99^x100));

	if (t14 != 1545878160U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x102 = -1LL;
	int8_t x103 = INT8_MIN;
	static int16_t x104 = INT16_MIN;
	static volatile int64_t t15 = -78LL;

	t15 = ((x101|x102)*(x103^x104));

	if (t15 != -32640LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x105 = -14728;
	int64_t x106 = -477LL;
	uint16_t x107 = 529U;
	int64_t t16 = 3147293LL;

	t16 = ((x105|x106)*(x107^x108));

	if (t16 != -207337LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x109 = 21U;
	uint64_t x110 = UINT64_MAX;
	int32_t x111 = -1;
	static int32_t x112 = INT32_MIN;
	uint64_t t17 = 2783LLU;

	t17 = ((x109|x110)*(x111^x112));

	if (t17 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x113 = 15502371LLU;
	static int64_t x114 = INT64_MIN;
	volatile int32_t x115 = INT32_MAX;
	uint32_t x116 = 381249U;

	t18 = ((x113|x114)*(x115^x116));

	if (t18 != 33285177948785658LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x117 = INT8_MIN;
	uint32_t x119 = 1283491517U;
	int32_t x120 = INT32_MAX;
	uint32_t t19 = 4030U;

	t19 = ((x117|x118)*(x119^x120));

	if (t19 != 1078157056U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x121 = 7;
	int16_t x122 = INT16_MIN;
	int8_t x123 = 0;

	t20 = ((x121|x122)*(x123^x124));

	if (t20 != -1073479687) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x125 = INT8_MAX;
	int8_t x126 = INT8_MIN;
	uint16_t x128 = UINT16_MAX;
	volatile int32_t t21 = -404579;

	t21 = ((x125|x126)*(x127^x128));

	if (t21 != -2147418112) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x129 = 52478917615797LLU;
	int32_t x130 = INT32_MIN;
	int16_t x131 = 10;
	static int64_t x132 = INT64_MIN;
	static uint64_t t22 = 3063710224933916225LLU;

	t22 = ((x129|x130)*(x131^x132));

	if (t22 != 9223372023977035538LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x133 = 1U;
	int8_t x134 = INT8_MAX;
	static int8_t x135 = INT8_MAX;
	volatile uint32_t x136 = 527917143U;
	uint32_t t23 = 545U;

	t23 = ((x133|x134)*(x135^x136));

	if (t23 != 2620961752U) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x137 = -1;
	static int32_t x139 = -24854;
	int8_t x140 = -11;
	int32_t t24 = 7688;

	t24 = ((x137|x138)*(x139^x140));

	if (t24 != -24863) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x141 = UINT8_MAX;
	int16_t x142 = 102;
	int32_t x143 = INT32_MAX;
	volatile uint32_t x144 = 2U;
	uint32_t t25 = 1U;

	t25 = ((x141|x142)*(x143^x144));

	if (t25 != 2147482883U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x145 = -1;
	uint32_t x146 = UINT32_MAX;
	volatile int32_t x147 = -1;
	int8_t x148 = INT8_MAX;
	volatile uint32_t t26 = 2104U;

	t26 = ((x145|x146)*(x147^x148));

	if (t26 != 128U) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint32_t x149 = 0U;
	static int16_t x150 = INT16_MIN;
	int32_t x151 = 24995031;
	volatile int32_t x152 = INT32_MAX;
	volatile uint32_t t27 = 10412U;

	t27 = ((x149|x150)*(x151^x152));

	if (t27 != 2993422336U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x153 = -1;
	int16_t x154 = 1;
	int16_t x155 = INT16_MIN;
	int8_t x156 = -1;
	int32_t t28 = 10969468;

	t28 = ((x153|x154)*(x155^x156));

	if (t28 != -32767) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x157 = 5U;
	uint32_t x158 = 2188445U;
	static volatile int32_t x159 = INT32_MIN;

	t29 = ((x157|x158)*(x159^x160));

	if (t29 != 4699649849858915LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x161 = 44;
	int8_t x162 = -6;
	uint16_t x163 = UINT16_MAX;
	uint32_t x164 = 1U;
	uint32_t t30 = 45908632U;

	t30 = ((x161|x162)*(x163^x164));

	if (t30 != 4294836228U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x165 = UINT32_MAX;
	volatile uint32_t x166 = 8142U;
	int16_t x167 = INT16_MIN;
	int64_t x168 = 3685756LL;
	int64_t t31 = 3193181LL;

	t31 = ((x165|x166)*(x167^x168));

	if (t31 != -15835733395225980LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x171 = 790U;
	static int32_t x172 = 110933;
	uint64_t t32 = 99LLU;

	t32 = ((x169|x170)*(x171^x172));

	if (t32 != 18446744073709440445LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x173 = INT16_MIN;
	int32_t x175 = -1;
	int16_t x176 = INT16_MAX;

	t33 = ((x173|x174)*(x175^x176));

	if (t33 != 1073741824) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x177 = UINT8_MAX;
	volatile int16_t x178 = -1;
	int16_t x179 = 1;
	uint16_t x180 = UINT16_MAX;
	int32_t t34 = -29;

	t34 = ((x177|x178)*(x179^x180));

	if (t34 != -65534) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x181 = 173747918188LL;
	int32_t x182 = -314664669;
	int8_t x183 = INT8_MIN;
	uint16_t x184 = UINT16_MAX;
	int64_t t35 = -31LL;

	t35 = ((x181|x182)*(x183^x184));

	if (t35 != 3022662982161LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x185 = UINT32_MAX;
	volatile int32_t x186 = -1730341;
	uint16_t x187 = UINT16_MAX;
	uint64_t x188 = UINT64_MAX;
	volatile uint64_t t36 = 2834327412878132LLU;

	t36 = ((x185|x186)*(x187^x188));

	if (t36 != 18446462598732906496LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x189 = INT64_MIN;
	static int8_t x190 = INT8_MIN;
	int16_t x191 = -1;
	static uint64_t x192 = UINT64_MAX;
	volatile uint64_t t37 = 139982214198410053LLU;

	t37 = ((x189|x190)*(x191^x192));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x193 = -5;
	uint64_t x194 = UINT64_MAX;
	int16_t x195 = INT16_MAX;
	volatile uint64_t t38 = 2341353LLU;

	t38 = ((x193|x194)*(x195^x196));

	if (t38 != 18446744073709518910LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x197 = -1;
	int8_t x198 = INT8_MIN;
	int64_t x199 = INT64_MAX;
	uint32_t x200 = UINT32_MAX;
	int64_t t39 = -3628079LL;

	t39 = ((x197|x198)*(x199^x200));

	if (t39 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x201 = -1;
	volatile int16_t x202 = -5;
	static volatile uint8_t x203 = 6U;
	int8_t x204 = -1;
	volatile int32_t t40 = 48353253;

	t40 = ((x201|x202)*(x203^x204));

	if (t40 != 7) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x205 = INT16_MIN;
	int64_t x206 = 67136088948922LL;
	static int16_t x208 = INT16_MAX;
	static volatile int64_t t41 = 3939293881368516678LL;

	t41 = ((x205|x206)*(x207^x208));

	if (t41 != 527390682LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x209 = INT32_MIN;
	int16_t x210 = -7291;
	int32_t x211 = INT32_MIN;
	static int64_t x212 = 7820LL;

	t42 = ((x209|x210)*(x211^x212));

	if (t42 != 15657246261948LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x213 = INT16_MIN;
	uint16_t x214 = 0U;
	volatile int8_t x215 = 0;
	int16_t x216 = INT16_MIN;
	volatile int32_t t43 = -16241668;

	t43 = ((x213|x214)*(x215^x216));

	if (t43 != 1073741824) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x219 = INT8_MAX;
	uint16_t x220 = 117U;
	static volatile int32_t t44 = -6;

	t44 = ((x217|x218)*(x219^x220));

	if (t44 != -325130) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x225 = 2;
	int64_t x226 = -356966677LL;
	int32_t x228 = INT32_MAX;
	int64_t t45 = 1770922LL;

	t45 = ((x225|x226)*(x227^x228));

	if (t45 != 766580093885130802LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x229 = 4U;
	int32_t x231 = -1;
	int64_t x232 = -1LL;

	t46 = ((x229|x230)*(x231^x232));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x233 = -46968913;
	int16_t x235 = 2;
	uint32_t x236 = 55U;
	volatile uint32_t t47 = 130U;

	t47 = ((x233|x234)*(x235^x236));

	if (t47 != 4294967243U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x237 = INT16_MAX;
	uint32_t x238 = 521808U;
	int16_t x239 = -1;
	int16_t x240 = INT16_MAX;
	volatile uint32_t t48 = 46562093U;

	t48 = ((x237|x238)*(x239^x240));

	if (t48 != 32768U) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x245 = INT64_MIN;
	int8_t x246 = 1;
	volatile int8_t x247 = INT8_MIN;
	static volatile int64_t t49 = -18100036297815548LL;

	t49 = ((x245|x246)*(x247^x248));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x249 = -1;
	static int16_t x250 = 748;
	int32_t x251 = -757160;
	static int16_t x252 = INT16_MIN;
	int32_t t50 = 1547;

	t50 = ((x249|x250)*(x251^x252));

	if (t50 != -782936) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int16_t x253 = INT16_MAX;
	int8_t x255 = INT8_MIN;
	uint32_t x256 = UINT32_MAX;
	volatile uint32_t t51 = 274405546U;

	t51 = ((x253|x254)*(x255^x256));

	if (t51 != 4161409U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x259 = INT8_MIN;
	volatile uint16_t x260 = 3572U;

	t52 = ((x257|x258)*(x259^x260));

	if (t52 != 3468) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x266 = INT16_MAX;
	int16_t x267 = INT16_MIN;
	int8_t x268 = -1;
	volatile uint64_t t53 = 69022644209374510LLU;

	t53 = ((x265|x266)*(x267^x268));

	if (t53 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x275 = INT8_MIN;
	uint64_t x276 = UINT64_MAX;
	static volatile uint64_t t54 = 441362515074548LLU;

	t54 = ((x273|x274)*(x275^x276));

	if (t54 != 13649579LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x277 = 1717620;
	int16_t x278 = INT16_MIN;
	uint16_t x279 = UINT16_MAX;
	int8_t x280 = INT8_MAX;
	volatile int32_t t55 = -1104;

	t55 = ((x277|x278)*(x279^x280));

	if (t55 != -1248246272) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x281 = INT32_MIN;
	int64_t x282 = INT64_MIN;
	static int64_t x283 = -531780LL;
	volatile int32_t x284 = INT32_MIN;
	int64_t t56 = -326LL;

	t56 = ((x281|x282)*(x283^x284));

	if (t56 != -4610544029573054464LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x290 = UINT64_MAX;
	uint32_t x292 = UINT32_MAX;
	static uint64_t t57 = 283LLU;

	t57 = ((x289|x290)*(x291^x292));

	if (t57 != 18446744073709551223LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x293 = INT8_MAX;
	volatile uint8_t x294 = UINT8_MAX;
	uint32_t x295 = 16257397U;
	volatile uint32_t t58 = 4812U;

	t58 = ((x293|x294)*(x295^x296));

	if (t58 != 149330296U) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x297 = INT8_MAX;
	volatile int32_t x298 = INT32_MIN;
	int8_t x299 = INT8_MIN;
	volatile uint32_t x300 = UINT32_MAX;

	t59 = ((x297|x298)*(x299^x300));

	if (t59 != 2147499777U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x301 = -1;
	static uint8_t x302 = UINT8_MAX;
	uint64_t x304 = 198700164867051LLU;
	uint64_t t60 = 807548LLU;

	t60 = ((x301|x302)*(x303^x304));

	if (t60 != 18446545374410965291LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x305 = 12390955742411LLU;
	int32_t x306 = -1007;
	int32_t x308 = INT32_MAX;

	t61 = ((x305|x306)*(x307^x308));

	if (t61 != 18446742344985240736LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x309 = UINT32_MAX;
	static uint16_t x310 = UINT16_MAX;
	static uint64_t x311 = 3930LLU;
	static int8_t x312 = 1;
	static uint64_t t62 = 181LLU;

	t62 = ((x309|x310)*(x311^x312));

	if (t62 != 16883516436645LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x314 = INT16_MAX;
	volatile int32_t x315 = INT32_MAX;
	static uint64_t t63 = 275869572225446285LLU;

	t63 = ((x313|x314)*(x315^x316));

	if (t63 != 536927835895900200LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x317 = -1;
	static uint64_t x318 = 0LLU;
	volatile int32_t x319 = INT32_MIN;
	int64_t x320 = INT64_MAX;
	static volatile uint64_t t64 = 7801054023098LLU;

	t64 = ((x317|x318)*(x319^x320));

	if (t64 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x326 = INT32_MAX;
	uint64_t x327 = UINT64_MAX;
	int8_t x328 = -1;
	volatile uint64_t t65 = 3585146968646LLU;

	t65 = ((x325|x326)*(x327^x328));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x329 = INT32_MIN;
	int8_t x330 = INT8_MIN;
	static volatile uint16_t x332 = UINT16_MAX;
	int32_t t66 = 5;

	t66 = ((x329|x330)*(x331^x332));

	if (t66 != 4194432) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x333 = -1LL;
	static int32_t x334 = -1;
	uint32_t x335 = 643980U;
	static int16_t x336 = 1896;
	int64_t t67 = 234513620380882667LL;

	t67 = ((x333|x334)*(x335^x336));

	if (t67 != -644324LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x341 = 3028983093585LLU;
	uint8_t x342 = 95U;
	uint32_t x343 = 408U;
	uint64_t x344 = 26227LLU;
	volatile uint64_t t68 = 258266441499379546LLU;

	t68 = ((x341|x342)*(x343^x344));

	if (t68 != 80580037239014197LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x351 = -1;
	static int64_t x352 = INT64_MIN;
	volatile uint64_t t69 = 56247566LLU;

	t69 = ((x349|x350)*(x351^x352));

	if (t69 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x353 = INT16_MIN;
	volatile int16_t x354 = -5;
	volatile int8_t x355 = INT8_MAX;
	int16_t x356 = -7429;

	t70 = ((x353|x354)*(x355^x356));

	if (t70 != 37740) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x358 = 1LL;
	int8_t x359 = 0;
	int32_t x360 = 9494;

	t71 = ((x357|x358)*(x359^x360));

	if (t71 != -9494LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x361 = UINT64_MAX;
	volatile uint64_t x362 = UINT64_MAX;
	int64_t x363 = INT64_MIN;
	uint32_t x364 = UINT32_MAX;
	uint64_t t72 = 7762951631LLU;

	t72 = ((x361|x362)*(x363^x364));

	if (t72 != 9223372032559808513LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x368 = 476678721698821LLU;
	uint64_t t73 = 280553534611553LLU;

	t73 = ((x365|x366)*(x367^x368));

	if (t73 != 476678721698822LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x373 = 16;
	int32_t x375 = -1;
	uint32_t x376 = 21U;
	static uint32_t t74 = 123390U;

	t74 = ((x373|x374)*(x375^x376));

	if (t74 != 2464U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x381 = -1;
	static volatile uint64_t x382 = 14143193591094LLU;
	volatile int16_t x383 = 0;
	uint8_t x384 = 9U;
	volatile uint64_t t75 = 8112711331LLU;

	t75 = ((x381|x382)*(x383^x384));

	if (t75 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x385 = 13293084;
	int16_t x386 = INT16_MIN;
	static int32_t x387 = INT32_MIN;
	volatile uint32_t t76 = 62211505U;

	t76 = ((x385|x386)*(x387^x388));

	if (t76 != 960972212U) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x389 = UINT8_MAX;
	int64_t x391 = INT64_MIN;
	uint32_t x392 = 1558469U;

	t77 = ((x389|x390)*(x391^x392));

	if (t77 != 9223372036853217339LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x393 = 1772032844498LLU;
	volatile int8_t x394 = INT8_MIN;
	volatile int64_t x395 = INT64_MIN;
	volatile uint64_t t78 = 34LLU;

	t78 = ((x393|x394)*(x395^x396));

	if (t78 != 18446744073709551432LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x397 = INT64_MIN;
	uint32_t x398 = 738078U;
	int16_t x399 = INT16_MIN;
	int16_t x400 = INT16_MAX;
	volatile int64_t t79 = 64706682332LL;

	t79 = ((x397|x398)*(x399^x400));

	if (t79 != 9223372036854037730LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint64_t x401 = UINT64_MAX;
	int16_t x402 = INT16_MAX;
	int32_t x404 = INT32_MAX;
	volatile uint64_t t80 = 2248439990167862LLU;

	t80 = ((x401|x402)*(x403^x404));

	if (t80 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x409 = 41U;
	uint32_t x411 = 13U;
	uint64_t x412 = 568034LLU;
	volatile uint64_t t81 = 54585679LLU;

	t81 = ((x409|x410)*(x411^x412));

	if (t81 != 18446744073660131527LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x413 = -1;
	static int64_t x414 = 49358LL;
	volatile int32_t x415 = -99214380;
	uint8_t x416 = 127U;
	int64_t t82 = 32255944341LL;

	t82 = ((x413|x414)*(x415^x416));

	if (t82 != 99214421LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x417 = INT8_MIN;
	static uint64_t x418 = 2245339928849290614LLU;
	int16_t x419 = -4;
	volatile uint64_t t83 = 3812320584175722LLU;

	t83 = ((x417|x418)*(x419^x420));

	if (t83 != 18446744073709551586LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x421 = UINT16_MAX;
	uint16_t x424 = 25249U;
	volatile int64_t t84 = 270399910340115LL;

	t84 = ((x421|x422)*(x423^x424));

	if (t84 != 129485LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x425 = 1152;
	static int64_t x426 = INT64_MIN;
	int8_t x428 = -1;
	volatile int64_t t85 = 191LL;

	t85 = ((x425|x426)*(x427^x428));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x429 = -1;
	int16_t x430 = INT16_MAX;
	static int16_t x431 = INT16_MIN;
	int64_t x432 = 31LL;
	volatile int64_t t86 = 30743LL;

	t86 = ((x429|x430)*(x431^x432));

	if (t86 != 32737LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x434 = INT64_MAX;
	int32_t x435 = -1;
	static uint8_t x436 = 1U;
	int64_t t87 = 677LL;

	t87 = ((x433|x434)*(x435^x436));

	if (t87 != 2LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x437 = INT32_MAX;
	uint64_t x438 = UINT64_MAX;
	uint16_t x440 = 6163U;
	uint64_t t88 = 3341510632497918LLU;

	t88 = ((x437|x438)*(x439^x440));

	if (t88 != 9223372036854781972LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x441 = -1;
	int16_t x442 = INT16_MIN;
	int16_t x444 = -1;
	volatile uint64_t t89 = 514519552LLU;

	t89 = ((x441|x442)*(x443^x444));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x445 = INT64_MIN;
	uint64_t x447 = UINT64_MAX;
	int64_t x448 = INT64_MAX;
	uint64_t t90 = 86090LLU;

	t90 = ((x445|x446)*(x447^x448));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x449 = INT64_MIN;
	int64_t x450 = INT64_MAX;
	static int16_t x451 = INT16_MIN;
	static uint64_t x452 = UINT64_MAX;
	volatile uint64_t t91 = 395918758841LLU;

	t91 = ((x449|x450)*(x451^x452));

	if (t91 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x453 = -1;
	int32_t x454 = INT32_MIN;
	uint32_t x455 = UINT32_MAX;
	volatile uint64_t x456 = 68750185909335568LLU;
	static uint64_t t92 = 3113020886641669LLU;

	t92 = ((x453|x454)*(x455^x456));

	if (t92 != 18377993883819587089LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x457 = 5134580587LL;
	int8_t x458 = -1;
	static int8_t x459 = -1;
	uint64_t x460 = UINT64_MAX;
	uint64_t t93 = 13483530453156LLU;

	t93 = ((x457|x458)*(x459^x460));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x462 = 0U;
	int16_t x463 = INT16_MAX;

	t94 = ((x461|x462)*(x463^x464));

	if (t94 != -2097152LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x465 = -1;
	static uint32_t x466 = 15537436U;
	static int64_t x467 = -17197LL;

	t95 = ((x465|x466)*(x467^x468));

	if (t95 != 66876935750445LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x469 = -1;
	static int32_t x470 = INT32_MIN;
	volatile int32_t t96 = 411;

	t96 = ((x469|x470)*(x471^x472));

	if (t96 != 65536) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x473 = INT32_MAX;
	uint8_t x474 = 0U;
	static uint32_t x475 = 465U;
	uint32_t t97 = 293802984U;

	t97 = ((x473|x474)*(x475^x476));

	if (t97 != 4294966831U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x477 = 1492;
	int8_t x478 = -7;
	volatile int32_t t98 = -32425;

	t98 = ((x477|x478)*(x479^x480));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x481 = -2314;
	uint32_t x482 = 749U;
	uint8_t x483 = UINT8_MAX;
	uint16_t x484 = 6U;
	uint32_t t99 = 28065U;

	t99 = ((x481|x482)*(x483^x484));

	if (t99 != 4294393351U) { NG(); } else { ; }
	
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

