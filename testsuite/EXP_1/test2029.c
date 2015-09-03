#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x26 = -1LL;
int8_t x28 = 1;
int8_t x39 = INT8_MIN;
static uint64_t x45 = UINT64_MAX;
uint8_t x50 = 2U;
int64_t t12 = 20467981098838LL;
uint32_t x58 = UINT32_MAX;
int8_t x61 = -1;
int8_t x62 = INT8_MIN;
uint16_t x63 = 61U;
int32_t t14 = -27134545;
volatile uint64_t t16 = 15LLU;
static uint8_t x79 = 7U;
static int16_t x81 = INT16_MAX;
int8_t x82 = INT8_MAX;
volatile uint64_t t19 = 210833125856235LLU;
int8_t x87 = 3;
int16_t x93 = INT16_MAX;
int8_t x94 = 27;
volatile uint32_t t22 = 3U;
int16_t x101 = -238;
int32_t x104 = -21169674;
volatile uint32_t t23 = 3U;
int32_t x109 = 539849917;
int32_t x119 = -100420754;
static int64_t x124 = -68521LL;
volatile int64_t t27 = -194LL;
volatile int64_t x129 = -299630424402LL;
int8_t x133 = -1;
volatile int8_t x135 = INT8_MIN;
int32_t x154 = INT32_MIN;
volatile int32_t x155 = INT32_MAX;
volatile uint16_t x164 = UINT16_MAX;
volatile uint8_t x168 = UINT8_MAX;
static volatile int64_t t35 = 870186LL;
volatile uint8_t x170 = 15U;
static int8_t x171 = -35;
int32_t x172 = INT32_MAX;
static uint64_t x177 = 5740135941187976613LLU;
uint64_t x187 = 1251159286865725LLU;
static int16_t x188 = INT16_MAX;
uint64_t x192 = 84994076LLU;
static uint32_t x193 = 1280U;
volatile int64_t x202 = -1LL;
static int16_t x209 = -2;
uint8_t x212 = 3U;
int32_t t45 = 347757167;
static volatile int16_t x213 = 0;
volatile uint64_t x217 = 11297919941LLU;
uint8_t x233 = 8U;
uint32_t t49 = 0U;
volatile uint64_t x252 = UINT64_MAX;
volatile int8_t x262 = -1;
static volatile uint64_t t54 = 64248893855594LLU;
int32_t x272 = INT32_MIN;
volatile int32_t x274 = INT32_MIN;
int16_t x284 = INT16_MIN;
int8_t x301 = 8;
uint64_t x306 = 112681526247244LLU;
volatile uint64_t t63 = 20461994LLU;
int64_t x319 = INT64_MIN;
int16_t x331 = -1;
int8_t x332 = -1;
int32_t x338 = -28956;
volatile int16_t x342 = INT16_MIN;
int32_t x348 = 3294;
int32_t x350 = INT32_MIN;
int8_t x352 = -15;
static int8_t x353 = 1;
int32_t x360 = INT32_MIN;
volatile int32_t t73 = 5027949;
int16_t x382 = -1188;
int32_t x383 = INT32_MAX;
uint8_t x387 = 1U;
int8_t x390 = INT8_MAX;
uint64_t x391 = 15271191371475505LLU;
static volatile int32_t x401 = 821697756;
int16_t x402 = INT16_MAX;
int16_t x403 = INT16_MIN;
uint8_t x406 = 3U;
uint16_t x412 = 1U;
uint64_t t84 = 16825640822LLU;
volatile uint64_t x416 = 3374625938503423113LLU;
volatile uint64_t t85 = 1LLU;
uint16_t x418 = UINT16_MAX;
int64_t t86 = -7325818893272527LL;
static int64_t x421 = -1LL;
volatile int64_t x425 = INT64_MAX;
uint32_t x432 = 167704057U;
static int16_t x444 = -1;
int8_t x458 = 1;
int8_t x462 = INT8_MIN;
uint32_t x464 = UINT32_MAX;
int32_t x467 = -1;
int16_t x468 = -1;
int16_t x469 = INT16_MIN;
static int32_t x472 = -5845;


