#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
int32_t x6 = INT32_MIN;
int64_t x7 = INT64_MAX;
static volatile int32_t x17 = -1;
int64_t x19 = INT64_MAX;
volatile int64_t x34 = INT64_MAX;
uint64_t x35 = 50873LLU;
uint32_t x44 = UINT32_MAX;
int64_t x46 = -1LL;
uint8_t x58 = 3U;
static uint32_t x63 = 6021310U;
int64_t x64 = INT64_MAX;
volatile uint16_t x71 = UINT16_MAX;
int64_t x82 = INT64_MIN;
static uint8_t x85 = 60U;
int64_t x89 = INT64_MAX;
int64_t t22 = 954381222LL;
uint32_t x93 = 0U;
volatile uint64_t t25 = 73590847835655464LLU;
uint64_t x112 = 1597626261LLU;
static int32_t x114 = INT32_MIN;
volatile uint32_t t28 = 84U;
uint8_t x133 = 7U;
int32_t x136 = INT32_MAX;
int64_t t36 = -26LL;
uint32_t x149 = UINT32_MAX;
int32_t x150 = -1;
int16_t x151 = -1;
static int32_t x157 = INT32_MIN;
static int64_t x160 = -1LL;
int64_t x163 = 142887LL;
uint8_t x168 = 0U;
static volatile uint32_t x174 = 744567U;
volatile int32_t x197 = INT32_MIN;
int64_t x203 = INT64_MIN;
volatile uint64_t t50 = 6431365709308437413LLU;
static uint16_t x220 = 6840U;
uint32_t x235 = UINT32_MAX;
volatile int8_t x247 = 57;
uint64_t t62 = 3886025460857623984LLU;
static int64_t x253 = 25760992LL;
static uint16_t x254 = 19258U;
static int64_t x258 = 221572325407487LL;
static volatile uint64_t t64 = 3597836518LLU;
int32_t x261 = 203875;
uint32_t x264 = 2U;
static int32_t x267 = INT32_MIN;
static uint32_t x268 = 1U;
int64_t x273 = INT64_MIN;
volatile int16_t x275 = INT16_MAX;
int64_t x278 = -41LL;
uint8_t x286 = 113U;
int32_t t71 = -7953;
uint8_t x289 = 7U;
volatile int16_t x293 = INT16_MIN;
static volatile int64_t x295 = -14340950878118311LL;
int64_t t73 = -1LL;
int32_t x300 = INT32_MIN;
volatile uint8_t x307 = UINT8_MAX;
uint8_t x312 = UINT8_MAX;
volatile int64_t t77 = -303503030LL;
int32_t x316 = -1;
static int8_t x322 = 5;
volatile uint8_t x324 = 7U;
static uint64_t t80 = 11271818074072432LLU;
int8_t x327 = INT8_MIN;
int64_t x331 = 191544029232102877LL;
uint64_t t84 = 18277662353272106LLU;
int16_t x342 = 14;
uint32_t t85 = 1568404U;
volatile int32_t x348 = INT32_MIN;
int16_t x359 = -27;
volatile int16_t x362 = INT16_MIN;
volatile int64_t x366 = INT64_MIN;
static volatile int64_t t91 = 1347271109378396329LL;
volatile int8_t x374 = INT8_MAX;
uint64_t x378 = 505701337611500382LLU;
uint8_t x380 = 3U;
volatile uint32_t x383 = 197426705U;
int64_t t95 = -1044802829LL;
volatile uint32_t x389 = UINT32_MAX;
static uint32_t t97 = 1U;
volatile uint64_t x395 = 1LLU;
uint16_t x398 = 5U;


