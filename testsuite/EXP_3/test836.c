#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x8 = INT64_MAX;
static int64_t x10 = 15576339272200LL;
uint32_t x14 = UINT32_MAX;
int32_t x19 = INT32_MIN;
volatile int64_t x20 = -80LL;
int64_t x31 = 11523425008176LL;
volatile int64_t t6 = -381976854293LL;
static int16_t x37 = -1;
volatile uint32_t x39 = 47532U;
static uint32_t t9 = 329235807U;
uint8_t x68 = 3U;
volatile int64_t x69 = -7LL;
volatile int64_t x70 = INT64_MIN;
volatile int8_t x72 = INT8_MIN;
volatile int64_t x77 = -37215455796514595LL;
static int64_t x78 = -1LL;
static volatile int32_t x80 = INT32_MIN;
volatile int64_t t18 = 139599250501099LL;
int16_t x87 = -1;
volatile int16_t x89 = -112;
static int32_t x102 = -1;
uint32_t x103 = UINT32_MAX;
volatile uint32_t t22 = 1136050085U;
uint64_t x109 = 160LLU;
int32_t x110 = -1;
int64_t x111 = INT64_MAX;
uint64_t t25 = 34772192672141LLU;
int64_t x140 = 50267300994LL;
volatile uint64_t x148 = 13871167345906LLU;
int16_t x154 = -202;
int64_t x155 = 104LL;
int32_t x160 = 22566635;
static volatile int8_t x161 = -1;
volatile int64_t x164 = INT64_MIN;
volatile int32_t x170 = -157;
uint8_t x174 = UINT8_MAX;
volatile int8_t x175 = -3;
int16_t x181 = INT16_MIN;
uint16_t x189 = UINT16_MAX;
static int64_t x200 = 3080LL;
int32_t x208 = -628;
int32_t x210 = 2523;
int64_t x211 = INT64_MIN;
uint64_t x215 = UINT64_MAX;
int8_t x222 = -1;
int32_t x224 = INT32_MAX;
int32_t t48 = -3157705;
volatile int8_t x245 = INT8_MIN;
int8_t x247 = -1;
int32_t t52 = -1;
int64_t x254 = 40652LL;
uint64_t t54 = 50069280977LLU;
int8_t x267 = 6;
uint32_t x285 = UINT32_MAX;
int32_t x299 = -1;
int64_t x307 = -3108575638420334LL;
uint8_t x323 = 11U;
static int64_t x329 = INT64_MAX;
static volatile int64_t t64 = -1LL;
static volatile int8_t x339 = 38;
int64_t x340 = 201724597005969LL;
int32_t x350 = -1;
int8_t x356 = -20;
volatile uint64_t t68 = 84LLU;
uint16_t x371 = 152U;
static volatile int32_t t71 = -5118;
static uint32_t x387 = 110959320U;
static int8_t x390 = INT8_MIN;
int64_t t74 = 2638577685LL;
static volatile int32_t t75 = 1124609;
static int8_t x397 = INT8_MIN;
int64_t x398 = INT64_MIN;
uint8_t x400 = 98U;
uint64_t x407 = UINT64_MAX;
static uint32_t x411 = 2U;
int16_t x420 = INT16_MIN;
static int32_t x422 = INT32_MIN;
static int64_t t80 = 421569LL;
int64_t x425 = -1LL;
int64_t t81 = 549596774306342LL;
static volatile int64_t x464 = 69LL;
volatile int32_t x487 = INT32_MAX;
int16_t x503 = -1;
int32_t x511 = -14897992;
volatile int16_t x513 = INT16_MIN;
uint64_t t96 = 34461540701910695LLU;
int16_t x518 = 3701;
static int32_t x528 = INT32_MAX;
int32_t t98 = -44462;
volatile int32_t x531 = -1;