void f0(void) {
	static int8_t x1 = 1;
	int32_t x2 = INT32_MIN;
	uint16_t x3 = 370U;
	int16_t x4 = 182;
	volatile int32_t t0 = -65094293;

	t0 = (((x1^x2)+x3)+x4);

	if (t0 != -2147483095) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	int16_t x6 = INT16_MIN;
	int16_t x7 = INT16_MAX;
	uint8_t x8 = 31U;
	uint64_t t1 = 2611740LLU;

	t1 = (((x5^x6)+x7)+x8);

	if (t1 != 65565LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	static volatile uint64_t x10 = UINT64_MAX;
	static int64_t x11 = 74LL;
	int32_t x12 = INT32_MIN;
	uint64_t t2 = 101119612823LLU;

	t2 = (((x9^x10)+x11)+x12);

	if (t2 != 18446744071562002506LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 42U;
	int32_t x14 = INT32_MAX;
	static uint64_t x15 = 286970273948LLU;
	uint32_t x16 = 1547528447U;
	uint64_t t3 = 5567594LLU;

	t3 = (((x13^x14)+x15)+x16);

	if (t3 != 290665286000LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int32_t x18 = INT32_MIN;
	int32_t x19 = -1;
	static volatile int8_t x20 = INT8_MIN;
	static int32_t t4 = 3;

	t4 = (((x17^x18)+x19)+x20);

	if (t4 != 2147450751) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	int16_t x22 = -1005;
	volatile int8_t x23 = -1;
	volatile int8_t x24 = INT8_MIN;
	int32_t t5 = -2;

	t5 = (((x21^x22)+x23)+x24);

	if (t5 != -31893) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = -6;
	static volatile int8_t x27 = INT8_MIN;
	int64_t t6 = 8242883LL;

	t6 = (((x25^x26)+x27)+x28);

	if (t6 != -122LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MAX;
	int16_t x30 = -1;
	volatile uint16_t x31 = 0U;
	int16_t x32 = -1;
	int32_t t7 = 0;

	t7 = (((x29^x30)+x31)+x32);

	if (t7 != -129) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	uint64_t x34 = 2603316464897201LLU;
	uint16_t x35 = 4U;
	volatile int32_t x36 = INT32_MIN;
	volatile uint64_t t8 = 244900371LLU;

	t8 = (((x33^x34)+x35)+x36);

	if (t8 != 2603313474253650LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 0;
	static int16_t x38 = -1;
	int8_t x40 = 2;
	int32_t t9 = -223;

	t9 = (((x37^x38)+x39)+x40);

	if (t9 != -127) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x46 = UINT16_MAX;
	int16_t x47 = -4589;
	int64_t x48 = -70804LL;
	volatile uint64_t t10 = 985LLU;

	t10 = (((x45^x46)+x47)+x48);

	if (t10 != 18446744073709410687LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x49 = 45U;
	uint8_t x51 = 21U;
	uint16_t x52 = 868U;
	uint32_t t11 = 2U;

	t11 = (((x49^x50)+x51)+x52);

	if (t11 != 936U) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x53 = 0;
	uint16_t x54 = 42U;
	int16_t x55 = 188;
	static int64_t x56 = 116906804172LL;

	t12 = (((x53^x54)+x55)+x56);

	if (t12 != 116906804402LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = 2286449LL;
	int16_t x59 = INT16_MIN;
	int32_t x60 = INT32_MAX;
	int64_t t13 = 4529596866693152262LL;

	t13 = (((x57^x58)+x59)+x60);

	if (t13 != 6440131725LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint16_t x64 = UINT16_MAX;

	t14 = (((x61^x62)+x63)+x64);

	if (t14 != 65723) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MIN;
	int32_t x66 = INT32_MIN;
	int32_t x67 = INT32_MIN;
	static uint16_t x68 = 4U;
	int32_t t15 = 1;

	t15 = (((x65^x66)+x67)+x68);

	if (t15 != -2147483644) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x69 = -23;
	int64_t x70 = -115394066347179LL;
	uint64_t x71 = UINT64_MAX;
	volatile int64_t x72 = INT64_MIN;

	t16 = (((x69^x70)+x71)+x72);

	if (t16 != 9223487430921123003LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = 2563;
	uint8_t x74 = 20U;
	static volatile int32_t x75 = -1;
	static volatile int64_t x76 = 0LL;
	int64_t t17 = 2788944LL;

	t17 = (((x73^x74)+x75)+x76);

	if (t17 != 2582LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x77 = -15;
	uint8_t x78 = 13U;
	static volatile int8_t x80 = INT8_MIN;
	int32_t t18 = 0;

	t18 = (((x77^x78)+x79)+x80);

	if (t18 != -125) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x83 = UINT64_MAX;
	static int64_t x84 = -1LL;

	t19 = (((x81^x82)+x83)+x84);

	if (t19 != 32638LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MAX;
	static volatile int32_t x86 = 1180929;
	uint8_t x88 = 0U;
	volatile int32_t t20 = 59668;

	t20 = (((x85^x86)+x87)+x88);

	if (t20 != 1211137) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint8_t x89 = UINT8_MAX;
	int32_t x90 = INT32_MIN;
	uint64_t x91 = 4390271909LLU;
	uint64_t x92 = UINT64_MAX;
	static uint64_t t21 = 2901285251283106048LLU;

	t21 = (((x89^x90)+x91)+x92);

	if (t21 != 2242788515LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x95 = 45384U;
	uint32_t x96 = UINT32_MAX;

	t22 = (((x93^x94)+x95)+x96);

	if (t22 != 78123U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x102 = -1;
	uint32_t x103 = 8892U;

	t23 = (((x101^x102)+x103)+x104);

	if (t23 != 4273806751U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint64_t x105 = 3812962LLU;
	int8_t x106 = -3;
	int16_t x107 = INT16_MIN;
	volatile int64_t x108 = INT64_MIN;
	static volatile uint64_t t24 = 141510679466799364LLU;

	t24 = (((x105^x106)+x107)+x108);

	if (t24 != 9223372036850930079LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x110 = 10U;
	static volatile int64_t x111 = -1LL;
	volatile uint64_t x112 = 55104638838LLU;
	static uint64_t t25 = 25LLU;

	t25 = (((x109^x110)+x111)+x112);

	if (t25 != 55644488748LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = INT8_MAX;
	int16_t x118 = INT16_MIN;
	int32_t x120 = INT32_MAX;
	static volatile int32_t t26 = 49;

	t26 = (((x117^x118)+x119)+x120);

	if (t26 != 2047030252) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x121 = 6674U;
	uint8_t x122 = UINT8_MAX;
	int32_t x123 = -65416173;

	t27 = (((x121^x122)+x123)+x124);

	if (t27 != -65477801LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x130 = -239345694;
	uint8_t x131 = 1U;
	static uint16_t x132 = UINT16_MAX;
	int64_t t28 = -2094182LL;

	t28 = (((x129^x130)+x131)+x132);

	if (t28 != 299793797452LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x134 = -1;
	volatile uint32_t x136 = UINT32_MAX;
	uint32_t t29 = 69U;

	t29 = (((x133^x134)+x135)+x136);

	if (t29 != 4294967167U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x137 = 1197U;
	int64_t x138 = 977633536891100437LL;
	uint16_t x139 = 9U;
	uint32_t x140 = 13327481U;
	volatile int64_t t30 = -481LL;

	t30 = (((x137^x138)+x139)+x140);

	if (t30 != 977633536904427066LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x145 = UINT64_MAX;
	volatile int16_t x146 = -1;
	volatile int8_t x147 = INT8_MAX;
	uint8_t x148 = 1U;
	volatile uint64_t t31 = 4206280808295682827LLU;

	t31 = (((x145^x146)+x147)+x148);

	if (t31 != 128LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x149 = -9830;
	uint64_t x150 = 4589095970LLU;
	volatile int16_t x151 = 0;
	static int64_t x152 = INT64_MIN;
	static volatile uint64_t t32 = 43450102592644253LLU;

	t32 = (((x149^x150)+x151)+x152);

	if (t32 != 9223372032265672120LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x153 = -1LL;
	volatile uint16_t x156 = 249U;
	static int64_t t33 = -43606860184233LL;

	t33 = (((x153^x154)+x155)+x156);

	if (t33 != 4294967543LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x161 = -1;
	int64_t x162 = -1919832004861LL;
	int16_t x163 = INT16_MIN;
	volatile int64_t t34 = 16946732467566LL;

	t34 = (((x161^x162)+x163)+x164);

	if (t34 != 1919832037627LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x165 = -81841060261LL;
	int64_t x166 = INT64_MAX;
	volatile int32_t x167 = -1;

	t35 = (((x165^x166)+x167)+x168);

	if (t35 != -9223371955013715294LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x169 = 31U;
	volatile int32_t t36 = -15;

	t36 = (((x169^x170)+x171)+x172);

	if (t36 != 2147483628) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x178 = 147LLU;
	uint16_t x179 = UINT16_MAX;
	static int16_t x180 = INT16_MIN;
	uint64_t t37 = 2944611386239042LLU;

	t37 = (((x177^x178)+x179)+x180);

	if (t37 != 5740135941188009269LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x181 = UINT16_MAX;
	int8_t x182 = -36;
	uint8_t x183 = 3U;
	static uint8_t x184 = UINT8_MAX;
	volatile int32_t t38 = -324618;

	t38 = (((x181^x182)+x183)+x184);

	if (t38 != -65243) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x185 = 20601205U;
	uint32_t x186 = UINT32_MAX;
	static volatile uint64_t t39 = 5057933554439625LLU;

	t39 = (((x185^x186)+x187)+x188);

	if (t39 != 1251163561264582LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x189 = INT32_MIN;
	int64_t x190 = INT64_MIN;
	int8_t x191 = -1;
	volatile uint64_t t40 = 273844836143060LLU;

	t40 = (((x189^x190)+x191)+x192);

	if (t40 != 9223372034792286235LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x194 = 10LLU;
	int64_t x195 = INT64_MIN;
	volatile uint32_t x196 = 3U;
	uint64_t t41 = 5642184616052922121LLU;

	t41 = (((x193^x194)+x195)+x196);

	if (t41 != 9223372036854777101LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x197 = UINT8_MAX;
	uint16_t x198 = UINT16_MAX;
	int8_t x199 = -1;
	volatile int64_t x200 = 2LL;
	volatile int64_t t42 = 165414LL;

	t42 = (((x197^x198)+x199)+x200);

	if (t42 != 65281LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x201 = 116U;
	uint32_t x203 = 177890507U;
	static int32_t x204 = 9956619;
	volatile int64_t t43 = -19252212727279103LL;

	t43 = (((x201^x202)+x203)+x204);

	if (t43 != 187847009LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x205 = 11742508463LL;
	int16_t x206 = -690;
	volatile int16_t x207 = -960;
	int32_t x208 = -5;
	volatile int64_t t44 = 101113034LL;

	t44 = (((x205^x206)+x207)+x208);

	if (t44 != -11742509796LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x210 = INT16_MIN;
	volatile int32_t x211 = 3342;

	t45 = (((x209^x210)+x211)+x212);

	if (t45 != 36111) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x214 = 1925U;
	uint16_t x215 = 5709U;
	int16_t x216 = -5231;
	volatile int32_t t46 = -5205;

	t46 = (((x213^x214)+x215)+x216);

	if (t46 != 2403) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x218 = -11;
	static uint16_t x219 = 1U;
	static uint8_t x220 = 4U;
	uint64_t t47 = 4742658936LLU;

	t47 = (((x217^x218)+x219)+x220);

	if (t47 != 18446744062411631669LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x221 = 3;
	uint8_t x222 = 3U;
	int16_t x223 = INT16_MIN;
	uint16_t x224 = UINT16_MAX;
	volatile int32_t t48 = 686953;

	t48 = (((x221^x222)+x223)+x224);

	if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x234 = 505U;
	int8_t x235 = -1;
	uint16_t x236 = 457U;

	t49 = (((x233^x234)+x235)+x236);

	if (t49 != 953U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x237 = INT64_MIN;
	static int64_t x238 = -24142LL;
	static uint8_t x239 = 25U;
	int8_t x240 = -1;
	volatile int64_t t50 = -218058316856LL;

	t50 = (((x237^x238)+x239)+x240);

	if (t50 != 9223372036854751690LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x241 = 0U;
	int64_t x242 = 82822797LL;
	uint32_t x243 = UINT32_MAX;
	int16_t x244 = INT16_MIN;
	volatile int64_t t51 = -11814531428582101LL;

	t51 = (((x241^x242)+x243)+x244);

	if (t51 != 4377757324LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x249 = UINT64_MAX;
	int32_t x250 = INT32_MAX;
	volatile int16_t x251 = -1;
	uint64_t t52 = 4296601521920137095LLU;

	t52 = (((x249^x250)+x251)+x252);

	if (t52 != 18446744071562067966LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x253 = INT32_MAX;
	int32_t x254 = INT32_MIN;
	int64_t x255 = 18799LL;
	int16_t x256 = -1;
	int64_t t53 = -6229LL;

	t53 = (((x253^x254)+x255)+x256);

	if (t53 != 18797LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x261 = 0LLU;
	uint64_t x263 = UINT64_MAX;
	volatile uint16_t x264 = 389U;

	t54 = (((x261^x262)+x263)+x264);

	if (t54 != 387LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x265 = INT32_MIN;
	static int8_t x266 = INT8_MIN;
	static int64_t x267 = INT64_MIN;
	int32_t x268 = 363224668;
	int64_t t55 = 1691LL;

	t55 = (((x265^x266)+x267)+x268);

	if (t55 != -9223372034344067620LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x269 = -1;
	static volatile int16_t x270 = INT16_MIN;
	static uint8_t x271 = UINT8_MAX;
	volatile int32_t t56 = 1;

	t56 = (((x269^x270)+x271)+x272);

	if (t56 != -2147450626) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x273 = INT64_MAX;
	int64_t x275 = INT64_MAX;
	volatile int32_t x276 = 404029793;
	volatile int64_t t57 = -485LL;

	t57 = (((x273^x274)+x275)+x276);

	if (t57 != 2551513439LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x281 = 2;
	uint32_t x282 = UINT32_MAX;
	int32_t x283 = -1;
	static volatile uint32_t t58 = 6107U;

	t58 = (((x281^x282)+x283)+x284);

	if (t58 != 4294934524U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x289 = UINT32_MAX;
	static int32_t x290 = 427547;
	uint32_t x291 = UINT32_MAX;
	int8_t x292 = INT8_MAX;
	volatile uint32_t t59 = 64U;

	t59 = (((x289^x290)+x291)+x292);

	if (t59 != 4294539874U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x293 = INT8_MAX;
	static int32_t x294 = -1;
	int64_t x295 = -1LL;
	int16_t x296 = 7;
	int64_t t60 = -2066LL;

	t60 = (((x293^x294)+x295)+x296);

	if (t60 != -122LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x297 = INT8_MIN;
	int32_t x298 = INT32_MIN;
	uint8_t x299 = 3U;
	int8_t x300 = INT8_MIN;
	volatile int32_t t61 = -96;

	t61 = (((x297^x298)+x299)+x300);

	if (t61 != 2147483395) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x302 = -1;
	int16_t x303 = -9;
	int16_t x304 = 17;
	static volatile int32_t t62 = -1;

	t62 = (((x301^x302)+x303)+x304);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint16_t x305 = UINT16_MAX;
	int32_t x307 = INT32_MIN;
	int64_t x308 = -1LL;

	t63 = (((x305^x306)+x307)+x308);

	if (t63 != 112679378796722LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x317 = -2;
	volatile int64_t x318 = -1LL;
	static uint64_t x320 = 4553789409855536LLU;
	uint64_t t64 = 950570183912LLU;

	t64 = (((x317^x318)+x319)+x320);

	if (t64 != 9227925826264631345LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x321 = -267;
	int32_t x322 = INT32_MIN;
	static uint32_t x323 = UINT32_MAX;
	static uint32_t x324 = 254955387U;
	static volatile uint32_t t65 = 79005U;

	t65 = (((x321^x322)+x323)+x324);

	if (t65 != 2402438767U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x325 = 49849LLU;
	volatile int32_t x326 = INT32_MAX;
	volatile int16_t x327 = 9;
	uint16_t x328 = UINT16_MAX;
	static uint64_t t66 = 5LLU;

	t66 = (((x325^x326)+x327)+x328);

	if (t66 != 2147499342LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x329 = -4684;
	static int32_t x330 = -1;
	volatile int32_t t67 = -255;

	t67 = (((x329^x330)+x331)+x332);

	if (t67 != 4681) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x337 = UINT64_MAX;
	static int32_t x339 = INT32_MAX;
	volatile uint64_t x340 = 2212LLU;
	uint64_t t68 = 7097548987136LLU;

	t68 = (((x337^x338)+x339)+x340);

	if (t68 != 2147514814LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x341 = 1613421LLU;
	int64_t x343 = INT64_MIN;
	uint64_t x344 = 19941929LLU;
	static uint64_t t69 = 7194751488561243LLU;

	t69 = (((x341^x342)+x343)+x344);

	if (t69 != 9223372036873087126LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x345 = 1LL;
	uint64_t x346 = UINT64_MAX;
	static uint8_t x347 = 0U;
	uint64_t t70 = 0LLU;

	t70 = (((x345^x346)+x347)+x348);

	if (t70 != 3292LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x349 = -102;
	volatile int64_t x351 = 756339LL;
	int64_t t71 = 231824106LL;

	t71 = (((x349^x350)+x351)+x352);

	if (t71 != 2148239870LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x354 = INT64_MAX;
	uint64_t x355 = 793301132880LLU;
	int32_t x356 = INT32_MIN;
	uint64_t t72 = 152146960LLU;

	t72 = (((x353^x354)+x355)+x356);

	if (t72 != 9223372828008425038LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x357 = INT16_MIN;
	volatile int16_t x358 = -2;
	int32_t x359 = -1;

	t73 = (((x357^x358)+x359)+x360);

	if (t73 != -2147450883) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x361 = 10;
	static int8_t x362 = -1;
	int8_t x363 = INT8_MAX;
	uint8_t x364 = 117U;
	static volatile int32_t t74 = -967340145;

	t74 = (((x361^x362)+x363)+x364);

	if (t74 != 233) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x365 = INT64_MIN;
	int8_t x366 = INT8_MIN;
	static int8_t x367 = -4;
	volatile int32_t x368 = INT32_MIN;
	volatile int64_t t75 = -14071799378LL;

	t75 = (((x365^x366)+x367)+x368);

	if (t75 != 9223372034707292028LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x377 = -83098710;
	static int64_t x378 = INT64_MIN;
	uint16_t x379 = UINT16_MAX;
	int64_t x380 = -973375839353LL;
	static int64_t t76 = -6484238LL;

	t76 = (((x377^x378)+x379)+x380);

	if (t76 != 9223371063395903280LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x381 = 207146727U;
	int64_t x384 = -1LL;
	volatile int64_t t77 = 126460781198LL;

	t77 = (((x381^x382)+x383)+x384);

	if (t77 != 1940338105LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x385 = 395LLU;
	int32_t x386 = INT32_MIN;
	int32_t x388 = INT32_MIN;
	static volatile uint64_t t78 = 7161259857118995201LLU;

	t78 = (((x385^x386)+x387)+x388);

	if (t78 != 18446744069414584716LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x389 = INT8_MIN;
	volatile int16_t x392 = INT16_MIN;
	static uint64_t t79 = 926562963018014863LLU;

	t79 = (((x389^x390)+x391)+x392);

	if (t79 != 15271191371442736LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x393 = 0U;
	uint64_t x394 = 4LLU;
	uint32_t x395 = 33U;
	static int32_t x396 = INT32_MIN;
	static volatile uint64_t t80 = 30499691LLU;

	t80 = (((x393^x394)+x395)+x396);

	if (t80 != 18446744071562068005LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x397 = 17787667LLU;
	int64_t x398 = 108LL;
	uint32_t x399 = 1U;
	static uint8_t x400 = 13U;
	volatile uint64_t t81 = 142848824601051630LLU;

	t81 = (((x397^x398)+x399)+x400);

	if (t81 != 17787789LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x404 = INT8_MAX;
	volatile int32_t t82 = -116972635;

	t82 = (((x401^x402)+x403)+x404);

	if (t82 != 821683106) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x405 = INT16_MAX;
	uint16_t x407 = 7465U;
	int32_t x408 = INT32_MIN;
	int32_t t83 = 1916;

	t83 = (((x405^x406)+x407)+x408);

	if (t83 != -2147443419) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x409 = -1;
	static uint64_t x410 = 17384LLU;
	int16_t x411 = -1;

	t84 = (((x409^x410)+x411)+x412);

	if (t84 != 18446744073709534231LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x413 = INT8_MAX;
	uint64_t x414 = UINT64_MAX;
	int32_t x415 = INT32_MAX;

	t85 = (((x413^x414)+x415)+x416);

	if (t85 != 3374625940650906632LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x417 = 13U;
	uint8_t x419 = 48U;
	int64_t x420 = INT64_MIN;

	t86 = (((x417^x418)+x419)+x420);

	if (t86 != -9223372036854710238LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x422 = UINT8_MAX;
	int32_t x423 = INT32_MIN;
	static int16_t x424 = -1;
	volatile int64_t t87 = -3648219LL;

	t87 = (((x421^x422)+x423)+x424);

	if (t87 != -2147483905LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x426 = 16833291906835779LLU;
	uint16_t x427 = UINT16_MAX;
	int64_t x428 = -9938970860488LL;
	uint64_t t88 = 5279609271LLU;

	t88 = (((x425^x426)+x427)+x428);

	if (t88 != 9206528805977145075LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x429 = -1;
	int64_t x430 = -305933LL;
	uint8_t x431 = UINT8_MAX;
	volatile int64_t t89 = -3063277LL;

	t89 = (((x429^x430)+x431)+x432);

	if (t89 != 168010244LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x433 = 767U;
	uint32_t x434 = 1892316U;
	static int16_t x435 = INT16_MIN;
	volatile int64_t x436 = INT64_MIN;
	static volatile int64_t t90 = -154902852LL;

	t90 = (((x433^x434)+x435)+x436);

	if (t90 != -9223372036852916957LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x441 = 45298749U;
	int8_t x442 = -1;
	uint8_t x443 = 1U;
	static uint32_t t91 = 2U;

	t91 = (((x441^x442)+x443)+x444);

	if (t91 != 4249668546U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x445 = 96616251692488848LLU;
	int64_t x446 = INT64_MIN;
	int8_t x447 = 61;
	int32_t x448 = -1;
	volatile uint64_t t92 = 33547218544227LLU;

	t92 = (((x445^x446)+x447)+x448);

	if (t92 != 9319988288547264716LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x449 = 1;
	uint32_t x450 = UINT32_MAX;
	int8_t x451 = INT8_MIN;
	static int8_t x452 = -1;
	volatile uint32_t t93 = 17631U;

	t93 = (((x449^x450)+x451)+x452);

	if (t93 != 4294967165U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x453 = -1LL;
	volatile int32_t x454 = INT32_MAX;
	uint16_t x455 = 243U;
	uint16_t x456 = UINT16_MAX;
	static volatile int64_t t94 = -3543319432933990879LL;

	t94 = (((x453^x454)+x455)+x456);

	if (t94 != -2147417870LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x457 = INT16_MIN;
	int64_t x459 = -938534843594LL;
	int32_t x460 = INT32_MIN;
	volatile int64_t t95 = 539571043036604762LL;

	t95 = (((x457^x458)+x459)+x460);

	if (t95 != -940682360009LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x461 = 1918;
	uint32_t x463 = UINT32_MAX;
	uint32_t t96 = 92782044U;

	t96 = (((x461^x462)+x463)+x464);

	if (t96 != 4294965500U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x465 = -1;
	uint32_t x466 = UINT32_MAX;
	uint32_t t97 = 3512200U;

	t97 = (((x465^x466)+x467)+x468);

	if (t97 != 4294967294U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x470 = -923668;
	int32_t x471 = -13;
	volatile int32_t t98 = 1;

	t98 = (((x469^x470)+x471)+x472);

	if (t98 != 938250) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x473 = INT8_MAX;
	int16_t x474 = INT16_MAX;
	int32_t x475 = -885108699;
	static int32_t x476 = INT32_MAX;
	volatile int32_t t99 = -138;

	t99 = (((x473^x474)+x475)+x476);

	if (t99 != 1262407588) { NG(); } else { ; }
	
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