void f0(void) {
	static int8_t x2 = -1;
	volatile uint64_t x3 = 456048LLU;
	volatile uint32_t x4 = 1870U;
	volatile uint64_t t0 = 1434798LLU;

	t0 = ((x1|x2)^(x3^x4));

	if (t0 != 18446744073709096385LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = 82425211;
	int16_t x8 = INT16_MAX;
	int64_t t1 = -740934211353LL;

	t1 = ((x5|x6)^(x7^x8));

	if (t1 != -9223372034789722757LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 645U;
	volatile int64_t x10 = INT64_MIN;
	uint16_t x11 = UINT16_MAX;
	uint8_t x12 = 29U;
	int64_t t2 = 957162773178LL;

	t2 = ((x9|x10)^(x11^x12));

	if (t2 != -9223372036854710937LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 45;
	uint8_t x14 = 29U;
	static int8_t x15 = INT8_MIN;
	uint32_t x16 = UINT32_MAX;
	static volatile uint32_t t3 = 2679U;

	t3 = ((x13|x14)^(x15^x16));

	if (t3 != 66U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = INT16_MAX;
	static uint8_t x20 = 4U;
	volatile int64_t t4 = -14091799LL;

	t4 = ((x17|x18)^(x19^x20));

	if (t4 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = 142U;
	uint16_t x22 = 0U;
	int32_t x23 = INT32_MIN;
	int8_t x24 = 9;
	static uint32_t t5 = 84U;

	t5 = ((x21|x22)^(x23^x24));

	if (t5 != 2147483783U) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MIN;
	uint8_t x26 = 11U;
	int16_t x27 = INT16_MIN;
	uint32_t x28 = 6767U;
	volatile int64_t t6 = -4315685215482LL;

	t6 = ((x25|x26)^(x27^x28));

	if (t6 != -9223372032559834524LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MIN;
	uint16_t x30 = 136U;
	uint32_t x31 = 6025U;
	static uint64_t x32 = 24981694926LLU;
	static volatile uint64_t t7 = 6800180LLU;

	t7 = ((x29|x30)^(x31^x32));

	if (t7 != 18446744048727851471LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = UINT8_MAX;
	volatile uint64_t x36 = 201292983LLU;
	uint64_t t8 = 5191331698566588828LLU;

	t8 = ((x33|x34)^(x35^x36));

	if (t8 != 9223372036653467121LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	volatile int16_t x38 = INT16_MIN;
	int64_t x39 = INT64_MIN;
	volatile uint8_t x40 = 75U;
	static int64_t t9 = -2618564942115LL;

	t9 = ((x37|x38)^(x39^x40));

	if (t9 != 9223372036854743115LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	int8_t x42 = -5;
	int8_t x43 = INT8_MIN;
	uint32_t t10 = 185244271U;

	t10 = ((x41|x42)^(x43^x44));

	if (t10 != 4294967168U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = INT8_MIN;
	int32_t x47 = -1;
	int16_t x48 = -1;
	volatile int64_t t11 = -6LL;

	t11 = ((x45|x46)^(x47^x48));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 3288706LLU;
	int32_t x50 = INT32_MIN;
	int64_t x51 = INT64_MAX;
	static int32_t x52 = 90;
	volatile uint64_t t12 = 127862786LLU;

	t12 = ((x49|x50)^(x51^x52));

	if (t12 != 9223372038998970663LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = 24661881133017220LL;
	volatile int16_t x54 = -1;
	static uint16_t x55 = 7U;
	int8_t x56 = -38;
	static volatile int64_t t13 = 63819110345786LL;

	t13 = ((x53|x54)^(x55^x56));

	if (t13 != 34LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = -1;
	int64_t x59 = INT64_MIN;
	uint32_t x60 = 15003U;
	int64_t t14 = -2757LL;

	t14 = ((x57|x58)^(x59^x60));

	if (t14 != 9223372036854760804LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 59;
	uint8_t x62 = 88U;
	static volatile int64_t t15 = 30435665035457143LL;

	t15 = ((x61|x62)^(x63^x64));

	if (t15 != 9223372036848754490LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	volatile uint32_t x66 = 1U;
	uint32_t x67 = 15133U;
	uint32_t x68 = 51U;
	static uint32_t t16 = 1359934U;

	t16 = ((x65|x66)^(x67^x68));

	if (t16 != 15185U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	volatile uint8_t x70 = 95U;
	int32_t x72 = 6477543;
	int64_t t17 = -4357189000111826221LL;

	t17 = ((x69|x70)^(x71^x72));

	if (t17 != -9223372036848342713LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	uint64_t x74 = 0LLU;
	int8_t x75 = 1;
	int32_t x76 = INT32_MIN;
	uint64_t t18 = 735149589536102LLU;

	t18 = ((x73|x74)^(x75^x76));

	if (t18 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -2;
	static uint32_t x78 = UINT32_MAX;
	int8_t x79 = INT8_MIN;
	int16_t x80 = INT16_MAX;
	uint32_t t19 = 270149660U;

	t19 = ((x77|x78)^(x79^x80));

	if (t19 != 32640U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 4016669780715LLU;
	uint32_t x83 = UINT32_MAX;
	int16_t x84 = -76;
	uint64_t t20 = 44059558324013398LLU;

	t20 = ((x81|x82)^(x83^x84));

	if (t20 != 9223376053524556448LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x86 = 0U;
	int8_t x87 = INT8_MIN;
	uint64_t x88 = UINT64_MAX;
	static volatile uint64_t t21 = 272566221993221486LLU;

	t21 = ((x85|x86)^(x87^x88));

	if (t21 != 67LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x90 = 609;
	uint16_t x91 = 0U;
	volatile int16_t x92 = INT16_MAX;

	t22 = ((x89|x90)^(x91^x92));

	if (t22 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint64_t x94 = 1062320105080998313LLU;
	volatile int16_t x95 = INT16_MIN;
	static int8_t x96 = -32;
	volatile uint64_t t23 = 31173LLU;

	t23 = ((x93|x94)^(x95^x96));

	if (t23 != 1062320105080993353LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MAX;
	static volatile uint32_t x98 = 25525365U;
	volatile int8_t x99 = INT8_MIN;
	int32_t x100 = INT32_MAX;
	volatile uint32_t t24 = 2U;

	t24 = ((x97|x98)^(x99^x100));

	if (t24 != 4294967168U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = 392;
	static volatile int16_t x102 = -17;
	uint64_t x103 = 17683814LLU;
	int8_t x104 = 0;

	t25 = ((x101|x102)^(x103^x104));

	if (t25 != 18446744073691867785LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = UINT32_MAX;
	uint16_t x106 = 15U;
	int8_t x107 = INT8_MIN;
	volatile int16_t x108 = -15;
	static volatile uint32_t t26 = 3680U;

	t26 = ((x105|x106)^(x107^x108));

	if (t26 != 4294967182U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x109 = 1U;
	uint16_t x110 = 82U;
	volatile int64_t x111 = -1LL;
	volatile uint64_t t27 = 4LLU;

	t27 = ((x109|x110)^(x111^x112));

	if (t27 != 18446744072111925305LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = UINT32_MAX;
	static uint8_t x115 = UINT8_MAX;
	int8_t x116 = -56;

	t28 = ((x113|x114)^(x115^x116));

	if (t28 != 200U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = INT32_MIN;
	volatile int8_t x118 = INT8_MAX;
	uint32_t x119 = 7U;
	int8_t x120 = INT8_MIN;
	uint32_t t29 = 1599U;

	t29 = ((x117|x118)^(x119^x120));

	if (t29 != 2147483640U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	static int64_t x122 = -1LL;
	volatile int64_t x123 = INT64_MAX;
	volatile int8_t x124 = INT8_MIN;
	static int64_t t30 = 10335201474323LL;

	t30 = ((x121|x122)^(x123^x124));

	if (t30 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 924476792LLU;
	volatile uint8_t x126 = 49U;
	static volatile int64_t x127 = INT64_MIN;
	int8_t x128 = INT8_MIN;
	volatile uint64_t t31 = 228147LLU;

	t31 = ((x125|x126)^(x127^x128));

	if (t31 != 9223372035930299129LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x129 = 7633;
	volatile int64_t x130 = -1LL;
	uint32_t x131 = 111609687U;
	int8_t x132 = -1;
	volatile int64_t t32 = 1368281721LL;

	t32 = ((x129|x130)^(x131^x132));

	if (t32 != -4183357609LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x134 = INT8_MIN;
	int32_t x135 = INT32_MIN;
	static int32_t t33 = -43;

	t33 = ((x133|x134)^(x135^x136));

	if (t33 != 120) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 0U;
	uint32_t x138 = UINT32_MAX;
	static volatile uint16_t x139 = 3796U;
	static uint8_t x140 = 2U;
	volatile uint32_t t34 = 73680299U;

	t34 = ((x137|x138)^(x139^x140));

	if (t34 != 4294963497U) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = 176LL;
	int8_t x142 = INT8_MIN;
	static volatile uint64_t x143 = UINT64_MAX;
	static int8_t x144 = 32;
	volatile uint64_t t35 = 4272021441100658475LLU;

	t35 = ((x141|x142)^(x143^x144));

	if (t35 != 111LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -1;
	uint32_t x146 = 6308322U;
	static int8_t x147 = -1;
	int64_t x148 = -11821LL;

	t36 = ((x145|x146)^(x147^x148));

	if (t36 != 4294955475LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x152 = 719031577U;
	volatile uint32_t t37 = 306U;

	t37 = ((x149|x150)^(x151^x152));

	if (t37 != 719031577U) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x153 = INT32_MIN;
	int64_t x154 = -26044LL;
	static volatile int32_t x155 = 43212616;
	static int32_t x156 = -1;
	volatile int64_t t38 = 7LL;

	t38 = ((x153|x154)^(x155^x156));

	if (t38 != 43203315LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x158 = INT8_MAX;
	static uint64_t x159 = UINT64_MAX;
	uint64_t t39 = 8818972507415LLU;

	t39 = ((x157|x158)^(x159^x160));

	if (t39 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x161 = 4U;
	int16_t x162 = 2232;
	int8_t x164 = 27;
	volatile int64_t t40 = -1780235238392635524LL;

	t40 = ((x161|x162)^(x163^x164));

	if (t40 != 140928LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x165 = -300;
	int64_t x166 = INT64_MIN;
	uint64_t x167 = UINT64_MAX;
	uint64_t t41 = 42744817LLU;

	t41 = ((x165|x166)^(x167^x168));

	if (t41 != 299LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	uint8_t x170 = 1U;
	uint64_t x171 = 272082107848399LLU;
	int32_t x172 = -1;
	static uint64_t t42 = 77878173053767LLU;

	t42 = ((x169|x170)^(x171^x172));

	if (t42 != 272083806103857LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -3;
	int8_t x175 = -1;
	int64_t x176 = -1LL;
	volatile int64_t t43 = 325767203LL;

	t43 = ((x173|x174)^(x175^x176));

	if (t43 != 4294967295LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 1U;
	int16_t x178 = INT16_MAX;
	uint64_t x179 = UINT64_MAX;
	static volatile uint64_t x180 = 522809LLU;
	uint64_t t44 = 407LLU;

	t44 = ((x177|x178)^(x179^x180));

	if (t44 != 18446744073709058617LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x181 = INT64_MIN;
	int8_t x182 = INT8_MIN;
	uint8_t x183 = 0U;
	int16_t x184 = -1;
	static int64_t t45 = 1278378909LL;

	t45 = ((x181|x182)^(x183^x184));

	if (t45 != 127LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x185 = -1;
	volatile int8_t x186 = INT8_MIN;
	int32_t x187 = INT32_MAX;
	int64_t x188 = -1LL;
	int64_t t46 = -1248053924285527LL;

	t46 = ((x185|x186)^(x187^x188));

	if (t46 != 2147483647LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x189 = INT16_MIN;
	int8_t x190 = INT8_MIN;
	uint8_t x191 = UINT8_MAX;
	int32_t x192 = 244221019;
	int32_t t47 = -11028;

	t47 = ((x189|x190)^(x191^x192));

	if (t47 != -244221148) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	static int64_t x194 = INT64_MIN;
	int8_t x195 = 4;
	static int16_t x196 = INT16_MIN;
	int64_t t48 = -16175407307408650LL;

	t48 = ((x193|x194)^(x195^x196));

	if (t48 != 4LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x198 = 2188U;
	uint16_t x199 = UINT16_MAX;
	uint32_t x200 = 12715966U;
	uint32_t t49 = 1436614778U;

	t49 = ((x197|x198)^(x199^x200));

	if (t49 != 2160259277U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 336U;
	int64_t x202 = INT64_MIN;
	uint64_t x204 = 2030582506384923LLU;

	t50 = ((x201|x202)^(x203^x204));

	if (t50 != 2030582506385227LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = 0U;
	int64_t x206 = INT64_MIN;
	int16_t x207 = -505;
	uint32_t x208 = 3U;
	int64_t t51 = 383339864686609LL;

	t51 = ((x205|x206)^(x207^x208));

	if (t51 != -9223372032559809020LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x209 = -1;
	int32_t x210 = 1259211;
	int64_t x211 = INT64_MIN;
	static uint32_t x212 = UINT32_MAX;
	static volatile int64_t t52 = 95926935124608082LL;

	t52 = ((x209|x210)^(x211^x212));

	if (t52 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -1;
	volatile int32_t x214 = -1;
	static int64_t x215 = -1LL;
	uint8_t x216 = UINT8_MAX;
	volatile int64_t t53 = -4248LL;

	t53 = ((x213|x214)^(x215^x216));

	if (t53 != 255LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x217 = UINT8_MAX;
	uint64_t x218 = 141875LLU;
	volatile int32_t x219 = INT32_MAX;
	volatile uint64_t t54 = 374LLU;

	t54 = ((x217|x218)^(x219^x220));

	if (t54 != 2147340216LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MIN;
	volatile uint64_t x222 = 1192LLU;
	int64_t x223 = INT64_MIN;
	static int16_t x224 = 105;
	uint64_t t55 = 218LLU;

	t55 = ((x221|x222)^(x223^x224));

	if (t55 != 9223372036854744257LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x225 = -48;
	int64_t x226 = 46532210LL;
	int16_t x227 = INT16_MIN;
	int64_t x228 = -1LL;
	volatile int64_t t56 = -21149826924338LL;

	t56 = ((x225|x226)^(x227^x228));

	if (t56 != -32755LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -1;
	volatile int16_t x230 = 2258;
	static uint64_t x231 = UINT64_MAX;
	volatile uint16_t x232 = 254U;
	volatile uint64_t t57 = 45090696484LLU;

	t57 = ((x229|x230)^(x231^x232));

	if (t57 != 254LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x233 = 0U;
	uint8_t x234 = 2U;
	int16_t x236 = -4040;
	volatile uint32_t t58 = 376694008U;

	t58 = ((x233|x234)^(x235^x236));

	if (t58 != 4037U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x237 = -8012LL;
	static int16_t x238 = -1;
	volatile int8_t x239 = INT8_MAX;
	static int32_t x240 = -4637;
	volatile int64_t t59 = 526852887428525921LL;

	t59 = ((x237|x238)^(x239^x240));

	if (t59 != 4707LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 31U;
	int16_t x242 = INT16_MIN;
	int16_t x243 = INT16_MIN;
	int8_t x244 = 20;
	uint32_t t60 = 26644124U;

	t60 = ((x241|x242)^(x243^x244));

	if (t60 != 11U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = 0;
	uint16_t x246 = 28U;
	int8_t x248 = 1;
	volatile int32_t t61 = 1657;

	t61 = ((x245|x246)^(x247^x248));

	if (t61 != 36) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = 13;
	uint64_t x250 = 6580908665846142912LLU;
	volatile int64_t x251 = -1LL;
	int16_t x252 = INT16_MAX;

	t62 = ((x249|x250)^(x251^x252));

	if (t62 != 11865835407863388109LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x255 = INT8_MIN;
	volatile int32_t x256 = INT32_MAX;
	volatile int64_t t63 = -3485732864405548499LL;

	t63 = ((x253|x254)^(x255^x256));

	if (t63 != -2121703547LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	int8_t x259 = 4;
	static volatile uint64_t x260 = UINT64_MAX;

	t64 = ((x257|x258)^(x259^x260));

	if (t64 != 1284LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x262 = -1;
	int32_t x263 = INT32_MIN;
	uint32_t t65 = 3461U;

	t65 = ((x261|x262)^(x263^x264));

	if (t65 != 2147483645U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = UINT64_MAX;
	volatile uint32_t x266 = 6U;
	volatile uint64_t t66 = 613LLU;

	t66 = ((x265|x266)^(x267^x268));

	if (t66 != 18446744071562067966LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x269 = INT64_MAX;
	static int16_t x270 = -379;
	int16_t x271 = -20;
	static volatile uint32_t x272 = 5U;
	int64_t t67 = -58LL;

	t67 = ((x269|x270)^(x271^x272));

	if (t67 != -4294967274LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x274 = 35445069563265918LL;
	volatile int32_t x276 = INT32_MAX;
	volatile int64_t t68 = 15050694LL;

	t68 = ((x273|x274)^(x275^x276));

	if (t68 != -9187926968243059842LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = UINT16_MAX;
	static uint32_t x279 = UINT32_MAX;
	int64_t x280 = INT64_MIN;
	static int64_t t69 = -13768435098LL;

	t69 = ((x277|x278)^(x279^x280));

	if (t69 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 1U;
	static int32_t x282 = -1;
	uint64_t x283 = 6193003673831LLU;
	static int64_t x284 = INT64_MAX;
	volatile uint64_t t70 = 78848502831183464LLU;

	t70 = ((x281|x282)^(x283^x284));

	if (t70 != 9223378229858449639LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x285 = -1;
	int8_t x287 = INT8_MIN;
	uint16_t x288 = 2107U;

	t71 = ((x285|x286)^(x287^x288));

	if (t71 != 2116) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x290 = 4643LLU;
	int64_t x291 = INT64_MIN;
	uint8_t x292 = UINT8_MAX;
	uint64_t t72 = 802813736193525LLU;

	t72 = ((x289|x290)^(x291^x292));

	if (t72 != 9223372036854780632LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x294 = -1;
	int16_t x296 = INT16_MAX;

	t73 = ((x293|x294)^(x295^x296));

	if (t73 != 14340950878101081LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = 12;
	static uint64_t x298 = 558763504730306LLU;
	static uint8_t x299 = 13U;
	static uint64_t t74 = 3LLU;

	t74 = ((x297|x298)^(x299^x300));

	if (t74 != 18446185310346182851LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	static int32_t x302 = -79230419;
	static int8_t x303 = 16;
	volatile int64_t x304 = INT64_MIN;
	volatile int64_t t75 = 107101468LL;

	t75 = ((x301|x302)^(x303^x304));

	if (t75 != 9223372036854745661LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	int8_t x306 = INT8_MIN;
	uint8_t x308 = UINT8_MAX;
	int32_t t76 = -3;

	t76 = ((x305|x306)^(x307^x308));

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = -1LL;
	int16_t x310 = INT16_MAX;
	int32_t x311 = INT32_MIN;

	t77 = ((x309|x310)^(x311^x312));

	if (t77 != 2147483392LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 1U;
	volatile uint64_t x314 = UINT64_MAX;
	int32_t x315 = 3395;
	uint64_t t78 = 2628318LLU;

	t78 = ((x313|x314)^(x315^x316));

	if (t78 != 3395LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x317 = UINT8_MAX;
	static int32_t x318 = -39949;
	int32_t x319 = INT32_MIN;
	uint64_t x320 = UINT64_MAX;
	uint64_t t79 = 4LLU;

	t79 = ((x317|x318)^(x319^x320));

	if (t79 != 18446744071562107904LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -1;
	uint64_t x323 = 13536296772062LLU;

	t80 = ((x321|x322)^(x323^x324));

	if (t80 != 18446730537412779558LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = -1;
	volatile uint32_t x326 = 19035010U;
	int8_t x328 = INT8_MIN;
	uint32_t t81 = UINT32_MAX;

	t81 = ((x325|x326)^(x327^x328));

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MIN;
	int64_t x330 = INT64_MIN;
	static int32_t x332 = INT32_MIN;
	volatile int64_t t82 = 789LL;

	t82 = ((x329|x330)^(x331^x332));

	if (t82 != 191544030398906973LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = 8;
	static int8_t x334 = INT8_MAX;
	int32_t x335 = -23;
	int32_t x336 = INT32_MAX;
	int32_t t83 = 17;

	t83 = ((x333|x334)^(x335^x336));

	if (t83 != -2147483543) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 2708087454093576634LLU;
	volatile int8_t x338 = INT8_MAX;
	int32_t x339 = INT32_MIN;
	int64_t x340 = INT64_MIN;

	t84 = ((x337|x338)^(x339^x340));

	if (t84 != 6515284580678797823LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -1;
	static volatile int32_t x343 = -22;
	uint32_t x344 = 2098193260U;

	t85 = ((x341|x342)^(x343^x344));

	if (t85 != 2098193273U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -50260692015881511LL;
	int32_t x346 = INT32_MAX;
	int8_t x347 = 1;
	int64_t t86 = 3513563351115LL;

	t86 = ((x345|x346)^(x347^x348));

	if (t86 != 50260692992786430LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -753404075;
	uint16_t x350 = UINT16_MAX;
	volatile int16_t x351 = INT16_MIN;
	int8_t x352 = INT8_MIN;
	volatile int32_t t87 = -388015541;

	t87 = ((x349|x350)^(x351^x352));

	if (t87 != -753434497) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = UINT16_MAX;
	int8_t x354 = -1;
	static int16_t x355 = -1;
	int64_t x356 = INT64_MAX;
	static int64_t t88 = INT64_MAX;

	t88 = ((x353|x354)^(x355^x356));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 8382874722108028LLU;
	int32_t x358 = 4223;
	static uint16_t x360 = 1U;
	static volatile uint64_t t89 = 822658541565530867LLU;

	t89 = ((x357|x358)^(x359^x360));

	if (t89 != 18438361198987439515LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = 15U;
	static uint64_t x363 = 9352519LLU;
	static volatile int64_t x364 = 850007967LL;
	volatile uint64_t t90 = 12012517313683LLU;

	t90 = ((x361|x362)^(x363^x364));

	if (t90 != 3453690583LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = 1829U;
	int16_t x367 = INT16_MIN;
	int8_t x368 = 13;

	t91 = ((x365|x366)^(x367^x368));

	if (t91 != 9223372036854744872LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x369 = -127586778LL;
	volatile uint16_t x370 = 0U;
	uint64_t x371 = UINT64_MAX;
	uint8_t x372 = UINT8_MAX;
	static volatile uint64_t t92 = 243268030LLU;

	t92 = ((x369|x370)^(x371^x372));

	if (t92 != 127586598LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 575465LLU;
	volatile int32_t x375 = INT32_MIN;
	uint16_t x376 = 2861U;
	static volatile uint64_t t93 = 257045698LLU;

	t93 = ((x373|x374)^(x375^x376));

	if (t93 != 18446744071562644690LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x377 = 2U;
	static int8_t x379 = INT8_MAX;
	volatile uint64_t t94 = 568156817583483660LLU;

	t94 = ((x377|x378)^(x379^x380));

	if (t94 != 505701337611500322LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -1LL;
	int8_t x382 = -7;
	int32_t x384 = 3337274;

	t95 = ((x381|x382)^(x383^x384));

	if (t95 != -200708652LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint16_t x385 = 6067U;
	uint32_t x386 = UINT32_MAX;
	int16_t x387 = INT16_MAX;
	int64_t x388 = INT64_MIN;
	int64_t t96 = -1086373903968LL;

	t96 = ((x385|x386)^(x387^x388));

	if (t96 != -9223372032559841280LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x390 = 44U;
	int8_t x391 = 1;
	static uint8_t x392 = 57U;

	t97 = ((x389|x390)^(x391^x392));

	if (t97 != 4294967239U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = 181;
	volatile int32_t x394 = INT32_MAX;
	int32_t x396 = INT32_MAX;
	volatile uint64_t t98 = 25674082858553345LLU;

	t98 = ((x393|x394)^(x395^x396));

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = 1052;
	static int8_t x399 = INT8_MIN;
	int8_t x400 = 44;
	int32_t t99 = -712013125;

	t99 = ((x397|x398)^(x399^x400));

	if (t99 != -1103) { NG(); } else { ; }
	
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