void f0(void) {
	int64_t x1 = INT64_MAX;
	static int64_t x2 = -1LL;
	volatile uint64_t x3 = 12973391549234LLU;
	int32_t x4 = -286;
	volatile uint64_t t0 = 267542869391065489LLU;

	t0 = ((x1^x2)/(x3%x4));

	if (t0 != 710945LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int16_t x6 = -1;
	volatile int16_t x7 = -1;
	volatile int64_t t1 = -331LL;

	t1 = ((x5^x6)/(x7%x8));

	if (t1 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	volatile int16_t x11 = -3676;
	int8_t x12 = INT8_MIN;
	int64_t t2 = -10566610422560LL;

	t2 = ((x9^x10)/(x11%x12));

	if (t2 != 100253874570820691LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 53360692LL;
	uint64_t x15 = UINT64_MAX;
	int16_t x16 = INT16_MIN;
	static volatile uint64_t t3 = 77998LLU;

	t3 = ((x13^x14)/(x15%x16));

	if (t3 != 129447LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 466U;
	static int32_t x18 = -1;
	volatile int64_t t4 = -3LL;

	t4 = ((x17^x18)/(x19%x20));

	if (t4 != -89478475LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	uint64_t x22 = UINT64_MAX;
	int8_t x23 = INT8_MIN;
	int8_t x24 = 20;
	uint64_t t5 = 265605016946899959LLU;

	t5 = ((x21^x22)/(x23%x24));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x29 = INT32_MIN;
	int32_t x30 = 3223775;
	static int8_t x32 = -14;

	t6 = ((x29^x30)/(x31%x32));

	if (t6 != -536064968LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MIN;
	volatile int32_t x34 = INT32_MIN;
	int64_t x35 = 1LL;
	uint8_t x36 = 19U;
	int64_t t7 = -9383996LL;

	t7 = ((x33^x34)/(x35%x36));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x38 = -1;
	int16_t x40 = INT16_MIN;
	uint32_t t8 = 630U;

	t8 = ((x37^x38)/(x39%x40));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = 974073U;
	int16_t x42 = INT16_MIN;
	static int32_t x43 = -1;
	int16_t x44 = INT16_MIN;

	t9 = ((x41^x42)/(x43%x44));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x45 = UINT16_MAX;
	volatile uint8_t x46 = UINT8_MAX;
	uint8_t x47 = 30U;
	static uint32_t x48 = 48823713U;
	uint32_t t10 = 437U;

	t10 = ((x45^x46)/(x47%x48));

	if (t10 != 2176U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = -1;
	uint16_t x50 = UINT16_MAX;
	uint32_t x51 = 1994976167U;
	int16_t x52 = -1;
	volatile uint32_t t11 = 27395996U;

	t11 = ((x49^x50)/(x51%x52));

	if (t11 != 2U) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint64_t x53 = 2022LLU;
	int8_t x54 = INT8_MIN;
	uint32_t x55 = UINT32_MAX;
	static int32_t x56 = 61652665;
	volatile uint64_t t12 = 3404155645381LLU;

	t12 = ((x53^x54)/(x55%x56));

	if (t12 != 450652512793LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint64_t x57 = UINT64_MAX;
	int64_t x58 = -32425486503342316LL;
	static int16_t x59 = INT16_MAX;
	int64_t x60 = INT64_MIN;
	uint64_t t13 = 8536716773841442LLU;

	t13 = ((x57^x58)/(x59%x60));

	if (t13 != 989577517116LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = 13;
	int64_t x62 = -237270LL;
	static int32_t x63 = INT32_MAX;
	volatile uint16_t x64 = 11U;
	int64_t t14 = -2522553002222146LL;

	t14 = ((x61^x62)/(x63%x64));

	if (t14 != -237273LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x65 = 0U;
	int16_t x66 = -1;
	int16_t x67 = INT16_MIN;
	volatile int32_t t15 = 0;

	t15 = ((x65^x66)/(x67%x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint32_t x71 = 392979348U;
	static int64_t t16 = 1LL;

	t16 = ((x69^x70)/(x71%x72));

	if (t16 != 23470373402LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x73 = -1994;
	int8_t x74 = -1;
	static uint64_t x75 = UINT64_MAX;
	volatile int64_t x76 = INT64_MAX;
	uint64_t t17 = 801093450641770088LLU;

	t17 = ((x73^x74)/(x75%x76));

	if (t17 != 1993LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x79 = 3U;

	t18 = ((x77^x78)/(x79%x80));

	if (t18 != 12405151932171531LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x85 = -1LL;
	static int16_t x86 = INT16_MAX;
	int16_t x88 = INT16_MAX;
	volatile int64_t t19 = -1714LL;

	t19 = ((x85^x86)/(x87%x88));

	if (t19 != 32768LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x90 = INT16_MIN;
	int64_t x91 = 22632LL;
	uint64_t x92 = 21LLU;
	static volatile uint64_t t20 = 20135724402533114LLU;

	t20 = ((x89^x90)/(x91%x92));

	if (t20 != 2177LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x97 = -1;
	int16_t x98 = -1;
	int64_t x99 = 201LL;
	uint32_t x100 = 18716U;
	int64_t t21 = -1LL;

	t21 = ((x97^x98)/(x99%x100));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x101 = 7U;
	int32_t x104 = INT32_MIN;

	t22 = ((x101^x102)/(x103%x104));

	if (t22 != 1U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x112 = INT16_MAX;
	volatile uint64_t t23 = 194741349LLU;

	t23 = ((x109^x110)/(x111%x112));

	if (t23 != 2635249153387078779LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x117 = INT16_MIN;
	static uint8_t x118 = UINT8_MAX;
	volatile uint32_t x119 = 28868474U;
	int16_t x120 = -179;
	volatile uint32_t t24 = 760303411U;

	t24 = ((x117^x118)/(x119%x120));

	if (t24 != 148U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x121 = INT16_MIN;
	int16_t x122 = -9;
	int16_t x123 = INT16_MIN;
	uint64_t x124 = UINT64_MAX;

	t25 = ((x121^x122)/(x123%x124));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x125 = 0;
	static int16_t x126 = INT16_MIN;
	static int8_t x127 = 61;
	volatile uint8_t x128 = 3U;
	volatile int32_t t26 = 58;

	t26 = ((x125^x126)/(x127%x128));

	if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x133 = INT32_MIN;
	uint8_t x134 = 108U;
	int8_t x135 = INT8_MIN;
	volatile int32_t x136 = INT32_MIN;
	int32_t t27 = -107238056;

	t27 = ((x133^x134)/(x135%x136));

	if (t27 != 16777215) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x137 = 2U;
	int8_t x138 = -5;
	int8_t x139 = -1;
	volatile int64_t t28 = -1086073886725305LL;

	t28 = ((x137^x138)/(x139%x140));

	if (t28 != 7LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x141 = INT16_MAX;
	int32_t x142 = -1;
	uint64_t x143 = 768069884825060024LLU;
	int32_t x144 = INT32_MIN;
	volatile uint64_t t29 = 2251LLU;

	t29 = ((x141^x142)/(x143%x144));

	if (t29 != 24LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x145 = 1LL;
	static volatile int8_t x146 = -6;
	int32_t x147 = INT32_MIN;
	volatile uint64_t t30 = 11244286673643634LLU;

	t30 = ((x145^x146)/(x147%x148));

	if (t30 != 3223489LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x149 = 380;
	int64_t x150 = INT64_MIN;
	uint64_t x151 = 157625LLU;
	static volatile int32_t x152 = INT32_MAX;
	static uint64_t t31 = 5376319645510982LLU;

	t31 = ((x149^x150)/(x151%x152));

	if (t31 != 58514652097413LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x153 = 244LL;
	volatile int64_t x156 = INT64_MIN;
	static int64_t t32 = -1280752985304542754LL;

	t32 = ((x153^x154)/(x155%x156));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x157 = INT64_MIN;
	int64_t x158 = INT64_MAX;
	volatile uint8_t x159 = 2U;
	volatile int64_t t33 = -29780205LL;

	t33 = ((x157^x158)/(x159%x160));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x162 = -1;
	int64_t x163 = -4211742LL;
	volatile int64_t t34 = 12674559LL;

	t34 = ((x161^x162)/(x163%x164));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x165 = INT32_MIN;
	uint32_t x166 = UINT32_MAX;
	static int16_t x167 = INT16_MIN;
	uint32_t x168 = UINT32_MAX;
	uint32_t t35 = 4414U;

	t35 = ((x165^x166)/(x167%x168));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x169 = INT16_MAX;
	int16_t x171 = INT16_MAX;
	uint32_t x172 = UINT32_MAX;
	volatile uint32_t t36 = 2922U;

	t36 = ((x169^x170)/(x171%x172));

	if (t36 != 131075U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x173 = INT8_MIN;
	static int64_t x176 = -4LL;
	int64_t t37 = 46117LL;

	t37 = ((x173^x174)/(x175%x176));

	if (t37 != 43LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x177 = INT64_MIN;
	uint64_t x178 = UINT64_MAX;
	uint16_t x179 = 6841U;
	int32_t x180 = INT32_MIN;
	uint64_t t38 = 7060920423LLU;

	t38 = ((x177^x178)/(x179%x180));

	if (t38 != 1348249091778216LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x182 = 174649896807LL;
	static int64_t x183 = INT64_MIN;
	uint8_t x184 = UINT8_MAX;
	static volatile int64_t t39 = -80545352434LL;

	t39 = ((x181^x182)/(x183%x184));

	if (t39 != 1364452129LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x185 = UINT32_MAX;
	uint16_t x186 = 2U;
	int32_t x187 = -1;
	static int32_t x188 = 785;
	uint32_t t40 = 60343U;

	t40 = ((x185^x186)/(x187%x188));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x190 = 5U;
	int8_t x191 = -8;
	volatile int32_t x192 = INT32_MIN;
	uint32_t t41 = 7189160U;

	t41 = ((x189^x190)/(x191%x192));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x193 = 19U;
	int64_t x194 = INT64_MAX;
	int64_t x195 = 9135LL;
	volatile int32_t x196 = 2;
	int64_t t42 = -25327152LL;

	t42 = ((x193^x194)/(x195%x196));

	if (t42 != 9223372036854775788LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x197 = UINT8_MAX;
	int8_t x198 = INT8_MIN;
	int64_t x199 = INT64_MIN;
	static volatile int64_t t43 = 1LL;

	t43 = ((x197^x198)/(x199%x200));

	if (t43 != 16LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x201 = 4911002084429528658LLU;
	int16_t x202 = INT16_MAX;
	static int32_t x203 = INT32_MIN;
	static uint16_t x204 = 7U;
	volatile uint64_t t44 = 50740LLU;

	t44 = ((x201^x202)/(x203%x204));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x205 = 364645LLU;
	int8_t x206 = -1;
	uint16_t x207 = 1U;
	static uint64_t t45 = 621LLU;

	t45 = ((x205^x206)/(x207%x208));

	if (t45 != 18446744073709186970LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x209 = -1LL;
	static int32_t x212 = 6092;
	static volatile int64_t t46 = -456696LL;

	t46 = ((x209^x210)/(x211%x212));

	if (t46 != 3LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x213 = 2U;
	int8_t x214 = -1;
	int16_t x216 = INT16_MAX;
	volatile uint64_t t47 = 2296031LLU;

	t47 = ((x213^x214)/(x215%x216));

	if (t47 != 1229782938247303440LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x221 = 22445U;
	static int8_t x223 = -1;

	t48 = ((x221^x222)/(x223%x224));

	if (t48 != 22446) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x225 = INT64_MIN;
	int64_t x226 = -1LL;
	static int64_t x227 = -8910LL;
	volatile uint64_t x228 = 13185LLU;
	volatile uint64_t t49 = 42252369LLU;

	t49 = ((x225^x226)/(x227%x228));

	if (t49 != 3512327508322458LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x233 = INT32_MAX;
	int32_t x234 = -6060647;
	int32_t x235 = 41150;
	int32_t x236 = INT32_MAX;
	volatile int32_t t50 = -882;

	t50 = ((x233^x234)/(x235%x236));

	if (t50 != -52039) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x237 = INT8_MIN;
	static int32_t x238 = INT32_MAX;
	static int32_t x239 = INT32_MIN;
	int16_t x240 = 307;
	int32_t t51 = -857;

	t51 = ((x237^x238)/(x239%x240));

	if (t51 != 9418787) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x246 = INT16_MIN;
	volatile int8_t x248 = INT8_MIN;

	t52 = ((x245^x246)/(x247%x248));

	if (t52 != -32640) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x249 = UINT64_MAX;
	static uint8_t x250 = UINT8_MAX;
	int16_t x251 = 7;
	int64_t x252 = INT64_MIN;
	volatile uint64_t t53 = 10724813LLU;

	t53 = ((x249^x250)/(x251%x252));

	if (t53 != 2635249153387078765LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x253 = UINT64_MAX;
	int16_t x255 = INT16_MAX;
	int32_t x256 = 128723;

	t54 = ((x253^x254)/(x255%x256));

	if (t54 != 562967133814798LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x265 = 0LLU;
	int8_t x266 = -1;
	uint32_t x268 = 97U;
	volatile uint64_t t55 = 1859131185737570481LLU;

	t55 = ((x265^x266)/(x267%x268));

	if (t55 != 3074457345618258602LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x269 = -7006;
	static uint8_t x270 = 0U;
	uint64_t x271 = 107LLU;
	int64_t x272 = -25921215LL;
	static uint64_t t56 = 2199LLU;

	t56 = ((x269^x270)/(x271%x272));

	if (t56 != 172399477324388267LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x273 = UINT64_MAX;
	volatile int16_t x274 = -5;
	static uint64_t x275 = 57416516044480423LLU;
	int8_t x276 = INT8_MIN;
	static volatile uint64_t t57 = 81869LLU;

	t57 = ((x273^x274)/(x275%x276));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x286 = 2748U;
	uint32_t x287 = UINT32_MAX;
	int8_t x288 = 4;
	volatile uint32_t t58 = 27486U;

	t58 = ((x285^x286)/(x287%x288));

	if (t58 != 1431654849U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x297 = 3U;
	static int64_t x298 = 137053668584939429LL;
	static int8_t x300 = INT8_MAX;
	int64_t t59 = -6621826LL;

	t59 = ((x297^x298)/(x299%x300));

	if (t59 != -137053668584939430LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x305 = -33630;
	int64_t x306 = 1079105853737991690LL;
	uint32_t x308 = 652856U;
	static volatile int64_t t60 = 47011558093LL;

	t60 = ((x305^x306)/(x307%x308));

	if (t60 != 2900463527999LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x309 = INT16_MIN;
	uint16_t x310 = 799U;
	uint32_t x311 = 2263028U;
	uint16_t x312 = 10399U;
	static uint32_t t61 = 62881000U;

	t61 = ((x309^x310)/(x311%x312));

	if (t61 != 666398U) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x317 = INT16_MIN;
	uint64_t x318 = 467LLU;
	uint8_t x319 = UINT8_MAX;
	volatile uint32_t x320 = 724595516U;
	static volatile uint64_t t62 = 60680LLU;

	t62 = ((x317^x318)/(x319%x320));

	if (t62 != 72340172838076546LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x321 = 1;
	static volatile int32_t x322 = -1;
	volatile int16_t x324 = INT16_MAX;
	int32_t t63 = -1162;

	t63 = ((x321^x322)/(x323%x324));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x330 = INT16_MIN;
	static volatile int16_t x331 = -1;
	uint8_t x332 = 24U;

	t64 = ((x329^x330)/(x331%x332));

	if (t64 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x337 = 21348275LL;
	uint64_t x338 = 42387267070720LLU;
	static uint64_t t65 = 956845137646584194LLU;

	t65 = ((x337^x338)/(x339%x340));

	if (t65 != 1115453836804LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x345 = INT8_MAX;
	volatile uint32_t x346 = 4306U;
	int64_t x347 = 1334184298780240610LL;
	int32_t x348 = INT32_MAX;
	volatile int64_t t66 = 59278318827LL;

	t66 = ((x345^x346)/(x347%x348));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x349 = INT16_MAX;
	uint16_t x351 = 58U;
	uint16_t x352 = UINT16_MAX;
	static volatile int32_t t67 = 44128;

	t67 = ((x349^x350)/(x351%x352));

	if (t67 != -564) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x353 = UINT64_MAX;
	uint16_t x354 = UINT16_MAX;
	uint16_t x355 = UINT16_MAX;

	t68 = ((x353^x354)/(x355%x356));

	if (t68 != 1229782938247299072LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x357 = -8157;
	int16_t x358 = INT16_MIN;
	uint64_t x359 = 1526155965151LLU;
	static volatile uint64_t x360 = 10507346LLU;
	volatile uint64_t t69 = 7574LLU;

	t69 = ((x357^x358)/(x359%x360));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x361 = INT8_MIN;
	int8_t x362 = -1;
	int16_t x363 = INT16_MAX;
	int16_t x364 = INT16_MIN;
	volatile int32_t t70 = -5765;

	t70 = ((x361^x362)/(x363%x364));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x369 = 0U;
	int32_t x370 = 1044;
	uint8_t x372 = 72U;

	t71 = ((x369^x370)/(x371%x372));

	if (t71 != 130) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x381 = INT64_MIN;
	int16_t x382 = -1;
	static uint64_t x383 = UINT64_MAX;
	uint64_t x384 = 11436481367LLU;
	uint64_t t72 = 3LLU;

	t72 = ((x381^x382)/(x383%x384));

	if (t72 != 1164323745LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x385 = INT64_MIN;
	volatile int16_t x386 = INT16_MIN;
	volatile uint16_t x388 = UINT16_MAX;
	static volatile int64_t t73 = -31508262085643962LL;

	t73 = ((x385^x386)/(x387%x388));

	if (t73 != 1076867721757704LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x389 = 501899789;
	volatile int64_t x391 = -6728839348593LL;
	int32_t x392 = INT32_MAX;

	t74 = ((x389^x390)/(x391%x392));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x393 = 10548;
	static uint16_t x394 = 4U;
	int16_t x395 = 602;
	uint16_t x396 = 6803U;

	t75 = ((x393^x394)/(x395%x396));

	if (t75 != 17) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x399 = 4U;
	volatile int64_t t76 = -3746168669LL;

	t76 = ((x397^x398)/(x399%x400));

	if (t76 != 2305843009213693920LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x405 = 40;
	uint16_t x406 = 4922U;
	int8_t x408 = INT8_MIN;
	volatile uint64_t t77 = 337404LLU;

	t77 = ((x405^x406)/(x407%x408));

	if (t77 != 38LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x409 = 15466U;
	static uint64_t x410 = UINT64_MAX;
	volatile uint8_t x412 = UINT8_MAX;
	volatile uint64_t t78 = 1029278LLU;

	t78 = ((x409^x410)/(x411%x412));

	if (t78 != 9223372036854768074LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint64_t x417 = UINT64_MAX;
	int16_t x418 = -1;
	int16_t x419 = 501;
	static uint64_t t79 = 47028725728938042LLU;

	t79 = ((x417^x418)/(x419%x420));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x421 = 19;
	static int32_t x423 = -1;
	int64_t x424 = -200479788770592241LL;

	t80 = ((x421^x422)/(x423%x424));

	if (t80 != 2147483629LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x426 = INT16_MIN;
	volatile int8_t x427 = 4;
	int16_t x428 = 164;

	t81 = ((x425^x426)/(x427%x428));

	if (t81 != 8191LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x429 = 8760LLU;
	int32_t x430 = INT32_MIN;
	uint8_t x431 = UINT8_MAX;
	int16_t x432 = INT16_MAX;
	volatile uint64_t t82 = 57312675LLU;

	t82 = ((x429^x430)/(x431%x432));

	if (t82 != 72340172829655202LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x433 = INT64_MIN;
	static int64_t x434 = -1LL;
	static int64_t x435 = -1LL;
	uint32_t x436 = UINT32_MAX;
	volatile int64_t t83 = 287LL;

	t83 = ((x433^x434)/(x435%x436));

	if (t83 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x437 = INT32_MIN;
	int16_t x438 = INT16_MIN;
	int8_t x439 = INT8_MIN;
	int64_t x440 = INT64_MIN;
	static volatile int64_t t84 = -211295299049377LL;

	t84 = ((x437^x438)/(x439%x440));

	if (t84 != -16776960LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x445 = 536;
	uint16_t x446 = UINT16_MAX;
	uint64_t x447 = UINT64_MAX;
	int32_t x448 = 163;
	uint64_t t85 = 132667LLU;

	t85 = ((x445^x446)/(x447%x448));

	if (t85 != 1160LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x457 = INT64_MIN;
	uint64_t x458 = 67LLU;
	int64_t x459 = INT64_MIN;
	uint8_t x460 = 5U;
	static uint64_t t86 = 51LLU;

	t86 = ((x457^x458)/(x459%x460));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x461 = 1U;
	uint16_t x462 = 12U;
	static int8_t x463 = INT8_MAX;
	volatile int64_t t87 = 76758596072LL;

	t87 = ((x461^x462)/(x463%x464));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x465 = INT64_MAX;
	volatile int8_t x466 = INT8_MIN;
	uint64_t x467 = 285304428170496LLU;
	volatile uint8_t x468 = 52U;
	static uint64_t t88 = 9292LLU;

	t88 = ((x465^x466)/(x467%x468));

	if (t88 != 461168601842738796LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x469 = 73U;
	uint8_t x470 = 3U;
	static uint64_t x471 = 147082687LLU;
	volatile uint16_t x472 = 10450U;
	static uint64_t t89 = 15710553698LLU;

	t89 = ((x469^x470)/(x471%x472));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x473 = UINT8_MAX;
	int64_t x474 = -1LL;
	volatile uint16_t x475 = UINT16_MAX;
	static volatile uint32_t x476 = 523U;
	volatile int64_t t90 = -10456LL;

	t90 = ((x473^x474)/(x475%x476));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x481 = UINT8_MAX;
	int16_t x482 = INT16_MIN;
	int32_t x483 = INT32_MIN;
	volatile uint64_t x484 = UINT64_MAX;
	uint64_t t91 = 24528316947080LLU;

	t91 = ((x481^x482)/(x483%x484));

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x485 = 5466995U;
	int8_t x486 = -1;
	uint8_t x488 = 3U;
	volatile uint32_t t92 = 33271286U;

	t92 = ((x485^x486)/(x487%x488));

	if (t92 != 4289500300U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x501 = -1;
	volatile uint8_t x502 = 56U;
	volatile uint16_t x504 = 23U;
	int32_t t93 = -470567;

	t93 = ((x501^x502)/(x503%x504));

	if (t93 != 57) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x505 = INT8_MAX;
	int16_t x506 = -3434;
	int16_t x507 = -2040;
	int32_t x508 = INT32_MIN;
	int32_t t94 = -96861026;

	t94 = ((x505^x506)/(x507%x508));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x509 = 103U;
	int16_t x510 = INT16_MIN;
	uint16_t x512 = 31U;
	int32_t t95 = 4483;

	t95 = ((x509^x510)/(x511%x512));

	if (t95 != 2722) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x514 = INT64_MIN;
	uint64_t x515 = 484LLU;
	int8_t x516 = -4;

	t96 = ((x513^x514)/(x515%x516));

	if (t96 != 19056553795154427LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x517 = INT64_MAX;
	volatile int64_t x519 = -3907271LL;
	static volatile uint64_t x520 = UINT64_MAX;
	volatile uint64_t t97 = 7935796663955993953LLU;

	t97 = ((x517^x518)/(x519%x520));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x525 = INT8_MIN;
	int32_t x526 = INT32_MAX;
	volatile int32_t x527 = INT32_MIN;

	t98 = ((x525^x526)/(x527%x528));

	if (t98 != 2147483521) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x529 = UINT64_MAX;
	uint32_t x530 = 180813147U;
	int64_t x532 = INT64_MAX;
	uint64_t t99 = 5619439020LLU;

	t99 = ((x529^x530)/(x531%x532));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

