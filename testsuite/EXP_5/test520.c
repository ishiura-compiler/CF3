#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = INT64_MIN;
int8_t x8 = INT8_MIN;
uint16_t x12 = 945U;
volatile uint64_t t2 = 325LLU;
volatile int64_t x29 = INT64_MAX;
volatile int64_t t7 = -171652037212717375LL;
static int32_t x33 = INT32_MIN;
volatile int8_t x36 = INT8_MAX;
volatile uint8_t x42 = 6U;
uint32_t t10 = 11U;
static volatile uint8_t x47 = 5U;
int64_t x49 = INT64_MIN;
int8_t x65 = 21;
uint8_t x67 = 1U;
volatile uint64_t x68 = UINT64_MAX;
int32_t x71 = INT32_MIN;
int64_t t16 = -1045565LL;
volatile int64_t t17 = 119944847072400LL;
int8_t x77 = -47;
volatile int64_t x79 = INT64_MIN;
volatile uint32_t x84 = UINT32_MAX;
int8_t x85 = INT8_MAX;
int16_t x86 = INT16_MAX;
volatile uint32_t t20 = 7059U;
int16_t x92 = INT16_MAX;
uint8_t x95 = 51U;
uint16_t x96 = UINT16_MAX;
static uint64_t t23 = 28922687164089542LLU;
int64_t x104 = -1LL;
int64_t t24 = -12360165378389795LL;
static volatile uint8_t x106 = 3U;
static int8_t x108 = -1;
volatile int32_t x112 = 1;
volatile uint32_t x115 = 8865U;
uint32_t x116 = 1U;
volatile int64_t t27 = -14502151LL;
static uint16_t x118 = UINT16_MAX;
int16_t x122 = 28;
int32_t x123 = INT32_MIN;
uint32_t x128 = UINT32_MAX;
volatile int16_t x133 = INT16_MIN;
int32_t x141 = INT32_MIN;
int64_t x142 = INT64_MIN;
int32_t x150 = INT32_MIN;
uint64_t x155 = 32971120LLU;
int32_t x159 = INT32_MIN;
int32_t x163 = INT32_MAX;
int8_t x167 = -1;
int32_t x169 = -3;
static int32_t x171 = -1;
uint16_t x174 = 288U;
int64_t x189 = -11080LL;
uint32_t x197 = UINT32_MAX;
uint32_t t48 = 3U;
int64_t x203 = INT64_MAX;
static int64_t x204 = 417LL;
int16_t x209 = -118;
static int32_t x213 = INT32_MIN;
volatile uint16_t x216 = 3987U;
int32_t x226 = 3607198;
uint64_t x228 = UINT64_MAX;
int8_t x234 = -1;
int64_t t57 = -3357865LL;
int32_t x242 = INT32_MIN;
int32_t x244 = -898;
static volatile int32_t t58 = -50182856;
int32_t x245 = INT32_MAX;
static int16_t x248 = INT16_MAX;
int16_t x250 = 15572;
int32_t x258 = INT32_MAX;
uint32_t x262 = UINT32_MAX;
static int64_t x264 = INT64_MIN;
uint32_t x267 = 1U;
uint32_t t64 = 13017U;
uint64_t t65 = 6848515417672455231LLU;
int64_t x273 = -1LL;
int32_t x276 = INT32_MIN;
int16_t x277 = 0;
int8_t x283 = 6;
uint8_t x284 = UINT8_MAX;
int16_t x288 = INT16_MIN;
int64_t x289 = -1LL;
volatile int16_t x291 = INT16_MIN;
static volatile int16_t x294 = -1;
int8_t x299 = INT8_MAX;
uint8_t x305 = 7U;
static volatile uint32_t x309 = 3040U;
uint32_t x313 = UINT32_MAX;
uint32_t x323 = 545U;
int64_t x329 = INT64_MAX;
volatile int8_t x332 = INT8_MAX;
volatile int32_t x335 = -1;
int32_t t81 = 7;
static volatile uint32_t x341 = 227122U;
static int8_t x343 = -1;
uint16_t x344 = UINT16_MAX;
static int8_t x346 = 17;
uint32_t x349 = 3252402U;
int8_t x351 = INT8_MIN;
static uint8_t x354 = UINT8_MAX;
static uint8_t x364 = UINT8_MAX;
volatile int8_t x365 = INT8_MIN;
uint32_t x370 = 3U;
uint64_t x371 = 35LLU;
int64_t x374 = 77355524LL;
int16_t x375 = INT16_MIN;
int64_t x387 = -1LL;
int8_t x388 = 45;
int8_t x400 = INT8_MIN;
volatile int8_t x404 = INT8_MAX;
int64_t x405 = -39689LL;
static int16_t x408 = -1;
volatile int64_t t98 = -329511LL;


void f0(void) {
	uint16_t x1 = 2U;
	static int32_t x2 = INT32_MIN;
	static volatile uint16_t x3 = 4U;
	static volatile uint32_t x4 = 0U;
	static volatile uint32_t t0 = 680U;

	t0 = (x1^((x2/x3)+x4));

	if (t0 != 3758096386U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x6 = 1;
	static uint32_t x7 = 207U;
	int64_t t1 = -3272586344314322188LL;

	t1 = (x5^((x6/x7)+x8));

	if (t1 != -9223372032559808640LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 2U;
	uint16_t x10 = 66U;
	uint64_t x11 = UINT64_MAX;

	t2 = (x9^((x10/x11)+x12));

	if (t2 != 947LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	static uint8_t x14 = 23U;
	int64_t x15 = INT64_MAX;
	uint16_t x16 = 184U;
	volatile int64_t t3 = -11415414328208494LL;

	t3 = (x13^((x14/x15)+x16));

	if (t3 != -32584LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 5792U;
	uint8_t x18 = UINT8_MAX;
	uint8_t x19 = UINT8_MAX;
	int16_t x20 = INT16_MIN;
	volatile uint32_t t4 = 188011038U;

	t4 = (x17^((x18/x19)+x20));

	if (t4 != 4294940321U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x21 = 26462U;
	static volatile int32_t x22 = -23075771;
	static volatile int8_t x23 = INT8_MIN;
	uint64_t x24 = 23771303177066LLU;
	static uint64_t t5 = 18287838238208LLU;

	t5 = (x21^((x22/x23)+x24));

	if (t5 != 23771303365887LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = UINT16_MAX;
	uint8_t x26 = 31U;
	uint16_t x27 = UINT16_MAX;
	static int64_t x28 = -65047292LL;
	volatile int64_t t6 = -248LL;

	t6 = (x25^((x26/x27)+x28));

	if (t6 != -65041669LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x30 = UINT16_MAX;
	uint16_t x31 = 3U;
	int32_t x32 = -1;

	t7 = (x29^((x30/x31)+x32));

	if (t7 != 9223372036854753963LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x34 = INT32_MIN;
	uint16_t x35 = UINT16_MAX;
	volatile int32_t t8 = 1;

	t8 = (x33^((x34/x35)+x36));

	if (t8 != 2147451007) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	uint32_t x38 = UINT32_MAX;
	volatile int8_t x39 = 25;
	int32_t x40 = INT32_MIN;
	static volatile uint32_t t9 = 4067U;

	t9 = (x37^((x38/x39)+x40));

	if (t9 != 2319282396U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = INT16_MAX;
	int32_t x43 = -1;
	static uint32_t x44 = 1132917U;

	t10 = (x41^((x42/x43)+x44));

	if (t10 != 1128080U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	static uint8_t x46 = 1U;
	uint8_t x48 = 15U;
	int32_t t11 = -11;

	t11 = (x45^((x46/x47)+x48));

	if (t11 != -32753) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = 417908331647260852LL;
	volatile int64_t x51 = INT64_MIN;
	int16_t x52 = -1;
	volatile int64_t t12 = INT64_MAX;

	t12 = (x49^((x50/x51)+x52));

	if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = INT32_MIN;
	static int32_t x54 = 0;
	int8_t x55 = INT8_MIN;
	int32_t x56 = -29420;
	int32_t t13 = -3;

	t13 = (x53^((x54/x55)+x56));

	if (t13 != 2147454228) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = 0;
	int8_t x62 = INT8_MIN;
	static int8_t x63 = -1;
	volatile uint32_t x64 = 1802852U;
	uint32_t t14 = 3U;

	t14 = (x61^((x62/x63)+x64));

	if (t14 != 1802980U) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x66 = INT32_MIN;
	uint64_t t15 = 5324328717LLU;

	t15 = (x65^((x66/x67)+x68));

	if (t15 != 18446744071562067946LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x69 = -1LL;
	int64_t x70 = 1LL;
	int32_t x72 = INT32_MAX;

	t16 = (x69^((x70/x71)+x72));

	if (t16 != -2147483648LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = -1031517866;
	uint32_t x74 = 1715U;
	uint8_t x75 = 5U;
	int64_t x76 = INT64_MIN;

	t17 = (x73^((x74/x75)+x76));

	if (t17 != 9223372035823257601LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x78 = INT32_MAX;
	static int8_t x80 = -1;
	volatile int64_t t18 = -532634427654LL;

	t18 = (x77^((x78/x79)+x80));

	if (t18 != 46LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x81 = -262665589683LL;
	static uint32_t x82 = UINT32_MAX;
	int8_t x83 = INT8_MIN;
	int64_t t19 = 673649LL;

	t19 = (x81^((x82/x83)+x84));

	if (t19 != -262665589683LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x87 = 1U;
	uint32_t x88 = 1307U;

	t20 = (x85^((x86/x87)+x88));

	if (t20 != 34149U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = INT32_MIN;
	volatile uint16_t x90 = UINT16_MAX;
	volatile int32_t x91 = 7528;
	static volatile int32_t t21 = 372380;

	t21 = (x89^((x90/x91)+x92));

	if (t21 != -2147450873) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x93 = 5U;
	uint16_t x94 = 4U;
	int32_t t22 = -5966;

	t22 = (x93^((x94/x95)+x96));

	if (t22 != 65530) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = -3987;
	int16_t x98 = -1;
	int32_t x99 = INT32_MIN;
	static uint64_t x100 = 6138027094777917LLU;

	t23 = (x97^((x98/x99)+x100));

	if (t23 != 18440606046614769744LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint32_t x101 = 602769U;
	int32_t x102 = INT32_MAX;
	int32_t x103 = INT32_MAX;

	t24 = (x101^((x102/x103)+x104));

	if (t24 != 602769LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x105 = INT8_MAX;
	volatile uint32_t x107 = 36032497U;
	volatile uint32_t t25 = 152725U;

	t25 = (x105^((x106/x107)+x108));

	if (t25 != 4294967168U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x109 = 159010LLU;
	int8_t x110 = -4;
	int8_t x111 = INT8_MIN;
	volatile uint64_t t26 = 219065483027417779LLU;

	t26 = (x109^((x110/x111)+x112));

	if (t26 != 159011LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = 927;
	int64_t x114 = INT64_MIN;

	t27 = (x113^((x114/x115)+x116));

	if (t27 != -1040425497671281LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = 23347736664135400LL;
	int8_t x119 = -1;
	int32_t x120 = INT32_MAX;
	volatile int64_t t28 = 104879801LL;

	t28 = (x117^((x118/x119)+x120));

	if (t28 != 23347738336024296LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x121 = -1;
	uint16_t x124 = 4U;
	int32_t t29 = 7524;

	t29 = (x121^((x122/x123)+x124));

	if (t29 != -5) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = 10U;
	volatile int8_t x126 = INT8_MAX;
	uint16_t x127 = UINT16_MAX;
	volatile uint32_t t30 = 395604783U;

	t30 = (x125^((x126/x127)+x128));

	if (t30 != 4294967285U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = INT8_MAX;
	int8_t x130 = -1;
	static uint16_t x131 = 12667U;
	volatile int32_t x132 = -857012333;
	volatile int32_t t31 = -1;

	t31 = (x129^((x130/x131)+x132));

	if (t31 != -857012244) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x134 = INT64_MIN;
	uint32_t x135 = 447803U;
	int32_t x136 = -1;
	volatile int64_t t32 = -3787632LL;

	t32 = (x133^((x134/x135)+x136));

	if (t32 != 20596941140224LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x137 = INT64_MAX;
	int8_t x138 = INT8_MAX;
	volatile int8_t x139 = 2;
	uint64_t x140 = UINT64_MAX;
	static volatile uint64_t t33 = 61543LLU;

	t33 = (x137^((x138/x139)+x140));

	if (t33 != 9223372036854775745LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x143 = 11289U;
	static volatile int16_t x144 = INT16_MIN;
	int64_t t34 = 11LL;

	t34 = (x141^((x142/x143)+x144));

	if (t34 != 817020984098326LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x145 = 8U;
	uint8_t x146 = UINT8_MAX;
	static volatile uint16_t x147 = 3U;
	uint32_t x148 = 119538456U;
	uint32_t t35 = 644649152U;

	t35 = (x145^((x146/x147)+x148));

	if (t35 != 119538533U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x149 = 15U;
	int32_t x151 = INT32_MIN;
	int16_t x152 = 6;
	int32_t t36 = -61644092;

	t36 = (x149^((x150/x151)+x152));

	if (t36 != 8) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x153 = UINT16_MAX;
	static uint64_t x154 = 761254807LLU;
	uint8_t x156 = UINT8_MAX;
	static volatile uint64_t t37 = 0LLU;

	t37 = (x153^((x154/x155)+x156));

	if (t37 != 65257LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = INT64_MAX;
	volatile int8_t x158 = -1;
	static volatile int64_t x160 = INT64_MIN;
	volatile int64_t t38 = 0LL;

	t38 = (x157^((x158/x159)+x160));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = 0;
	int8_t x162 = -1;
	uint16_t x164 = 5U;
	volatile int32_t t39 = 1570133;

	t39 = (x161^((x162/x163)+x164));

	if (t39 != 5) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x165 = UINT8_MAX;
	int64_t x166 = INT64_MAX;
	volatile int16_t x168 = 916;
	int64_t t40 = 933185606610409LL;

	t40 = (x165^((x166/x167)+x168));

	if (t40 != -9223372036854774934LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x170 = 88U;
	int32_t x172 = INT32_MIN;
	volatile uint32_t t41 = 245094U;

	t41 = (x169^((x170/x171)+x172));

	if (t41 != 2147483645U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x173 = 133809LLU;
	volatile uint32_t x175 = 5131U;
	static int64_t x176 = INT64_MIN;
	uint64_t t42 = 2213411074188396LLU;

	t42 = (x173^((x174/x175)+x176));

	if (t42 != 9223372036854909617LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x177 = INT16_MAX;
	volatile int32_t x178 = -1;
	static int16_t x179 = 4;
	volatile int16_t x180 = INT16_MAX;
	int32_t t43 = -224840;

	t43 = (x177^((x178/x179)+x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = INT64_MIN;
	volatile int8_t x182 = INT8_MIN;
	int8_t x183 = INT8_MAX;
	int8_t x184 = -1;
	int64_t t44 = -17004255400325LL;

	t44 = (x181^((x182/x183)+x184));

	if (t44 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x185 = -1;
	int64_t x186 = INT64_MIN;
	volatile int32_t x187 = INT32_MAX;
	int32_t x188 = 7449574;
	static volatile int64_t t45 = 3744347197339521LL;

	t45 = (x185^((x186/x187)+x188));

	if (t45 != 4287517723LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x190 = -1;
	uint32_t x191 = UINT32_MAX;
	volatile int8_t x192 = INT8_MIN;
	int64_t t46 = 60096462LL;

	t46 = (x189^((x190/x191)+x192));

	if (t46 != -4294956231LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x193 = 1765218U;
	uint64_t x194 = 76159559635066LLU;
	static volatile int32_t x195 = INT32_MAX;
	uint64_t x196 = 8LLU;
	static uint64_t t47 = 919157576462LLU;

	t47 = (x193^((x194/x195)+x196));

	if (t47 != 1730034LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x198 = INT32_MIN;
	int8_t x199 = 9;
	int8_t x200 = INT8_MIN;

	t48 = (x197^((x198/x199)+x200));

	if (t48 != 238609421U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = INT8_MAX;
	static int16_t x202 = 13787;
	int64_t t49 = 536548697071566LL;

	t49 = (x201^((x202/x203)+x204));

	if (t49 != 478LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x205 = INT64_MIN;
	uint64_t x206 = 25603LLU;
	static uint64_t x207 = 3776994LLU;
	int32_t x208 = -1;
	volatile uint64_t t50 = 406656LLU;

	t50 = (x205^((x206/x207)+x208));

	if (t50 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x210 = INT64_MAX;
	int32_t x211 = 1329051;
	uint32_t x212 = 109936U;
	int64_t t51 = -37520LL;

	t51 = (x209^((x210/x211)+x212));

	if (t51 != -6939818097958LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x214 = UINT32_MAX;
	uint8_t x215 = 3U;
	uint32_t t52 = 2003227U;

	t52 = (x213^((x214/x215)+x216));

	if (t52 != 3579143400U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x217 = 295439LLU;
	static int64_t x218 = INT64_MAX;
	int32_t x219 = 39667217;
	int16_t x220 = INT16_MIN;
	static uint64_t t53 = 140757855567LLU;

	t53 = (x217^((x218/x219)+x220));

	if (t53 != 232519019799LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x221 = INT32_MIN;
	uint8_t x222 = UINT8_MAX;
	volatile int64_t x223 = INT64_MIN;
	static uint64_t x224 = 125921101034LLU;
	volatile uint64_t t54 = 11520640360105LLU;

	t54 = (x221^((x222/x223)+x224));

	if (t54 != 18446743948375065834LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = -1LL;
	volatile uint8_t x227 = 7U;
	volatile uint64_t t55 = 14486487447355090LLU;

	t55 = (x225^((x226/x227)+x228));

	if (t55 != 18446744073709036302LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x233 = INT16_MIN;
	int32_t x235 = INT32_MIN;
	uint8_t x236 = UINT8_MAX;
	volatile int32_t t56 = -34110;

	t56 = (x233^((x234/x235)+x236));

	if (t56 != -32513) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x237 = 23612U;
	static int32_t x238 = -2854570;
	int16_t x239 = INT16_MIN;
	int64_t x240 = INT64_MIN;

	t57 = (x237^((x238/x239)+x240));

	if (t57 != -9223372036854752149LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x241 = UINT8_MAX;
	volatile uint8_t x243 = UINT8_MAX;

	t58 = (x241^((x242/x243)+x244));

	if (t58 != -8422655) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x246 = UINT64_MAX;
	int64_t x247 = -1LL;
	volatile uint64_t t59 = 11361221329LLU;

	t59 = (x245^((x246/x247)+x248));

	if (t59 != 2147450879LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x249 = 8791652603973LLU;
	int8_t x251 = INT8_MAX;
	int16_t x252 = 3;
	uint64_t t60 = 5134937781LLU;

	t60 = (x249^((x250/x251)+x252));

	if (t60 != 8791652603960LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x253 = -1LL;
	static uint16_t x254 = UINT16_MAX;
	uint8_t x255 = UINT8_MAX;
	int8_t x256 = -1;
	static volatile int64_t t61 = -126624126585LL;

	t61 = (x253^((x254/x255)+x256));

	if (t61 != -257LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x257 = 0;
	uint64_t x259 = 191LLU;
	volatile uint32_t x260 = 10U;
	volatile uint64_t t62 = 241310448400LLU;

	t62 = (x257^((x258/x259)+x260));

	if (t62 != 11243379LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x261 = UINT8_MAX;
	uint16_t x263 = 1225U;
	int64_t t63 = -490825LL;

	t63 = (x261^((x262/x263)+x264));

	if (t63 != -9223372036851269808LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x265 = -45;
	uint32_t x266 = 2263755U;
	uint8_t x268 = 1U;

	t64 = (x265^((x266/x267)+x268));

	if (t64 != 4292703519U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x269 = 98286382230190877LLU;
	static int32_t x270 = INT32_MIN;
	static volatile int64_t x271 = -4446938142882LL;
	uint32_t x272 = UINT32_MAX;

	t65 = (x269^((x270/x271)+x272));

	if (t65 != 98286381052806370LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x274 = INT16_MAX;
	uint64_t x275 = 769806569724LLU;
	uint64_t t66 = 1042902349796LLU;

	t66 = (x273^((x274/x275)+x276));

	if (t66 != 2147483647LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x278 = INT16_MIN;
	static int64_t x279 = INT64_MIN;
	int32_t x280 = 7399974;
	volatile int64_t t67 = 63402LL;

	t67 = (x277^((x278/x279)+x280));

	if (t67 != 7399974LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x281 = 60U;
	volatile int16_t x282 = -1;
	volatile uint32_t t68 = 1081665U;

	t68 = (x281^((x282/x283)+x284));

	if (t68 != 195U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x285 = 29;
	int16_t x286 = INT16_MAX;
	int16_t x287 = -2906;
	int32_t t69 = 54;

	t69 = (x285^((x286/x287)+x288));

	if (t69 != -32792) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x290 = INT32_MIN;
	uint16_t x292 = 1U;
	static int64_t t70 = 68082290966LL;

	t70 = (x289^((x290/x291)+x292));

	if (t70 != -65538LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x293 = UINT64_MAX;
	static int32_t x295 = INT32_MIN;
	int64_t x296 = 60693LL;
	uint64_t t71 = 81LLU;

	t71 = (x293^((x294/x295)+x296));

	if (t71 != 18446744073709490922LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x297 = INT16_MIN;
	int64_t x298 = 3335845699550557LL;
	int32_t x300 = INT32_MIN;
	int64_t t72 = -34258747LL;

	t72 = (x297^((x298/x299)+x300));

	if (t72 != -26264354069824LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = 0;
	volatile int64_t x302 = INT64_MAX;
	uint64_t x303 = 8065218726893LLU;
	int64_t x304 = -1LL;
	uint64_t t73 = 9819LLU;

	t73 = (x301^((x302/x303)+x304));

	if (t73 != 1143597LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x306 = 454;
	static uint32_t x307 = UINT32_MAX;
	uint64_t x308 = 251374599058341092LLU;
	volatile uint64_t t74 = 35749143922150LLU;

	t74 = (x305^((x306/x307)+x308));

	if (t74 != 251374599058341091LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x310 = INT64_MAX;
	int16_t x311 = -13491;
	volatile uint32_t x312 = UINT32_MAX;
	int64_t t75 = 5540519745LL;

	t75 = (x309^((x310/x311)+x312));

	if (t75 != -683664227519539LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x314 = 8;
	int16_t x315 = -1;
	static int64_t x316 = INT64_MAX;
	int64_t t76 = 59930LL;

	t76 = (x313^((x314/x315)+x316));

	if (t76 != 9223372032559808520LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x321 = INT32_MIN;
	int32_t x322 = INT32_MAX;
	int32_t x324 = -2555631;
	volatile uint32_t t77 = 258838140U;

	t77 = (x321^((x322/x323)+x324));

	if (t77 != 2148868353U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x325 = -1;
	uint32_t x326 = 11U;
	volatile int64_t x327 = INT64_MAX;
	uint32_t x328 = UINT32_MAX;
	volatile int64_t t78 = -668062501450031183LL;

	t78 = (x325^((x326/x327)+x328));

	if (t78 != -4294967296LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x330 = INT8_MIN;
	static int64_t x331 = INT64_MIN;
	volatile int64_t t79 = 318LL;

	t79 = (x329^((x330/x331)+x332));

	if (t79 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x333 = 35666061U;
	int64_t x334 = INT64_MAX;
	int8_t x336 = -1;
	volatile int64_t t80 = -32296596505LL;

	t80 = (x333^((x334/x335)+x336));

	if (t80 != -9223372036819109747LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x337 = -1;
	int8_t x338 = INT8_MAX;
	int8_t x339 = 8;
	uint16_t x340 = UINT16_MAX;

	t81 = (x337^((x338/x339)+x340));

	if (t81 != -65551) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x342 = 120520074U;
	uint32_t t82 = 1U;

	t82 = (x341^((x342/x343)+x344));

	if (t82 != 231629U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x345 = -1LL;
	uint16_t x347 = UINT16_MAX;
	int64_t x348 = -350579LL;
	volatile int64_t t83 = -27LL;

	t83 = (x345^((x346/x347)+x348));

	if (t83 != 350578LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x350 = -1;
	int16_t x352 = INT16_MAX;
	static volatile uint32_t t84 = 15992012U;

	t84 = (x349^((x350/x351)+x352));

	if (t84 != 3268429U) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x353 = INT8_MIN;
	int8_t x355 = -1;
	int64_t x356 = -1LL;
	int64_t t85 = -19LL;

	t85 = (x353^((x354/x355)+x356));

	if (t85 != 128LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x357 = INT32_MAX;
	int8_t x358 = INT8_MIN;
	int64_t x359 = INT64_MIN;
	static volatile int16_t x360 = INT16_MIN;
	volatile int64_t t86 = -170621824280839909LL;

	t86 = (x357^((x358/x359)+x360));

	if (t86 != -2147450881LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x361 = 24644941470021683LL;
	volatile int8_t x362 = -2;
	volatile int32_t x363 = 9;
	static int64_t t87 = -707104613LL;

	t87 = (x361^((x362/x363)+x364));

	if (t87 != 24644941470021836LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x366 = INT32_MIN;
	uint8_t x367 = 60U;
	uint16_t x368 = 6082U;
	int32_t t88 = -174991193;

	t88 = (x365^((x366/x367)+x368));

	if (t88 != 35785248) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x369 = INT64_MAX;
	int64_t x372 = 8547325959LL;
	volatile uint64_t t89 = 4955920871LLU;

	t89 = (x369^((x370/x371)+x372));

	if (t89 != 9223372028307449848LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x373 = UINT16_MAX;
	int8_t x376 = INT8_MAX;
	volatile int64_t t90 = -618417LL;

	t90 = (x373^((x374/x375)+x376));

	if (t90 != -63304LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x377 = -1;
	int16_t x378 = 0;
	int64_t x379 = -14466665763LL;
	int16_t x380 = INT16_MAX;
	volatile int64_t t91 = 50LL;

	t91 = (x377^((x378/x379)+x380));

	if (t91 != -32768LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x381 = 96225U;
	static int64_t x382 = 3485301LL;
	volatile uint8_t x383 = 15U;
	static int8_t x384 = INT8_MAX;
	static volatile int64_t t92 = -3205154LL;

	t92 = (x381^((x382/x383)+x384));

	if (t92 != 195521LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x385 = -155842;
	volatile int8_t x386 = -1;
	int64_t t93 = 28815731011650LL;

	t93 = (x385^((x386/x387)+x388));

	if (t93 != -155888LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x389 = 0;
	volatile int16_t x390 = -1;
	int8_t x391 = -3;
	int64_t x392 = -1LL;
	int64_t t94 = 9330LL;

	t94 = (x389^((x390/x391)+x392));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x393 = 59U;
	int32_t x394 = -1;
	int64_t x395 = 1987513388866205241LL;
	static int8_t x396 = INT8_MAX;
	volatile int64_t t95 = 16098168416269LL;

	t95 = (x393^((x394/x395)+x396));

	if (t95 != 68LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x397 = 1U;
	static volatile int32_t x398 = INT32_MAX;
	int16_t x399 = INT16_MAX;
	static volatile int32_t t96 = -44721;

	t96 = (x397^((x398/x399)+x400));

	if (t96 != 65411) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x401 = 1;
	int64_t x402 = -1LL;
	int64_t x403 = INT64_MIN;
	volatile int64_t t97 = -3132515983667797544LL;

	t97 = (x401^((x402/x403)+x404));

	if (t97 != 126LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x406 = -1;
	int32_t x407 = INT32_MIN;

	t98 = (x405^((x406/x407)+x408));

	if (t98 != 39688LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x413 = INT16_MIN;
	int16_t x414 = INT16_MIN;
	volatile int16_t x415 = INT16_MIN;
	int8_t x416 = -35;
	volatile int32_t t99 = 1;

	t99 = (x413^((x414/x415)+x416));

	if (t99 != 32734) { NG(); } else { ; }
	
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

